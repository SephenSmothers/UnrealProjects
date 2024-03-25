// Fill out your copyright notice in the Description page of Project Settings.


#include "Testing/TestingVariable.h"
#include "../../A__SmothersSephen.h"

// Sets default values
ATestingVariable::ATestingVariable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	ClassType = ATestingVariable::StaticClass();

	ValueArray.Add(3);
	ValueArray.Add(4);

	PointerArray.Add(this);
	PointerArray.Add(nullptr);

}

// Called when the game starts or when spawned
void ATestingVariable::BeginPlay()
{
	Super::BeginPlay();
	// this line is the same thing as bind in the character blueprint
	// create event uses these two parameters ---> this(object pointer), &ATestingVariable::ExampleBoundFunction(function pointer)
	OnTestingDelegateVariable.AddDynamic(this, &ATestingVariable::ExampleBoundFunction);

	//this is the same thing we will call in the rifle blueprint
	OnTestingDelegateVariable.Broadcast(this);
}

void ATestingVariable::ExampleBoundFunction(AActor* OtherActor)
{

	UE_LOG(Game, Warning, TEXT("Called Example Bound Function"));
}

// Called every frame
void ATestingVariable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

