// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "CoreAgent.generated.h"

UCLASS()
class A__SMOTHERSSEPHEN_API ACoreAgent : public ABaseCharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoreAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
