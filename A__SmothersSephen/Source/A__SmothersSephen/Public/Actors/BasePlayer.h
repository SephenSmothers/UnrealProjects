// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "BasePlayer.generated.h"

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

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USpringArmComponent* SpringArm; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UCameraComponent* Camera;


public:
	ABasePlayer();
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
