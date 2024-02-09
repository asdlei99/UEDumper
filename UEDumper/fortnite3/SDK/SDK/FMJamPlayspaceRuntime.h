
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
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x00A8   (0x0040)  MISSED
	FScalableFloat                                     MinLoopLength;                                              // 0x00E8   (0x0028)  
	float                                              LoopStartTime;                                              // 0x0110   (0x0004)  
	float                                              LoopLength;                                                 // 0x0114   (0x0004)  
	FName                                              LoopShortName;                                              // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13757) /* FString */              __um(LoopType);                                             // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,13758) /* FString */              __um(LoopID);                                               // 0x0130   (0x0010)  
	class AJamPlayspace*                               JamPlayspace;                                               // 0x0140   (0x0008)  
};

/// Class /Script/FMJamPlayspaceRuntime.JamMidiEventDriver
/// Size: 0x0020 (0x000028 - 0x000048)
class UJamMidiEventDriver : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(8,13759) /* TWeakObjectPtr<UJamMusicSlot*> */ __um(WeakOwningMusicSlotPtr);                      // 0x0030   (0x0008)  
	class UParsedMidiEventData*                        ParsedMidiEventData;                                        // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspace
/// Size: 0x0050 (0x000768 - 0x0007B8)
class AJamPlayspace : public ASparksMusicPlayspace
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0768   (0x0018)  MISSED
	class UJamPlayspaceComponent_MusicManager*         MusicManager;                                               // 0x0780   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0788   (0x0018)  MISSED
	class UJamPlayspaceComponent_LipSyncAssetManager*  LipSyncManager;                                             // 0x07A0   (0x0008)  
	class UJamPlayspaceComponent_ReactiveFX*           ReactiveFXComponent;                                        // 0x07A8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x07B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopLoopForPlayer
	// void StopLoopForPlayer(class APlayerState* PlayerState, bool bStopAutoJammers);                                       // [0xb874838] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopLoopByInstanceId
	// void StopLoopByInstanceId(int32_t LoopInstanceId);                                                                    // [0xb874778] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAutoJammersForPlayer
	// void StopAutoJammersForPlayer(class APlayerState* PlayerState);                                                       // [0xb8746b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAllLoopsForLoopType
	// void StopAllLoopsForLoopType(EFMJamLoopType LoopType);                                                                // [0xb8745f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.PlayLoop
	// void PlayLoop(class APlayerState* PlayerState, FName SongShortName, EFMJamLoopType LoopType, bool bForceAudioState, bool bIsAutoJammer); // [0xb874044] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.IsJamFull
	// bool IsJamFull(bool bCountAutoJammers);                                                                               // [0xb872af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsSortedByLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsSortedByLoopType();                                                               // [0xb8721b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsInUse
	// TArray<UJamMusicSlot*> GetMusicSlotsInUse();                                                                          // [0xb872138] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsForLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsForLoopType(EFMJamLoopType LoopType);                                             // [0xb871f28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlots
	// TArray<UJamMusicSlot*> GetMusicSlots();                                                                               // [0xb871eec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotForPlayer
	// class UJamMusicSlot* GetMusicSlotForPlayer(class APlayerState* PlayerState);                                          // [0xb871b24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetJammers
	// TArray<APlayerState*> GetJammers();                                                                                   // [0xb8719cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetJamAudioSource
	// class UAudioComponent* GetJamAudioSource();                                                                           // [0xb871860] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetAllowGlobalControlAccess
	// bool GetAllowGlobalControlAccess();                                                                                   // [0x8d3e980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.DoAnyOtherJammersHaveGameplayTag
	// bool DoAnyOtherJammersHaveGameplayTag(class APlayerState* LocalPlayerState, FGameplayTag GlobalControlsTag);          // [0xb871168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.CountActiveLoops
	// int32_t CountActiveLoops(bool bCountAutoJammers);                                                                     // [0xb870fc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.ConvertPlayerToAutoJammer
	// void ConvertPlayerToAutoJammer(class APlayerState* PlayerState);                                                      // [0xb870e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.BeginShutdownJam
	// void BeginShutdownJam();                                                                                              // [0x2047e54] Event|Public|BlueprintEvent 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_LipSyncAssetManager
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UJamPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00B0   (0x0028)  MISSED
};

