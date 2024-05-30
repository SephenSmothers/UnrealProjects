// Fill out your copyright notice in the Description page of Project Settings.


#include "Utility/CoreReloadEndNotify.h"
#include "Both_BP_Code/CharacterAnimation.h"

void UCoreReloadEndNotify::Notify(USkeletalMeshComponent* mesh, UAnimSequenceBase* anim)
{
	UCharacterAnimation* animation = Cast<UCharacterAnimation>(mesh->GetAnimInstance());
	if (animation)
		animation->OnReloadEnded.Broadcast();
}
