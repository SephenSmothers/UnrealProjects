// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CoreGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API UCoreGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	void LoadLevelSafe(int index);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<FName> Levels;

	int CurrentLevelIndex;
	int FirstLevelIndex = 1;
	int MainMenuIndex;

public:
	void LoadFirstLevel();
	void QuitGame();
	void LoadMainLevel(); 
	void LoadCurrentLevel(); 


	
};
