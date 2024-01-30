
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMCoreRuntime
/// dependency: FMJamCatalogRuntime
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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FScalableFloat)                            MinLoopLength                                               OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	DMember(float)                                     LoopStartTime                                               OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     LoopLength                                                  OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FName)                                     LoopShortName                                               OFFSET(getStruct<T>, {0x118, 4, 0, 0})
	SMember(FString)                                   LoopType                                                    OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   LoopID                                                      OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	CMember(class AJamPlayspace*)                      JamPlayspace                                                OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /Script/FMJamPlayspaceRuntime.JamMidiEventDriver
/// Size: 0x0020 (0x000028 - 0x000048)
class UJamMidiEventDriver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UJamMusicSlot*>)            WeakOwningMusicSlotPtr                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UParsedMidiEventData*)               ParsedMidiEventData                                         OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspace
/// Size: 0x0050 (0x000768 - 0x0007B8)
class AJamPlayspace : public ASparksMusicPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1976;

public:
	CMember(class UJamPlayspaceComponent_MusicManager*) MusicManager                                               OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UJamPlayspaceComponent_LipSyncAssetManager*) LipSyncManager                                      OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UJamPlayspaceComponent_ReactiveFX*)  ReactiveFXComponent                                         OFFSET(get<T>, {0x7A8, 8, 0, 0})


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopLoopForPlayer
	// void StopLoopForPlayer(class APlayerState* PlayerState, bool bStopAutoJammers);                                          // [0xb613334] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopLoopByInstanceId
	// void StopLoopByInstanceId(int32_t LoopInstanceId);                                                                       // [0xb6132b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAutoJammersForPlayer
	// void StopAutoJammersForPlayer(class APlayerState* PlayerState);                                                          // [0xb613234] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAllLoopsForLoopType
	// void StopAllLoopsForLoopType(EFMJamLoopType LoopType);                                                                   // [0xb6131b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.PlayLoop
	// void PlayLoop(class APlayerState* PlayerState, FName SongShortName, EFMJamLoopType LoopType, bool bForceAudioState, bool bIsAutoJammer); // [0xb612e44] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.IsJamFull
	// bool IsJamFull(bool bCountAutoJammers);                                                                                  // [0xb611ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsSortedByLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsSortedByLoopType();                                                                  // [0xb611254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsInUse
	// TArray<UJamMusicSlot*> GetMusicSlotsInUse();                                                                             // [0xb6111dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsForLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsForLoopType(EFMJamLoopType LoopType);                                                // [0xb61104c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlots
	// TArray<UJamMusicSlot*> GetMusicSlots();                                                                                  // [0xb611010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotForPlayer
	// class UJamMusicSlot* GetMusicSlotForPlayer(class APlayerState* PlayerState);                                             // [0xb610d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetJammers
	// TArray<APlayerState*> GetJammers();                                                                                      // [0xb610c38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetJamAudioSource
	// class UAudioComponent* GetJamAudioSource();                                                                              // [0xb610b0c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetAllowGlobalControlAccess
	// bool GetAllowGlobalControlAccess();                                                                                      // [0x8d200b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.DoAnyOtherJammersHaveGameplayTag
	// bool DoAnyOtherJammersHaveGameplayTag(class APlayerState* LocalPlayerState, FGameplayTag GlobalControlsTag);             // [0xb6104b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.CountActiveLoops
	// int32_t CountActiveLoops(bool bCountAutoJammers);                                                                        // [0xb610394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.ConvertPlayerToAutoJammer
	// void ConvertPlayerToAutoJammer(class APlayerState* PlayerState);                                                         // [0xb61020c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.BeginShutdownJam
	// void BeginShutdownJam();                                                                                                 // [0x211c0a0] Event|Public|BlueprintEvent 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_LipSyncAssetManager
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UJamPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/FMJamPlayspaceRuntime.JamMusicSlot
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UJamMusicSlot : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnLoopStarted                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoopStopped                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UMidiFile*)                          CurrentMidiFile                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UFusionPatch*)                       CurrentFusionPatch                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UJamMidiEventDriver*)                MidiEventDriver                                             OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bAttemptingResolveAndLoad                                   OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FJamPlayParams)                            CurrentPlayParams                                           OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	CMember(class UJamPlayspaceComponent_MusicManager*) JamMusicManager                                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(int32_t)                                   NthSlot                                                     OFFSET(get<int32_t>, {0xA8, 4, 0, 0})


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnUEFNResolverComplete
	// void OnUEFNResolverComplete(class UFMUEFNResolver* Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded);     // [0xb6126e0] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnScanForSongsCompleted
	// void OnScanForSongsCompleted(class UFMJamSongCatalog* Sender, TArray<UFMJamSong*> AddedSongs);                           // [0xb611fc4] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnRep_CurrentPlayParams
	// void OnRep_CurrentPlayParams(FJamPlayParams& OldPlayParams);                                                             // [0xb611f20] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnJamLoadRequestComplete
	// void OnJamLoadRequestComplete(FJamLoadResult LoadResult);                                                                // [0xb611c08] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnCMSCatalogRequestFinished
	// void OnCMSCatalogRequestFinished(class UFMJamSongCatalog* Sender, bool bSuccess);                                        // [0xb611b40] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.IsInUse
	// bool IsInUse();                                                                                                          // [0xb611a8c] Final|Native|Public|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetPlayParams
	// FJamPlayParams GetPlayParams();                                                                                          // [0xb6112ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetMusicManager
	// class UJamPlayspaceComponent_MusicManager* GetMusicManager();                                                            // [0x30c6fc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetIsAutoJammer
	// bool GetIsAutoJammer();                                                                                                  // [0xb610af4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                               // [0xb6109dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSongShortName
	// FName GetCurrentSongShortName();                                                                                         // [0x5c148d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSongLinkCode
	// FString GetCurrentSongLinkCode();                                                                                        // [0xb61099c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSong
	// class UFMJamSong* GetCurrentSong();                                                                                      // [0xb610978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentPlayerState
	// class APlayerState* GetCurrentPlayerState();                                                                             // [0xb610954] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentMode
	// EMusicKeyMode GetCurrentMode();                                                                                          // [0xb61090c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoopType
	// EFMJamLoopType GetCurrentLoopType();                                                                                     // [0xb6108ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoopInstanceId
	// int32_t GetCurrentLoopInstanceId();                                                                                      // [0x5c14928] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoop
	// class UFMJamLoop* GetCurrentLoop();                                                                                      // [0xb610888] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                               // [0xb610840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentCatalogEntry
	// class UCatalogData* GetCurrentCatalogEntry();                                                                            // [0xb61081c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UJamPlayspaceComponent_MusicManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnLoopStarted                                               OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoopStopped                                               OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(TArray<class UJamMusicSlot*>)              MusicSlots                                                  OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FGameplayEventListenerHandle)              KeyChangedEventHandle                                       OFFSET(getStruct<T>, {0xD8, 28, 0, 0})
	SMember(FGameplayEventListenerHandle)              ModeChangedEventHandle                                      OFFSET(getStruct<T>, {0xF4, 28, 0, 0})
	SMember(FGameplayEventListenerHandle)              TempoChangedEventHandle                                     OFFSET(getStruct<T>, {0x110, 28, 0, 0})
	DMember(float)                                     LocalPlayerGainParam                                        OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     StandardGainParam                                           OFFSET(get<float>, {0x14C, 4, 0, 0})


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.UpdateAllMetasounds
	// void UpdateAllMetasounds(class APlayerState* PlayerToIgnore);                                                            // [0xb61348c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.TickToSeconds
	// float TickToSeconds(int32_t Tick);                                                                                       // [0xb6133fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.ShouldPlayLocalSound
	// bool ShouldPlayLocalSound(class APlayerState* PlayerToIgnore);                                                           // [0xb613124] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.SecondsToTick
	// int32_t SecondsToTick(float Seconds);                                                                                    // [0xb613094] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnPlayspaceUserRemoved
	// void OnPlayspaceUserRemoved(FPlayspaceUser& RemovedUser);                                                                // [0xb611e40] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& AddedUser);                                                                    // [0xb611d60] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnLicensedAudioTreatmentChanged
	// void OnLicensedAudioTreatmentChanged();                                                                                  // [0xb611d4c] Final|Native|Public  
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.IsAllowedToJamInSplitscreen
	// bool IsAllowedToJamInSplitscreen(class APlayerState* PlayerStateToCheck);                                                // [0xb61192c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleTempoChangedEvent
	// void HandleTempoChangedEvent(FSparksPlayspaceEvent_TempoChanged& Payload);                                               // [0xb6117e8] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleOnLoopStopped
	// void HandleOnLoopStopped(FJamPlayParams& PlayParams, bool bChangedLoop);                                                 // [0xb61164c] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleOnLoopStarted
	// void HandleOnLoopStarted(FJamPlayParams& PlayParams, bool bChangedLoop);                                                 // [0xb6114b0] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleModeChangedEvent
	// void HandleModeChangedEvent(FSparksPlayspaceEvent_KeyModeChanged& Payload);                                              // [0xb611424] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleKeyChangedEvent
	// void HandleKeyChangedEvent(FSparksPlayspaceEvent_KeyChanged& Payload);                                                   // [0xb611398] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetStandardGainValue
	// float GetStandardGainValue();                                                                                            // [0xb611380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotsInUse
	// TArray<UJamMusicSlot*> GetMusicSlotsInUse();                                                                             // [0xb611218] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotsForLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsForLoopType(EFMJamLoopType LoopType);                                                // [0xb611134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotIndexForPlayer
	// int32_t GetMusicSlotIndexForPlayer(class APlayerState* PlayerState);                                                     // [0xb610f34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotIndexForLoopInstanceId
	// int32_t GetMusicSlotIndexForLoopInstanceId(int32_t LoopInstanceId);                                                      // [0xb610ea8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotForPlayer
	// class UJamMusicSlot* GetMusicSlotForPlayer(class APlayerState* PlayerState);                                             // [0xb610ddc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotByLoopInstanceId
	// class UJamMusicSlot* GetMusicSlotByLoopInstanceId(int32_t LoopInstanceId);                                               // [0xb610cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMetasoundPlayer
	// class UAudioComponent* GetMetasoundPlayer();                                                                             // [0xb610c9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetLocalPlayerGainValue
	// float GetLocalPlayerGainValue();                                                                                         // [0xa08e680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetLoadedAnimations
	// class USparksInstrumentAnimations* GetLoadedAnimations();                                                                // [0xb610c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetJamPlayspace
	// class AJamPlayspace* GetJamPlayspace();                                                                                  // [0xb610c14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetJamInfoFromSlot
	// FJamEvent_JamLoopStarted GetJamInfoFromSlot(int32_t SlotIndex);                                                          // [0xb610b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetDesiredGain
	// float GetDesiredGain(class APlayerState* PlayerState);                                                                   // [0xb610a38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                               // [0xb610a14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMode
	// EMusicKeyMode GetCurrentMode();                                                                                          // [0xb610930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMidiTick
	// int32_t GetCurrentMidiTick();                                                                                            // [0xb6108e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMidiSeconds
	// float GetCurrentMidiSeconds();                                                                                           // [0xb6108c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                               // [0xb610864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAutoJammersForPlayer
	// TArray<UJamMusicSlot*> GetAutoJammersForPlayer(class APlayerState* PlayerState);                                         // [0xb610774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAllMusicSlots
	// TArray<UJamMusicSlot*> GetAllMusicSlots();                                                                               // [0xb610738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAllJammers
	// TArray<APlayerState*> GetAllJammers();                                                                                   // [0xb6106f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.FireGlobalControlsAnalytics
	// void FireGlobalControlsAnalytics(class APlayerState* PlayerState);                                                       // [0xb610624] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.CountActiveSlots
	// int32_t CountActiveSlots(bool bCountAutoJammers);                                                                        // [0xb610424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UJamPlayspaceComponent_ReactiveFX : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FJamReactiveFXState)                       ReactiveFXState                                             OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	DMember(float)                                     PeakTamerValueReleaseTimeSec                                OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(TMap<int32_t, FJamLoopReactiveFX>)         LoopReactiveFX                                              OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.RemoveReactiveNiagaraEffect
	// bool RemoveReactiveNiagaraEffect(int32_t LoopInstanceId, class UNiagaraComponent* NiagaraComponent);                     // [0xb612fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.HasReactiveEffectsForLoop
	// bool HasReactiveEffectsForLoop(int32_t LoopInstanceId);                                                                  // [0xb611874] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.GetReactiveNiagaraEffects
	// TArray<UNiagaraComponent*> GetReactiveNiagaraEffects(int32_t LoopInstanceId);                                            // [0xb6112dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.ClearReactiveEffectsForLoop
	// void ClearReactiveEffectsForLoop(int32_t LoopInstanceId, bool bStopEffectsImmediately);                                  // [0xb610148] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.ClearReactiveEffects
	// void ClearReactiveEffects(bool bStopEffectsImmediately);                                                                 // [0xb6100c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.AddReactiveNiagaraEffect
	// void AddReactiveNiagaraEffect(int32_t LoopInstanceId, class UNiagaraComponent* NiagaraComponent);                        // [0xb60ff44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume
