// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/CoreResultsMenu.h"
#include "Components/WidgetSwitcher.h"
#include "Components/VerticalBox.h"
#include "Utility/CoreGameInstance.h"
#include "Both_BP_Code/ButtonWithText.h"
#include "../../A__SmothersSephen.h"

void UCoreResultsMenu::NativeConstruct()
{
	GameInstance = Cast<UCoreGameInstance>(GetGameInstance());

	if (GameInstance)
	{
		RestartButton->OnButtonCLicked.AddDynamic(this, &UCoreResultsMenu::EnterMainMenu); 
		MainMenuButton->OnButtonCLicked.AddDynamic(this, &UCoreResultsMenu::RestartGame); 
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Wrong Core Game Instance Loaded"));
	}
}

void UCoreResultsMenu::SetWinCondition()
{
	ResultsSwitch->SetActiveWidgetIndex(1);
	ButtonArea->SetVisibility(ESlateVisibility::Hidden);
	FTimerHandle timer;
	GetWorld()->GetTimerManager().SetTimer(timer, this, &UCoreResultsMenu::EnterMainMenu, 2.0f, false);
}

void UCoreResultsMenu::EnterMainMenu()
{
	GameInstance->LoadMainLevel();
}

void UCoreResultsMenu::RestartGame()
{
	GameInstance->LoadCurrentLevel();
}
