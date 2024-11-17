// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimStateMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimStateMachine() {}

// Begin Cross Module References
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachine();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode();
PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule();
UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

// Begin ScriptStruct FPaperZDAnimStateMachineTransitionRule
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule;
class UScriptStruct* FPaperZDAnimStateMachineTransitionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimStateMachineTransitionRule"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimStateMachineTransitionRule>()
{
	return FPaperZDAnimStateMachineTransitionRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains the \"rule\" that governs if a transition/conduit can be taken or not.\n * Internally points to a runtime getter node for the baked transition graph.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Contains the \"rule\" that governs if a transition/conduit can be taken or not.\nInternally points to a runtime getter node for the baked transition graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicRule_MetaData[] = {
		{ "Comment", "/* True if the rule contains blueprint logic and is bound to an UFunction. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "True if the rule contains blueprint logic and is bound to an UFunction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleFunctionName_MetaData[] = {
		{ "Comment", "/* Name of the function that represents the logic for a dynamic transition rule. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Name of the function that represents the logic for a dynamic transition rule." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstantValue_MetaData[] = {
		{ "Comment", "/* Value of the transition rule, if it has no logic bound to it (constant pin value). */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Value of the transition rule, if it has no logic bound to it (constant pin value)." },
	};
#endif // WITH_METADATA
	static void NewProp_bDynamicRule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicRule;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RuleFunctionName;
	static void NewProp_bConstantValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimStateMachineTransitionRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule_SetBit(void* Obj)
{
	((FPaperZDAnimStateMachineTransitionRule*)Obj)->bDynamicRule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule = { "bDynamicRule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperZDAnimStateMachineTransitionRule), &Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicRule_MetaData), NewProp_bDynamicRule_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_RuleFunctionName = { "RuleFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineTransitionRule, RuleFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleFunctionName_MetaData), NewProp_RuleFunctionName_MetaData) };
void Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue_SetBit(void* Obj)
{
	((FPaperZDAnimStateMachineTransitionRule*)Obj)->bConstantValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue = { "bConstantValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperZDAnimStateMachineTransitionRule), &Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstantValue_MetaData), NewProp_bConstantValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_RuleFunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDAnimStateMachineTransitionRule",
	Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::PropPointers),
	sizeof(FPaperZDAnimStateMachineTransitionRule),
	alignof(FPaperZDAnimStateMachineTransitionRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.InnerSingleton;
}
// End ScriptStruct FPaperZDAnimStateMachineTransitionRule

// Begin ScriptStruct FPaperZDAnimStateMachineLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink;
class UScriptStruct* FPaperZDAnimStateMachineLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimStateMachineLink"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimStateMachineLink>()
{
	return FPaperZDAnimStateMachineLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A link between two animation nodes on the state machine.\n * Has rules for knowing whether we should enter or not.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "A link between two animation nodes on the state machine.\nHas rules for knowing whether we should enter or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRuleIndex_MetaData[] = {
		{ "Comment", "/* Index of the rule that drives this transition. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the rule that drives this transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeIndex_MetaData[] = {
		{ "Comment", "/* Index of the target state. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the target state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionalAnimNodeIndex_MetaData[] = {
		{ "Comment", "/* Index of the SinkNode for the \"Transitional AnimGraph\". */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the SinkNode for the \"Transitional AnimGraph\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionRuleIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNodeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionalAnimNodeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimStateMachineLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionRuleIndex = { "TransitionRuleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineLink, TransitionRuleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRuleIndex_MetaData), NewProp_TransitionRuleIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TargetNodeIndex = { "TargetNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineLink, TargetNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNodeIndex_MetaData), NewProp_TargetNodeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionalAnimNodeIndex = { "TransitionalAnimNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineLink, TransitionalAnimNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionalAnimNodeIndex_MetaData), NewProp_TransitionalAnimNodeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionRuleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TargetNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionalAnimNodeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDAnimStateMachineLink",
	Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::PropPointers),
	sizeof(FPaperZDAnimStateMachineLink),
	alignof(FPaperZDAnimStateMachineLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.InnerSingleton;
}
// End ScriptStruct FPaperZDAnimStateMachineLink

// Begin ScriptStruct FPaperZDAnimStateMachineNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode;
class UScriptStruct* FPaperZDAnimStateMachineNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimStateMachineNode"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimStateMachineNode>()
{
	return FPaperZDAnimStateMachineNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a \"node\" in the state machine, which can either be an AnimationState or a Conduit.\n * Nodes are defined by being connected by transitions/links.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Defines a \"node\" in the state machine, which can either be an AnimationState or a Conduit.\nNodes are defined by being connected by transitions/links." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNodeIndex_MetaData[] = {
		{ "Comment", "/* Index of the SinkNode that represents the internal AnimGraph on the generated class. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the SinkNode that represents the internal AnimGraph on the generated class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutwardLinks_MetaData[] = {
		{ "Comment", "/* Array of outward transitions, ordered by priority. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Array of outward transitions, ordered by priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConduit_MetaData[] = {
		{ "Comment", "/* If true, this node represents a conduit and not a final state. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "If true, this node represents a conduit and not a final state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConduitRuleIndex_MetaData[] = {
		{ "Comment", "/* Index of the transition rule that governs the node, if it's a conduit. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the transition rule that governs the node, if it's a conduit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateEnterEventName_MetaData[] = {
		{ "Comment", "/* Optional name of a custom event to call when the state machine enters this node. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Optional name of a custom event to call when the state machine enters this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateExitEventName_MetaData[] = {
		{ "Comment", "/* Optional name of a custom event to call when the state machine exits this node. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Optional name of a custom event to call when the state machine exits this node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AnimNodeIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutwardLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutwardLinks;
	static void NewProp_bConduit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConduit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConduitRuleIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnStateEnterEventName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnStateExitEventName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimStateMachineNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_AnimNodeIndex = { "AnimNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, AnimNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNodeIndex_MetaData), NewProp_AnimNodeIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks_Inner = { "OutwardLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink, METADATA_PARAMS(0, nullptr) }; // 1075603680
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks = { "OutwardLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, OutwardLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutwardLinks_MetaData), NewProp_OutwardLinks_MetaData) }; // 1075603680
void Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit_SetBit(void* Obj)
{
	((FPaperZDAnimStateMachineNode*)Obj)->bConduit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit = { "bConduit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperZDAnimStateMachineNode), &Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConduit_MetaData), NewProp_bConduit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_ConduitRuleIndex = { "ConduitRuleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, ConduitRuleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConduitRuleIndex_MetaData), NewProp_ConduitRuleIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateEnterEventName = { "OnStateEnterEventName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, OnStateEnterEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateEnterEventName_MetaData), NewProp_OnStateEnterEventName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateExitEventName = { "OnStateExitEventName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, OnStateExitEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateExitEventName_MetaData), NewProp_OnStateExitEventName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_AnimNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_ConduitRuleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateEnterEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateExitEventName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDAnimStateMachineNode",
	Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::PropPointers),
	sizeof(FPaperZDAnimStateMachineNode),
	alignof(FPaperZDAnimStateMachineNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.InnerSingleton;
}
// End ScriptStruct FPaperZDAnimStateMachineNode

// Begin ScriptStruct FPaperZDAnimStateMachine
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine;
class UScriptStruct* FPaperZDAnimStateMachine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimStateMachine"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimStateMachine>()
{
	return FPaperZDAnimStateMachine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds the structure of an animation State Machine for PaperZD\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Holds the structure of an animation State Machine for PaperZD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[] = {
		{ "Comment", "/* Name of the state machine, mainly for debugging purposes. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Name of the state machine, mainly for debugging purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[] = {
		{ "Comment", "/* The index of the initial state of the machine. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "The index of the initial state of the machine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Comment", "/* The nodes that exist on the machine. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "The nodes that exist on the machine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRules_MetaData[] = {
		{ "Comment", "/* The transition rules (baked from the transition graphs) that we use to determine if a given link/conduit should be taken. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "The transition rules (baked from the transition graphs) that we use to determine if a given link/conduit should be taken." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpLinks_MetaData[] = {
		{ "Comment", "/* Jump links that can be taken as shortcuts. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Jump links that can be taken as shortcuts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MachineName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionRules;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JumpLinks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_JumpLinks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_JumpLinks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimStateMachine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachine, MachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MachineName_MetaData), NewProp_MachineName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachine, InitialState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialState_MetaData), NewProp_InitialState_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode, METADATA_PARAMS(0, nullptr) }; // 576732050
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachine, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 576732050
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules_Inner = { "TransitionRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule, METADATA_PARAMS(0, nullptr) }; // 227170031
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules = { "TransitionRules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachine, TransitionRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRules_MetaData), NewProp_TransitionRules_MetaData) }; // 227170031
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_ValueProp = { "JumpLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_Key_KeyProp = { "JumpLinks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks = { "JumpLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimStateMachine, JumpLinks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpLinks_MetaData), NewProp_JumpLinks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_MachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_InitialState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	nullptr,
	&NewStructOps,
	"PaperZDAnimStateMachine",
	Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::PropPointers),
	sizeof(FPaperZDAnimStateMachine),
	alignof(FPaperZDAnimStateMachine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachine()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.InnerSingleton;
}
// End ScriptStruct FPaperZDAnimStateMachine

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperZDAnimStateMachineTransitionRule::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewStructOps, TEXT("PaperZDAnimStateMachineTransitionRule"), &Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimStateMachineTransitionRule), 227170031U) },
		{ FPaperZDAnimStateMachineLink::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewStructOps, TEXT("PaperZDAnimStateMachineLink"), &Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimStateMachineLink), 1075603680U) },
		{ FPaperZDAnimStateMachineNode::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewStructOps, TEXT("PaperZDAnimStateMachineNode"), &Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimStateMachineNode), 576732050U) },
		{ FPaperZDAnimStateMachine::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewStructOps, TEXT("PaperZDAnimStateMachine"), &Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimStateMachine), 2882804964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_1959119359(TEXT("/Script/PaperZD"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
