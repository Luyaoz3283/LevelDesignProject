// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "myGM.h"
#include "collectableBall.h"

// Sets default values
AcollectableBall::AcollectableBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ballMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	ballTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("trigger"));
	//parent = CreateDefaultSubobject<USceneComponent>(TEXT("parentScene"));
	RootComponent = ballMesh;

	//ballMesh->SetupAttachment(ballMesh);
	ballTrigger->SetupAttachment(ballMesh);
	

}

// Called when the game starts or when spawned
void AcollectableBall::BeginPlay()
{
	Super::BeginPlay();
	//
	beingHeld = false;
	//get character
	if (GetWorld()->GetFirstPlayerController() != NULL) {
		theCharacter = GetWorld()->GetFirstPlayerController()->GetPawn();
	}
	
	//
	ballTrigger->OnComponentBeginOverlap.AddDynamic(this, &AcollectableBall::onOverlapBegin);
	//ballTrigger->OnComponentBeginOverlap.AddDynamic(this, &AcollectableBall:onOverlapBegin);
	ballTrigger->OnComponentEndOverlap.AddDynamic(this, &AcollectableBall::OnOverlapEnd);
	//initialize
	origin = GetActorLocation();
}

// Called every frame
void AcollectableBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if being held, follow players
	if (beingHeld) {
		FVector newLocation = theCharacter->GetActorLocation();
		newLocation.X = newLocation.X + 100.f;
		this->SetActorLocation(newLocation, false);
	}
}

void AcollectableBall::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	MyGM->setCurBall(this);
}

void AcollectableBall::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!beingHeld) {
		MyGM->setCurBall(nullptr);
	}
	
}

void AcollectableBall::resetLocation()
{
	SetActorLocation(origin);
	theSwitch->turnOff();
}

void AcollectableBall::PickedUp()
{
}

//drop or pick up ball
void AcollectableBall::Dropped()
{
	beingHeld = !beingHeld;
	ballMesh->SetSimulatePhysics(beingHeld? false:true);
	ballMesh->SetEnableGravity(beingHeld? false:true);
}

