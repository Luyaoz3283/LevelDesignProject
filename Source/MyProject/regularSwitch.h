// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RegularGate.h"
#include "regularSwitch.generated.h"

UCLASS()
class MYPROJECT_API AregularSwitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AregularSwitch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	//components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* parent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* trigger;

	//variables
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		TArray<ARegularGate*> gateOpen;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		TArray<ARegularGate*> gateClose;
	UPROPERTY(BlueprintReadWrite)
		class AmyGM* theGM;


	//functions
	void turnOn();
	void turnOff();
	bool hasTurnedOn();	
	UFUNCTION()
		void onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	//variables
	//bool chaInside;
	bool turnedOn;

};
