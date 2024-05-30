// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CoreGameModeBase.h"
#include "Widgets/CoreResultsMenu.h"
//#include "Utility/CoreGameInstance.h"
#include "BrainComponent.h"
#include "AIController.h"
#include "Actors/BasePlayer.h"
#include "Actors/CorePlayerController.h"
#include "EngineUtils.h"
#include "../../A__SmothersSephen.h"

void ACoreGameModeBase::BeginPlay()
{
	for (TActorIterator<ABaseCharacter> itr(GetWorld()); itr; ++itr)
	{
		Player = Cast<ABasePlayer>(*itr);
		if (Player)
		{
			Player->OnEndGame.AddDynamic(this, &ACoreGameModeBase::RemovePlayer);
		}
		else
		{
			AddEnemy(*itr);
		}
	}

	for (TActorIterator<ACorePlayerController> itr(GetWorld()); itr; ++itr)
	{
		CurrentController = Cast<ACorePlayerController>(*itr);
		if (!CurrentController)
		{
			Destroy();
		}
	}
	ResultsWidget = CreateWidget<UCoreResultsMenu>(CurrentController, WidgetClass);
}

void ACoreGameModeBase::RemovePlayer(AActor* player)
{
	for (TActorIterator<ABaseCharacter> itr(GetWorld()); itr; ++itr)
	{
		ABasePlayer* tempPlayer = Cast<ABasePlayer>(*itr);
		if (!tempPlayer)
		{

			itr->OnDestroyed.RemoveDynamic(this, &ACoreGameModeBase::RemoveEnemy);
		}

		AAIController* AsPawn = Cast<AAIController>(itr->GetController());
		if (AsPawn)
		{
			AsPawn->BrainComponent->StopLogic("Player Died");
		}
	}

	if (ResultsWidget)
	{
		ResultsWidget->AddToViewport();
		CurrentController->SetShowMouseCursor(true);
		FInputModeUIOnly mode;
		mode.SetWidgetToFocus(ResultsWidget->TakeWidget());
		mode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
		CurrentController->SetInputMode(mode);
	}
	else {
		UE_LOG(Game, Warning, TEXT("Results Widget Was null"));
	}
}

void ACoreGameModeBase::AddEnemy(AActor* Agent)
{
	NumEnemies++;
	Agent->OnDestroyed.AddDynamic(this, &ACoreGameModeBase::RemoveEnemy);
}

void ACoreGameModeBase::RemoveEnemy(AActor* DeadAgent)
{
	NumEnemies--;

	if (NumEnemies == 0)
	{
		//Player is null by the time I get here for some reason
		// 
		//Player->WinGame();
		ResultsWidget->SetWinCondition();
		ResultsWidget->AddToViewport();
		//Player->OnDestroyed.RemoveDynamic(this, &ACoreGameModeBase::RemovePlayer);
	}
}
