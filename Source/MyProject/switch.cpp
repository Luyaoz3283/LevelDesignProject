// Fill out your copyright notice in the Description page of Project Settings.


#include "switch.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SpotLightComponent.h"
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
	plateOffSet = CreateDefaultSubobject<USceneComponent>(TEXT("plateOffSet"));
	light = CreateDefaultSubobject<USpotLightComponent>(TEXT("light"));
	RootComponent = parent;
	//create controller components
	plateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlateMesh"));
	plateTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("PlateTrigger"));
	
	//set components order
	buttonMesh->SetupAttachment(parent);
	
	plateOffSet->SetupAttachment(parent);
	plateMesh->SetupAttachment(plateOffSet);
	light->SetupAttachment(plateOffSet);
	buttonTrigger->SetupAttachment(buttonMesh);
	plateTrigger->SetupAttachment(plateOffSet);
	
	
	
}

// Called when the game starts or when spawned
void Aswitch::BeginPlay()
{
	Super::BeginPlay();
	//debug
	if (ball == nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "please specify associated ball:" + ball->GetFName().ToString());
	}


	//create ball
	ball->theSwitch = this;
	//register to overlap event
	buttonTrigger->OnComponentBeginOverlap.AddDynamic(this, &Aswitch::onOverlapBegin);
	buttonTrigger->OnComponentEndOverlap.AddDynamic(this, &Aswitch::OnOverlapEnd);
	plateTrigger->OnComponentBeginOverlap.AddDynamic(this, &Aswitch::onOverlapBegin);
	plateTrigger->OnComponentEndOverlap.AddDynamic(this, &Aswitch::OnOverlapEnd);
	//initialize
	turnedOn = false;
	ballInside = false;
	//initialize color and material
	switch (SwitchColor)
	{
	case switchColorList::blueSwitch:
		//change plate light
		light->LightColor = lightColorBlue;
		//change door light
		for (auto& compo : controlList) {
			compo->light->LightColor = lightColorBlue;
		}
		break;
	case switchColorList::orangeSwitch:
		light->LightColor = lightColorOrange;
		for (auto& compo : controlList) {
			compo->light->LightColor = lightColorOrange;
		}
		break;
	}
	
	
	
	
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
	
	//update curSwitch when player enters
	if (OverlappedComp->ComponentHasTag("button") && OtherActor->ActorHasTag("player")) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "player enter switch");
		MyGM->setCurSwitch(this);
	}
	//if ball drop into the container, turn on doors
	if (OverlappedComp->ComponentHasTag("plate") &&  OtherActor == ball && turnedOn == false) {
		ballInside = true;
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "ball inside plate");
	}
	
	//press();
}

void Aswitch::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
	//update curSwitch when player leaves
	if (OverlappedComp->ComponentHasTag("button") && OtherActor->ActorHasTag("player")) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "player out switch");
		MyGM->setCurSwitch(nullptr);
	}
	//if ball disappear from the container -> turn off
	if (OverlappedComp->ComponentHasTag("plate") && OtherActor == ball && turnedOn == true) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "ball out plate");
		ballInside = false;
		turnOff();
	}
}


void Aswitch::turnOn()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "switch turn on");
	turnedOn = true;
	//turn on door
	for (int i = 0; i < controlList.Num(); i++) {
		controlList[i]->turnOn();
	}
	//turn on light
	light->SetVisibility(true,true);
	searchTarget();
}

void Aswitch::turnOff()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "switch turn off");
	turnedOn = false;
	//turn off door
	for (int i = 0; i < controlList.Num(); i++) {
		controlList[i]->turnOff();
	}
	//turn off light
	light->SetVisibility(false, false);
}

void Aswitch::searchTarget()
{
	for (int i = 0; i < controlList.Num(); i++) {
		controlList[i]->targetDoor = NULL;
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "current door" + this->GetFName().ToString());
		for (int j = 0; j < controlList.Num(); j++) {
			if (controlList[i] != controlList[j] && controlList[i]->curColor == controlList[j]->curColor) {
				controlList[i]->targetDoor = controlList[j];
				//get target image
				//controlList[i]->screen->SetMaterial(0, controlList[i]->targetDoor->renderMat);
				break;
			}

		}
		/*if (controlList[i]->targetDoor == NULL) {
			controlList[i]->screen->SetMaterial(0, controlList[i]->noDisplayMat);

		}*/
	}
}

