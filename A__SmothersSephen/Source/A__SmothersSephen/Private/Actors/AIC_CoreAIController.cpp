// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/AIC_CoreAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BlackboardComponent.h"

AAIC_CoreAIController::AAIC_CoreAIController()
{
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));

	sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("AISight"));
	sight->SightRadius = 900.0f;
	sight->LoseSightRadius = 1000.0f;
	sight->PeripheralVisionAngleDegrees = 45.0f;
	sight->DetectionByAffiliation.bDetectEnemies = false;
	sight->DetectionByAffiliation.bDetectNeutrals = true;

	keyName = "Player";

	PerceptionComponent->ConfigureSense(*sight);
}

void AAIC_CoreAIController::TargetPositionUpdate(AActor* actor, FAIStimulus aiStimulus)
{
	if (aiStimulus.WasSuccessfullySensed())
	{
		GetBlackboardComponent()->SetValueAsObject(keyName, actor);
	}
	else
	{
		GetBlackboardComponent()->ClearValue(keyName);
	}
}

void AAIC_CoreAIController::OnPossess(APawn* pawn)
{
	Super::OnPossess(pawn);
	RunBehaviorTree(tree);
	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this ,&AAIC_CoreAIController::TargetPositionUpdate);
}
