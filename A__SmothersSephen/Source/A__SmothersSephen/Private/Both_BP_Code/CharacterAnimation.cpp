// Fill out your copyright notice in the Description page of Project Settings.


#include "Both_BP_Code/CharacterAnimation.h"
#include "Animation/AnimSequenceBase.h"
#include "../../A__SmothersSephen.h"


//UCharacterAnimation::UCharacterAnimation()
//{
//	DeadSequenceArray.Add(HurtSequence);
//	DeadSequenceArray.Add(DeadSequence);
//}

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

		if (DebugHurt)
		{
			HurtAnimation(0);
			DebugHurt = false;
		}
		else if(DebugDead)
		{
			DeadAnimation(0);
			DebugDead = false;
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

void UCharacterAnimation::HurtAnimation_Implementation(float ratio)
{
	if (HurtSequence)
	{
		PlaySlotAnimationAsDynamicMontage(HurtSequence, SlotName);
	}
	else
	{
		UE_LOG(Game, Warning, TEXT("Failed to load Hurt_Ironsights animation montage!"));
	}
}


void UCharacterAnimation::DeadAnimation_Implementation(float ratio)
{
	DeadSequence = DeadSequenceArray[FMath::RandRange(0, DeadSequenceArray.Num() - 1)];
}

void UCharacterAnimation::PreviewWindowUpdate_Implementation()
{

}




