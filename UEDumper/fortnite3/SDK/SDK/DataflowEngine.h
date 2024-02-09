
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DataflowEngine.DataflowBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
	// void EvaluateTerminalNodeByName(class UDataflow* Dataflow, FName TerminalNodeName, class UObject* ResultAsset);       // [0x5dcac70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DataflowEngine.DataflowEdNode
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UDataflowEdNode : public UEdGraphNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0098   (0x0020)  MISSED
	bool                                               bRenderInAssetEditor;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/DataflowEngine.Dataflow
/// Size: 0x0048 (0x000060 - 0x0000A8)
class UDataflow : public UEdGraph
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0060   (0x0028)  MISSED
	bool                                               bActive;                                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	TArray<class UObject*>                             Targets;                                                    // 0x0090   (0x0010)  
	class UMaterial*                                   Material;                                                   // 0x00A0   (0x0008)  
};

/// Struct /Script/DataflowEngine.StringValuePair
/// Size: 0x0020 (0x000000 - 0x000020)
struct FStringValuePair
{ 
	SDK_UNDEFINED(16,2403) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2404) /* FString */               __um(Value);                                                // 0x0010   (0x0010)  
};

