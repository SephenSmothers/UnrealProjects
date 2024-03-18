// Fill out your copyright notice in the Description page of Project Settings.


#include "Both_BP_Code/CharacterAnimation.h"
#include "Animation/AnimSequenceBase.h"
#include "../../A__SmothersSephen.h"

void UCharacterAnimation::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* Pawn = TryGetPawnOwner();
	if (Pawn)
	{
		//isValid
		Speed = Pawn->GetVelocity().Size();
		Direction = CalculateDirection(Pawn->GetVelocity(), Pawn->GetActorRotation());

		if (DebugFire)
		{
			FireAnimation();
		}
		else
		{
			DebugFire = false;
		}

	}
	else
	{
		//isNotValid
		PreviewWindowUpdate();
	}
}

void UCharacterAnimation::FireAnimation_Implementation()
{
	if (Sequence)
	{
		PlaySlotAnimationAsDynamicMontage(Sequence, SlotName);
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Failed to load Fire_Ironsights animation montage!"));
	}

}

void UCharacterAnimation::PreviewWindowUpdate_Implementation()
{

}




