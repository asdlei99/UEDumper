
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: LevelSequence
/// dependency: MovieScene

/// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
/// Size: 0x00B0 (0x000BC8 - 0x000C78)
class ACinematicSequenceDeviceBase : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3192;

public:
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0xC18, 8, 0, 0})
	CMember(class ALevelSequenceActor*)                LevelSequenceActor                                          OFFSET(get<T>, {0xC20, 8, 0, 0})
	CMember(class AFortPlayerController*)              InstigatingController                                       OFFSET(get<T>, {0xC28, 8, 0, 0})
	DMember(char)                                      InstigatingTeam                                             OFFSET(get<char>, {0xC30, 1, 0, 0})
	DMember(bool)                                      bLoopPlayback                                               OFFSET(get<bool>, {0xC34, 1, 1, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0xC34, 1, 1, 1})
	CMember(ECinematicSequenceEnabledOnPhase)          EnabledOnPhase                                              OFFSET(get<T>, {0xC38, 1, 0, 0})
	CMember(ECinematicSequenceVisibility)              Visibility                                                  OFFSET(get<T>, {0xC39, 1, 0, 0})
	DMember(bool)                                      bLevelSequenceActorAlwaysRelevant                           OFFSET(get<bool>, {0xC3A, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0xC3C, 4, 0, 0})
	CMember(EMovieSceneCompletionModeOverride)         FinishCompletionStateOverride                               OFFSET(get<T>, {0xC40, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
	// void Stop();                                                                                                             // [0xb85c8fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetSequence
	// void SetSequence(class ULevelSequence* Sequence);                                                                        // [0xb85c87c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                        // [0xb85c6fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackTime
	// void SetPlaybackTime(float Time);                                                                                        // [0xb85c7fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackFrame
	// void SetPlaybackFrame(int32_t Frame);                                                                                    // [0xb85c77c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
	// void Play();                                                                                                             // [0xb85c6e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
	// void Pause();                                                                                                            // [0xb85c6d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.OnSequenceFinished
	// void OnSequenceFinished();                                                                                               // [0xb85c6c0] Final|Native|Protected 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
	// void HandleSequencePlayerCreated(class ULevelSequencePlayer* Player);                                                    // [0x888a4f0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                   // [0xb85c6ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
	// class UMovieSceneSequencePlayer* GetSequencePlayer();                                                                    // [0xb85c68c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0xb85c618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackTime
	// float GetPlaybackTime();                                                                                                 // [0xb85c664] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackFrame
	// int32_t GetPlaybackFrame();                                                                                              // [0xb85c640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceVisibility
/// Size: 0x04
enum ECinematicSequenceVisibility : uint8_t
{
	ECinematicSequenceVisibility__InstigatorOnly                                     = 0,
	ECinematicSequenceVisibility__InstigatingTeam                                    = 1,
	ECinematicSequenceVisibility__Everyone                                           = 2,
	ECinematicSequenceVisibility__ECinematicSequenceVisibility_MAX                   = 3
};

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceEnabledOnPhase
/// Size: 0x05
enum ECinematicSequenceEnabledOnPhase : uint8_t
{
	ECinematicSequenceEnabledOnPhase__Always                                         = 0,
	ECinematicSequenceEnabledOnPhase__PreGameOnly                                    = 1,
	ECinematicSequenceEnabledOnPhase__GameplayOnly                                   = 2,
	ECinematicSequenceEnabledOnPhase__CreateOnly                                     = 3,
	ECinematicSequenceEnabledOnPhase__ECinematicSequenceEnabledOnPhase_MAX           = 4
};

