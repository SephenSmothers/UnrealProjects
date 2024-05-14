// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AIC_CoreAIController.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API AAIC_CoreAIController : public AAIController
{
	GENERATED_BODY()

public:

	AAIC_CoreAIController();

	UFUNCTION(BlueprintCallable)
	void TargetPositionUpdate(AActor* actor, FAIStimulus aiStimulus);

	virtual void OnPossess(APawn* pawn) override;

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	class UBehaviorTree* tree;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	FName keyName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
	class UAISenseConfig_Sight* sight; 


	
};
