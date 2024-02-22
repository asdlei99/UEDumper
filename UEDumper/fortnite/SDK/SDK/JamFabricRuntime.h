
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricRuntime
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJamFabricBridgePlayspaceComponent : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	class UClass*                                      DeviceCableManagerClass;                                    // 0x00A8   (0x0008)  
	class UClass*                                      FabricPatchWrapperClass;                                    // 0x00B0   (0x0008)  
	FGameplayTag                                       FabricMusicEventTag;                                        // 0x00B8   (0x0004)  
	FGameplayTag                                       FabricControlsJamTag;                                       // 0x00BC   (0x0004)  
	class UJamFabricPatchWrapper*                      FabricPatchWrapperInstance;                                 // 0x00C0   (0x0008)  
	EJamFabricSyncType                                 SyncType;                                                   // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x27];                                      // 0x00C9   (0x0027)  MISSED


	/// Functions
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnRep_SyncType
	// void OnRep_SyncType();                                                                                                // [0xb9c879c] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnPlayspaceVolumeReplicated
	// void OnPlayspaceVolumeReplicated(class APlayspace* Playspace);                                                        // [0xb9c871c] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricTempoChanged
	// void OnFabricTempoChanged(int32_t CurrentTempo);                                                                      // [0xb9c869c] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricPlayStateChanged
	// void OnFabricPlayStateChanged(EFabricMetasoundPlayState CurrentState);                                                // [0xb9c8618] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricMusicEventPriorityChanged
	// void OnFabricMusicEventPriorityChanged(EFabricMetasoundMusicEventPriority CurrentMusicEventPriority);                 // [0xb9c859c] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricMusicEventGroupChanged
	// void OnFabricMusicEventGroupChanged(FName& CurrentMusicEventGroup);                                                   // [0xb9c8520] Final|Native|Protected|HasOutParms 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricModeChanged
	// void OnFabricModeChanged(EMusicKeyMode CurrentMode);                                                                  // [0xb9c84a0] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricKeyChanged
	// void OnFabricKeyChanged(EMusicKey CurrentKey);                                                                        // [0xb9c8420] Final|Native|Protected 
};

/// Class /Script/JamFabricRuntime.JamFabricPatchWrapper
/// Size: 0x0000 (0x0006A8 - 0x0006A8)
class UJamFabricPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
public:
};

