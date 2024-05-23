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

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* CurrentAmmo; 

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* MaxAmmo;
	


	  
public:

	UFUNCTION(BlueprintCallable)
	void SetHealthComponent(float percent);

	UFUNCTION(BlueprintCallable)
	void SetHealthComponentDead(float percent);

	UFUNCTION(BlueprintCallable)
	void SettAmmoText(float min, float max);
	
};
