// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_AgentAttackNode.h"
#include "AIController.h"
#include "Actors/CoreAgent.h"
#include "EngineUtils.h"

EBTNodeResult::Type UBTTask_AgentAttackNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	for (TActorIterator<ACoreAgent> itr(GetWorld()); itr; ++itr)
	{
		//AActor* Actor = *itr; 

		//IEnemyInterface* U = Cast<IEnemyInterface>(Actor);
		//if (U)
		//{
	
		//}
		 
		IEnemyInterface* I = Cast<IEnemyInterface>(*itr);
		if (I)
		{
			I->AgentAttack();
			OwnerComp.RegisterMessageObserver(this, FName{ "ActionFinished" });
		}
	}



	return EBTNodeResult::Succeeded;
}
