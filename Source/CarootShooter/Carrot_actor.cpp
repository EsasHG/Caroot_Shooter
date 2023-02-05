// Fill out your copyright notice in the Description page of Project Settings.


#include "Carrot_actor.h"
#include "CarootShooterCharacter.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
ACarrot_actor::ACarrot_actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Amount = 25;
	DespawnCounter = 0.f;
	DespawnTime = 5.f;

}

// Called when the game starts or when spawned
void ACarrot_actor::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < Amount; i++)
	{
		SpawCarrort();
	}

	
}

// Called every frame
void ACarrot_actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DespawnCounter += DeltaTime;

	//Creating a variable to a pointer to a class we need to communicate with. We use a UE5 class to get the player character information; the map and what character.
	ACarootShooterCharacter* Player = Cast<ACarootShooterCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));

	if(DespawnCounter > DespawnTime)
	{
		
		SpawCarrort();

		DespawnCounter = 0;
	}

}

void ACarrot_actor::SpawCarrort()
{
	RandomNumberX = rand() % 1500 - 750;
	RandomNumberY = rand() % 1500 - 750;

	//Creating an index to get the exact index of the actor we want. To get that index we need to add a new actor, but from a specified class that is the object we are working with/on. After the cominuccation i s done, we spawn a new actor based on the existing actor class with the values returned.
	int index = Carrot.Add(Cast<APickup_actor>(GetWorld()->SpawnActor(ActorTwoSpawn)));
	Carrot[index]->SetActorLocation(FVector(GetActorLocation().X + RandomNumberX, GetActorLocation().Y + RandomNumberY, 0));

	//This<-Makes the programm understand that we refer to the "instance" we drag out to the world "the actor in this case".
	Carrot[index]->Spawner = this;

}

void ACarrot_actor::DespawnCarrot(APickup_actor* Carrot_delete)
{
	//Remove function; removed the carrot from the array
	Carrot.Remove(Carrot_delete);
	Carrot_delete->Destroy();

}

