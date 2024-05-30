// Fill out your copyright notice in the Description page of Project Settings.


#include "Utility/CoreReloadNotify.h"
#include "Both_BP_Code/CharacterAnimation.h"

void UCoreReloadNotify::Notify(USkeletalMeshComponent* mesh, UAnimSequenceBase* anim)
{
	UCharacterAnimation* animation = Cast<UCharacterAnimation>(mesh->GetAnimInstance());
	if (animation)
		animation->OnReloadNow.Broadcast();
}
