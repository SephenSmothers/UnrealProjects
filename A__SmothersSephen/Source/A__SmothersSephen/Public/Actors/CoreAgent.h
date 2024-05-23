// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "Utility/EnemyInterface.h"
#include "CoreAgent.generated.h"

UCLASS()
class A__SMOTHERSSEPHEN_API ACoreAgent : public ABaseCharacter, public IEnemyInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoreAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UFUNCTION(BlueprintCallable)
	//void UpdateHealth(float percentage);

	//UFUNCTION(BlueprintCallable)
	//void UpdateAmmo(float min, float max);

	UFUNCTION(BlueprintCallable)
	void EndAttack();

	UFUNCTION(BlueprintCallable)
	void UpdateBlackboard(float ratio);

	UPROPERTY(EditDefaultsOnly)
	FName AmmoName;

	UPROPERTY(EditDefaultsOnly)
	FName HealthName;

	UPROPERTY(EditDefaultsOnly)
	FName AiMessage;

	UPROPERTY(EditDefaultsOnly)
	FName KeyName;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void AgentAttack() override;

};
