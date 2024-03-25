// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actors/Projectile.h"
#include "Rifle.generated.h"

UCLASS()
class A__SMOTHERSSEPHEN_API ARifle : public AActor
{
	GENERATED_BODY()
	
private:	




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Default)
	bool ActionHappening;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Default)
	bool IsOwnerAlive;

	// Sets default values for this actor's properties
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	class APawn* ParentPawn;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	TSubclassOf<AProjectile> Projectile;


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool CanShoot();
	virtual bool  CanShoot_Implementation();

	void ActionStopped();




	/*UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	class AProjectile* Projectile;*/



public:	
	ARifle();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Attack();

	virtual void  Attack_Implementation();



};




