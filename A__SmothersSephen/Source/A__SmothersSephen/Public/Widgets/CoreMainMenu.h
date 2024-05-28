// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoreMainMenu.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API UCoreMainMenu : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCoreGameInstance* GameInstance;

	UPROPERTY(EditInstanceOnly, meta = (BindWidget))
	class UButtonWithText* QuitButton;

	UPROPERTY(EditInstanceOnly, meta = (BindWidget))
	class UButtonWithText* StartButton;

public:

	void NativeConstruct() override;

	UFUNCTION()
	void MainQuitGame();

	UFUNCTION()
	void MainStartGame();


};
