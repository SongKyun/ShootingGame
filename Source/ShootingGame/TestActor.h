// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS(Blueprintable, BlueprintType)
class SHOOTINGGAME_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// ��� ����Ʈ�� ȣ�� �����ϰ� ����
	UFUNCTION(BlueprintCallable, Category = "Example")
	void BlueprintCallableFunction();

	// ��� ����Ʈ���� ���� �Լ��� ȣ�� ���� - ���¸� �������� ����
	UFUNCTION(BlueprintPure, Category = "Example")
	int32 GetPureFunction() const;

	// ��� ����Ʈ���� ����(�Ǵ�X) �̺�Ʈ -> ���� �ʼ�, �ؾ��ϴ�
	// C++ Ŭ������ , ��� ����Ʈ�� ������ �������̽� ����� ���� �ʹ�.
	UFUNCTION(BlueprintImplementableEvent, Category = "Example")
	void ImplementableEventFunction();

	// �������Ʈ���� C++ �⺻ ������ �����ϰ�, �������Ʈ���� ������ ����
	// �������Ʈ���� ������ ���ϸ�, C++ �������� ����
	UFUNCTION(BlueprintNativeEvent, Category = "Example")
	void NativeEventFunction();
	virtual void NativeEventFunction_Implementation();
};
