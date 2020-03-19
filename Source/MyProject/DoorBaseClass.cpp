// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "DoorBaseClass.h"

// Sets default values
ADoorBaseClass::ADoorBaseClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//create components
	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("doorMesh"));
	screen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("screen"));
	enterTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("collisionBox"));
	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parentScene"));
	RootComponent = parent;
	doorMesh->SetupAttachment(parent);
	screen->SetupAttachment(parent);
	enterTrigger->SetupAttachment(screen);

}

// Called when the game starts or when spawned
void ADoorBaseClass::BeginPlay()
{
	Super::BeginPlay();
	//
	targetCharacter = GetWorld()->GetFirstPlayerController()->GetPawn();
	//register collision
	enterTrigger->OnComponentBeginOverlap.AddDynamic(this, &ADoorBaseClass::onOverlapBegin);
}

// Called every frame
void ADoorBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorBaseClass::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("player") && targetDoor != NULL) {
		FVector ActorLocation = targetDoor->GetActorLocation();
		//ActorLocation.Y -= 100.f;
		ActorLocation.X += 100.f;
		FRotator testRotationVector(0.f, 0.f, 0.f);
		// Set the location- this will blindly place the actor at the given location  
		targetCharacter->SetActorLocation(ActorLocation, false);
		targetCharacter->AddControllerYawInput(180);
		targetCharacter->SetActorRotation(testRotationVector, ETeleportType::None);
		//testTargetCharacter -> SetActorLocationAndRotation(ActorLocation, testRotationVector, false, 0, ETeleportType::None);
	}
}

