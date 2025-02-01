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

private:
	UPROPERTY(EditAnyWhere , Category = "MovingPlatform")
	FVector PlatformVelocity = FVector(100,0,0);
	UPROPERTY(EditAnyWhere , Category = "MovingPlatform")
	float MoveDistance =  100;
	
	FVector StartLocation;

	void MovePlatfrom(float DeltaTime);
	void MoveRoate(float DeltaTime);
	
	/*5일차 플랫폼이동속도 변수 백터값에 다른값은 0으로두고 x값만 값을 넣고 Categoly라는 걸 사용함
	UPROPERTY(EditAnyWhere , Category = "MovingPlatform")
	FVector PlatformVelocity = FVector(100,0,0);
	*/
	
	/*2~3일차 벡터사용 예제
	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(-15120.000000,-2400.000000,3976.000000);

	UPROPERTY(EditAnywhere)
	float MyX = 0;
	*/
	
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
