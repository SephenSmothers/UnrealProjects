// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BP_CodeBasePickup.h"
#include "CodeDamagePickup.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API ACodeDamagePickup : public ABP_CodeBasePickup
{
	GENERATED_BODY()

public:

	ACodeDamagePickup();

protected:


	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particles;

	//UFUNCTION(BlueprintCallable)
	bool CanPickup(AActor* OtherActor) override;

	//UFUNCTION(BlueprintCallable)
	void HandlePickup(AActor* OtherActor, const FHitResult& SweepResult) override;

	//UFUNCTION(BlueprintCallable) 
	void HandlePostPickup() override;
	
};
