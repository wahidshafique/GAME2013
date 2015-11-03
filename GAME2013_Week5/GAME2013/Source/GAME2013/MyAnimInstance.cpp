// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyAnimInstance.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* OwningPawn = TryGetPawnOwner();
	if (OwningPawn)
	{
		Speed = OwningPawn->GetVelocity().Size();
	}
}


