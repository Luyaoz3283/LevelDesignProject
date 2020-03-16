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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* doorMesh;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* screen;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* enterTrigger;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* parent;

	UFUNCTION()
		void onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//
	UPROPERTY(EditAnywhere)
		Adoor* targetDoor;

	UPROPERTY(EditAnywhere)
		APawn* targetCharacter;

	//door materials
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TEnumAsByte<doorColorStock>> colorList;
	int colorIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<doorColorStock> curColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* yellowMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* blueMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* redMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* greenMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* greyMaterial;

	
	//set door color according to curDoor
	void displayColor();
	void switchColor ();
	void resetColor();
	void disable();
	bool delayDoorStart;

	//camera
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneCaptureComponent2D* viewCaptureCam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTextureRenderTarget2D* renderTex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* renderMat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* noDisplayMat;
	void projectcameraImage();
};
