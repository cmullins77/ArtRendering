// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

//START: Added to Run Custom Shaders
#include "Modules/ModuleManager.h"

class FThisModuleAddsaVirtualShaderFolderModule
	: public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
//END