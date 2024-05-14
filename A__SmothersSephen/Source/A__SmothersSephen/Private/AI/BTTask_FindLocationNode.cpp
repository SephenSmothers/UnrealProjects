// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_FindLocationNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "AIController.h"
//#include "Actors/AIC_CoreAIController.h"

//void UBTTask_FindLocationNode::ReceiveExecuteAI(AAIController& owner, APawn& pawn)
//{
//	FVector pawnLocation = pawn.GetActorLocation();
//}

EBTNodeResult::Type UBTTask_FindLocationNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UNavigationSystemV1* navigation = nullptr;

	//OwnerComp.GetAIOwner();

	//OwnerComp.GetBlackboardComponent()->SetValueAsVector();

	OwnerComp.GetBlackboardComponent()->SetValueAsVector(LocationKey.SelectedKeyName, 
		navigation->GetRandomPointInNavigableRadius(GetWorld(), 
			OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation(), Radius));

	//GetRandomPointInNavigableRadius()
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
