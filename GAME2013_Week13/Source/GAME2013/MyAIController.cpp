// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyAICharacter.h"
#include "MyAIController.h"

AMyAIController::AMyAIController()
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
}

void AMyAIController::Possess(APawn* Pawn)
{
	Super::Possess(Pawn);

	AMyAICharacter* Character = Cast<AMyAICharacter>(Pawn);
	if (Character)
	{
		BlackboardComponent->InitializeBlackboard(*Character->BehaviorTree->BlackboardAsset);
		BehaviorTreeComponent->StartTree(*Character->BehaviorTree);
	}
}