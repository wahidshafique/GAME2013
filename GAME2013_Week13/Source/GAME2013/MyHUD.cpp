// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyHUD.h"

AMyHUD::AMyHUD()
{
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinder<UBlueprint> PlayerNameClass;
		FConstructorStatics()
			: PlayerNameClass(
			TEXT("Blueprint'/Game/ExampleWidget.ExampleWidget'")
			)
		{
		}
	};

	static FConstructorStatics ConstructorStatics;

	if (ConstructorStatics.PlayerNameClass.Object)
	{
		PlayerNameWidgetClass = Cast<UClass>(
			ConstructorStatics.PlayerNameClass.Object->GeneratedClass);
	}
}

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	PlayerNameWidget = CreateWidget<UMyPlayerNameWidget>(
		GetOwningPlayerController(),
		PlayerNameWidgetClass
		);
	PlayerNameWidget->AddToViewport(0);
}