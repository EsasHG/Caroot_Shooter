// Fill out your copyright notice in the Description page of Project Settings.


#include "Carrot_actor.h"


// Sets default values
ACarrot_actor::ACarrot_actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Amount = 25;
	DespawnCounter = 0.f;
	DespawnTime = 10.f;



}

// Called when the game starts or when spawned
void ACarrot_actor::BeginPlay()
{
	Super::BeginPlay();

	Carrot.Init(NULL, Amount);

	for (int i = 0; i < Amount; i++)
	{

		RandomNumberX = rand() % 1500 + 500;

		RandomNumberY = rand() % 1500 + 500;
		/*	Carrot[i] = CreateDefaultSubobject<UStaticMeshComponent>(FName(TEXT("Carrot Mesh") + FString::FromInt(i)));
			Carrot[i]->SetRelativeLocation(FVector(GetActorLocation().X + RandomNumber, GetActorLocation().Y + RandomNumber, 0));*/

			/*AActor* NewLocati = GetWorld()->SpawnActor(ActorTwoSpawn);*/
		Carrot[i] = GetWorld()->SpawnActor(ActorTwoSpawn);
		Carrot[i]->SetActorLocation(FVector(GetActorLocation().X + RandomNumberX, GetActorLocation().Y + RandomNumberY, 0));
	}

	
}

// Called every frame
void ACarrot_actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DespawnCounter += DeltaTime;

	if(DespawnCounter > DespawnTime)
	{
		SpawCarrort();
		DespawnCarrot();
	}

}

void ACarrot_actor::SpawCarrort()
{
	if(DespawnCounter > DespawnTime || Amount <= 0)
	{
		Amount++;

	}

}

void ACarrot_actor::DespawnCarrot()
{
	if(DespawnCounter > DespawnTime)
	{
		Amount--;
		this->Destroy();
	}

}

