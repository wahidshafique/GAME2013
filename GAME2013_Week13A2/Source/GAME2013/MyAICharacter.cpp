// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyAIController.h"
#include "MyAICharacter.h"


// Sets default values
AMyAICharacter::AMyAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AIControllerClass = AMyAIController::StaticClass();
}