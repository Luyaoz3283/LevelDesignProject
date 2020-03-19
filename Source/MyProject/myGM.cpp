// Fill out your copyright notice in the Description page of Project Settings.


#include "myGM.h"
#include "door.h"
#include "myGM.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
// Sets default values
AmyGM::AmyGM()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parentScene"));
	RootComponent = parent;
}

// Called when the game starts or when spawned
void AmyGM::BeginPlay()
{
	Super::BeginPlay();
	delayDoorStart = true;
	//initialization
	if (GetWorld()->GetFirstPlayerController() != NULL) {
		targetCharacter = GetWorld()->GetFirstPlayerController()->GetPawn();
	}
	
}

// Called every frame
void AmyGM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	/*if (delayDoorStart) {
		searchTarget();
		delayDoorStart = false;
	}*/
}

//void AmyGM::searchTarget()
//{
//	int32 doorAmount = curDoorList.Num();
//	for (int i = 0; i < doorAmount; i++) {
//		curDoorList[i]->targetDoor = NULL;
//		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "current door" + this->GetFName().ToString());
//		for (int j = 0; j < doorAmount; j++) {
//			if (curDoorList[i] != curDoorList[j] && curDoorList[i]->curColor == curDoorList[j]->curColor) {
//				curDoorList[i]->targetDoor = curDoorList[j];
//				//get target image
//				curDoorList[i]->screen->SetMaterial(0, curDoorList[i]->targetDoor->renderMat);
//				break;
//			}
//
//		}
//		if (curDoorList[i]->targetDoor == NULL) {
//			curDoorList[i]->screen->SetMaterial(0, curDoorList[i]->noDisplayMat);
//
//		}
//	}
//	
//}

void AmyGM::pressE()
{
	//press switch to change color
	if (curSwitch != nullptr && curSwitch->turnedOn) {
		for (int i = 0; i < curSwitch->controlList.Num(); i++) {
			curSwitch->controlList[i]->switchColor();
			
		}
		curSwitch->searchTarget();	
	}
	//lift ball
	if (curBall != nullptr) {
		//if currently hold, drop
		if (curBall->beingHeld == true) {
			curBall->Dropped();
		}
		//if not hold, pick up
		else {
			//curBall->beingHeld = true;
			curBall->Dropped();
			
		}
	}
	//regular switch
	if (curRegSwitch != nullptr) {
		if (!curRegSwitch->hasTurnedOn()) {
			curRegSwitch->turnOn();
		}
		
	}
}

void AmyGM::setCurSwitch(Aswitch* input)
{
	curSwitch = input;
	
}

void AmyGM::setCurBall(AcollectableBall* input)
{
	curBall = input;
}

void AmyGM::setCurRegSwitch(AregularSwitch* input)
{
	curRegSwitch = input;
}


