// Fill out your copyright notice in the Description page of Project Settings.


#include "door.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SpotLightComponent.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "myGM.h"



// Sets default values
Adoor::Adoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//components
	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("doorMesh"));
	screen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("screen"));
	enterTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("collisionBox"));
	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parentScene"));
	light = CreateDefaultSubobject<USpotLightComponent>(TEXT("light"));
	destination = CreateDefaultSubobject<USceneComponent>(TEXT("destination"));
	//setup hierchy
	viewCaptureCam = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("captureCamera"));
	RootComponent = parent;
	doorMesh->SetupAttachment(parent);
	screen->SetupAttachment(parent);
	enterTrigger->SetupAttachment(screen);
	viewCaptureCam->SetupAttachment(parent);
	light->SetupAttachment(doorMesh);
	destination->SetupAttachment(doorMesh);
	

	enterTrigger->OnComponentBeginOverlap.AddDynamic(this, &Adoor::onOverlapBegin);

	
	
}

// Called when the game starts or when spawned
void Adoor::BeginPlay()
{
	Super::BeginPlay();
	//
	AActor* a = UGameplayStatics::GetActorOfClass(GetWorld(), AmyGM::StaticClass());
	GM = Cast<AmyGM>(a);
	//debug
	if (colorList.Num() == 0) {
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "need to specify door color!");
	}
	else {
		colorIndex = 0;
		curColor = colorList[0];
		projectcameraImage();
	}
	//check door type
	if (directDoor != nullptr) {
		turnOn(false);
	}
	
	
	targetCharacter = GetWorld()->GetFirstPlayerController()->GetPawn();
}

// Called every frame
void Adoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Adoor::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (directDoor != NULL) {
		FVector ActorLocation = directDoor->GetActorLocation();
		FRotator testRotationVector(0.f, 0.f, 0.f);
		// Set the location- this will blindly place the actor at the given location  
		FVector direction = destination->GetComponentLocation() - doorMesh->GetComponentLocation();
		targetCharacter->SetActorLocation(ActorLocation - direction, false);
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
	colorIndex++;
	if (colorIndex >= colorList.Num()) {
		colorIndex = 0;
	}
	curColor = colorList[colorIndex];
	displayColor();
}


void Adoor::projectcameraImage()
{
	viewCaptureCam->TextureTarget = renderTex;
}

void Adoor::turnOn(bool lightOn)
{
	//turn on light if it's direct connect door
	if (lightOn) {
		light->SetVisibility(true, true);
	}
	
	//turn on door color
	colorIndex = 0;
	curColor = colorList[colorIndex];
	displayColor();
}

void Adoor::turnOff(bool lightOn)
{
	if (lightOn) {
		light->SetVisibility(false, false);
	}
	
	doorMesh->SetMaterial(0, greyMaterial);
}



