// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BoundInCodeBlueprintFuncInter.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBoundInCodeBlueprintFuncInter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class A__SMOTHERSSEPHEN_API IBoundInCodeBlueprintFuncInter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BluePrintNativeEvent();

	//Override this one below and not the one above in the class that you need it in.
	//Then call the (parent function implementation on the class name instead of using super)
	//finally when calling the override function, use the ITheInterfaceClass::Execute_nativefunction() and not the implementation
	//Side note for the Execute_nativefunction() check if the passed in actor->Implements<UTheInterfaceClass>()
	//Also after doing all of this create the override in Blueprints by adding the interface in class settings and then override the function in BP
	virtual void BluePrintNativeEvent_Implementation();
};
