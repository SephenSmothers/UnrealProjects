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
	ResultsWidget = CreateWidget<UCoreResultsMenu, ACorePlayerController>(CurrentController, WidgetClass);
}

void ACoreGameModeBase::RemovePlayer()
{
	for (TActorIterator<ABaseCharacter> itr(GetWorld()); itr; ++itr)
	{
		AAIController* AsPawn = Cast<AAIController>(itr->GetController()); 
		if (AsPawn) 
		{
			AsPawn->BrainComponent->StopLogic("Player Died");
		}
	}

	ResultsWidget->AddToViewport();
	CurrentController->SetShowMouseCursor(false);
	FInputModeUIOnly mode;
	mode.SetWidgetToFocus(ResultsWidget->TakeWidget());
	mode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	CurrentController->SetInputMode(mode);
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
		//Player->WinGame();
		//ResultsWidget->SetWinCondition();
		ResultsWidget->AddToViewport();
	}
}
