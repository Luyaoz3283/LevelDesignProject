// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "RegularGate.h"

// Sets default values
ARegularGate::ARegularGate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//create components
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parent"));
	meshOffset = CreateDefaultSubobject<USceneComponent>(TEXT("meshOffset"));
	RootComponent = parent;
	meshOffset->SetupAttachment(parent);
	mesh->SetupAttachment(meshOffset);
}

// Called when the game starts or when spawned
void ARegularGate::BeginPlay()
{
	Super::BeginPlay();
	

	//initialization
	originalLoc = mesh->GetComponentLocation();
}

// Called every frame
void ARegularGate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARegularGate::turnOn()
{
	//mesh->SetWorldLocation(gateDestination->GetComponentLocation(), false);
	//this->SetActorLocation(GetActorLocation() + moveUpward);
}

void ARegularGate::turnOff()
{
	mesh->SetWorldLocation(originalLoc);
}

