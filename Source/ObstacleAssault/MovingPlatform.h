// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(1,2,3);

	UPROPERTY(EditAnywhere)
	float MyX = 0;
	
	//*변수 생성 학습*//
	// UPROPERTY(EditAnywhere)
	// int32 MyInt = 99;
	// UPROPERTY(EditAnywhere)
	// float MyFloat = 0.01;
	// UPROPERTY(EditAnywhere)
	// bool MyBoll = true;
	// UPROPERTY(EditAnywhere)
	// int32 Inputa = 2;
	// UPROPERTY(EditAnywhere)
	// int32 Inputb  = 3;
	// UPROPERTY(EditAnywhere)
	// int32 AddInput  = 0;
	// UPROPERTY(EditAnywhere)
	// float Inputaf = 2;
	// UPROPERTY(EditAnywhere)
	// float Inputbf  = 3.1;
	// UPROPERTY(EditAnywhere)
	// float AddInputf  = 0;
};
