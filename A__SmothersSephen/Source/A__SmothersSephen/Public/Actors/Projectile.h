// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class A__SMOTHERSSEPHEN_API AProjectile : public AActor
{
	GENERATED_BODY()
	
private:	
	UFUNCTION()
	void HandleOnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* SphereMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	float Damage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	AController* OwnerController; 


public:	
	// Sets default values for this actor's properties
	AProjectile();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
