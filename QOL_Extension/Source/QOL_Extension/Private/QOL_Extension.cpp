// Copyright 2023, Kenneth Koo, All rights reserved

#include "QOL_Extension.h"

#include "Selection.h"
#include "ToolMenus.h"
#include "ToolMenuContext.h"
#include "QOL_Extension/Public/DebugHeader.h"
#include "SlateStyle/CustomSlateStyle.h"
#include "Styling/SlateTypes.h"
#include "EditorUtilityWidget/QOL_ExtensionWidget.h"
#include "Editor/EditorEngine.h"
#include "GameFramework/Actor.h"

#define LOCTEXT_NAMESPACE "FQOL_ExtensionModule"

void FQOL_ExtensionModule::StartupModule()
{
	FQOL_ExtensionStyle::InitIcons();
	InitEditorToolbarMenuExtension();
}

void FQOL_ExtensionModule::ShutdownModule()
{
	FGlobalTabmanager::Get()->UnregisterAllTabSpawners();
	FQOL_ExtensionStyle::Shutdown();
}


#pragma endregion 

#pragma region EditorToolbarMenuExtension

void FQOL_ExtensionModule::InitEditorToolbarMenuExtension()
{
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FQOL_ExtensionModule::RegisterModule));
}

void FQOL_ExtensionModule::RegisterModule()
{
	// ** Add Section to Level Editor Tool Bar
	FToolMenuOwnerScoped OwnerScoped(this);
	UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
	FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("QOLExtension");
	{
		// Adding a New item for Level Editor Tool Bar
		Section.AddSeparator(FName("MyToolSeparator"));
		
		const FToolMenuEntry ActionsEntry = FToolMenuEntry::InitToolBarButton(
			"QOLExtensionButton",
			FUIAction(
				FExecuteAction::CreateRaw(this, &FQOL_ExtensionModule::OnToolbarMenuExtensionButtonClicked )/** CreateLambda or CreateRaw, this is the actual code that the button click executes. */
			),
			LOCTEXT("QOLExtensionButtonAction", "Runs QOL Extension Window"),
			LOCTEXT("OLExtensionButtonTooltip", "Opens QOL Extension Window"),
			FSlateIcon(FQOL_ExtensionStyle::GetStyleSetName(), "LevelEditorToolbar.QOLExtensionMenu" ) /** Slate Icon Browser is good for this. */
		);
		
		Section.AddEntry(ActionsEntry);
	}
}

void FQOL_ExtensionModule::OnToolbarMenuExtensionButtonClicked()
{
	UQOL_ExtensionWidget::StartWidget();
	DebugHeader::PrintLog(TEXT("Toolbar Menu Extension Button is Clicked Successfully"));
}



#pragma endregion 

#pragma region Actor Functions
TArray<AActor*> FQOL_ExtensionModule::GetSelectedActors()
{
	//Get reference to Unreal Editor
	const UEditorEngine* Editor  = Cast<UEditorEngine>(GEngine);

	//Collision Checks
	if(!Editor)
	{
		return TArray<AActor*>();
	}
	
	//Get Selected Actors TArray
	TArray<AActor*> SelectedActors;
	GEditor->GetSelectedActors()->GetSelectedObjects(SelectedActors);
	
	if(SelectedActors.Num()<=0)
	{
		return TArray<AActor*>();
	}
	
	return SelectedActors;
	
}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FQOL_ExtensionModule, QOL_Extension)