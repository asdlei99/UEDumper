
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: HarmonixMetasound
/// dependency: ModularGameplay
/// dependency: SparksCoreRuntime
/// dependency: SparksMusicPlayspaceRuntime

/// Class /Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem
/// Size: 0x0088 (0x000030 - 0x0000B8)
class USparksAnimationSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<USparksInstrumentAnimations*>) Anims_Default                                            OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<USparksInstrumentAnimations*>) Anims_Light                                              OFFSET(get<T>, {0x50, 32, 0, 0})
	DMember(int32_t)                                   NumAnimationRefs                                            OFFSET(get<int32_t>, {0x98, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem.GetLoadedSparksAnimations
	// class USparksInstrumentAnimations* GetLoadedSparksAnimations();                                                          // [0xb089d58] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance
/// Size: 0x0050 (0x000470 - 0x0004C0)
class USparksBaseLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	DMember(float)                                     MinTempo                                                    OFFSET(get<float>, {0x468, 4, 0, 0})
	DMember(float)                                     MaxTempo                                                    OFFSET(get<float>, {0x46C, 4, 0, 0})
	CMember(TArray<float>)                             BPMBucketMaxTempos                                          OFFSET(get<T>, {0x470, 16, 0, 0})
	DMember(float)                                     BPMBucketCooldownSeconds                                    OFFSET(get<float>, {0x480, 4, 0, 0})
	CMember(class USparksInstrumentAnimPlayerStateComponent*) InstrumentPSC                                        OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class ASparksMusicPlayspace*)              SparksPlayspace                                             OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x498, 8, 0, 0})
	DMember(float)                                     SongTempo                                                   OFFSET(get<float>, {0x4A0, 4, 0, 0})
	DMember(float)                                     BPMBucketCooldownRemaining                                  OFFSET(get<float>, {0x4A4, 4, 0, 0})
	DMember(int32_t)                                   BPMBucket                                                   OFFSET(get<int32_t>, {0x4A8, 4, 0, 0})
	DMember(int32_t)                                   PreviousBPMBucket                                           OFFSET(get<int32_t>, {0x4AC, 4, 0, 0})
	CMember(ESparksInstrumentType)                     Instrument                                                  OFFSET(get<T>, {0x4B0, 1, 0, 0})
	DMember(bool)                                      bCanPlayMidiAnimations                                      OFFSET(get<bool>, {0x4B1, 1, 0, 0})
	DMember(bool)                                      bMusicBeatIsActive                                          OFFSET(get<bool>, {0x4B2, 1, 0, 0})
	DMember(bool)                                      bIsRoamingOrNotAnimatable                                   OFFSET(get<bool>, {0x4B3, 1, 0, 0})
	DMember(bool)                                      bTransitionBeat                                             OFFSET(get<bool>, {0x4B4, 1, 0, 0})
	CMember(ESparksAnimatableState)                    AnimatableState                                             OFFSET(get<T>, {0x4B5, 1, 0, 0})
	DMember(bool)                                      bIsRoaming                                                  OFFSET(get<bool>, {0x4B6, 1, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.SetIsRoaming
	// void SetIsRoaming(bool bInIsRoaming);                                                                                    // [0xb08a4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.OnInstrumentPSCInitialized
	// void OnInstrumentPSCInitialized(class USparksInstrumentAnimPlayerStateComponent* NewInstrumentPSC);                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.GetIsRoaming
	// bool GetIsRoaming();                                                                                                     // [0xb089d1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.GetAnimatableState
	// ESparksAnimatableState GetAnimatableState();                                                                             // [0xb089c58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance
/// Size: 0x0020 (0x001620 - 0x001640)
class USparksInstrumentAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5696;

public:
	CMember(TWeakObjectPtr<ASparksMusicPlayspace*>)    SparksMusicPlayspace                                        OFFSET(get<T>, {0x1620, 8, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance.SetMidiEventDriver
	// void SetMidiEventDriver(TScriptInterface<Class> NewMidiEventDriver);                                                     // [0xb08a564] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance.GetMidiEventDriver
	// TScriptInterface<Class> GetMidiEventDriver();                                                                            // [0xb089d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance
/// Size: 0x0000 (0x001640 - 0x001640)
class USparksGuitarAnimInstance : public USparksInstrumentAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5696;

public:
	DMember(int32_t)                                   FretNumber                                                  OFFSET(get<int32_t>, {0x1638, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance.GetFretNumberFromMidiNote
	// int32_t GetFretNumberFromMidiNote(char MidiNote);                                                                        // [0xb089c9c] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksBassAnimInstance
/// Size: 0x0000 (0x001640 - 0x001640)
class USparksBassAnimInstance : public USparksGuitarAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5696;

public:
};

/// Class /Script/SparksCharacterCommonRuntime.SparksDrumsAnimInstance
/// Size: 0x0000 (0x001640 - 0x001640)
class USparksDrumsAnimInstance : public USparksInstrumentAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5696;

public:
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations
/// Size: 0x0030 (0x000030 - 0x000060)
class USparksInstrumentAnimations : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UClass*)                             BandPlayAnimBP                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UClass*)                             InstrumentAnimBPs                                           OFFSET(get<T>, {0x38, 40, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations.GetAnimClassForInstrument
	// class UClass* GetAnimClassForInstrument(ESparksInstrumentType Instrument);                                               // [0xb089bcc] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent
/// Size: 0x0158 (0x0000A0 - 0x0001F8)
class USparksInstrumentAnimPlayerStateComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	CMember(class USparksInstrumentAnimations*)        InstrumentAnimations                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class ASparksMusicPlayspace*)              SparksPlayspace                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   MidiEventDriver                                             OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(ESparksInstrumentType)                     CosmeticInstrumentType                                      OFFSET(get<T>, {0xD0, 1, 0, 0})
	CMember(ESparksAnimatableState)                    AnimatableState                                             OFFSET(get<T>, {0xD1, 1, 0, 0})
	DMember(bool)                                      bCanPlayMidiAnimations                                      OFFSET(get<bool>, {0xD2, 1, 0, 0})
	CMember(class UClass*)                             SparksPlayspaceType                                         OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnEnteredSparksMusicPlayspace                            OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnExitedSparksMusicPlayspace                             OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerMusicClockChanged                                OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerMidiEventDriverChanged                           OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerCosmeticInstrumentTypeChanged                    OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerAnimatableStateChanged                           OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerCanPlayMidiAnimationsChanged                     OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.UnlinkInstrumentAnimationLayer
	// void UnlinkInstrumentAnimationLayer();                                                                                   // [0x3772040] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SwapCosmeticInstrument
	// void SwapCosmeticInstrument(ESparksInstrumentType NewInstrumentType);                                                    // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* NewMusicClock);                                                           // [0x3316e28] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetMidiEventDriver
	// void SetMidiEventDriver(TScriptInterface<Class> NewMidiEventDriver);                                                     // [0xb08a6b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetCosmeticInstrumentType
	// void SetCosmeticInstrumentType(ESparksInstrumentType NewCosmeticInstrumentType);                                         // [0xb08a460] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetCanPlayMidiAnimations
	// void SetCanPlayMidiAnimations(bool bNewCanPlayMidiAnimations);                                                           // [0x31027d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetAnimatableState
	// void SetAnimatableState(ESparksAnimatableState NewAnimatableState);                                                      // [0x34c1000] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.PlayerHasTrackInstrument
	// bool PlayerHasTrackInstrument(ESparksInstrumentType InstrumentType);                                                     // [0xb08a3cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.PlayerHasCosmeticInstrument
	// bool PlayerHasCosmeticInstrument(ESparksInstrumentType InstrumentType);                                                  // [0xb08a33c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.OverridePlayspace
	// void OverridePlayspace(class ASparksMusicPlayspace* Playspace);                                                          // [0xb08a2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.LinkInstrumentAnimationLayer
	// void LinkInstrumentAnimationLayer(class USparksInstrumentAnimations* Animations);                                        // [0xb08a0dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.IsUsable
	// bool IsUsable();                                                                                                         // [0x3d1d968] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.IsInstrumentAnimationLayerLinked
	// bool IsInstrumentAnimationLayerLinked();                                                                                 // [0xb08a0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.HandlePlayerPawnSet
	// void HandlePlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                        // [0xb089e90] Final|Native|Private 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.HandlePawnFinishedCharacterCustomization
	// void HandlePawnFinishedCharacterCustomization(class AFortPlayerPawn* Pawn);                                              // [0xb089e10] Final|Native|Private 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetTrackInstrumentType
	// ESparksInstrumentType GetTrackInstrumentType();                                                                          // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetSparksPlayspace
	// class ASparksMusicPlayspace* GetSparksPlayspace();                                                                       // [0x3033778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetRecentOrFirstInstrument
	// ESparksInstrumentType GetRecentOrFirstInstrument();                                                                      // [0xb089dec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                             // [0x7a5f454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetMidiEventDriver
	// TScriptInterface<Class> GetMidiEventDriver();                                                                            // [0xb089db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetLinkedInstrumentAnimationLayer
	// class USparksBaseLayerAnimInstance* GetLinkedInstrumentAnimationLayer();                                                 // [0xb089d34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetInstrumentAnimations
	// class USparksInstrumentAnimations* GetInstrumentAnimations();                                                            // [0x60f0f34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetCurrentTrackName
	// FName GetCurrentTrackName();                                                                                             // [0xb089c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetCosmeticInstrumentType
	// ESparksInstrumentType GetCosmeticInstrumentType();                                                                       // [0x9889e68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetAnimatableState
	// ESparksAnimatableState GetAnimatableState();                                                                             // [0x9889e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.CanSwapToInstrument
	// bool CanSwapToInstrument(ESparksInstrumentType NewInstrumentType);                                                       // [0x3d1d968] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.CanPlayMidiAnimations
	// bool CanPlayMidiAnimations();                                                                                            // [0x9889e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksMicAnimInstance
/// Size: 0x0000 (0x001640 - 0x001640)
class USparksMicAnimInstance : public USparksInstrumentAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5696;

public:
};

/// Enum /Script/SparksCharacterCommonRuntime.ESparksAnimatableState
/// Size: 0x05
enum ESparksAnimatableState : uint8_t
{
	ESparksAnimatableState__None                                                     = 0,
	ESparksAnimatableState__AnimatableWithoutBeat                                    = 1,
	ESparksAnimatableState__Animatable                                               = 2,
	ESparksAnimatableState__AnimatableAndPlayable                                    = 3,
	ESparksAnimatableState__ESparksAnimatableState_MAX                               = 4
};

