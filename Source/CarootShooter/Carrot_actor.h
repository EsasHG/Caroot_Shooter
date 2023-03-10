// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup_actor.h"
#include "Carrot_actor.generated.h"

UCLASS()
class CAROOTSHOOTER_API ACarrot_actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACarrot_actor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Carrot_mesh")
		TArray <APickup_actor*> Carrot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Carrot_mesh")
		TSubclassOf<APickup_actor> ActorTwoSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Carrot_mesh")
		int Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Carrot_mesh")
		float RandomNumberX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Carrot_mesh")
		float RandomNumberY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Carrot_mesh")
		float DespawnCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Carrot_mesh")
		float DespawnTime;

	UFUNCTION()
	void SpawCarrort();

	UFUNCTION()
	void DespawnCarrot(APickup_actor* Carrot_delete);





};
