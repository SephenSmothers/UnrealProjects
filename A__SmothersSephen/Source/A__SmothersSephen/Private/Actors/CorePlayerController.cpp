// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CorePlayerController.h"

void ACorePlayerController::BeginPlay()
{
	FInputModeGameOnly mode;
	SetInputMode(mode);
}
