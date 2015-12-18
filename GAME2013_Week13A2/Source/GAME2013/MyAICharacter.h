// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "BehaviorTree/BehaviorTree.h"
#include "MyAICharacter.generated.h"

UCLASS()
class GAME2013_API AMyAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	UBehaviorTree* BehaviorTree;

public:
	// Sets default values for this character's properties
	AMyAICharacter();	
};