// Fill out your copyright notice in the Description page of Project Settings.


#include "switch.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

#include "Components/SceneComponent.h"
#include "myGM.h"
#include "Engine/Engine.h"

// Sets default values
Aswitch::Aswitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create components
	switchMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("switchMesh"));
	switchTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("switchTrigger"));
	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parentScene"));
	RootComponent = parent;

	switchMesh->SetupAttachment(parent);
	switchTrigger->SetupAttachment(parent);
	
	
	
}

// Called when the game starts or when spawned
void Aswitch::BeginPlay()
{
	Super::BeginPlay();
	switchTrigger->OnComponentBeginOverlap.AddDynamic(this, &Aswitch::onOverlapBegin);
	switchTrigger->OnComponentEndOverlap.AddDynamic(this, &Aswitch::OnOverlapEnd);
	
}

// Called every frame
void Aswitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Aswitch::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "begin");
	MyGM->setCurSwitch(this);
	//press();
}

void Aswitch::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "end");
	MyGM->setCurSwitch(nullptr);
}

//when press, switch color of the door being controlled
void Aswitch::press()
{
	
}

