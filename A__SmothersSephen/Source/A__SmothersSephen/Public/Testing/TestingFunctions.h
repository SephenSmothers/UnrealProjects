// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestingFunctions.generated.h"

UCLASS()
class A__SMOTHERSSEPHEN_API ATestingFunctions : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestingFunctions();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void BlueprintCallable();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void BlueprintImplementableEvent();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BlueprintNativeEvent();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
