// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Utility/BPI_CorePickupInterface.h"
#include <Kismet/GameplayStatics.h>
#include "BP_CodeBasePickup.generated.h"

UCLASS()
class A__SMOTHERSSEPHEN_API ABP_CodeBasePickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_CodeBasePickup();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollider;

	/*UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particles; */

	UPROPERTY(EditDefaultsOnly)
	float BaseDamage; 

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual bool CanPickup(AActor* OtherActor);

	UFUNCTION(BlueprintCallable)
	virtual void HandlePickup(AActor* OtherActor, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
	virtual void HandlePostPickup();

//private:

	UFUNCTION()
	void HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};
