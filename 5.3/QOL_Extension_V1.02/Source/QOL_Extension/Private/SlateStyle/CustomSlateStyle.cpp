// Copyright 2023, Kenneth Koo, All rights reserved


#include "SlateStyle/CustomSlateStyle.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateBrush.h"
#include "Math/Vector2D.h"


//Exposing Private Dependencies
FName FQOL_ExtensionStyle::StyleSetName = FName("FQOL_ExtensionStyle");
TSharedPtr<FSlateStyleSet> FQOL_ExtensionStyle::CreatedSlateStyleSet = nullptr;



void FQOL_ExtensionStyle::InitIcons()
{
	if(!CreatedSlateStyleSet.IsValid())
	{
		CreatedSlateStyleSet = CreateSlateStyleSet();
		FSlateStyleRegistry::RegisterSlateStyle(*CreatedSlateStyleSet);
	}
}

TSharedRef<FSlateStyleSet> FQOL_ExtensionStyle::CreateSlateStyleSet()
{
//New Shared Reference
	TSharedRef<FSlateStyleSet> CustomSlateStyleSet = MakeShareable(new FSlateStyleSet(StyleSetName));
	
//Resources Icon Directory
	const FString IconDirectory =
	IPluginManager::Get().FindPlugin(TEXT("QOL_Extension"))->GetBaseDir() / "Resources";
	
//Set Directory
	CustomSlateStyleSet->SetContentRoot(IconDirectory);

// QOL Menu Icon
	const FVector2d Icon16x16 (16.f,16.f);
	CustomSlateStyleSet->Set("LevelEditorToolbar.QOLExtensionMenu",
	new FSlateImageBrush(IconDirectory/"QOL_Menu_Icon01.png",Icon16x16));
	return CustomSlateStyleSet;
}


void FQOL_ExtensionStyle::Shutdown()
{
}

