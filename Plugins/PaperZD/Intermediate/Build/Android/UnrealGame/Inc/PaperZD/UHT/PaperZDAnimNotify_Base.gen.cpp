// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDAnimNotify_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNotify_Base() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin Class UPaperZDAnimNotify_Base Function GetDisplayName
struct PaperZDAnimNotify_Base_eventGetDisplayName_Parms
{
	FName ReturnValue;
};
static FName NAME_UPaperZDAnimNotify_Base_GetDisplayName = FName(TEXT("GetDisplayName"));
FName UPaperZDAnimNotify_Base::GetDisplayName() const
{
	PaperZDAnimNotify_Base_eventGetDisplayName_Parms Parms;
	const_cast<UPaperZDAnimNotify_Base*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPaperZDAnimNotify_Base_GetDisplayName),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Notify" },
		{ "Comment", "/**\n\x09 * Obtain the name to be displayed on the editor's detail's panel\n\x09 */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Obtain the name to be displayed on the editor's detail's panel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDAnimNotify_Base_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimNotify_Base, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::PropPointers), sizeof(PaperZDAnimNotify_Base_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(PaperZDAnimNotify_Base_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperZDAnimNotify_Base::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDisplayName_Implementation();
	P_NATIVE_END;
}
// End Class UPaperZDAnimNotify_Base Function GetDisplayName

// Begin Class UPaperZDAnimNotify_Base
void UPaperZDAnimNotify_Base::StaticRegisterNativesUPaperZDAnimNotify_Base()
{
	UClass* Class = UPaperZDAnimNotify_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayName", &UPaperZDAnimNotify_Base::execGetDisplayName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimNotify_Base);
UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister()
{
	return UPaperZDAnimNotify_Base::StaticClass();
}
struct Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all the plugin's notifies.\n */" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Notifies/PaperZDAnimNotify_Base.h" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Base class for all the plugin's notifies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Comment", "/* Playback time that triggers this event. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Playback time that triggers this event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/* Friendly name for the notify. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Friendly name for the notify." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/* Color of the Notify. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Color of the Notify." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[] = {
		{ "Comment", "/* Index of the track in which the notify is stored. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Index of the track in which the notify is stored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceRenderComponent_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/* The render component currently used by the AnimSequence that owns this notify. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "The render component currently used by the AnimSequence that owns this notify." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFireInEditor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Whether this notify instance should fire in animation editors */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Whether this notify instance should fire in animation editors" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SequenceRenderComponent;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShouldFireInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFireInEditor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName, "GetDisplayName" }, // 2224917265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimNotify_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_Base, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_Base, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_Base, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_Base, TrackIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackIndex_MetaData), NewProp_TrackIndex_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_SequenceRenderComponent = { "SequenceRenderComponent", nullptr, (EPropertyFlags)0x001400000008201c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDAnimNotify_Base, SequenceRenderComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceRenderComponent_MetaData), NewProp_SequenceRenderComponent_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor_SetBit(void* Obj)
{
	((UPaperZDAnimNotify_Base*)Obj)->bShouldFireInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor = { "bShouldFireInEditor", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPaperZDAnimNotify_Base), &Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldFireInEditor_MetaData), NewProp_bShouldFireInEditor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_TrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_SequenceRenderComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::ClassParams = {
	&UPaperZDAnimNotify_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::PropPointers),
	0,
	0x009020A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base()
{
	if (!Z_Registration_Info_UClass_UPaperZDAnimNotify_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimNotify_Base.OuterSingleton, Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperZDAnimNotify_Base.OuterSingleton;
}
template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimNotify_Base>()
{
	return UPaperZDAnimNotify_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimNotify_Base);
UPaperZDAnimNotify_Base::~UPaperZDAnimNotify_Base() {}
// End Class UPaperZDAnimNotify_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimNotify_Base, UPaperZDAnimNotify_Base::StaticClass, TEXT("UPaperZDAnimNotify_Base"), &Z_Registration_Info_UClass_UPaperZDAnimNotify_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimNotify_Base), 4143414930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_2674863054(TEXT("/Script/PaperZD"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
