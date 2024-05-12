// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Testing/TestingInterface.h"
#include "TestingActorWithInterface.generated.h"

UCLASS()
class A__SMOTHERSSEPHEN_API ATestingActorWithInterface : public AActor, public ITestingInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestingActorWithInterface();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//------------------------------------------------------
	// ITestingInterface
	//------------------------------------------------------

	void BluePrintCallable() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
