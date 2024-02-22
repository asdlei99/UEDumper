
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMCoreRuntime
/// dependency: FMJamCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: HarmonixDsp
/// dependency: HarmonixMidi
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SparksCharacterCommonRuntime
/// dependency: SparksCMS
/// dependency: SparksMidiParser
/// dependency: SparksMusicPlayspaceRuntime

/// Class /Script/FMJamPlayspaceRuntime.JamAnalytics
/// Size: 0x00A0 (0x0000A8 - 0x000148)
class UJamAnalytics : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x00A8   (0x0040)  MISSED
	FScalableFloat                                     MinLoopLength;                                              // 0x00E8   (0x0028)  
	float                                              LoopStartTime;                                              // 0x0110   (0x0004)  
	float                                              LoopLength;                                                 // 0x0114   (0x0004)  
	FName                                              LoopShortName;                                              // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13853) /* FString */              __um(LoopType);                                             // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,13854) /* FString */              __um(LoopID);                                               // 0x0130   (0x0010)  
	class AJamPlayspace*                               JamPlayspace;                                               // 0x0140   (0x0008)  
};

/// Class /Script/FMJamPlayspaceRuntime.JamMidiEventDriver
/// Size: 0x0020 (0x000028 - 0x000048)
class UJamMidiEventDriver : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(8,13855) /* TWeakObjectPtr<UJamMusicSlot*> */ __um(WeakOwningMusicSlotPtr);                      // 0x0030   (0x0008)  
	class UParsedMidiEventData*                        ParsedMidiEventData;                                        // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspace
/// Size: 0x0068 (0x000790 - 0x0007F8)
class AJamPlayspace : public ASparksMusicPlayspace
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0790   (0x0018)  MISSED
	class UJamPlayspaceComponent_MusicManager*         MusicManager;                                               // 0x07A8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x07B0   (0x0018)  MISSED
	class UJamPlayspaceComponent_LipSyncAssetManager*  LipSyncManager;                                             // 0x07C8   (0x0008)  
	class UJamPlayspaceComponent_ReactiveFX*           ReactiveFXComponent;                                        // 0x07D0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x07D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopLoopForPlayer
	// void StopLoopForPlayer(class APlayerState* PlayerState, bool bStopAutoJammers);                                       // [0xb09d000] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopLoopByInstanceId
	// void StopLoopByInstanceId(int32_t LoopInstanceId);                                                                    // [0xb09cf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAutoJammersForPlayer
	// void StopAutoJammersForPlayer(class APlayerState* PlayerState);                                                       // [0xb09cf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAllLoopsForLoopType
	// void StopAllLoopsForLoopType(EFMJamLoopType LoopType);                                                                // [0xb09ce80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.PlayLoop
	// void PlayLoop(class APlayerState* PlayerState, FName SongShortName, EFMJamLoopType LoopType, bool bForceAudioState, bool bIsAutoJammer); // [0xb09cba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.IsJamFull
	// bool IsJamFull(bool bCountAutoJammers);                                                                               // [0xb09b6a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsSortedByLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsSortedByLoopType();                                                               // [0xb09ad20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsInUse
	// TArray<UJamMusicSlot*> GetMusicSlotsInUse();                                                                          // [0xb09aca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsForLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsForLoopType(EFMJamLoopType LoopType);                                             // [0xb09ab08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlots
	// TArray<UJamMusicSlot*> GetMusicSlots();                                                                               // [0xb09aac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotForPlayer
	// class UJamMusicSlot* GetMusicSlotForPlayer(class APlayerState* PlayerState);                                          // [0x210a544] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetJammers
	// TArray<APlayerState*> GetJammers();                                                                                   // [0xb09a780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetJamAudioSource
	// class UAudioComponent* GetJamAudioSource();                                                                           // [0xb09a734] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetAllowGlobalControlAccess
	// void GetAllowGlobalControlAccess(bool& OutAllowGlobalControlAccess, FGameplayTagContainer& OutRestrictionReason);     // [0xb09a280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.DoAnyOtherJammersHaveGameplayTag
	// bool DoAnyOtherJammersHaveGameplayTag(class APlayerState* LocalPlayerState, FGameplayTag GlobalControlsTag);          // [0xb099fa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.CountActiveLoops
	// int32_t CountActiveLoops(bool bCountAutoJammers);                                                                     // [0xb099e84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.ConvertPlayerToAutoJammer
	// void ConvertPlayerToAutoJammer(class APlayerState* PlayerState);                                                      // [0xb099cfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.BeginShutdownJam
	// void BeginShutdownJam();                                                                                              // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_LipSyncAssetManager
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UJamPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00B0   (0x0028)  MISSED
};

