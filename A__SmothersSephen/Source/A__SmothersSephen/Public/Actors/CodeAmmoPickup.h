// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BP_CodeBasePickup.h"
#include "CodeAmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API ACodeAmmoPickup : public ABP_CodeBasePickup
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float ExtraAmmo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UStaticMeshComponent* Mesh;


public:
	ACodeAmmoPickup();

	bool CanPickup(AActor* OtherActor) override;


	void HandlePickup(AActor* OtherActor, const FHitResult& SweepResult) override;


	void HandlePostPickup() override;

	
};
