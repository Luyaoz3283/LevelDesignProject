// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RegularGate.generated.h"

UCLASS()
class MYPROJECT_API ARegularGate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARegularGate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* parent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* gateDestination;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		FVector moveUpward;

	//variables
	FVector originalLoc;
	//functions
	void turnOn();
	void turnOff();

};
