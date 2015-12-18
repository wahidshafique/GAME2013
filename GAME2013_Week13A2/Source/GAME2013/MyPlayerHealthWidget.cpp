// Fill out your copyright notice in the Description page of Project Settings.

#include "GAME2013.h"
#include "MyPlayerHealthWidget.h"

FText UMyPlayerHealthWidget::GetPlayerHealth() const{
	AMyCharacter* MyCharacter = Cast<AMyCharacter>(GetOwningPlayerPawn());
	return FText::FromString(FString::FromInt(MyCharacter->Data("Health")));
}