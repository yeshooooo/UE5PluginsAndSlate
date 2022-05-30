// Copyright Epic Games, Inc. All Rights Reserved.


#include "PluginAndSlateGameModeBase.h"

#include "AnotherGameInvoker.h"

void APluginAndSlateGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	// UThirdLibInvoker* Lib = NewObject<UThirdLibInvoker>();
	// Lib->InvokeLib();
	UAnotherGameInvoker* Lib = NewObject<UAnotherGameInvoker>();
	Lib->InvokeLib();
	
}
