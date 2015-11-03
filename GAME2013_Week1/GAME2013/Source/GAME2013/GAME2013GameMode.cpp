// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "GAME2013GameMode.h"

AGAME2013GameMode::AGAME2013GameMode(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinder<UBlueprint> CharacterClass;
		FConstructorStatics()
			: CharacterClass(
			TEXT("Blueprint'/Game/MyCharacterBP.MyCharacterBP'")
			)
		{
		}
	};

	static FConstructorStatics ConstructorStatics;

	if (ConstructorStatics.CharacterClass.Object)
	{
		DefaultPawnClass = Cast<UClass>(
			ConstructorStatics.CharacterClass.Object->GeneratedClass);
	}
}