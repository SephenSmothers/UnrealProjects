// Fill out your copyright notice in the Description page of Project Settings.


#include "Testing/TestingDefaultPawn.h"
#include "../../A__SmothersSephen.h"
#include "GameFramework/PlayerInput.h"

// Sets default values
ATestingDefaultPawn::ATestingDefaultPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestingDefaultPawn::BeginPlay()
{
	Super::BeginPlay();

	//Upcast
	AActor* Actor = this;

	//Does Not Work
	//APawn* pawn = Actor; 

	//Down Cast
	APawn* Pawn = Cast<APawn>(Actor);
	if (Pawn)
	{
		//valid
		UE_LOG(Game, Warning, TEXT("Actor is Named %s"), *Pawn->GetName());

	}
	else
	{
		//Not Valid
		int32 Index = 1;
		float Number = 3.21f;

		UE_LOG(Game, Log, TEXT("Numbers are %d and %f"), Index, Number);
	}

	UE_LOG(Game, Error, TEXT("Numbers are %s"), *GetVelocity().ToString());

	for (TActorIterator<ATestingActorWithInterface> itr(GetWorld()); itr; ++itr)
	{
		//so this could be an actor cast into a function
		Actor = *itr;
		UTestingInterface* U = Cast<UTestingInterface>(Actor);
		if (U)
		{
			UE_LOG(Game, Warning, TEXT("I AM U"))
		}

		ITestingInterface* I = Cast<ITestingInterface>(Actor);
		if (I) 
		{
			I->BluePrintCallable();
			UE_LOG(Game, Warning, TEXT("I AM I"))
		}
	}
	
}

// Called every frame
void ATestingDefaultPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestingDefaultPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Do Not Need to do this In Code/Core Classes
	UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("TEST_SPAWN", EKeys::SpaceBar));
	PlayerInputComponent->BindAction("TEST_SPAWN", EInputEvent::IE_Pressed, this, &ATestingDefaultPawn::Spawn);


}

void ATestingDefaultPawn::Spawn()
{
	GetWorld()->SpawnActor<APawn>(SpawnBlueprintClass, GetActorTransform());

}

