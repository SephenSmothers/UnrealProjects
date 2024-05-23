// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BP_CodeBasePickup.h"
#include "MyBP_CodeHealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API AMyBP_CodeHealthPickup : public ABP_CodeBasePickup
{
	GENERATED_BODY()

public:
	AMyBP_CodeHealthPickup();

protected:
	
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particles; 



	//UFUNCTION(BlueprintCallable)
	bool CanPickup(AActor* OtherActor) override;

	void HandlePickup(AActor* OtherActor, const FHitResult& SweepResult) override;

	//UFUNCTION(BlueprintCallable)
	void HandlePostPickup() override;

	
};
