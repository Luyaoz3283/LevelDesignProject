// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "door.h"
#include "switch.generated.h"

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

	UPROPERTY(EditAnywhere)
		class AmyGM* MyGM;


	//components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* switchMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* switchTrigger;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* parent;


	//when press the switch
	UFUNCTION()
		void onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



	//list of doors under control
	UPROPERTY(EditAnywhere)
		TArray<Adoor*> controlList;

	//press switch
	void press();

};
