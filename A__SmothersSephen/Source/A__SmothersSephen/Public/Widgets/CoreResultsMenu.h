// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoreResultsMenu.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API UCoreResultsMenu : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly, meta = (BindWidget))
	class UVerticalBox* ButtonArea;

	UPROPERTY(EditInstanceOnly, meta = (BindWidget))
	class UWidgetSwitcher* ResultsSwitch;

	UPROPERTY(EditInstanceOnly, meta = (BindWidget))
	class UButtonWithText* RestartButton;

	UPROPERTY(EditInstanceOnly, meta = (BindWidget))
	class UButtonWithText* MainMenuButton;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCoreGameInstance* GameInstance;

public:

	void NativeConstruct() override;
	void SetWinCondition();

	UFUNCTION()
	void EnterMainMenu();

	UFUNCTION()
	void RestartGame();

	
};