/// Struct /Script/FMJamPlayspaceRuntime.JamPlayParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJamPlayParams
{ 
	FName                                              SongShortName;                                              // 0x0000   (0x0004)  
	EFMJamLoopType                                     LoopType;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	SDK_UNDEFINED(8,13760) /* TWeakObjectPtr<APlayerState*> */ __um(PlayerState);                                  // 0x0008   (0x0008)  
	int32_t                                            LoopInstanceId;                                             // 0x0010   (0x0004)  
	bool                                               bIsAutoJammer;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	SDK_UNDEFINED(8,13761) /* TWeakObjectPtr<UCatalogData*> */ __um(CMSCatalogEntry);                              // 0x0018   (0x0008)  
	SDK_UNDEFINED(8,13762) /* TWeakObjectPtr<UFMJamSong*> */ __um(Song);                                           // 0x0020   (0x0008)  
};

/// Class /Script/FMJamPlayspaceRuntime.JamMusicSlot
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UJamMusicSlot : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13763) /* FMulticastInlineDelegate */ __um(OnLoopStarted);                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,13764) /* FMulticastInlineDelegate */ __um(OnLoopStopped);                                    // 0x0038   (0x0010)  
	class UMidiFile*                                   CurrentMidiFile;                                            // 0x0048   (0x0008)  
	class UFusionPatch*                                CurrentFusionPatch;                                         // 0x0050   (0x0008)  
	class UJamMidiEventDriver*                         MidiEventDriver;                                            // 0x0058   (0x0008)  
	bool                                               bAttemptingResolveAndLoad;                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x17];                                      // 0x0061   (0x0017)  MISSED
	FJamPlayParams                                     CurrentPlayParams;                                          // 0x0078   (0x0028)  
	class UJamPlayspaceComponent_MusicManager*         JamMusicManager;                                            // 0x00A0   (0x0008)  
	int32_t                                            NthSlot;                                                    // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnUEFNResolverComplete
	// void OnUEFNResolverComplete(class UFMUEFNResolver* Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded);  // [0xb8737e4] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnScanForSongsCompleted
	// void OnScanForSongsCompleted(class UFMJamSongCatalog* Sender, TArray<UFMJamSong*> AddedSongs);                        // [0xb87304c] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnRep_CurrentPlayParams
	// void OnRep_CurrentPlayParams(FJamPlayParams& OldPlayParams);                                                          // [0xb872fa8] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnJamLoadRequestComplete
	// void OnJamLoadRequestComplete(FJamLoadResult LoadResult);                                                             // [0xb872d00] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnCMSCatalogRequestFinished
	// void OnCMSCatalogRequestFinished(class UFMJamSongCatalog* Sender, bool bSuccess);                                     // [0xb872bc0] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.IsInUse
	// bool IsInUse();                                                                                                       // [0xb872acc] Final|Native|Public|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetPlayParams
	// FJamPlayParams GetPlayParams();                                                                                       // [0xb872208] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetMusicManager
	// class UJamPlayspaceComponent_MusicManager* GetMusicManager();                                                         // [0x2ed94dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetIsAutoJammer
	// bool GetIsAutoJammer();                                                                                               // [0xb871848] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                            // [0xb8716f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSongShortName
	// FName GetCurrentSongShortName();                                                                                      // [0x5905dc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSongLinkCode
	// FString GetCurrentSongLinkCode();                                                                                     // [0xb8716b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSong
	// class UFMJamSong* GetCurrentSong();                                                                                   // [0xb87168c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentPlayerState
	// class APlayerState* GetCurrentPlayerState();                                                                          // [0xb871668] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentMode
	// EMusicKeyMode GetCurrentMode();                                                                                       // [0xb871620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoopType
	// EFMJamLoopType GetCurrentLoopType();                                                                                  // [0xb8715c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoopInstanceId
	// int32_t GetCurrentLoopInstanceId();                                                                                   // [0x5905e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoop
	// class UFMJamLoop* GetCurrentLoop();                                                                                   // [0xb87159c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                            // [0xb871554] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentCatalogEntry
	// class UCatalogData* GetCurrentCatalogEntry();                                                                         // [0xb871530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UJamPlayspaceComponent_MusicManager : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13765) /* FMulticastInlineDelegate */ __um(OnLoopStarted);                                    // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,13766) /* FMulticastInlineDelegate */ __um(OnLoopStopped);                                    // 0x00B8   (0x0010)  
	TArray<class UJamMusicSlot*>                       MusicSlots;                                                 // 0x00C8   (0x0010)  
	FGameplayEventListenerHandle                       KeyChangedEventHandle;                                      // 0x00D8   (0x001C)  
	FGameplayEventListenerHandle                       ModeChangedEventHandle;                                     // 0x00F4   (0x001C)  
	FGameplayEventListenerHandle                       TempoChangedEventHandle;                                    // 0x0110   (0x001C)  
	unsigned char                                      UnknownData01_5[0x1C];                                      // 0x012C   (0x001C)  MISSED
	float                                              LocalPlayerGainParam;                                       // 0x0148   (0x0004)  
	float                                              StandardGainParam;                                          // 0x014C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0150   (0x0020)  MISSED


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.UpdateAllMetasounds
	// void UpdateAllMetasounds(class APlayerState* PlayerToIgnore);                                                         // [0xb874a48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.TickToSeconds
	// float TickToSeconds(int32_t Tick);                                                                                    // [0xb874978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.ShouldPlayLocalSound
	// bool ShouldPlayLocalSound(class APlayerState* PlayerToIgnore);                                                        // [0xb874528] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.SecondsToTick
	// int32_t SecondsToTick(float Seconds);                                                                                 // [0xb874458] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnPlayspaceUserRemoved
	// void OnPlayspaceUserRemoved(FPlayspaceUser& RemovedUser);                                                             // [0xb872ec8] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& AddedUser);                                                                 // [0xb872de8] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnLicensedAudioTreatmentChanged
	// void OnLicensedAudioTreatmentChanged();                                                                               // [0xb872dd4] Final|Native|Public  
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.IsAllowedToJamInSplitscreen
	// bool IsAllowedToJamInSplitscreen(class APlayerState* PlayerStateToCheck);                                             // [0xb872934] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleTempoChangedEvent
	// void HandleTempoChangedEvent(FSparksPlayspaceEvent_TempoChanged& Payload);                                            // [0xb8727ac] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleOnLoopStopped
	// void HandleOnLoopStopped(FJamPlayParams& PlayParams, bool bChangedLoop);                                              // [0xb8725fc] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleOnLoopStarted
	// void HandleOnLoopStarted(FJamPlayParams& PlayParams, bool bChangedLoop);                                              // [0xb87244c] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleModeChangedEvent
	// void HandleModeChangedEvent(FSparksPlayspaceEvent_KeyModeChanged& Payload);                                           // [0xb8723c0] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleKeyChangedEvent
	// void HandleKeyChangedEvent(FSparksPlayspaceEvent_KeyChanged& Payload);                                                // [0xb872334] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetStandardGainValue
	// float GetStandardGainValue();                                                                                         // [0xb87231c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotsInUse
	// TArray<UJamMusicSlot*> GetMusicSlotsInUse();                                                                          // [0xb872174] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotsForLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsForLoopType(EFMJamLoopType LoopType);                                             // [0xb872050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotIndexForPlayer
	// int32_t GetMusicSlotIndexForPlayer(class APlayerState* PlayerState);                                                  // [0xb871dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotIndexForLoopInstanceId
	// int32_t GetMusicSlotIndexForLoopInstanceId(int32_t LoopInstanceId);                                                   // [0xb871d04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotForPlayer
	// class UJamMusicSlot* GetMusicSlotForPlayer(class APlayerState* PlayerState);                                          // [0xb871bf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotByLoopInstanceId
	// class UJamMusicSlot* GetMusicSlotByLoopInstanceId(int32_t LoopInstanceId);                                            // [0xb871a54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMetasoundPlayer
	// class UAudioComponent* GetMetasoundPlayer();                                                                          // [0xb871a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetLocalPlayerGainValue
	// float GetLocalPlayerGainValue();                                                                                      // [0xa20f6c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetLoadedAnimations
	// class USparksInstrumentAnimations* GetLoadedAnimations();                                                             // [0xb871a0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetJamPlayspace
	// class AJamPlayspace* GetJamPlayspace();                                                                               // [0xb8719a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetJamInfoFromSlot
	// FJamEvent_JamLoopStarted GetJamInfoFromSlot(int32_t SlotIndex);                                                       // [0xb871888] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetDesiredGain
	// float GetDesiredGain(class APlayerState* PlayerState);                                                                // [0xb87174c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                            // [0xb871728] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMode
	// EMusicKeyMode GetCurrentMode();                                                                                       // [0xb871644] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMidiTick
	// int32_t GetCurrentMidiTick();                                                                                         // [0xb8715fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMidiSeconds
	// float GetCurrentMidiSeconds();                                                                                        // [0xb8715d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                            // [0xb871578] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAutoJammersForPlayer
	// TArray<UJamMusicSlot*> GetAutoJammersForPlayer(class APlayerState* PlayerState);                                      // [0xb871448] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAllMusicSlots
	// TArray<UJamMusicSlot*> GetAllMusicSlots();                                                                            // [0xb87140c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAllJammers
	// TArray<APlayerState*> GetAllJammers();                                                                                // [0xb8713cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.FireGlobalControlsAnalytics
	// void FireGlobalControlsAnalytics(class APlayerState* PlayerState);                                                    // [0xb8712b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.CountActiveSlots
	// int32_t CountActiveSlots(bool bCountAutoJammers);                                                                     // [0xb871098] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	SDK_UNDEFINED(80,13767) /* TMap<int32_t, FJamLoopReactiveFX> */ __um(LoopReactiveFX);                          // 0x00D0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0120   (0x0088)  MISSED


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.RemoveReactiveNiagaraEffect
	// bool RemoveReactiveNiagaraEffect(int32_t LoopInstanceId, class UNiagaraComponent* NiagaraComponent);                  // [0xb874308] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.HasReactiveEffectsForLoop
	// bool HasReactiveEffectsForLoop(int32_t LoopInstanceId);                                                               // [0xb872838] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.GetReactiveNiagaraEffects
	// TArray<UNiagaraComponent*> GetReactiveNiagaraEffects(int32_t LoopInstanceId);                                         // [0xb872238] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.ClearReactiveEffectsForLoop
	// void ClearReactiveEffectsForLoop(int32_t LoopInstanceId, bool bStopEffectsImmediately);                               // [0xb870cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.ClearReactiveEffects
	// void ClearReactiveEffects(bool bStopEffectsImmediately);                                                              // [0xb870bfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.AddReactiveNiagaraEffect
	// void AddReactiveNiagaraEffect(int32_t LoopInstanceId, class UNiagaraComponent* NiagaraComponent);                     // [0xb8709ec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume
/// Size: 0x0000 (0x000330 - 0x000330)
class AJamPlayspaceVolume : public AGameplayVolume
{ 
public:


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume.BP_UpdateReactiveFX
	// void BP_UpdateReactiveFX(float JamAmplitude);                                                                         // [0x2047e54] Event|Public|BlueprintEvent 
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
	SDK_UNDEFINED(16,13768) /* TArray<TWeakObjectPtr<UNiagaraComponent*>> */ __um(NiagaraComponents);              // 0x0000   (0x0010)  
};

