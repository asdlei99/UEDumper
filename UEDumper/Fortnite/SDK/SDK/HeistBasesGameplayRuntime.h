
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UFortGameStateComponent_HeistDisplayCaseItemManager : public UFortGameStateComponent
{ 
public:
	SDK_UNDEFINED(16,13856) /* FMulticastInlineDelegate */ __um(OnDisplayCaseItemManagerReady);                    // 0x00A0   (0x0010)  
	TArray<class UFortWorldItemDefinition*>            AllDisplayCaseItems;                                        // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x00C0   (0x00A8)  MISSED


	/// Functions
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.IsDataReady
	// bool IsDataReady();                                                                                                   // [0xb20779c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.HandlePlaylistDataReady
	// void HandlePlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb207680] Final|Native|Private|HasOutParms 
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.GetDisplayCaseItem
	// class UFortWorldItemDefinition* GetDisplayCaseItem(FGameplayTag DisplayCaseGroupTag);                                 // [0xb207544] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase
/// Size: 0x00D0 (0x000B90 - 0x000C60)
class AFortHeistDisplayCase : public ABuildingSMActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0B90   (0x0008)  MISSED
	bool                                               bReplicateLongInteractionDetails;                           // 0x0B98   (0x0001)  
	bool                                               bCanBeMarked : 1;                                           // 0x0B99:0 (0x0001)  
	bool                                               bBlockMarking : 1;                                          // 0x0B99:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x6];                                       // 0x0B9A   (0x0006)  MISSED
	FMarkedActorDisplayInfo                            MarkerDisplay;                                              // 0x0BA0   (0x00A8)  
	FVector                                            MarkerPositionOffset;                                       // 0x0C48   (0x0018)  


	/// Functions
	// Function /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyStartDisplayCaseLongUse
	// void OnServerNotifyStartDisplayCaseLongUse(class AFortPlayerPawn* InteractingPawn);                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyEndDisplayCaseLongUse
	// void OnServerNotifyEndDisplayCaseLongUse(class AFortPlayerPawn* InteractingPawn, bool bUseCompleted);                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Struct /Script/HeistBasesGameplayRuntime.FortHeistDisplayCaseItemDataTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
struct FFortHeistDisplayCaseItemDataTableRow : FTableRowBase
{ 
	class UFortWorldItemDefinition*                    WorldItemDefinition;                                        // 0x0008   (0x0008)  
};

