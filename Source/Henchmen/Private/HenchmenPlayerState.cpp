// Fill out your copyright notice in the Description page of Project Settings.


#include "HenchmenPlayerState.h"
#include "Net/UnrealNetwork.h"

void AHenchmenPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AHenchmenPlayerState, Team);
}