/// Struct /Script/FMJamPlayspaceRuntime.JamPlayParams
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJamPlayParams
{ 
	FName                                              SongShortName;                                              // 0x0000   (0x0004)  
	EFMJamLoopType                                     LoopType;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	SDK_UNDEFINED(8,13856) /* TWeakObjectPtr<APlayerState*> */ __um(PlayerState);                                  // 0x0008   (0x0008)  
	int32_t                                            LoopInstanceId;                                             // 0x0010   (0x0004)  
	bool                                               bIsAutoJammer;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	SDK_UNDEFINED(8,13857) /* TWeakObjectPtr<UCatalogData*> */ __um(CMSCatalogEntry);                              // 0x0018   (0x0008)  
	SDK_UNDEFINED(8,13858) /* TWeakObjectPtr<UFMJamSong*> */ __um(Song);                                           // 0x0020   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/FMJamPlayspaceRuntime.JamMusicSlot
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UJamMusicSlot : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13859) /* FMulticastInlineDelegate */ __um(OnLoopStarted);                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,13860) /* FMulticastInlineDelegate */ __um(OnLoopStopped);                                    // 0x0038   (0x0010)  
	class UMidiFile*                                   CurrentMidiFile;                                            // 0x0048   (0x0008)  
	class UFusionPatch*                                CurrentFusionPatch;                                         // 0x0050   (0x0008)  
	class UJamMidiEventDriver*                         MidiEventDriver;                                            // 0x0058   (0x0008)  
	bool                                               bAttemptingResolveAndLoad;                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x17];                                      // 0x0061   (0x0017)  MISSED
	FJamPlayParams                                     CurrentPlayParams;                                          // 0x0078   (0x0038)  
	class UJamPlayspaceComponent_MusicManager*         JamMusicManager;                                            // 0x00B0   (0x0008)  
	int32_t                                            NthSlot;                                                    // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00BC   (0x0004)  MISSED


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnTerminatingLinkCode
	// void OnTerminatingLinkCode(class UJamContentResolver* Sender, FString LinkCode);                                      // [0xb09c4c0] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnScanForSongsCompleted
	// void OnScanForSongsCompleted(class UFMJamSongCatalog* Sender, TArray<UFMJamSong*> AddedSongs);                        // [0xb09c3b0] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnRep_CurrentPlayParams
	// void OnRep_CurrentPlayParams(FJamPlayParams& OldPlayParams);                                                          // [0xb09c284] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnJamResolverComplete
	// void OnJamResolverComplete(class UJamContentResolver* Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded); // [0xb09b94c] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnJamLoadRequestComplete
	// void OnJamLoadRequestComplete(FJamLoadResult LoadResult);                                                             // [0xb09b7fc] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnCMSCatalogRequestFinished
	// void OnCMSCatalogRequestFinished(class UFMJamSongCatalog* Sender, bool bSuccess);                                     // [0xb09b734] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.IsInUse
	// bool IsInUse();                                                                                                       // [0xb09b680] Final|Native|Public|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetPlayParams
	// FJamPlayParams GetPlayParams();                                                                                       // [0xb09ad7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetMusicManager
	// class UJamPlayspaceComponent_MusicManager* GetMusicManager();                                                         // [0x3033778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetItemDef
	// class USparksJamEmoteItemDefinition* GetItemDef();                                                                    // [0xb09a710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetIsAutoJammer
	// bool GetIsAutoJammer();                                                                                               // [0x7a78910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                            // [0xb09a61c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSongShortName
	// FName GetCurrentSongShortName();                                                                                      // [0x59a08bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSongLinkCode
	// FString GetCurrentSongLinkCode();                                                                                     // [0xb09a5dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSong
	// class UFMJamSong* GetCurrentSong();                                                                                   // [0xb09a5b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentPlayerState
	// class APlayerState* GetCurrentPlayerState();                                                                          // [0xb09a594] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentMode
	// EMusicKeyMode GetCurrentMode();                                                                                       // [0xb09a54c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoopType
	// EFMJamLoopType GetCurrentLoopType();                                                                                  // [0xb09a4ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoopInstanceId
	// int32_t GetCurrentLoopInstanceId();                                                                                   // [0x59a0914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoop
	// class UFMJamLoop* GetCurrentLoop();                                                                                   // [0xb09a4c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                            // [0xb09a480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentCatalogEntry
	// class UCatalogData* GetCurrentCatalogEntry();                                                                         // [0xb09a45c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UJamPlayspaceComponent_MusicManager : public UPlayspaceComponent
{ 
public:
	SDK_UNDEFINED(16,13861) /* FMulticastInlineDelegate */ __um(OnLoopStarted);                                    // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,13862) /* FMulticastInlineDelegate */ __um(OnLoopStopped);                                    // 0x00B0   (0x0010)  
	TArray<class UJamMusicSlot*>                       MusicSlots;                                                 // 0x00C0   (0x0010)  
	FGameplayEventListenerHandle                       KeyChangedEventHandle;                                      // 0x00D0   (0x001C)  
	FGameplayEventListenerHandle                       ModeChangedEventHandle;                                     // 0x00EC   (0x001C)  
	FGameplayEventListenerHandle                       TempoChangedEventHandle;                                    // 0x0108   (0x001C)  
	unsigned char                                      UnknownData00_5[0x24];                                      // 0x0124   (0x0024)  MISSED
	float                                              LocalPlayerGainParam;                                       // 0x0148   (0x0004)  
	float                                              StandardGainParam;                                          // 0x014C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0150   (0x0020)  MISSED


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.UpdateAllMetasounds
	// void UpdateAllMetasounds(class APlayerState* PlayerToIgnore);                                                         // [0xb09d158] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.TickToSeconds
	// float TickToSeconds(int32_t Tick);                                                                                    // [0xb09d0c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.ShouldPlayLocalSound
	// bool ShouldPlayLocalSound(class APlayerState* PlayerToIgnore);                                                        // [0x2305efc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.SecondsToTick
	// int32_t SecondsToTick(float Seconds);                                                                                 // [0xb09cdf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnRep_MusicSlots
	// void OnRep_MusicSlots(TArray<UJamMusicSlot*>& PreviousMusicSlots);                                                    // [0x33964d4] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnPlayspaceUserRemoved
	// void OnPlayspaceUserRemoved(FPlayspaceUser& RemovedUser);                                                             // [0xb09c1a4] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& AddedUser);                                                                 // [0xb09c0c4] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnLicensedAudioTreatmentChanged
	// void OnLicensedAudioTreatmentChanged();                                                                               // [0xb09c0b0] Final|Native|Public  
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.IsAllowedToJamInSplitscreen
	// bool IsAllowedToJamInSplitscreen(class APlayerState* PlayerStateToCheck);                                             // [0xb09b520] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleTempoChangedEvent
	// void HandleTempoChangedEvent(FSparksPlayspaceEvent_TempoChanged& Payload);                                            // [0xb09b3dc] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleOnLoopStopped
	// void HandleOnLoopStopped(FJamPlayParams& PlayParams, bool bChangedLoop);                                              // [0xb09b1a4] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleOnLoopStarted
	// void HandleOnLoopStarted(FJamPlayParams& PlayParams, bool bChangedLoop);                                              // [0xb09af6c] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleModeChangedEvent
	// void HandleModeChangedEvent(FSparksPlayspaceEvent_KeyModeChanged& Payload);                                           // [0xb09aee0] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleKeyChangedEvent
	// void HandleKeyChangedEvent(FSparksPlayspaceEvent_KeyChanged& Payload);                                                // [0xb09ae54] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetStandardGainValue
	// float GetStandardGainValue();                                                                                         // [0xb09ae3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotsInUse
	// TArray<UJamMusicSlot*> GetMusicSlotsInUse();                                                                          // [0xb09ace0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotsForLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsForLoopType(EFMJamLoopType LoopType);                                             // [0xb09abfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotIndexForPlayer
	// int32_t GetMusicSlotIndexForPlayer(class APlayerState* PlayerState);                                                  // [0xb09a9ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotIndexForLoopInstanceId
	// int32_t GetMusicSlotIndexForLoopInstanceId(int32_t LoopInstanceId);                                                   // [0xb09a960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotForPlayer
	// class UJamMusicSlot* GetMusicSlotForPlayer(class APlayerState* PlayerState);                                          // [0xb09a894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotByLoopInstanceId
	// class UJamMusicSlot* GetMusicSlotByLoopInstanceId(int32_t LoopInstanceId);                                            // [0xb09a808] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMetasoundPlayer
	// class UAudioComponent* GetMetasoundPlayer();                                                                          // [0xb09a7e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetLocalPlayerGainValue
	// float GetLocalPlayerGainValue();                                                                                      // [0xa24ef98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetLoadedAnimations
	// class USparksInstrumentAnimations* GetLoadedAnimations();                                                             // [0xb09a7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetJamPlayspace
	// class AJamPlayspace* GetJamPlayspace();                                                                               // [0xb09a75c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetJamInfoFromSlot
	// FJamEvent_JamLoopStarted GetJamInfoFromSlot(int32_t SlotIndex);                                                       // [0x28fc5f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetDesiredGain
	// float GetDesiredGain(class APlayerState* PlayerState);                                                                // [0xb09a654] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                            // [0x39569d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMode
	// EMusicKeyMode GetCurrentMode();                                                                                       // [0xb09a570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMidiTick
	// int32_t GetCurrentMidiTick();                                                                                         // [0xb09a528] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMidiSeconds
	// float GetCurrentMidiSeconds();                                                                                        // [0xb09a500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                            // [0xb09a4a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAutoJammersForPlayer
	// TArray<UJamMusicSlot*> GetAutoJammersForPlayer(class APlayerState* PlayerState);                                      // [0xb09a3b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAllMusicSlots
	// TArray<UJamMusicSlot*> GetAllMusicSlots();                                                                            // [0xb09a240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAllJammers
	// TArray<APlayerState*> GetAllJammers();                                                                                // [0xb09a200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.FireGlobalControlsAnalytics
	// void FireGlobalControlsAnalytics(class APlayerState* PlayerState);                                                    // [0xb09a12c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.CountActiveSlots
	// int32_t CountActiveSlots(bool bCountAutoJammers);                                                                     // [0xb099f14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/FMJamPlayspaceRuntime.JamReactiveFXState
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJamReactiveFXState
{ 
	float                                              OverallAmplitude;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      LoopAmplitudes;                                             // 0x0008   (0x0010)  
	TArray<FVector4f>                                  LoopBandValues;                                             // 0x0018   (0x0010)  
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UJamPlayspaceComponent_ReactiveFX : public UPlayspaceComponent
{ 
public:
	FJamReactiveFXState                                ReactiveFXState;                                            // 0x00A0   (0x0028)  
	float                                              PeakTamerValueReleaseTimeSec;                               // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	SDK_UNDEFINED(80,13863) /* TMap<int32_t, FJamLoopReactiveFX> */ __um(LoopReactiveFX);                          // 0x00D0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0120   (0x0088)  MISSED


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.RemoveReactiveNiagaraEffect
	// bool RemoveReactiveNiagaraEffect(int32_t LoopInstanceId, class UNiagaraComponent* NiagaraComponent);                  // [0xb09cd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.HasReactiveEffectsForLoop
	// bool HasReactiveEffectsForLoop(int32_t LoopInstanceId);                                                               // [0xb09b468] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.GetReactiveNiagaraEffects
	// TArray<UNiagaraComponent*> GetReactiveNiagaraEffects(int32_t LoopInstanceId);                                         // [0xb09ad98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.ClearReactiveEffectsForLoop
	// void ClearReactiveEffectsForLoop(int32_t LoopInstanceId, bool bStopEffectsImmediately);                               // [0xb099c38] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.ClearReactiveEffects
	// void ClearReactiveEffects(bool bStopEffectsImmediately);                                                              // [0x3769b78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.AddReactiveNiagaraEffect
	// void AddReactiveNiagaraEffect(int32_t LoopInstanceId, class UNiagaraComponent* NiagaraComponent);                     // [0xb099ab4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume
/// Size: 0x0000 (0x000330 - 0x000330)
class AJamPlayspaceVolume : public AGameplayVolume
{ 
public:


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume.BP_UpdateReactiveFX
	// void BP_UpdateReactiveFX(float JamAmplitude);                                                                         // [0x3d1d968] Event|Public|BlueprintEvent 
};

/// Class /Script/FMJamPlayspaceRuntime.JamQuickplayPlayerSpawningComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UJamQuickplayPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
public:
	FGameplayTagContainer                              PregameSpawnTags;                                           // 0x00B0   (0x0020)  
};

/// Struct /Script/FMJamPlayspaceRuntime.JamLoadResult
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJamLoadResult
{ 
	class UJamMusicSlot*                               Slot;                                                       // 0x0000   (0x0008)  
	class UFusionPatch*                                FusionPatch;                                                // 0x0008   (0x0008)  
	class UMidiFile*                                   MidiFile;                                                   // 0x0010   (0x0008)  
	EMusicKeyMode                                      Mode;                                                       // 0x0018   (0x0001)  
	bool                                               bSuccess;                                                   // 0x0019   (0x0001)  
	bool                                               bWasCancelled;                                              // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x001B   (0x0005)  MISSED
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopBase
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJamEvent_JamLoopBase
{ 
	FName                                              SongShortName;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UCatalogData*                                CatalogEntry;                                               // 0x0010   (0x0008)  
	EFMJamLoopType                                     LoopType;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	class APlayerState*                                PlayerState;                                                // 0x0020   (0x0008)  
	int32_t                                            LoopInstanceId;                                             // 0x0028   (0x0004)  
	bool                                               bIsAutoJammer;                                              // 0x002C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	class USparksInstrumentAnimations*                 Animations;                                                 // 0x0030   (0x0008)  
	bool                                               bChangedLoop;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopStarted
/// Size: 0x0000 (0x000040 - 0x000040)
struct FJamEvent_JamLoopStarted : FJamEvent_JamLoopBase
{ 
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopStopped
/// Size: 0x0000 (0x000040 - 0x000040)
struct FJamEvent_JamLoopStopped : FJamEvent_JamLoopBase
{ 
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_LoopsChangedThisFrame
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJamEvent_LoopsChangedThisFrame
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_OnPrimaryPlayerPresenceChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJamEvent_OnPrimaryPlayerPresenceChanged
{ 
	bool                                               bPrimaryPlayerInPlayspace;                                  // 0x0000   (0x0001)  
};

/// Struct /Script/FMJamPlayspaceRuntime.JamLoopReactiveFX
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJamLoopReactiveFX
{ 
	SDK_UNDEFINED(16,13864) /* TArray<TWeakObjectPtr<UNiagaraComponent*>> */ __um(NiagaraComponents);              // 0x0000   (0x0010)  
};

