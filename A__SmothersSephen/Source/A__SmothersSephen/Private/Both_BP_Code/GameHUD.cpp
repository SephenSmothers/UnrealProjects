// Fill out your copyright notice in the Description page of Project Settings.


#include "Both_BP_Code/GameHUD.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"


void UGameHUD::SetHealthComponent(float percent)
{
	HealthBar->SetPercent(percent);
}

void UGameHUD::SetHealthComponentDead(float percent)
{
	HealthBar->SetPercent(percent);
}

void UGameHUD::SettAmmoText(float min, float max)
{
	if (CurrentAmmo && MaxAmmo)
	{
		CurrentAmmo->SetText(FText::AsNumber(min));
		MaxAmmo->SetText(FText::AsNumber(max));
	}
}
