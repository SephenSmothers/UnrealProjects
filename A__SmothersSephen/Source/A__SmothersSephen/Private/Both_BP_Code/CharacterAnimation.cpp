// Fill out your copyright notice in the Description page of Project Settings.


#include "Both_BP_Code/CharacterAnimation.h"

void UCharacterAnimation::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* Pawn = TryGetPawnOwner();
	if (Pawn)
	{
		//isValid
		Speed = Pawn->GetVelocity().Size();

	}
	else
	{
		//isValidNotValid


	}

}
