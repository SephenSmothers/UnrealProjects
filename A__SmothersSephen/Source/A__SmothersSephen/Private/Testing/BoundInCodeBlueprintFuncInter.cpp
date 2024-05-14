// Fill out your copyright notice in the Description page of Project Settings.


#include "Testing/BoundInCodeBlueprintFuncInter.h"
#include "../../A__SmothersSephen.h"

// Add default functionality here for any IBoundInCodeBlueprintFuncInter functions that are not pure virtual.

void IBoundInCodeBlueprintFuncInter::BluePrintNativeEvent_Implementation()
{
	UE_LOG(Game, Warning, TEXT("Works For now"))
}
