// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CoreAgent.h"

// Sets default values
ACoreAgent::ACoreAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACoreAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoreAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

