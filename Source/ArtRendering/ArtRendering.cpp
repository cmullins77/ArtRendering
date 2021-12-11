// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArtRendering.h"
#include "Modules/ModuleManager.h"

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, ArtRendering, "ArtRendering" );

//START: Added to Run Custom Shaders
#include "Misc/Paths.h"
#include "ShaderCore.h"

IMPLEMENT_MODULE(FThisModuleAddsaVirtualShaderFolderModule, ArtRendering)

void FThisModuleAddsaVirtualShaderFolderModule::StartupModule()
{
	// Find the static location of the shader folder on your computer
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));

	AddShaderSourceDirectoryMapping(TEXT("/Project"), ShaderDirectory);

}

void FThisModuleAddsaVirtualShaderFolderModule::ShutdownModule()
{
	//If having linking Issues:
	//ResetAllShaderSourceDirectoryMappings();
}
//END
