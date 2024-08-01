// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestActor::BlueprintCallableFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("BlueprintCallableFunction called!"));
}

int32 ATestActor::GetPureFunction() const
{
	return 42;
}

//void ATestActor::ImplementableEventFunction()
//{
//}
//
//void ATestActor::NativeEventFunction()
//{
//}

void ATestActor::NativeEventFunction_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("NativeEventFunction_Implementation called!"));
}
