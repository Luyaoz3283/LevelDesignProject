// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "door.h"
#include "switch.h"
#include "regularSwitch.h"
#include "collectableBall.h"
#include "myGM.generated.h"


UCLASS()
class MYPROJECT_API AmyGM : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AmyGM();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;




	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* parent;
	//list or doors in the same room
	/*UPROPERTY(EditAnywhere)
		TArray<Adoor*> curDoorList;*/
	//search target door for each door in the list
	int delayDoorStart;

	//interact with switch
	bool inSwitchZone;
	UFUNCTION(BlueprintCallable)
		void pressE();
	//variables
	//change: move to private
	Aswitch* curSwitch;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AcollectableBall* curBall;
	AregularSwitch* curRegSwitch;
	//functions
	UFUNCTION(BlueprintCallable)
		void setCurSwitch(Aswitch* input);
	UFUNCTION(BlueprintCallable)
		void setCurBall(AcollectableBall* input);
	UFUNCTION(BlueprintCallable)
		void setCurRegSwitch(AregularSwitch* input);

private:
	//variables
	APawn* targetCharacter;

};
