// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "myGM.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "collectableBall.h"

// Sets default values
AcollectableBall::AcollectableBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ballMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	ballTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("trigger"));
	RootComponent = ballMesh;
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
	/*ballTrigger->OnComponentBeginOverlap.AddDynamic(this, &AcollectableBall::onOverlapBegin);
	ballTrigger->OnComponentEndOverlap.AddDynamic(this, &AcollectableBall::OnOverlapEnd);*/
	//initialize
	origin = GetActorLocation();
	//assume someone drop the ball at the beginning
	beingHeld = true;
	onGround = false;
	Dropped();
}

// Called every frame
void AcollectableBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if being held, follow players
	//if (beingHeld) {
	//	FVector newLocation = theCharacter->GetActorLocation();
	//	newLocation.X = newLocation.X + 100.f;
	//	this->SetActorLocation(newLocation, false);
	//}
}



void AcollectableBall::resetLocation()
{
	SetActorLocation(origin);
	theSwitch->turnOff();
}

//drop or pick up ball
void AcollectableBall::Dropped()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "ball dropped");
	if (onGround) {
		onGround = false;
	}
	beingHeld = !beingHeld;
	ballMesh->SetSimulatePhysics(beingHeld? false:true);
	ballMesh->SetEnableGravity(beingHeld? false:true);
	ballMesh->SetCollisionEnabled(beingHeld ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
}



//void AcollectableBall::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
//{
//	if (OtherActor->ActorHasTag("player")) {
//		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "out ball range");
//		if (!beingHeld) {
//			MyGM->setCurBall(nullptr);
//		}
//	}
//	
//	
//}

//void AcollectableBall::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	//add: player check
//	if (OtherActor->ActorHasTag("player")) {
//		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "enter ball range");
//		MyGM->setCurBall(this);
//	}
//	
//}

//trash
//void AcollectableBall::hitGround()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "ball hit ground");
//	onGround = true;
//	ballMesh->SetSimulatePhysics(false);
//	ballMesh->SetEnableGravity(false);
//	ballMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
//}

