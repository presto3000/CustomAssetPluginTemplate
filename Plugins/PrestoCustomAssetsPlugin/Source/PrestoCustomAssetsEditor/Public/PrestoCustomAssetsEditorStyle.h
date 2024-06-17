// presto3000 Chris Pawlowski

#pragma once

#include "Styling/SlateStyle.h"

class FPrestoCustomEditorStyle : public FSlateStyleSet
{
public:
	static void Register();
	static void Unregister();

	static const FPrestoCustomEditorStyle& Get();

private:	
	FPrestoCustomEditorStyle();
};
