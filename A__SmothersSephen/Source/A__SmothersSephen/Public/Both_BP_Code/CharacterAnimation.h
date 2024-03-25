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

	//UCharacterAnimation();

	void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	float Speed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Default)
	float Direction;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Default)
	bool DebugFire;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Default)
	bool DebugHurt;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Default)
	bool DebugDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	class UAnimSequenceBase* Sequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	class UAnimSequenceBase* HurtSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	class UAnimSequenceBase* DeadSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	TArray<UAnimSequenceBase*> DeadSequenceArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
	FName SlotName;


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreviewWindowUpdate();

	virtual void  PreviewWindowUpdate_Implementation();

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FireAnimation();
	virtual void FireAnimation_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HurtAnimation(float ratio);
	virtual void HurtAnimation_Implementation(float ratio);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeadAnimation(float ratio);
	virtual void DeadAnimation_Implementation(float ratio);

};
