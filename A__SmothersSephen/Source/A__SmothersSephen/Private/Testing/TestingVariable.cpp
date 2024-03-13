// Fill out your copyright notice in the Description page of Project Settings.


#include "Testing/TestingVariable.h"

// Sets default values
ATestingVariable::ATestingVariable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	ClassType = ATestingVariable::StaticClass();

}

// Called when the game starts or when spawned
void ATestingVariable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestingVariable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

