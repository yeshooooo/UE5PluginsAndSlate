// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PluginAndSlateGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINANDSLATE_API APluginAndSlateGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
	
};
