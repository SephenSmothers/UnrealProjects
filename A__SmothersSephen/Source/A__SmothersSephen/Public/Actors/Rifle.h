// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actors/Projectile.h"
#include "Rifle.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRifleFire);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmmoUpdate, float, current, float, max);

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default) 
	float MaxAmmo; 

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default) 
	float CurrentAmmo; 

	UFUNCTION(BlueprintCallable)
	bool CanShoot() const;
	


	

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

	UFUNCTION()
	void SetOwnerAlive(bool alive);

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable")
	FRifleFire OnRifleFire;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable")
	FRifleFire OnWeaponStopped;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable")
	FAmmoUpdate OnAmmoChanged;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable")
	FRifleFire OnReloadStart;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable")
	FRifleFire OnReloadEnded;

	UFUNCTION(BlueprintCallable)
	void ReloadAmmo();

	UFUNCTION(BlueprintCallable)
	void UseAmmo();

	UFUNCTION(BlueprintCallable)
	void SetCurrentAmmo(float ammo);

	UFUNCTION(BlueprintCallable)
	void SetMaxAmmo(float ammo);

	UFUNCTION(BlueprintCallable)
	float GetCurrentAmmo();

	UFUNCTION(BlueprintCallable)
	float GetMaxAmmo();
};



