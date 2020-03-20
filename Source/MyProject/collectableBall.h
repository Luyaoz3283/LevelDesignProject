// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "switch.h"
#include "collectableBall.generated.h"

UCLASS()
class MYPROJECT_API AcollectableBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AcollectableBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//variables
	UPROPERTY(BlueprintReadWrite)
		bool beingHeld;
	bool onGround;
	APawn* theCharacter;
	FVector origin;
	UPROPERTY(EditAnywhere, Category = "Need To Set")
		FVector downward;
	//component
	
	//actors
	Aswitch* theSwitch;
	UPROPERTY(BlueprintReadWrite)
		class AmyGM* MyGM;
	//components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* ballMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class USphereComponent* ballTrigger;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* parent;

	UFUNCTION()
		void onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void resetLocation();
	void PickedUp();
	UFUNCTION(BlueprintCallable)
		void Dropped();
	void hitGround();



private:
	//variables
	FVector start;
	FVector end;

	
	FHitResult Hit;
	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParams;



};
