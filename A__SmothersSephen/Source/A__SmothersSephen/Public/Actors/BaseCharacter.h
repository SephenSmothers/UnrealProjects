// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Actors/Rifle.h"
#include "Both_BP_Code/CharacterAnimation.h"
#include "Components/HealthComponent.h"
#include "Utility/BPI_CorePickupInterface.h"
#include "BaseCharacter.generated.h"

UCLASS(Abstract)
class A__SMOTHERSSEPHEN_API ABaseCharacter : public ACharacter, public IBPI_CorePickupInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UChildActorComponent* ChildActorComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	TSubclassOf<ARifle> WeaponClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	ARifle* Weapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	UCharacterAnimation* AnimInstanceCore;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	class UHealthComponent* HealthComponent;

	UFUNCTION()
	virtual void HandleDeath(float ratio);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual bool CanPickupHealth() override;

};





