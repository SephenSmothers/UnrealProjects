// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CoreMenuController.h"
#include "Blueprint/UserWidget.h"

void ACoreMenuController::BeginPlay()
{
	UUserWidget* tempWidget = CreateWidget<UUserWidget, APlayerController>(this, widget);
	tempWidget->AddToViewport();
	FInputModeUIOnly mode;
	mode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	mode.SetWidgetToFocus(tempWidget->TakeWidget());
	SetInputMode(mode);
}
