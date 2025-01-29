// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	UE_LOG(LogTemp,Display,TEXT("Current MoveDistance : %f"),MoveDistance);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	CurrentLocation = CurrentLocation + PlatformVelocity * DeltaTime;

	SetActorLocation(CurrentLocation);

	float DistanceMoved = FVector::Distance(StartLocation,CurrentLocation);

	if(DistanceMoved>MoveDistance)
	{
		float overshoot = DistanceMoved - MoveDistance;
		UE_LOG(LogTemp,Display,TEXT("overShoot : %f"),overshoot);
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MoveDistance;
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;
	}
	/*5일차 델타 타임을이용해서 프레임당 100씩움직이게 바꾸었습니다.
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation = CurrentLocation + PlatformVelocity * DeltaTime;
	*/

	/*4일차 지역변수 생성 및 이동 실험
	FVector LocalVector = MyVector;
	LocalVector.Z  = LocalVector.Z +1;
	*/
	
	/* 3일차 플랫폼 이동
	MyVector.Y = MyVector.Y+1;
	SetActorLocation(MyVector);
	*/
	
	//*2일차 실시간 변수 처리*//
	// AddInput = Inputa + Inputb;
	// AddInputf = Inputaf + Inputbf;
}

