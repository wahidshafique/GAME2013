// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyAnimInstance.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ACharacter* OwningPawn = Cast<ACharacter>(TryGetPawnOwner());
	//const auto MovementComp = OwningPawn->GetMovementComponent(); 
	if (OwningPawn) {
		Speed = OwningPawn->GetVelocity().Size();
		Jump = OwningPawn->GetVelocity().Z;
		isFlying = OwningPawn->CharacterMovement->IsFalling();
	}
}


