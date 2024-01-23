
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
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay

/// Class /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear
/// Size: 0x00B8 (0x0009B0 - 0x000A68)
class AFortGameplayCueNotify_CrownWear : public AFortGameplayCueNotify_Loop
{ 
public:
	FScalableFloat                                     IntroFXVisualVolume;                                        // 0x09B0   (0x0028)  
	FScalableFloat                                     IntroFXTimelineRate;                                        // 0x09D8   (0x0028)  
	FScalableFloat                                     IntroFXUpdatePrecision;                                     // 0x0A00   (0x0028)  
	TArray<FScalableFloat>                             IntroFXUpdateFrequencies;                                   // 0x0A28   (0x0010)  
	class UCurveVector*                                IntroFXCurve;                                               // 0x0A38   (0x0008)  
	class UTimelineComponent*                          IntroFXTimeline;                                            // 0x0A40   (0x0008)  
	class UFXSystemComponent*                          CrownParticleComponent;                                     // 0x0A48   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0A50   (0x0018)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.RemoveCrownWear
	// void RemoveCrownWear();                                                                                               // [0x3419824] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.OnIntroFXTimelineTick
	// void OnIntroFXTimelineTick(FVector CurveValue);                                                                       // [0x1b23b8c] Final|Native|Protected|HasDefaults 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.ApplyCrownWear
	// void ApplyCrownWear(TArray<UFXSystemComponent*>& ParticleComponents);                                                 // [0x2c37e5c] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UFortVictoryCrownViewModel : public UMVVMViewModelBase
{ 
public:
	int32_t                                            BestowedCount;                                              // 0x0068   (0x0004)  
	bool                                               bHasWonCrownInMatch;                                        // 0x006C   (0x0001)  
	bool                                               bHasWonRoyalRoyale;                                         // 0x006D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x006E   (0x0002)  MISSED
	SDK_UNDEFINED(8,12098) /* TWeakObjectPtr<UFortControllerComponent_VictoryCrowns*> */ __um(BoundVictoryCrownsComponent); // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonRoyalRoyale
	// void HandleOnHasWonRoyalRoyale();                                                                                     // [0xb47051c] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonCrownInMatch
	// void HandleOnHasWonCrownInMatch();                                                                                    // [0xb470508] Final|Native|Private 
};

/// Class /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
/// Size: 0x01C0 (0x0000A8 - 0x000268)
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{ 
public:
	SDK_UNDEFINED(16,12099) /* FMulticastInlineDelegate */ __um(OnVictoryCrownStatusChanged);                      // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,12100) /* FMulticastInlineDelegate */ __um(OnHasWonCrownInMatch);                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,12101) /* FMulticastInlineDelegate */ __um(OnHasWonRoyalRoyale);                              // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x00D8   (0x0030)  MISSED
	SDK_UNDEFINED(32,12102) /* TWeakObjectPtr<UFortWorldItemDefinition*> */ __um(CrownInventoryItemClass);         // 0x0108   (0x0020)  
	bool                                               bWonCrownInMatch;                                           // 0x0128   (0x0001)  
	bool                                               bWonRoyalRoyale;                                            // 0x0129   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x012A   (0x0006)  MISSED
	class UFortVictoryCrownAccountItemDefinition*      VictoryCrownAccountItemDefinition;                          // 0x0130   (0x0008)  
	SDK_UNDEFINED(32,12103) /* TWeakObjectPtr<UFortMontageItemDefinitionBase*> */ __um(RoyalRoyaleEmoteItemDefinition); // 0x0138   (0x0020)  
	class UDataTable*                                  VictoryCrownPlaylistData;                                   // 0x0158   (0x0008)  
	FGameplayTagContainer                              SourceTagsForRoyalRoyale;                                   // 0x0160   (0x0020)  
	FVictoryCrownAccountData                           VictoryCrownAccountData;                                    // 0x0180   (0x0010)  
	FScalableFloat                                     InitialGrantDelay;                                          // 0x0190   (0x0028)  
	unsigned char                                      UnknownData02_5[0xA8];                                      // 0x01B8   (0x00A8)  MISSED
	bool                                               bKillFeedBroadcastReady;                                    // 0x0260   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0261   (0x0007)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale
	// void OnRep_WonRoyalRoyale();                                                                                          // [0xb4707b0] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch
	// void OnRep_WonCrownInMatch();                                                                                         // [0xb47077c] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_VictoryCrownAccountData
	// void OnRep_VictoryCrownAccountData();                                                                                 // [0xb470760] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnEnterAircraft
	// void OnEnterAircraft(class AController* EnteringController);                                                          // [0xb4706e4] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized
	// void OnAthenaProfileInitialized();                                                                                    // [0x32e6c74] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory
	// bool IsCrownInPlayerInventory();                                                                                      // [0xb4706c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale
	// bool HasWonRoyalRoyale();                                                                                             // [0xb4706a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch
	// bool HasWonCrownInMatch();                                                                                            // [0x7b5aa6c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged
	// void HandlePawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                                   // [0xb470530] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft
	// void HandleExitAircraft(class AController* ExitingController);                                                        // [0xb47047c] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft
	// void HandleEnterAircraft();                                                                                           // [0xb470468] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount
	// int32_t GetVictoryCrownsBestowedCount();                                                                              // [0xb470268] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount
	// int32_t GetRoyalRoyaleAchievedCount();                                                                                // [0x6240ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory
	// class UFortWorldItem* GetCrownInPlayerInventory();                                                                    // [0xb470244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount
	// void DebugForceSetRoyalRoyaleAchievedCount(int32_t NewRoyalRoyaleCount);                                              // [0x664cbb0] Final|Exec|Native|Public 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData
	// void CacheAccountItemData();                                                                                          // [0x32e6c74] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem
	// bool AuthoritySquadHasSeenCrownItem(class UFortItem* CrownItem, bool bDropped);                                       // [0xb470180] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem
	// bool AuthorityHasSquadHeldCrownItem(class UFortItem* CrownItem);                                                      // [0xb4700f0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem
	// bool AuthorityHasSquadDroppedCrownItem(class UFortItem* CrownItem);                                                   // [0xb470060] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem
	// bool AuthorityHasHeldCrownItem(class UFortItem* CrownItem);                                                           // [0xb46ffd0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem
	// bool AuthorityHasDroppedCrownItem(class UFortItem* CrownItem);                                                        // [0xb46ff40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_HasCrown
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_HasCrown : public UFortCosmeticStatObject
{ 
public:
	class UFortVictoryCrownAccountItemDefinition*      VictoryCrownAccountItemDefinition;                          // 0x0088   (0x0008)  
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_TotalRoyalRoyales
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject
{ 
public:
	class UFortVictoryCrownAccountItemDefinition*      VictoryCrownAccountItemDefinition;                          // 0x0088   (0x0008)  
	SDK_UNDEFINED(16,12104) /* TArray<TWeakObjectPtr<UFortControllerComponent_VictoryCrowns*>> */ __um(CachedCrownComponents); // 0x0090   (0x0010)  
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_TotalVictoryCrowns
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject
{ 
public:
	class UFortVictoryCrownAccountItemDefinition*      VictoryCrownAccountItemDefinition;                          // 0x0088   (0x0008)  
};

/// Class /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{ 
public:
	TArray<class AFortPlayerStateAthena*>              CrownBearerPlayerStates;                                    // 0x00A0   (0x0010)  
	SDK_UNDEFINED(24,12105) /* FText */                __um(KillFeedFormat_Dropped);                               // 0x00B0   (0x0018)  
	SDK_UNDEFINED(24,12106) /* FText */                __um(KillFeedFormat_PickedUp);                              // 0x00C8   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates
	// void OnRep_CrownBearerPlayerStates();                                                                                 // [0x342befc] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer
	// bool IsCrownBearer(class AFortPlayerStateAthena* FortPSA);                                                            // [0x3317ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged
	// void HandleCrownStatusChanged(class AFortPlayerControllerAthena* FortPlayerControllerAthena, class UFortItem* CrownItem); // [0xb470280] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage
	// void ClientKillFeedMessage(class AFortPlayerStateAthena* FortPSA, bool bAdded);                                       // [0x3107198] Net|NetReliableNative|Event|NetMulticast|Public 
};

/// Class /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent
{ 
public:
	class UDataTable*                                  VictoryCrownPlaylistData;                                   // 0x00A8   (0x0008)  
	bool                                               bInitializeSuccess;                                         // 0x00B0   (0x0001)  
	bool                                               bSelectedPlaylistSupportCrown;                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	class UFortSocialParty*                            PersistentParty;                                            // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd.PlaylistChanged
	// void PlaylistChanged();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Class /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent
{ 
public:
	bool                                               bHasWonRoyalRoyale;                                         // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale
	// bool GetWonRoyalRoyale();                                                                                             // [0x80cfcb4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VictoryCrownsRuntime.VictoryCrownPlaylistData
/// Size: 0x0008 (0x000008 - 0x000010)
struct FVictoryCrownPlaylistData : FTableRowBase
{ 
	int32_t                                            MaxRankingForCrownAward;                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

