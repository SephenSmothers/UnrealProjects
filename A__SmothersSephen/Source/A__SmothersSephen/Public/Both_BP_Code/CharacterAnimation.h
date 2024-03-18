// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimation.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API UCharacterAnimation : public UAnimInstance
{
	GENERATED_BODY()

protected:
	void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	float Speed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Default)
	float Direction;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Default)
	bool DebugFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	class UAnimSequenceBase* Sequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	FName SlotName;


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreviewWindowUpdate();

	virtual void  PreviewWindowUpdate_Implementation();

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FireAnimation();

	virtual void FireAnimation_Implementation();

};
