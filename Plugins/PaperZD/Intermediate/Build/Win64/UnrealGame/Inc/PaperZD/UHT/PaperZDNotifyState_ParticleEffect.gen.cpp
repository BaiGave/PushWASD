// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDNotifyState_ParticleEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDNotifyState_ParticleEffect() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotifyState();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Class UPaperZDNotifyState_ParticleEffect
void UPaperZDNotifyState_ParticleEffect::StaticRegisterNativesUPaperZDNotifyState_ParticleEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDNotifyState_ParticleEffect);
UClass* Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_NoRegister()
{
	return UPaperZDNotifyState_ParticleEffect::StaticClass();
}
struct Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Spawns a one shot particle effect on a given location around the RenderComponent.\n */" },
		{ "DisplayName", "Timed Particle Effect" },
		{ "HideCategories", "Object UObject" },
		{ "IncludePath", "Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ToolTip", "Spawns a one shot particle effect on a given location around the RenderComponent." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPSTemplates_MetaData[] = {
		{ "Comment", "// The following arrays are used to handle property changes during a state. Because we can't\n// store any stateful data here we can't know which emitter is ours. The best metric we have\n// is an emitter on our Mesh Component with the same template and socket name we have defined.\n// Because these can change at any time we need to track previous versions when we are in an\n// editor build. Refactor when stateful data is possible, tracking our component instead.\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ToolTip", "The following arrays are used to handle property changes during a state. Because we can't\nstore any stateful data here we can't know which emitter is ours. The best metric we have\nis an emitter on our Mesh Component with the same template and socket name we have defined.\nBecause these can change at any time we need to track previous versions when we are in an\neditor build. Refactor when stateful data is possible, tracking our component instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousSocketNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Particle System to Spawn\n" },
		{ "DisplayName", "Particle System" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ToolTip", "Particle System to Spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Location offset from the socket\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ToolTip", "Location offset from the socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Rotation offset from socket\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ToolTip", "Rotation offset from socket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the particle system at\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ToolTip", "Scale to spawn the particle system at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// SocketName to attach to\n" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ToolTip", "SocketName to attach to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyAtEnd_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "DisplayName", "Destroy Immediately" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDNotifyState_ParticleEffect.h" },
		{ "ToolTip", "Whether the particle system should be immediately destroyed at the end of the notify state or be allowed to finish" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousPSTemplates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousPSTemplates;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousSocketNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousSocketNames;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PSTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static void NewProp_bDestroyAtEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyAtEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDNotifyState_ParticleEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PreviousPSTemplates_Inner = { "PreviousPSTemplates", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PreviousPSTemplates = { "PreviousPSTemplates", nullptr, (EPropertyFlags)0x0144000800002010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_ParticleEffect, PreviousPSTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousPSTemplates_MetaData), NewProp_PreviousPSTemplates_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PreviousSocketNames_Inner = { "PreviousSocketNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PreviousSocketNames = { "PreviousSocketNames", nullptr, (EPropertyFlags)0x0040000800002010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_ParticleEffect, PreviousSocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousSocketNames_MetaData), NewProp_PreviousSocketNames_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_ParticleEffect, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PSTemplate_MetaData), NewProp_PSTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_ParticleEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_ParticleEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_ParticleEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDNotifyState_ParticleEffect, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
void Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_bDestroyAtEnd_SetBit(void* Obj)
{
	((UPaperZDNotifyState_ParticleEffect*)Obj)->bDestroyAtEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_bDestroyAtEnd = { "bDestroyAtEnd", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDNotifyState_ParticleEffect), &Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_bDestroyAtEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyAtEnd_MetaData), NewProp_bDestroyAtEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PreviousPSTemplates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PreviousPSTemplates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PreviousSocketNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PreviousSocketNames,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_PSTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::NewProp_bDestroyAtEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperZDAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::ClassParams = {
	&UPaperZDNotifyState_ParticleEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::PropPointers),
	0,
	0x009120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect()
{
	if (!Z_Registration_Info_UClass_UPaperZDNotifyState_ParticleEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDNotifyState_ParticleEffect.OuterSingleton, Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDNotifyState_ParticleEffect.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDNotifyState_ParticleEffect>()
{
	return UPaperZDNotifyState_ParticleEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDNotifyState_ParticleEffect);
UPaperZDNotifyState_ParticleEffect::~UPaperZDNotifyState_ParticleEffect() {}
// End Class UPaperZDNotifyState_ParticleEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDNotifyState_ParticleEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDNotifyState_ParticleEffect, UPaperZDNotifyState_ParticleEffect::StaticClass, TEXT("UPaperZDNotifyState_ParticleEffect"), &Z_Registration_Info_UClass_UPaperZDNotifyState_ParticleEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDNotifyState_ParticleEffect), 3058249405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDNotifyState_ParticleEffect_h_314673509(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDNotifyState_ParticleEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDNotifyState_ParticleEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
