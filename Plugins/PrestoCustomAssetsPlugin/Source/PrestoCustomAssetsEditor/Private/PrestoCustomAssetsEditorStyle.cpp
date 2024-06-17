// presto3000 Chris Pawlowski

#include "PrestoCustomAssetsEditorStyle.h"

#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"
#include "Styling/SlateStyleRegistry.h"

void FPrestoCustomEditorStyle::Register()
{
	FSlateStyleRegistry::RegisterSlateStyle(Get());
}

void FPrestoCustomEditorStyle::Unregister()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(Get());
}

FPrestoCustomEditorStyle::FPrestoCustomEditorStyle() : FSlateStyleSet("PrestoCustomAssetEditorStyle")
{
	static const FVector2D Icon16x16(16.0f, 16.0f);
	static const FVector2D Icon20x20(20.0f, 20.0f);
	static const FVector2D Icon64x64(64.0f, 64.0f);
	static const FVector2D Icon128x128(128.0f, 128.0f);
	
	SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	SetContentRoot(IPluginManager::Get().FindPlugin("PrestoCustomAssetsPlugin")->GetBaseDir() / TEXT("Content"));

	// Asset/Class icons
	Set("ClassIcon.CustomAsset2", new IMAGE_BRUSH_SVG("Icons/CustomPCG_16", Icon16x16));
	Set("ClassThumbnail.CustomAsset2", new IMAGE_BRUSH_SVG("Icons/CustomPCG_64", Icon64x64));
	
}

const FPrestoCustomEditorStyle& FPrestoCustomEditorStyle::Get()
{
	static FPrestoCustomEditorStyle Instance;
	return Instance;
}
