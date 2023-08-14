// Copyright 2023, Kenneth Koo, All rights reserved
#pragma once

#include "Styling/SlateStyle.h"

class FQOL_ExtensionStyle
{
public:
	static void InitIcons();
	static void Shutdown();
	
private:
	static FName StyleSetName;
	static TSharedRef<FSlateStyleSet> CreateSlateStyleSet();
	static TSharedPtr<FSlateStyleSet> CreatedSlateStyleSet;

public:
	static FName GetStyleSetName(){return StyleSetName;}
};