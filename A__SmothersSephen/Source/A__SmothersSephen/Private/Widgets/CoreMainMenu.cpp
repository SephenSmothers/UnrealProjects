// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/CoreMainMenu.h"
#include "Utility/CoreGameInstance.h"
#include "Both_BP_Code/ButtonWithText.h"
#include "../../A__SmothersSephen.h"

void UCoreMainMenu::NativeConstruct()
{
	GameInstance = Cast<UCoreGameInstance>(GetGameInstance());

	if (GameInstance)
	{
		QuitButton->OnButtonCLicked.AddDynamic(this, &UCoreMainMenu::MainQuitGame); 
		StartButton->OnButtonCLicked.AddDynamic(this, &UCoreMainMenu::MainStartGame); 
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Wrong Core Game Instance Loaded"));
	}
}

void UCoreMainMenu::MainQuitGame()
{
	GameInstance->QuitGame();
}

void UCoreMainMenu::MainStartGame()
{
	GameInstance->LoadFirstLevel();
}
