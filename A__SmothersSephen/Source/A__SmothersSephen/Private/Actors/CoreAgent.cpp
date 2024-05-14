// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CoreAgent.h"
#include <Blueprint/AIBlueprintHelperLibrary.h>
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BrainComponent.h"

// Sets default values
ACoreAgent::ACoreAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	KeyName = "HealthRatio";
	AiMessage = "ActionFinished";

}

// Called when the game starts or when spawned
void ACoreAgent::BeginPlay()
{
	Super::BeginPlay();
	AmmoName = "Ammo";
	//HealthName = "Health";
	Weapon->OnWeaponStopped.AddDynamic(this, &ACoreAgent::EndAttack); 
	HealthComponent->OnHurt.AddDynamic(this, &ACoreAgent::UpdateBlackboard);  
	HealthComponent->OnDead.AddDynamic(this, &ACoreAgent::UpdateBlackboard); 
	UpdateBlackboard(1.0f);
	 
}

void ACoreAgent::UpdateHealth(float percentage)
{

	UAIBlueprintHelperLibrary::GetAIController(this->GetParentActor())->GetBlackboardComponent()->SetValueAsFloat(KeyName, percentage);
}

void ACoreAgent::UpdateAmmo(float min, float max)
{
	UAIBlueprintHelperLibrary::GetAIController(this->GetParentActor())->GetBlackboardComponent()->SetValueAsFloat(AmmoName, min); 
}

void ACoreAgent::EndAttack()
{
	FAIMessage::Send(this, FAIMessage{ AiMessage, NULL, true });
}

void ACoreAgent::UpdateBlackboard(float ratio)
{
    if (Controller)
    {
        AAIController* AIController = Cast<AAIController>(Controller);

        if (AIController)       
            AIController->GetBlackboardComponent()->SetValueAsFloat(KeyName, ratio);      
        else       
            Destroy();       
    }
    else
    {
        Destroy();
    }
}

// Called every frame
void ACoreAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Weapon)	
		Weapon->Attack();	

}

void ACoreAgent::AgentAttack()
{
	if (Weapon)	
		Weapon->Attack();	
}

