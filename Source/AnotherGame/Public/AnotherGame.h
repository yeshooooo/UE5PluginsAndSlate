﻿#pragma once
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FAnotherGameModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

