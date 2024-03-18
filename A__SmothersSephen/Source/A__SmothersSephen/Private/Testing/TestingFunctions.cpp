// Fill out your copyright notice in the Description page of Project Settings.


#include "Testing/TestingFunctions.h"
#include "../../A__SmothersSephen.h"

// Sets default values
ATestingFunctions::ATestingFunctions()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestingFunctions::BeginPlay()
{
	Super::BeginPlay();
	//BlueprintNativeEvent();
	UE_LOG(Game, Warning, TEXT("Called First Version"));
	BlueprintNativeEvent_Implementation();
	UE_LOG(Game, Warning, TEXT("Called Second Version"));
	
}

void ATestingFunctions::BlueprintCallable()
{
	UE_LOG(Game, Error, TEXT("BlueprintCallable C++"));
}

void ATestingFunctions::BlueprintNativeEvent_Implementation()
{
	UE_LOG(Game, Error, TEXT("BlueprintNativeEvent C++"));
}

//void ATestingFunctions::BlueprintImplementableEvent()
//{
//	UE_LOG(Game, Error, TEXT("BlueprintImplementableEvent C++"));
//}

// Called every frame
void ATestingFunctions::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

