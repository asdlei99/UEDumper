
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Enum /Script/AIDebuggerRuntime.EAIDebuggerVisualization
/// Size: 0x03
enum class EAIDebuggerVisualization : uint8_t
{
	EAIDebuggerVisualization__INVALID                                                = 0,
	EAIDebuggerVisualization__NavMesh                                                = 1,
	EAIDebuggerVisualization__EAIDebuggerVisualization_MAX                           = 2
};

/// Class /Script/AIDebuggerRuntime.AIDebuggerCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIDebuggerCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.StartAIDebugger
	// void StartAIDebugger(FString AIDebuggerSoftClassPath);                                                                // [0x8c0e6d0] Final|Exec|Native|Public 
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.NextNavMesh
	// void NextNavMesh();                                                                                                   // [0x32e4b44] Final|Exec|Native|Public 
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.EnableNavMeshVisualizer
	// void EnableNavMeshVisualizer(bool bEnable);                                                                           // [0x60325ec] Final|Exec|Native|Public 
};

/// Class /Script/AIDebuggerRuntime.AIDebuggerRendererComponent
/// Size: 0x00B0 (0x000570 - 0x000620)
class UAIDebuggerRendererComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x98];                                      // 0x0570   (0x0098)  MISSED
	class UMaterial*                                   NavMeshMaterial;                                            // 0x0608   (0x0008)  
	float                                              NavLinkLineThickness;                                       // 0x0610   (0x0004)  
	float                                              NavLinkMaxDrawDistance;                                     // 0x0614   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0618   (0x0008)  MISSED
};

/// Class /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UFortControllerComponent_AIDebugger : public UFortControllerComponent
{ 
public:
	class APlayerController*                           OwnerPC;                                                    // 0x00A8   (0x0008)  
	class UClass*                                      NavMeshRendererComponentClass;                              // 0x00B0   (0x0008)  
	char                                               DefaultEnabledVisualizers;                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            DefaultNavDataIndexToDisplay;                               // 0x00BC   (0x0004)  
	char                                               EnabledVisualizers;                                         // 0x00C0   (0x0001)  
	char                                               NumNavMeshes;                                               // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4E];                                      // 0x00C2   (0x004E)  MISSED


	/// Functions
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNextNavMesh
	// void VisualizeNextNavMesh();                                                                                          // [0x83b8590] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNavMeshID
	// void VisualizeNavMeshID(int32_t NavMeshID);                                                                           // [0x85a7ffc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.SetVisualizationEnable
	// void SetVisualizationEnable(EAIDebuggerVisualization VisualizationType, bool bEnable);                                // [0xa763be8] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnRep_EnabledVisualizers
	// void OnRep_EnabledVisualizers();                                                                                      // [0xa763bac] Final|Native|Public  
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnPlayerExitedIsland
	// void OnPlayerExitedIsland(FEventMessageTag Channel, FPlayerExitSpatialActorContextWithPawn& PlayerExitSpatialActorContext); // [0xa763a28] Final|Native|Public|HasOutParms 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.IsVisualizationEnabled
	// bool IsVisualizationEnabled(EAIDebuggerVisualization VisualizationType);                                              // [0xa763998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.GetOrCreateRenderer
	// class UAIDebuggerRendererComponent* GetOrCreateRenderer();                                                            // [0xa763974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

