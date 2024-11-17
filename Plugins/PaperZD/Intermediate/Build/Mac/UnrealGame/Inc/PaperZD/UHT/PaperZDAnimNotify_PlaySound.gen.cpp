// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDAnimNotify_PlaySound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNotify_PlaySound() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_PlaySound();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Class UPaperZDAnimNotify_PlaySound
void UPaperZDAnimNotify_PlaySound::StaticRegisterNativesUPaperZDAnimNotify_PlaySound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimNotify_PlaySound);
UClass* Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_NoRegister()
{
	return UPaperZDAnimNotify_PlaySound::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Play Sound" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Notifies/PaperZDAnimNotify_PlaySound.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_PlaySound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Sound to Play\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_PlaySound.h" },
		{ "ToolTip", "Sound to Play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Volume Multiplier\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_PlaySound.h" },
		{ "ToolTip", "Volume Multiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Pitch Multiplier\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_PlaySound.h" },
		{ "ToolTip", "Pitch Multiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// If this sound should follow its owner\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_PlaySound.h" },
		{ "ToolTip", "If this sound should follow its owner" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewIgnoreAttenuation_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Should ignore attenuation in the editor and play as a 2D sound?\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_PlaySound.h" },
		{ "ToolTip", "Should ignore attenuation in the editor and play as a 2D sound?" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Socket or bone name to attach sound to\n" },
		{ "EditCondition", "bFollow" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_PlaySound.h" },
		{ "ToolTip", "Socket or bone name to attach sound to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static void NewProp_bFollow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPreviewIgnoreAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewIgnoreAttenuation;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimNotify_PlaySound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_PlaySound, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_PlaySound, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_PlaySound, PitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMultiplier_MetaData), NewProp_PitchMultiplier_MetaData) };
void Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit(void* Obj)
{
	((UPaperZDAnimNotify_PlaySound*)Obj)->bFollow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperZDAnimNotify_PlaySound), &Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollow_MetaData), NewProp_bFollow_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation_SetBit(void* Obj)
{
	((UPaperZDAnimNotify_PlaySound*)Obj)->bPreviewIgnoreAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation = { "bPreviewIgnoreAttenuation", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperZDAnimNotify_PlaySound), &Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewIgnoreAttenuation_MetaData), NewProp_bPreviewIgnoreAttenuation_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_PlaySound, AttachName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachName_MetaData), NewProp_AttachName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_bFollow,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::NewProp_AttachName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::ClassParams = {
	&UPaperZDAnimNotify_PlaySound::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::PropPointers),
	0,
	0x009020A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimNotify_PlaySound()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimNotify_PlaySound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimNotify_PlaySound.OuterSingleton, Z_Construct_UClass_UPaperZDAnimNotify_PlaySound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimNotify_PlaySound.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimNotify_PlaySound>()
{
	return UPaperZDAnimNotify_PlaySound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimNotify_PlaySound);
UPaperZDAnimNotify_PlaySound::~UPaperZDAnimNotify_PlaySound() {}
// End Class UPaperZDAnimNotify_PlaySound

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_PlaySound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimNotify_PlaySound, UPaperZDAnimNotify_PlaySound::StaticClass, TEXT("UPaperZDAnimNotify_PlaySound"), &Z_Registration_Info_UClass_UPaperZDAnimNotify_PlaySound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimNotify_PlaySound), 1126263187U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_PlaySound_h_2739838156(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_PlaySound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_PlaySound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
