
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
/// dependency: FortniteGame
/// dependency: HarmonixMetasound
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SparksCameraDirectorRuntime

/// Class /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent
{ 
public:
	SDK_UNDEFINED(16,13624) /* FMulticastInlineDelegate */ __um(OnLipSyncAnimChanged);                             // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager.TryGetLipSyncAnimAssetForPlayer
	// TWeakObjectPtr<UAnimSequence*> TryGetLipSyncAnimAssetForPlayer(class APlayerState* PlayerState);                      // [0xab94c2c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager.LipSyncAnimDecidedDelegate__DelegateSignature
	// void LipSyncAnimDecidedDelegate__DelegateSignature(TWeakObjectPtr<UAnimSequence*> LipSyncAnimSequence, TArray<APlayerState*>& PlayerStates); // [0x2177018] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPlayspaceComponent_SparksPerfMem : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem.StopTrackingServerPerf
	// void StopTrackingServerPerf();                                                                                        // [0xab94a58] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem.StartTrackingServerPerf
	// void StartTrackingServerPerf(FSparksServerPerfMemSettings& Settings);                                                 // [0xab949bc] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksMusicPlayspaceInteractorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.ExitedSparksMusicPlayspace
	// void ExitedSparksMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                              // [0x80b9074] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.EnteredSparksMusicPlayspace
	// void EnteredSparksMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                             // [0x80e4e20] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.DoesSparksMusicPlayspaceInteratorHaveTag
	// bool DoesSparksMusicPlayspaceInteratorHaveTag(FGameplayTag& tag);                                                     // [0xab93c8c] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.AllowedToEnterMusicPlayspace
	// bool AllowedToEnterMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                            // [0x8d01238] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksMusicPlayerInterface : public USparksMusicPlayspaceInteractorInterface
{ 
public:


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.SparksMusicPlayerRemovedFromMusicPlayspace
	// void SparksMusicPlayerRemovedFromMusicPlayspace(class ASparksMusicPlayspace* Playspace);                              // [0x2177018] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.SparksMusicPlayerAddedToMusicPlayspace
	// void SparksMusicPlayerAddedToMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                  // [0x2177018] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.ShouldAutoRegister
	// bool ShouldAutoRegister();                                                                                            // [0xab94998] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.IsSparksMusicPlayerPlayingWithKey
	// bool IsSparksMusicPlayerPlayingWithKey();                                                                             // [0x80f565c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.IsSparksMusicPlayerPlaying
	// bool IsSparksMusicPlayerPlaying();                                                                                    // [0xab94614] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceInteractor
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSparksPlayspaceInteractor
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	bool                                               bIsValidInteractor;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UObject*                                     Object;                                                     // 0x0010   (0x0008)  
	class AActor*                                      AddedForActor;                                              // 0x0018   (0x0008)  
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceMusicPlayer
/// Size: 0x0008 (0x000020 - 0x000028)
struct FSparksPlayspaceMusicPlayer : FSparksPlayspaceInteractor
{ 
	bool                                               bIsValidMusicPlayer;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace
/// Size: 0x00A8 (0x0006C0 - 0x000768)
class ASparksMusicPlayspace : public AFortPlayspace
{ 
public:
	SDK_UNDEFINED(16,13625) /* FMulticastInlineDelegate */ __um(OnMidiEventDriverChanged);                         // 0x06C0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x06D0   (0x0018)  MISSED
	SDK_UNDEFINED(16,13626) /* FMulticastInlineDelegate */ __um(OnMidiEventDataParsed);                            // 0x06E8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x06F8   (0x0018)  MISSED
	TArray<FSparksPlayspaceInteractor>                 Interactors;                                                // 0x0710   (0x0010)  
	class UAudioComponent*                             MetasoundPlayer;                                            // 0x0720   (0x0008)  
	class UAudioComponent*                             MetasoundMixer;                                             // 0x0728   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x0730   (0x0008)  
	TArray<FSparksPlayspaceMusicPlayer>                MusicPlayers;                                               // 0x0738   (0x0010)  
	class USparksMusicPlayspaceAudioState*             AudioState;                                                 // 0x0748   (0x0008)  
	class USparksCameraDirectorComponent*              CameraDirector;                                             // 0x0750   (0x0008)  
	class UPlayspaceComponent_PlayerManager*           PlayerManagerComp;                                          // 0x0758   (0x0008)  
	class UPlayspaceComponent_SparksPerfMem*           PerfMemComp;                                                // 0x0760   (0x0008)  


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMusicKeyAndMode
	// bool TryGetMusicKeyAndMode(EMusicKey& OutMusicKey, EMusicKeyMode& OutMusicKeyMode);                                   // [0xab94df0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMidiEventDrivers
	// TArray<TScriptInterface<Class>> TryGetMidiEventDrivers();                                                             // [0xab94d80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMidiEventDriverForPlayerState
	// TScriptInterface<Class> TryGetMidiEventDriverForPlayerState(class APlayerState* PlayerState);                         // [0xab94ce0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.RemoveMusicPlayer
	// bool RemoveMusicPlayer(class UObject* MusicPlayer, class AActor* ForActor);                                           // [0xab948d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.RemoveInteractor
	// bool RemoveInteractor(class UObject* Interactor, class AActor* ForActor);                                             // [0xab94810] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.OnMeasureEvent
	// void OnMeasureEvent(int32_t MeasureNumber);                                                                           // [0xab946fc] Native|Protected     
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.OnBeatEvent
	// void OnBeatEvent(int32_t BeatNumber, int32_t BeatInBar);                                                              // [0xab94638] Native|Protected     
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.MidiEventDriverChangedDelegate__DelegateSignature
	// void MidiEventDriverChangedDelegate__DelegateSignature(TScriptInterface<Class> MidiEventDriver);                      // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.MidiEventDataParsedDelegate__DelegateSignature
	// void MidiEventDataParsedDelegate__DelegateSignature(TScriptInterface<Class> MidiEventDriver, class UParsedMidiEventData* ParsedMidiEventData); // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.IsAnyMusicPlayingWithKey
	// bool IsAnyMusicPlayingWithKey();                                                                                      // [0xab945ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.IsAnyMusicPlaying
	// bool IsAnyMusicPlaying();                                                                                             // [0xab945c4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetSparksMusicPlayspaceOfClassByLocation
	// class ASparksMusicPlayspace* GetSparksMusicPlayspaceOfClassByLocation(class UClass* PlayspaceType, class UObject* WorldContextObject, FVector& Location, bool bMatchChildTypes); // [0xab94310] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetSparksMusicPlayspaceOfClass
	// class ASparksMusicPlayspace* GetSparksMusicPlayspaceOfClass(class UClass* PlayspaceType, class UObject* WorldContextObject, class AActor* Actor, bool bMatchChildTypes); // [0xab93f6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetMusicPlayers
	// TArray<UObject*> GetMusicPlayers();                                                                                   // [0xab93f2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                   // [0xab93da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetAllPlayerControllers
	// TArray<AController*> GetAllPlayerControllers();                                                                       // [0xab93d64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.DoesPlayerHaveInstrument
	// bool DoesPlayerHaveInstrument(class APlayerState* PlayerState, ESparksInstrumentType InstrumentType);                 // [0xab93bc0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnUserRemoved
	// void BPEvent_OnUserRemoved(FPlayspaceUser& User, class APlayerState* PlayerState);                                    // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnUserAdded
	// void BPEvent_OnUserAdded(FPlayspaceUser& User, class APlayerState* PlayerState);                                      // [0x2177018] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnIntialized
	// void BPEvent_OnIntialized();                                                                                          // [0x2177018] Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BP_GetOwnedEventRouter
	// class UGameplayEventRouterComponent* BP_GetOwnedEventRouter();                                                        // [0xab93b94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BP_GetAllPlayerStates
	// TArray<APlayerState*> BP_GetAllPlayerStates();                                                                        // [0xab93b48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.AddMusicPlayer
	// bool AddMusicPlayer(class UObject* Interactor, class AActor* ForActor);                                               // [0xab93a84] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.AddInteractor
	// bool AddInteractor(class UObject* Interactor, class AActor* ForActor);                                                // [0xab939c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USparksMusicPlayspaceAudioState : public UActorComponent
{ 
public:
	EMusicKey                                          CurrentKey;                                                 // 0x00A0   (0x0001)  
	EMusicKeyMode                                      CurrentMode;                                                // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00A2   (0x0002)  MISSED
	int32_t                                            CurrentTempo;                                               // 0x00A4   (0x0004)  


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.TriggerTempoChange
	// void TriggerTempoChange(int32_t BPM);                                                                                 // [0xab94bac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.TriggerModeChange
	// void TriggerModeChange(EMusicKeyMode InMode);                                                                         // [0xab94b2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.TriggerKeyChange
	// void TriggerKeyChange(EMusicKey InKey);                                                                               // [0xab94aac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnTempoChanged
	// void OnRep_OnTempoChanged();                                                                                          // [0xab947e0] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnModeChanged
	// void OnRep_OnModeChanged();                                                                                           // [0xab947b0] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnKeyChanged
	// void OnRep_OnKeyChanged();                                                                                            // [0xab94780] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                            // [0x9b7820c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentKeyMode
	// EMusicKeyMode GetCurrentKeyMode();                                                                                    // [0xab93f14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                            // [0x80cfcb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentAudioState
	// void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo);                           // [0xab93ddc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksServerPerfMemSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSparksServerPerfMemSettings
{ 
	SDK_UNDEFINED(16,13627) /* FString */              __um(GamePhaseName);                                        // 0x0000   (0x0010)  
	bool                                               bPeriodicCaptures;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            PeriodicCaptureCount;                                       // 0x0014   (0x0004)  
	int32_t                                            PeriodicCapturePeriodInSeconds;                             // 0x0018   (0x0004)  
	int32_t                                            PeriodicCaptureMinDelayInSeconds;                           // 0x001C   (0x0004)  
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_KeyChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksPlayspaceEvent_KeyChanged
{ 
	EMusicKey                                          Key;                                                        // 0x0000   (0x0001)  
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_KeyModeChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksPlayspaceEvent_KeyModeChanged
{ 
	EMusicKeyMode                                      KeyMode;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_TempoChanged
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSparksPlayspaceEvent_TempoChanged
{ 
	int32_t                                            Tempo;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_OnBeat
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSparksPlayspaceEvent_OnBeat
{ 
	int32_t                                            BeatNumber;                                                 // 0x0000   (0x0004)  
	int32_t                                            BeatInBar;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_OnMeasure
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSparksPlayspaceEvent_OnMeasure
{ 
	int32_t                                            MeasureNumber;                                              // 0x0000   (0x0004)  
};

