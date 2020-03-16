// Fill out your copyright notice in the Description page of Project Settings.


#include "switch.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "collectableBall.h"
#include "Components/SceneComponent.h"
#include "myGM.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

// Sets default values
Aswitch::Aswitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create components
	buttonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("buttonMesh"));
	buttonTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("buttonTrigger"));
	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parentScene"));
	RootComponent = parent;
	//create controller components
	controllerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("controllerMesh"));
	controllerTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("controllerTrigger"));
	
	//set components order
	buttonMesh->SetupAttachment(parent);
	controllerMesh->SetupAttachment(parent);
	buttonTrigger->SetupAttachment(buttonMesh);
	controllerTrigger->SetupAttachment(controllerMesh);
	
	
	
}

// Called when the game starts or when spawned
void Aswitch::BeginPlay()
{
	Super::BeginPlay();
	//create ball
	ball->theSwitch = this;
	//register to overlap event
	buttonTrigger->OnComponentBeginOverlap.AddDynamic(this, &Aswitch::onOverlapBegin);
	buttonTrigger->OnComponentEndOverlap.AddDynamic(this, &Aswitch::OnOverlapEnd);
	controllerTrigger->OnComponentBeginOverlap.AddDynamic(this, &Aswitch::onOverlapBegin);
	controllerTrigger->OnComponentEndOverlap.AddDynamic(this, &Aswitch::OnOverlapEnd);
	//initialize
	turnedOn = false;
	ballInside = false;
	//get GM
	//UWorld* World = GEngine->GetWorldContexts()[0].World();
	//MyGM = UGameplayStatics::GetActorOfClass(World, TSubclassOf<AmyGM> myGM);
	
}

// Called every frame
void Aswitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ballInside && ball->beingHeld == false && turnedOn == false) {
		turnOn();
		
	}
}

void Aswitch::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "begin");
	//switch color
	if (OverlappedComp->ComponentHasTag("button")) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "button");
		MyGM->setCurSwitch(this);
	}
	//if ball drop into the container, turn on doors
	if (OverlappedComp->ComponentHasTag("controller") && OtherActor->ActorHasTag("ball") && turnedOn == false && OtherActor == ball) {
		ballInside = true;
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "ball inside");
	}
	
	//press();
}

void Aswitch::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "end");
	
	if (OverlappedComp->ComponentHasTag("button")) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "button");
		MyGM->setCurSwitch(nullptr);
	}
	//if ball disappear from the container -> turn off
	if (OverlappedComp->ComponentHasTag("controller") && OtherActor->ActorHasTag("ball") && OtherActor == ball) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "ball out");
		
		turnOff();

	}
}

//when press, switch color of the door being controlled
void Aswitch::press()
{
	
}

void Aswitch::turnOn()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "turn on");
	turnedOn = true;
	//turn on light
	for (int i = 0; i < controlList.Num(); i++) {
		controlList[i]->resetColor();
	}
}

void Aswitch::turnOff()
{
	ballInside = false;
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "turn off");
	turnedOn = false;
	//turn off light
	for (int i = 0; i < controlList.Num(); i++) {
		controlList[i]->disable();
	}
}

