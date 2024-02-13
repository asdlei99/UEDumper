
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: LevelSequence
/// dependency: MovieScene

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceVisibility
/// Size: 0x04
enum class ECinematicSequenceVisibility : uint8_t
{
	ECinematicSequenceVisibility__InstigatorOnly                                     = 0,
	ECinematicSequenceVisibility__InstigatingTeam                                    = 1,
	ECinematicSequenceVisibility__Everyone                                           = 2,
	ECinematicSequenceVisibility__ECinematicSequenceVisibility_MAX                   = 3
};

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceEnabledOnPhase
/// Size: 0x05
enum class ECinematicSequenceEnabledOnPhase : uint8_t
{
	ECinematicSequenceEnabledOnPhase__Always                                         = 0,
	ECinematicSequenceEnabledOnPhase__PreGameOnly                                    = 1,
	ECinematicSequenceEnabledOnPhase__GameplayOnly                                   = 2,
	ECinematicSequenceEnabledOnPhase__CreateOnly                                     = 3,
	ECinematicSequenceEnabledOnPhase__ECinematicSequenceEnabledOnPhase_MAX           = 4
};

/// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
/// Size: 0x00B0 (0x000BC8 - 0x000C78)
class ACinematicSequenceDeviceBase : public ABuildingProp
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0BC8   (0x0050)  MISSED
	class ULevelSequence*                              Sequence;                                                   // 0x0C18   (0x0008)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0C20   (0x0008)  
	class AFortPlayerController*                       InstigatingController;                                      // 0x0C28   (0x0008)  
	char                                               InstigatingTeam;                                            // 0x0C30   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0C31   (0x0003)  MISSED
	bool                                               bLoopPlayback : 1;                                          // 0x0C34:0 (0x0001)  
	bool                                               bAutoPlay : 1;                                              // 0x0C34:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0C35   (0x0003)  MISSED
	ECinematicSequenceEnabledOnPhase                   EnabledOnPhase;                                             // 0x0C38   (0x0001)  
	ECinematicSequenceVisibility                       Visibility;                                                 // 0x0C39   (0x0001)  
	bool                                               bLevelSequenceActorAlwaysRelevant;                          // 0x0C3A   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0C3B   (0x0001)  MISSED
	float                                              PlayRate;                                                   // 0x0C3C   (0x0004)  
	EMovieSceneCompletionModeOverride                  FinishCompletionStateOverride;                              // 0x0C40   (0x0001)  
	unsigned char                                      UnknownData04_6[0x37];                                      // 0x0C41   (0x0037)  MISSED


	/// Functions
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
	// void Stop();                                                                                                          // [0xb745ab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetSequence
	// void SetSequence(class ULevelSequence* Sequence);                                                                     // [0xb7459f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                     // [0xb7457ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackTime
	// void SetPlaybackTime(float Time);                                                                                     // [0xb745930] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackFrame
	// void SetPlaybackFrame(int32_t Frame);                                                                                 // [0xb745870] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
	// void Play();                                                                                                          // [0xb745798] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
	// void Pause();                                                                                                         // [0xb745784] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.OnSequenceFinished
	// void OnSequenceFinished();                                                                                            // [0xb745770] Final|Native|Protected 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
	// void HandleSequencePlayerCreated(class ULevelSequencePlayer* Player);                                                 // [0x8886748] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                // [0xb74575c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
	// class UMovieSceneSequencePlayer* GetSequencePlayer();                                                                 // [0xb74573c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlayRate
	// float GetPlayRate();                                                                                                  // [0xb7456c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackTime
	// float GetPlaybackTime();                                                                                              // [0xb745714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackFrame
	// int32_t GetPlaybackFrame();                                                                                           // [0xb7456f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

