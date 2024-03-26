// Fill out your copyright notice in the Description page of Project Settings.


#include "Both_BP_Code/GameHUD.h"
#include "Components/ProgressBar.h"

void UGameHUD::SetHealthComponent(float percent)
{
	HealthBar->SetPercent(percent);
}

void UGameHUD::SetHealthComponentDead(float percent)
{
	HealthBar->SetPercent(percent);
}
