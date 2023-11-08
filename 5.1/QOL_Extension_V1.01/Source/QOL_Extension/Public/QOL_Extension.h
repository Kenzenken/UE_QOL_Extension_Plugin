// Copyright 2023, Kenneth Koo, All rights reserved

#pragma once

#include "CoreMinimal.h"


class FQOL_ExtensionModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

#pragma region EditorToolbarMenuExtension
	
public:
	
	void InitEditorToolbarMenuExtension();
	void RegisterModule();
	void OnToolbarMenuExtensionButtonClicked();

#pragma endregion
	
#pragma region Actor Functions
	//Get Selected Actors
	TArray<AActor*> GetSelectedActors();
#pragma endregion
	
	
};



