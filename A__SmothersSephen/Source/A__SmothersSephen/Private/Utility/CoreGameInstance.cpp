// Fill out your copyright notice in the Description page of Project Settings.


#include "Utility/CoreGameInstance.h"
#include "../../A__SmothersSephen.h"
#include "GameFramework/PlayerController.h"

void UCoreGameInstance::LoadLevelSafe(int index)
{
	if (index < Levels.Num())
	{
		CurrentLevelIndex = index;
		ETravelType Travel = TRAVEL_Absolute;
		FString Cmd = Levels[CurrentLevelIndex].ToString();
		GEngine->SetClientTravel(GetWorld(), *Cmd, Travel);  
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Invalid Level Index"));
	}
}

void UCoreGameInstance::LoadFirstLevel()
{
	LoadLevelSafe(FirstLevelIndex);
}

void UCoreGameInstance::QuitGame()
{
	APlayerController* target = Cast<APlayerController>(GetPrimaryPlayerController());
	if (target)
	{
		target->ConsoleCommand("quit");
	}
}

void UCoreGameInstance::LoadMainLevel()
{
	LoadLevelSafe(MainMenuIndex);
}

void UCoreGameInstance::LoadCurrentLevel()
{
	LoadLevelSafe(CurrentLevelIndex);
}
