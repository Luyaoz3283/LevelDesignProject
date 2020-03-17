// Fill out your copyright notice in the Description page of Project Settings.


#include "door.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/Engine.h"
#include "myGM.h"



// Sets default values
Adoor::Adoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create collision trigger
	//collisionTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("collisionTrigger"));
	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("doorMesh"));
	screen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("screen"));
	enterTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("collisionBox"));
	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parentScene"));
	//camera
	viewCaptureCam = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("captureCamera"));
	RootComponent = parent;
	doorMesh->SetupAttachment(parent);
	screen->SetupAttachment(parent);
	enterTrigger->SetupAttachment(screen);
	viewCaptureCam->SetupAttachment(parent);
	

	enterTrigger->OnComponentBeginOverlap.AddDynamic(this, &Adoor::onOverlapBegin);

	
	
}

// Called when the game starts or when spawned
void Adoor::BeginPlay()
{
	Super::BeginPlay();
	//door initialization 
	//
	disable();
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, *GETENUMSTRING("doorColorStock", color1));
	delayDoorStart = true;
	//project camera image to texture
	projectcameraImage();
	//may delete
	colorIndex = 0;
	curColor = colorList[0];
	
	
	
	
}

// Called every frame
void Adoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//delay start search
	if (delayDoorStart) {
		GM->searchTarget();
		delayDoorStart = false;
	}

}

void Adoor::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "test successful");
	if (targetDoor != NULL) {
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

void Adoor::displayColor()
{
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "set color");
	if (curColor != NULL) {
		if (curColor == doorColorStock::yellow) {
			doorMesh->SetMaterial(0, yellowMaterial);
		}
		else if (curColor == doorColorStock::blue) {
			doorMesh->SetMaterial(0, blueMaterial);
		}
		else if (curColor == doorColorStock::red) {
			doorMesh->SetMaterial(0, redMaterial);
		}
		else if (curColor == doorColorStock::green) {
			doorMesh->SetMaterial(0, greenMaterial);
		}
	}
}


void Adoor::switchColor()
{
	/*if (curColor == color1) {
		curColor = color2;
	}
	else if (curColor == color2) {
		curColor = color3;
	}
	else if (curColor == color3) {
		curColor = color4;
	}
	else if (curColor == color4) {
		curColor = color1;
	}*/
	colorIndex++;
	if (colorIndex >= colorList.Num()) {
		colorIndex = 0;
	}
	curColor = colorList[colorIndex];
	displayColor();
}

void Adoor::resetColor()
{
	colorIndex = 0;
	curColor = colorList[colorIndex];
	displayColor();
}

void Adoor::disable()
{
	doorMesh->SetMaterial(0, greyMaterial);
}

void Adoor::projectcameraImage()
{
	viewCaptureCam->TextureTarget = renderTex;
}



