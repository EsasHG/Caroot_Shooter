// Fill out your copyright notice in the Description page of Project Settings.


#include "Rabbit_Base.h"
// Sets default values
ARabbit_Base::ARabbit_Base()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARabbit_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARabbit_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARabbit_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

