// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CoreMenuController.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API ACoreMenuController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UUserWidget> widget;

public:
	
	virtual void BeginPlay() override;
};
