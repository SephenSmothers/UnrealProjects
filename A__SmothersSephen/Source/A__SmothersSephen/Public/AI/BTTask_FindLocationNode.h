// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindLocationNode.generated.h"

/**
 * 
 */
UCLASS()
class A__SMOTHERSSEPHEN_API UBTTask_FindLocationNode : public UBTTaskNode
{
	GENERATED_BODY()

public:

	/*UFUNCTION(BlueprintCallable)
	void ReceiveExecuteAI(class AAIController& owner, APawn& pawn);*/

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:

	UPROPERTY(EditInstanceOnly, Category = "Variables")
	float Radius;

	UPROPERTY(EditInstanceOnly, Category = "Variables");
	class FBlackboardKeySelector LocationKey;
	
};
