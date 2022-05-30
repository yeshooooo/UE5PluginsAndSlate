// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnotherGameInvoker.generated.h"

/**
 * 
 */
UCLASS()
class ANOTHERGAME_API UAnotherGameInvoker : public UObject
{
	GENERATED_BODY()
public:
    void InvokeLib();
};


