// Fill out your copyright notice in the Description page of Project Settings.


#include "switch.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/PointLightComponent.h"
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
	plateLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("plateLight"));
	buttonLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("buttonLight"));
	RootComponent = parent;
	//create controller components
	plateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlateMesh"));
	plateTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("PlateTrigger"));
	
	//set components order
	buttonMesh->SetupAttachment(parent);
	
	plateOffSet->SetupAttachment(parent);
	plateMesh->SetupAttachment(plateOffSet);
	plateLight->SetupAttachment(plateOffSet);
	buttonTrigger->SetupAttachment(buttonMesh);
	plateTrigger->SetupAttachment(plateOffSet);
	buttonLight->SetupAttachment(buttonMesh);
	
	
	
}

// Called when the game starts or when spawned
void Aswitch::BeginPlay()
{
	Super::BeginPlay();
	//register to overlap event
	buttonTrigger->OnComponentBeginOverlap.AddDynamic(this, &Aswitch::onOverlapBegin);
	buttonTrigger->OnComponentEndOverlap.AddDynamic(this, &Aswitch::OnOverlapEnd);
	plateTrigger->OnComponentBeginOverlap.AddDynamic(this, &Aswitch::onOverlapBegin);
	plateTrigger->OnComponentEndOverlap.AddDynamic(this, &Aswitch::OnOverlapEnd);

	//debug
	if (ball == nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "please specify associated ball:" + this->GetFName().ToString());
	}
	else {
		//create ball
		ball->theSwitch = this;
		ballOrigin = ball->GetActorLocation();
		switch (SwitchColor)
		{
		case switchColorList::blueSwitch:
			ball->ballMesh->SetMaterial(0, blueBallMaterial);
			break;
		case switchColorList::orangeSwitch:
			ball->ballMesh->SetMaterial(0, orangeBallMaterial);
			break;
		}
	}
	//initialize color and material
	switch (SwitchColor)
	{
	case switchColorList::blueSwitch:
		//change plate light
		plateLight->LightColor = lightColorBlue;
		buttonLight->LightColor = lightColorBlue;
		//change door light
		for (auto& compo : controlList) {
			compo->light->LightColor = lightColorBlue;
		}
		break;
	case switchColorList::orangeSwitch:
		plateLight->LightColor = lightColorOrange;
		buttonLight->LightColor = lightColorOrange;
		for (auto& compo : controlList) {
			compo->light->LightColor = lightColorOrange;
		}
		break;
		//switch only
	case switchColorList::purpleSwitch:
		plateLight->LightColor = lightColorPurple;
		buttonLight->LightColor = lightColorPurple;
		for (auto& compo : controlList) {
			compo->light->LightColor = lightColorPurple;
		}
		break;
	}

	
	
	//initialize
	turnedOn = false;
	ballInside = false;
	


	//if plate only:
	if (connectType == connectTypeList::plateOnly) {
		buttonMesh->SetVisibility(false);
		turnOff();
		
	}
	if (connectType == connectTypeList::both) {
		turnOff();
	}
	//turrn on at the beginning and never turn off
	if (connectType == connectTypeList::switchOnly) {
		plateMesh->SetVisibility(false);
		turnOn();
	}
	
	//set plate color
	switch (SwitchColor)
	{
	case switchColorList::blueSwitch:
		plateMesh->SetMaterial(0, blueBallMaterial);
		break;
	case switchColorList::orangeSwitch:
		plateMesh->SetMaterial(0, orangeBallMaterial);
		break;
	}
	
	
	
}

// Called every frame
void Aswitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (ball != nullptr && ballInside && ball->beingHeld == false && turnedOn == false) {
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
	//turn on plate light if it is not a direct connected doors
	plateLight->SetVisibility(true, true);
	buttonLight->SetVisibility(true, true);
	searchTarget();
	//close linked switch
	for (auto& compo : needToClose) {
		compo->ballReset();
		compo->turnOff();
		
	}
}

void Aswitch::turnOff()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "switch turn off");
	turnedOn = false;
	//turn off door
	for (int i = 0; i < controlList.Num(); i++) {
		controlList[i]->turnOff();
	}
	//turn off plate light
	plateLight->SetVisibility(false, false);
	buttonLight->SetVisibility(false, false);
	
}

void Aswitch::ballReset()
{
	if (ball != nullptr) {
		ball->SetActorLocation(ballOrigin);
	}
	
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