/// Size: 0x0000 (0x000330 - 0x000330)
class AJamPlayspaceVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume.BP_UpdateReactiveFX
	// void BP_UpdateReactiveFX(float JamAmplitude);                                                                            // [0x211c0a0] Event|Public|BlueprintEvent 
};

/// Class /Script/FMJamPlayspaceRuntime.JamQuickplayPlayerSpawningComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UJamQuickplayPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGameplayTagContainer)                     PregameSpawnTags                                            OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamPlayParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FJamPlayParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TWeakObjectPtr<APlayerState*>)             PlayerState                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   LoopInstanceId                                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsAutoJammer                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(TWeakObjectPtr<UCatalogData*>)             CMSCatalogEntry                                             OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UFMJamSong*>)               Song                                                        OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamLoadResult
/// Size: 0x0020 (0x000000 - 0x000020)
class FJamLoadResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UJamMusicSlot*)                      Slot                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFusionPatch*)                       FusionPatch                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMidiFile*)                          MidiFile                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(EMusicKeyMode)                             Mode                                                        OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bWasCancelled                                               OFFSET(get<bool>, {0x1A, 1, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopBase
/// Size: 0x0040 (0x000000 - 0x000040)
class FJamEvent_JamLoopBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UCatalogData*)                       CatalogEntry                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(class APlayerState*)                       PlayerState                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   LoopInstanceId                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(bool)                                      bIsAutoJammer                                               OFFSET(get<bool>, {0x2C, 1, 0, 0})
	CMember(class USparksInstrumentAnimations*)        Animations                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bChangedLoop                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopStarted
/// Size: 0x0000 (0x000040 - 0x000040)
class FJamEvent_JamLoopStarted : public FJamEvent_JamLoopBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopStopped
/// Size: 0x0000 (0x000040 - 0x000040)
class FJamEvent_JamLoopStopped : public FJamEvent_JamLoopBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_LoopsChangedThisFrame
/// Size: 0x0001 (0x000000 - 0x000001)
class FJamEvent_LoopsChangedThisFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_OnPrimaryPlayerPresenceChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FJamEvent_OnPrimaryPlayerPresenceChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bPrimaryPlayerInPlayspace                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamReactiveFXState
/// Size: 0x0028 (0x000000 - 0x000028)
class FJamReactiveFXState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     OverallAmplitude                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             LoopAmplitudes                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVector4f>)                         LoopBandValues                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamLoopReactiveFX
/// Size: 0x0010 (0x000000 - 0x000010)
class FJamLoopReactiveFX : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<TWeakObjectPtr<UNiagaraComponent*>>) NiagaraComponents                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

