// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Animation/AnimInstance.h"
#include <string>
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class GAME2013_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly) 
	float Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly) 
	float Jump;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool isFlying;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) //superfluous var 1
		bool isSetToWumbo;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)//superfluous var 2
		bool isNotSetToWumbo;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)//superfluous var 3
		bool isCromulent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)//superfluous var 4
		bool isGettingTiring;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)//superfluous var 5
		bool isStatisfyingTheLabCriteria; 
};
