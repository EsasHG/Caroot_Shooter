// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup_actor.h"
#include "CarootShooterCharacter.h"
#include "Carrot_actor.h"

// Sets default values
APickup_actor::APickup_actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collison = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_mesh"));
	Collison->OnComponentBeginOverlap.AddDynamic(this, &APickup_actor::OnOverlap);
	RootComponent = Collison;

	Carrot_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Carrot_mesh"));
	Carrot_mesh->SetupAttachment(Collison);


}

// Called when the game starts or when spawned
void APickup_actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup_actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickup_actor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACarootShooterCharacter* Player = Cast<ACarootShooterCharacter>(OtherActor);


	//Player vraibale from pointer needs to not be an nullpointer, and  other gived criteria. Adding new ammo from other class with pointer. Pointing spawner from Other class(ACarrotActor) to A funcyion inside the class and deleting the specific object.

	if(Player != nullptr && Player->Ammo < 10)
	{
		Player->Ammo++;
		Spawner->DespawnCarrot(this);
	}
}

