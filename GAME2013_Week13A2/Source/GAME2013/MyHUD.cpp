// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyHUD.h"

AMyHUD::AMyHUD()
{
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinder<UBlueprint> PlayerNameClass;
		ConstructorHelpers::FObjectFinder<UBlueprint> PlayerAmmoClass;
		ConstructorHelpers::FObjectFinder<UBlueprint> PlayerHealthClass;
		FConstructorStatics()
			: PlayerNameClass(
			TEXT("Blueprint'/Game/ExampleWidget.ExampleWidget'"))
			,
			PlayerAmmoClass(
			TEXT("Blueprint'/Game/AmmoWidget.AmmoWidget'"))
			,
			PlayerHealthClass(
			TEXT("Blueprint'/Game/HealthWidget.HealthWidget'"))
		{
		}
	};

	static FConstructorStatics ConstructorStatics;

	if (ConstructorStatics.PlayerNameClass.Object)
	{
		PlayerNameWidgetClass = Cast<UClass>(
			ConstructorStatics.PlayerNameClass.Object->GeneratedClass);
	}
	//following the same pattern as example..
	if (ConstructorStatics.PlayerAmmoClass.Object)
	{
		PlayerAmmoWidgetClass = Cast<UClass>(
			ConstructorStatics.PlayerAmmoClass.Object->GeneratedClass);
	}
	if (ConstructorStatics.PlayerHealthClass.Object)
	{
		PlayerHealthWidgetClass = Cast<UClass>(
			ConstructorStatics.PlayerHealthClass.Object->GeneratedClass);
	}
}

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	//if (PlayerAmmoWidget != nullptr && PlayerHealthWidget != nullptr && PlayerNameWidget != nullptr){

		PlayerNameWidget = CreateWidget<UMyPlayerNameWidget>(
			GetOwningPlayerController(),
			PlayerNameWidgetClass);
		PlayerNameWidget->AddToViewport(0);

		PlayerAmmoWidget = CreateWidget<UMyPlayerAmmoWidget>(
			GetOwningPlayerController(),
			PlayerAmmoWidgetClass);
		PlayerAmmoWidget->AddToViewport(0);

		PlayerHealthWidget = CreateWidget<UMyPlayerHealthWidget>(
			GetOwningPlayerController(),
			PlayerHealthWidgetClass);
		PlayerHealthWidget->AddToViewport(0);
	//}
}
