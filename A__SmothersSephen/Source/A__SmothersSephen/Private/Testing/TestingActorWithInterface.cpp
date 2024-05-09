// Fill out your copyright notice in the Description page of Project Settings.


#include "Testing/TestingActorWithInterface.h"
#include "../../A__SmothersSephen/A__SmothersSephen.h"

// Sets default values
ATestingActorWithInterface::ATestingActorWithInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestingActorWithInterface::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATestingActorWithInterface::BluePrintCallable()
{
	UE_LOG(Game, Error, TEXT("In c++ blueprint callable"));
}

// Called every frame
void ATestingActorWithInterface::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

