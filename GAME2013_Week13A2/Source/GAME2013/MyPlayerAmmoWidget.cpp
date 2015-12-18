// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyPlayerAmmoWidget.h"



FText UMyPlayerAmmoWidget::GetAmmo() const
{
	AMyCharacter* MyCharacter = Cast<AMyCharacter>(GetOwningPlayerPawn());
	return FText::FromString(FString::FromInt(MyCharacter->Data("Ammo")));
}
