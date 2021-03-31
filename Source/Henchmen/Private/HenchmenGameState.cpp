// Fill out your copyright notice in the Description page of Project Settings.


#include "HenchmenGameState.h"
#include "Net/UnrealNetwork.h"

void AHenchmenGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AHenchmenGameState, LatestEvent);
	DOREPLIFETIME(AHenchmenGameState, WinningTeam);
}
