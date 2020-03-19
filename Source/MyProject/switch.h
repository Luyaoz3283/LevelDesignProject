// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "door.h"
#include "switch.generated.h"



UENUM(BlueprintType)
enum switchColorList
{
	orangeSwitch,
	blueSwitch
};

UENUM(BlueprintType)
enum connectTypeList
{
	both,
	plateOnly,
	switchOnly

};


UCLASS()
class MYPROJECT_API Aswitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aswitch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//GM

	UPROPERTY(BlueprintReadWrite)
		class AmyGM* MyGM;

	//variables
	bool turnedOn;
	bool ballInside;
	FVector ballOrigin;
	//components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* buttonMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* buttonTrigger;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* parent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* plateOffSet;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UPointLightComponent* plateLight;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UPointLightComponent* buttonLight;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* plateMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* plateTrigger;
	
	
	//variables
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		TEnumAsByte<connectTypeList> connectType;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		class AcollectableBall* ball;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		TEnumAsByte<switchColorList> SwitchColor;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		FColor lightColorBlue;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		FColor lightColorOrange;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		TArray<Adoor*> controlList;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		TArray<Aswitch*> needToClose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		UMaterialInstance* blueBallMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Need To Set")
		UMaterialInstance* orangeBallMaterial;
	
	//when press the switch
	UFUNCTION()
		void onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



	//list of doors under control
	

	void turnOn();
	void turnOff();
	void ballReset();
	void searchTarget();

};
