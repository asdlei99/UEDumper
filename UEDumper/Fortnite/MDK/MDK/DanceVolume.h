
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/DanceVolume.DanceSynchronizerComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDanceSynchronizerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bShouldHalfOrDoubleTimeDances                               OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FDanceBeatInfo)                            BeatInfo                                                    OFFSET(getStruct<T>, {0xA4, 8, 0, 0})
	CMember(EDanceBeatSyncMode)                        SyncMode                                                    OFFSET(get<T>, {0xAC, 1, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(class AFortPlayerPawn*)                    OwnerPlayerPawn                                             OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             OwnerMeshComponent                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             LeaderMeshComponent                                         OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/DanceVolume.DanceSynchronizerComponent.StopOwnerEmoteAudio
	// void StopOwnerEmoteAudio();                                                                                              // [0xb714144] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetTempo
	// void SetTempo(float NewTempo);                                                                                           // [0xb714080] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetDanceBeatInfo
	// void SetDanceBeatInfo(FDanceBeatInfo& NewDanceBeatInfo);                                                                 // [0xb713fec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetBeatSyncMode
	// void SetBeatSyncMode(EDanceBeatSyncMode NewMode);                                                                        // [0xb713f2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.OnRep_SyncMode
	// void OnRep_SyncMode();                                                                                                   // [0xb713ecc] Final|Native|Private 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.IsTempoSyncEnabled
	// bool IsTempoSyncEnabled();                                                                                               // [0xb713eb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.GetOwnerSkeletalMeshComponent
	// class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();                                                           // [0x654e148] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.GetOwnerFortPlayerPawn
	// class AFortPlayerPawn* GetOwnerFortPlayerPawn();                                                                         // [0x8f91428] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.CalculateDanceMontagePlayRate
	// float CalculateDanceMontagePlayRate(float CurrentTempo, class UAnimMontage* Montage, FDanceBeatInfo& DanceBeatInfo);     // [0xb713bb4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DanceVolume.DanceVolumeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDanceVolumeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DanceVolume.DanceVolumeLibrary.GetLastEmoteExecuted
	// class UFortItemDefinition* GetLastEmoteExecuted(class AController* Controller);                                          // [0xad3a804] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceVolumeLibrary.ForceStopMontage
	// void ForceStopMontage(class AFortPawn* FortPawn);                                                                        // [0xb713dac] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/DanceVolume.DanceBeatInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FDanceBeatInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LengthBeats                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StartOffsetMs                                               OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/DanceVolume.EDanceBeatSyncMode
/// Size: 0x04
enum EDanceBeatSyncMode : uint8_t
{
	EDanceBeatSyncMode__Off                                                          = 0,
	EDanceBeatSyncMode__Tempo                                                        = 1,
	EDanceBeatSyncMode__Music                                                        = 2,
	EDanceBeatSyncMode__EDanceBeatSyncMode_MAX                                       = 3
};

