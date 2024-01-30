
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

/// Class /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UControllerComponent_MatchQuests : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00A0   (0x0018)  MISSED
	SDK_UNDEFINED(16,14481) /* TArray<TScriptInterface<Class>> */ __um(QuestOffering);                             // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x00C8   (0x0060)  MISSED


	/// Functions
	// Function /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests.TryToRollOffer
	// void TryToRollOffer(FFortGamePhaseUpdatedEvent& Event);                                                               // [0x86d18b4] Final|Native|Protected|HasOutParms 
	// Function /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests.TryToGrantSelectedQuest
	// void TryToGrantSelectedQuest(FFortGamePhaseUpdatedEvent& Event);                                                      // [0x86d18b4] Final|Native|Protected|HasOutParms 
	// Function /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests.Server_SetSelectedQuest
	// void Server_SetSelectedQuest(TScriptInterface<Class> Quest);                                                          // [0xa9528b8] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests.OnRep_QuestOffering
	// void OnRep_QuestOffering();                                                                                           // [0xa952898] Final|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests.OnLandedFromBus
	// void OnLandedFromBus(class AFortPlayerControllerZone* PlayerController);                                              // [0x604b150] Final|Native|Protected 
};

/// Class /Script/MatchQuestsRuntime.FortGameStateComponent_SquadMatchQuests
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UFortGameStateComponent_SquadMatchQuests : public UFortGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00A0   (0x0018)  MISSED
	SDK_UNDEFINED(80,14482) /* TMap<char, FSquadMatchQuests> */ __um(SquadQuestsMap);                              // 0x00B8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0108   (0x0030)  MISSED
};

/// Struct /Script/MatchQuestsRuntime.SquadMemberSelection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSquadMemberSelection
{ 
	class AFortPlayerState*                            SquadMember;                                                // 0x0000   (0x0008)  
	int32_t                                            OfferQuestIndex;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UFortPlayerStateComponent_MatchQuests : public UFortPlayerStateComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00A0   (0x0030)  MISSED
	SDK_UNDEFINED(16,14483) /* TArray<TScriptInterface<Class>> */ __um(QuestOffering);                             // 0x00D0   (0x0010)  
	TArray<FSquadMemberSelection>                      SquadSelections;                                            // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x00F0   (0x0040)  MISSED


	/// Functions
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.TryToGrantSelectedQuest
	// void TryToGrantSelectedQuest(FFortGamePhaseUpdatedEvent& FortGamePhaseUpdatedEvent);                                  // [0x86d18b4] Final|Native|Private|HasOutParms 
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.Server_SetSelectedQuest
	// void Server_SetSelectedQuest(TScriptInterface<Class> Quest);                                                          // [0xa9528b8] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.OnRep_SquadSelections
	// void OnRep_SquadSelections();                                                                                         // [0x30e1970] Final|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.OnRep_QuestOffering
	// void OnRep_QuestOffering();                                                                                           // [0x30fc08c] Final|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.FortPlayerStateComponent_MatchQuests.OnLandedFromBus
	// void OnLandedFromBus(class AFortPlayerControllerZone* PlayerController);                                              // [0x604b150] Final|Native|Private 
};

/// Class /Script/MatchQuestsRuntime.FortQuestDefinitionComponent_MatchQuests
/// Size: 0x0000 (0x000078 - 0x000078)
class UFortQuestDefinitionComponent_MatchQuests : public UFortQuestDefinitionComponent
{ 
public:
};

/// Class /Script/MatchQuestsRuntime.FortQuestItemComponent_MatchQuests
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortQuestItemComponent_MatchQuests : public UFortQuestItemComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/MatchQuestsRuntime.MatchQuestsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UMatchQuestsCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_RollNewOffer
	// void MatchQuests_RollNewOffer();                                                                                      // [0x32e4b44] Final|Exec|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_LogSquadSelections
	// void MatchQuests_LogSquadSelections();                                                                                // [0x32e4b44] Final|Exec|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_LogRNGSeeds
	// void MatchQuests_LogRNGSeeds();                                                                                       // [0x32e4b44] Final|Exec|Native|Private 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_LogReportSimulatedRolls
	// void MatchQuests_LogReportSimulatedRolls(int32_t RollsToSimulate);                                                    // [0x6695f1c] Final|Exec|Native|Private|Const 
	// Function /Script/MatchQuestsRuntime.MatchQuestsCheatManager.MatchQuests_LogAvailableQuestsPool
	// void MatchQuests_LogAvailableQuestsPool();                                                                            // [0x32e4b44] Final|Exec|Native|Private 
};

/// Struct /Script/MatchQuestsRuntime.SquadMatchQuests
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSquadMatchQuests
{ 
	SDK_UNDEFINED(16,14484) /* TArray<TScriptInterface<Class>> */ __um(SquadOffer);                                // 0x0000   (0x0010)  
	TArray<FSquadMemberSelection>                      SquadSelections;                                            // 0x0010   (0x0010)  
};

