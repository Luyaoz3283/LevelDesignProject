// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "door.generated.h"


#define GETENUMSTRING(etype, evalue) ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetEnumName((int32)evalue) : FString("Invalid - are you sure enum uses UENUM() macro?") )



UENUM(BlueprintType)
enum doorColorStock
{
	helper,
	red,
	yellow,
	blue,
	green,
	grey
};

UCLASS()
class MYPROJECT_API Adoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Adoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//variables
	
	//GM
	UPROPERTY(BlueprintReadWrite)
		class AmyGM* GM;

	//components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* doorMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* screen;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* enterTrigger;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* parent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class USpotLightComponent* light;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* destination;

	//FUNCTIONS
	UFUNCTION()
		void onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//variables
	
	APawn* targetCharacter;
	int colorIndex;
	TEnumAsByte<doorColorStock> curColor;

	//custom variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		TArray<TEnumAsByte<doorColorStock>> colorList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		UMaterial* yellowMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		UMaterial* blueMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		UMaterial* redMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		UMaterial* greenMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		UMaterial* greyMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		Adoor* targetDoor;
	//camera
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneCaptureComponent2D* viewCaptureCam;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* camParent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTextureRenderTarget2D* renderTex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* renderMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* noDisplayMat;


	//set door color according to curDoor
	void displayColor();
	void switchColor ();
	bool delayDoorStart;
	void projectcameraImage();
	UFUNCTION(BlueprintCallable)
		void turnOn();
	void turnOff();

	
	
};
