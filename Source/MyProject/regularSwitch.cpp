// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "RegularGate.h"
#include "myGM.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "regularSwitch.h"

// Sets default values
AregularSwitch::AregularSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create components
	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parent"));
	meshOffset = CreateDefaultSubobject<USceneComponent>(TEXT("offset"));
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("trigger"));
	RootComponent = parent;
	meshOffset->SetupAttachment(parent);
	mesh->SetupAttachment(meshOffset);
	trigger->SetupAttachment(parent);
}

// Called when the game starts or when spawned
void AregularSwitch::BeginPlay()
{
	Super::BeginPlay();
	//register overlap
	trigger->OnComponentBeginOverlap.AddDynamic(this, &AregularSwitch::onOverlapBegin);
	trigger->OnComponentEndOverlap.AddDynamic(this, &AregularSwitch::OnOverlapEnd);
	//initialization
	AActor* a = UGameplayStatics::GetActorOfClass(GetWorld(), AmyGM::StaticClass());
	theGM = Cast<AmyGM>(a);
	
}

// Called every frame
void AregularSwitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AregularSwitch::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//may replace with get player character
	//if (OtherActor->ActorHasTag("player")) {
	//	//chaInside = true;
	//	theGM->setCurRegSwitch(this);
	//	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "player inside reg switch");
	//}
}

void AregularSwitch::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("player")) {
		//chaInside = false;
		theGM->setCurRegSwitch(nullptr);
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "player out reg switch");
	}
}

