
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: BeatSyncedAnimMetaData
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: HarmonixMetasound

/// Class /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBeatSyncedAnimLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary.GetLastEmoteExecuted
	// class UFortItemDefinition* GetLastEmoteExecuted(class AController* Controller);                                          // [0xad7b658] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary.CalculateMontagePlayRate
	// float CalculateMontagePlayRate(class UMusicClockComponent* MusicClock, class UAnimMontage* Montage, float MontageBeatLength); // [0xad7ad8c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary.CalculateMontageBeatSyncInfo
	// FFMontageBeatSyncInfo CalculateMontageBeatSyncInfo(class UMusicClockComponent* MusicClock, class UAnimMontage* Montage, float LengthInBeats, float MsOffset); // [0xad7a91c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMBeatTimingUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentSongTime_Unsafe
	// float GetCurrentSongTime_Unsafe(class UMusicClockComponent* InMusicClock, bool bRounded);                                // [0xad7b518] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentSongTime
	// float GetCurrentSongTime(class UMusicClockComponent* InMusicClock, bool bRounded);                                       // [0xad7b3d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentBeatForBPM
	// float GetCurrentBeatForBPM(float InBPM, class UObject* WorldContextObject);                                              // [0xad7b118] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentBeat_Unsafe
	// float GetCurrentBeat_Unsafe(class UMusicClockComponent* InMusicClock, bool bRounded);                                    // [0xad7b258] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentBeat
	// float GetCurrentBeat(class UMusicClockComponent* InMusicClock, bool bRounded);                                           // [0xad7afd8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetBeatsPerMeasure
	// float GetBeatsPerMeasure();                                                                                              // [0xad7afc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UMontageBeatSyncComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(float)                                     MaxPlayRateBeforeHalf                                       OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     MinPlayRateBeforeDouble                                     OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     DefaultToAnimationBPM                                       OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bForceBeatSyncAllMontages                                   OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(float)                                     MontageLengthInBeats                                        OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MontageOffsetMs                                             OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(TWeakObjectPtr<UMusicClockComponent*>)     WeakMusicClockPtr                                           OFFSET(get<T>, {0xBC, 8, 0, 0})
	DMember(bool)                                      bIsMusicPlaying                                             OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(bool)                                      bHaveTimingInfo                                             OFFSET(get<bool>, {0xC5, 1, 0, 0})
	DMember(int32_t)                                   LastKnownMontageInstanceId                                  OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	CMember(class AFortPlayerPawn*)                    OwnerPlayerPawn                                             OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             OwnerMeshComponent                                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UMontageBeatSyncComponent*>>) YoungerSiblings                                    OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(class UPreciseBeatSyncedAnimMetaData*)     ActiveTimingInfo                                            OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.SetMusicClockReference
	// void SetMusicClockReference(class UMusicClockComponent* MusicClock);                                                     // [0xad7b8ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.LookupMontageTimingInfo_BP
	// class UPreciseBeatSyncedAnimMetaData* LookupMontageTimingInfo_BP(class UAnimMontage* Montage, class AFortPlayerPawn* PlayerPawn); // [0xad7b754] Native|Event|Public|BlueprintEvent 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.IsMusicPlaying
	// bool IsMusicPlaying();                                                                                                   // [0xad7b73c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.GetOwnerSkeletalMeshComponent
	// class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();                                                           // [0x9013904] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.GetOwnerFortPlayerPawn
	// class AFortPlayerPawn* GetOwnerFortPlayerPawn();                                                                         // [0x9013c68] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.EndedPlayingMusic
	// void EndedPlayingMusic();                                                                                                // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.BeganPlayingMusic
	// void BeganPlayingMusic();                                                                                                // [0x130d900] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/BeatSyncedAnimRuntime.SparksAnimLoggingComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class USparksAnimLoggingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/BeatSyncedAnimRuntime.SparksAnimLoggingComponent.GetCurrentFullBodyAnimName
	// FString GetCurrentFullBodyAnimName();                                                                                    // [0xad7b398] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BeatSyncedAnimRuntime.AnimNotify_BeatMarker
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_BeatMarker : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/BeatSyncedAnimRuntime.AnimNode_PlayBeatSyncedAnim
/// Size: 0x0058 (0x000040 - 0x000098)
class FAnimNode_PlayBeatSyncedAnim : public FAnimNode_SequenceEvaluator
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UAnimSequenceBase*)                  InSequence                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     PreviewBPM                                                  OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bAlwaysAllowPreviewBPM                                      OFFSET(get<bool>, {0x54, 1, 0, 0})
	CMember(ESyncAnimBeatTo)                           SyncAnimBeatTo                                              OFFSET(get<T>, {0x55, 1, 0, 0})
	CMember(EBeatSyncAnimNodeLogging)                  Logging                                                     OFFSET(get<T>, {0x56, 1, 0, 0})
	DMember(bool)                                      bSideloadedLipSync                                          OFFSET(get<bool>, {0x57, 1, 0, 0})
};

/// Struct /Script/BeatSyncedAnimRuntime.FMontageBeatSyncInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FFMontageBeatSyncInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/BeatSyncedAnimRuntime.ESyncAnimBeatTo
/// Size: 0x05
enum ESyncAnimBeatTo : uint8_t
{
	ESyncAnimBeatTo__None                                                            = 0,
	ESyncAnimBeatTo__Now                                                             = 1,
	ESyncAnimBeatTo__PrevBeat                                                        = 2,
	ESyncAnimBeatTo__Num                                                             = 3,
	ESyncAnimBeatTo__ESyncAnimBeatTo_MAX                                             = 4
};

/// Enum /Script/BeatSyncedAnimRuntime.EBeatSyncAnimNodeLogging
/// Size: 0x04
enum EBeatSyncAnimNodeLogging : uint8_t
{
	EBeatSyncAnimNodeLogging__Enabled                                                = 0,
	EBeatSyncAnimNodeLogging__Disabled                                               = 1,
	EBeatSyncAnimNodeLogging__Default                                                = 2,
	EBeatSyncAnimNodeLogging__EBeatSyncAnimNodeLogging_MAX                           = 3
};

