// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

UGameManager::UGameManager()
{
	DayRounds.Add(1, 5);
	DayRounds.Add(2, 7);
	DayRounds.Add(3, 9);
	DayRounds.Add(4, 10);
	DayRounds.Add(5, 15);
}

void UGameManager::ProgressDay()
{
	CurrentDay++;
}

int UGameManager::GetRoundsCount()
{
	return DayRounds[CurrentDay];
}