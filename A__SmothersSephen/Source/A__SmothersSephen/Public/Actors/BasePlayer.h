// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "BasePlayer.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerDelegate, AActor*, OtherActor); 
/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API ABasePlayer : public ABaseCharacter
{
	GENERATED_BODY()

private:
	void InputAxisMoveForward(float AxisValue);
	void InputAxisMoveRight(float AxisValue);
	void InputActionAttack();
	void InputActionReload();


protected:

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USpringArmComponent* SpringArm; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Default)
	APlayerController* PlayerController;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UHealthComponent* HealthComponent;*/

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	TSubclassOf<class UGameHUD> HUDClassType;

	UPROPERTY()
	UGameHUD* hud;


	virtual void HandleDeath(float ratio) override;

	virtual bool CanPickupHealth() override;


public:
	ABasePlayer();
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void DeathEnded();

	UFUNCTION(BlueprintCallable)
	void WinGame();

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = Default)
	FPlayerDelegate OnEndGame;
};
