// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonWithText.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FButtonsText); 

/**
 * 
 */

UCLASS()
class A__SMOTHERSSEPHEN_API UButtonWithText : public UUserWidget 
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly, meta = (BindWidget)) 
	class UButton* BackgroundButton; 

	UPROPERTY(EditInstanceOnly, meta = (BindWidget))
	class UTextBlock* Information; 

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Default)
	FText ButtonText; 

	void NativePreConstruct() override;
	void NativeConstruct() override;

public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FButtonsText OnButtonCLicked; 

	UFUNCTION()
	void OnButtonsClicked();
};
