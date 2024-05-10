// presto3000 Chris Pawlowski


#include "AssetTypeActions/AssetTypeActions_CustomAsset1.h"

#include "PrestoCustomAssetsEditorModule.h"
#include "CustomAssets/CustomAsset1.h"


UClass* FAssetTypeActions_CustomAsset1::GetSupportedClass() const
{
	return UCustomAsset1::StaticClass(); // Replace with your actual asset class
}

FText FAssetTypeActions_CustomAsset1::GetName() const
{
	//return NSLOCTEXT("CustomAsset1", "AssetTypeActions_CustomAsset1", "My Custom CustomAsset1");
	return INVTEXT("CustomAsset1");
}


uint32 FAssetTypeActions_CustomAsset1::GetCategories()
{
	return FPrestoCustomAssetsEditorModule::GetAssetCategory();
}

FColor FAssetTypeActions_CustomAsset1::GetTypeColor() const
{
	return FColor::Black;
}
