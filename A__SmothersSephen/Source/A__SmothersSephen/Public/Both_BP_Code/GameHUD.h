// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API UGameHUD : public UUserWidget
{
	GENERATED_BODY()

private:


protected:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UProgressBar* HealthBar;
	



public:

	UFUNCTION()
	void SetHealthComponent(float percent);

	UFUNCTION()
	void SetHealthComponentDead(float percent);
	
};
