// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CoreReloadNotify.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API UCoreReloadNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
	virtual void Notify(USkeletalMeshComponent* mesh, UAnimSequenceBase* anim) override;
	
};
