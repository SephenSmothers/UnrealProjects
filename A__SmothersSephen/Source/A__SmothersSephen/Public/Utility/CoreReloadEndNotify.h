// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CoreReloadEndNotify.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API UCoreReloadEndNotify : public UAnimNotify
{
	GENERATED_BODY()

protected:

public:
	virtual void Notify(USkeletalMeshComponent* mesh, UAnimSequenceBase* anim) override;
	
};
