// Copyright Epic Games, Inc. All Rights Reserved.

#include "bsdg_demo.h"

#define LOCTEXT_NAMESPACE "Fbsdg_demoModule"

void Fbsdg_demoModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void Fbsdg_demoModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(Fbsdg_demoModule, bsdg_demo)