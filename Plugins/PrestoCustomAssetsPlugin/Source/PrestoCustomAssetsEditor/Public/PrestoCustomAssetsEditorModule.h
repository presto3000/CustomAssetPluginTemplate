#pragma once


#include "CoreMinimal.h"
#include "IAssetTypeActions.h"
#include "AssetTypeActions/AssetTypeActions_CustomAsset1.h"
#include "Modules/ModuleManager.h"

class FPrestoCustomAssetsEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static EAssetTypeCategories::Type GetAssetCategory() { return PrestoCustomAssetCategory; }
	void RegisterMenuExtensions();
protected:
	static EAssetTypeCategories::Type PrestoCustomAssetCategory;

private:
	TArray<TSharedRef<IAssetTypeActions>> RegisteredAssetTypeAction;
	TSharedPtr<FAssetTypeActions_CustomAsset1> AssetTypeActions_MyCustomAsset1;
};