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
	offset = CreateDefaultSubobject<USceneComponent>(TEXT("offset"));
	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("doorMesh"));
	screenOffset = CreateDefaultSubobject<USceneComponent>(TEXT("screenOffset"));
	screen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("screen"));
	enterTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("collisionBox"));
	parent = CreateDefaultSubobject<USceneComponent>(TEXT("parentScene"));
	camParent = CreateDefaultSubobject<USceneComponent>(TEXT("camParent"));
	light = CreateDefaultSubobject<USpotLightComponent>(TEXT("light"));
	destination = CreateDefaultSubobject<USceneComponent>(TEXT("destination"));
	//setup hierchy
	viewCaptureCam = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("captureCamera"));
	RootComponent = parent;
	offset->SetupAttachment(parent);
	doorMesh->SetupAttachment(offset);
	screen->SetupAttachment(screenOffset);
	screenOffset->SetupAttachment(parent);
	enterTrigger->SetupAttachment(screenOffset);
	camParent->SetupAttachment(parent);
	viewCaptureCam->SetupAttachment(camParent);
	light->SetupAttachment(offset);
	destination->SetupAttachment(offset);
	enterTrigger->OnComponentBeginOverlap.AddDynamic(this, &Adoor::onOverlapBegin);

	
	
}

// Called when the game starts or when spawned
void Adoor::BeginPlay()
{
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, *GETENUMSTRING("doorColorStock", color1));
	//debug
	if (colorList.Num() == 0) {
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "need to specify door color!");
	}
	else {
		colorIndex = 0;
		curColor = colorList[0];
		projectcameraImage();
	}
	//initilize
	/*if (targetDoor == nullptr) {
		turnOff();
	}*/
	
	AActor* a = UGameplayStatics::GetActorOfClass(GetWorld(), AmyGM::StaticClass());
	GM = Cast<AmyGM>(a);
	targetCharacter = GetWorld()->GetFirstPlayerController()->GetPawn();

	
}

// Called every frame
void Adoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (this->targetDoor!= nullptr && playerClose) {
		//calculate camera turning angle
		/*float a = FVector::DotProduct(targetCharacter->GetActorForwardVector(), this->GetActorForwardVector() * (-1.f));
		FVector b = FVector::CrossProduct(this->GetActorForwardVector(), FVector::UpVector);
		float c = FVector::DotProduct(b, targetCharacter->GetActorForwardVector());
		float d = acos(c) * 180.f / PI;
		angle = acos(a) * 180.F / PI;
		if (d > 90) {
			angle = angle * (-1.f);
		}*/
		//correct
		



		FVector playerDirection = (screen->GetComponentLocation() - targetCharacter->GetActorLocation()).GetSafeNormal();
		float dotProduct = FVector::DotProduct(this->GetActorForwardVector() * (-1.f), playerDirection);
		float rawDegree = acos(dotProduct) * 180.f / PI;
		float relativeToRight = FVector::DotProduct(playerDirection, this->GetActorRightVector());
		float rightDegree = acos(relativeToRight) * 180.f / PI;
		if (rightDegree < 90) {
			rawDegree = rawDegree * (-1.f);
		}
		FRotator e(0, rawDegree, 0);
		targetDoor->camParent->SetRelativeRotation(e);
	}
	//rotate camera
	
	
	
}

void Adoor::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if ((OtherActor->ActorHasTag("player"))&& targetDoor != NULL) {
		FRotator testRotationVector(0.f, 0.f, 0.f);
		// Set the location- this will blindly place the actor at the given location  
		FVector destination1 = targetDoor->GetActorForwardVector() * 100.f + targetDoor->GetActorLocation();
		FVector destination2 = targetDoor->destination->GetComponentLocation();
		targetCharacter->SetActorLocation(destination2, false);
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
		else if (curColor == doorColorStock::grey) {
			doorMesh->SetMaterial(0, greyMaterial);
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

void Adoor::turnOn()
{
	//turn on light
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, this->GetName() + "switch turn off");
	light->SetVisibility(true,true);
	//turn on door color
	colorIndex = 0;
	if (colorList.Num() > 0) {
		curColor = colorList[colorIndex];
	}
	displayColor();
}

void Adoor::turnOff()
{
	light->SetVisibility(false, false);
	doorMesh->SetMaterial(0, greyMaterial);
	screen->SetVisibility(false);
}
void Adoor::updateScreen()
{
	if (targetDoor != nullptr) {
		screen->SetVisibility(true);
		screen->SetMaterial(0, targetDoor->renderMat);
	}
}



