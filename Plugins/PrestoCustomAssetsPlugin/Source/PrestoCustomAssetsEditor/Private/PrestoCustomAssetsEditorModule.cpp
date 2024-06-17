
#include "PrestoCustomAssetsEditorModule.h"

#include "EdGraphUtilities.h"
#include "PrestoCustomAssetsEditorStyle.h"
#include "DetailCustomizations/CustomAssetDetailCustomization.h"
#include "Styling/SlateStyleRegistry.h"


EAssetTypeCategories::Type FPrestoCustomAssetsEditorModule::PrestoCustomAssetCategory;
#define LOCTEXT_NAMESPACE "FPrestoCustomAssetsEditorModule"

void FPrestoCustomAssetsEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	// Register the custom advanced asset editor
	FPrestoCustomEditorStyle::Register();
	
	FPropertyEditorModule& PropertyEditor = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyEditor.RegisterCustomClassLayout("CustomAsset1", FOnGetDetailCustomizationInstance::CreateStatic(&CustomAssetDetailCustomization::MakeInstance));
	PropertyEditor.NotifyCustomizationModuleChanged();
	
	AssetTypeActions_MyCustomAsset1 = MakeShared<FAssetTypeActions_CustomAsset1>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(AssetTypeActions_MyCustomAsset1.ToSharedRef());

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	PrestoCustomAssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("PrestoCustomAssets")), LOCTEXT("PrestoCustomAssets", "Presto Custom Assets"));

	//UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FPrestoCustomAssetsEditorModule::RegisterMenuExtensions));
	
}

void FPrestoCustomAssetsEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	if (FPropertyEditorModule* PropertyModule = FModuleManager::GetModulePtr<FPropertyEditorModule>("PropertyEditor"))
	{
		PropertyModule->UnregisterCustomClassLayout("CustomAsset1");
	}

	FPrestoCustomEditorStyle::Unregister();
}

void FPrestoCustomAssetsEditorModule::RegisterMenuExtensions()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPrestoCustomAssetsEditorModule, PrestoCustomAssetsEditorModule)