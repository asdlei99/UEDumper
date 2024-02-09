
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AudioGameplayBehavior.EAudioGameplayBehaviorPlayState
/// Size: 0x04
enum class EAudioGameplayBehaviorPlayState : uint8_t
{
	EAudioGameplayBehaviorPlayState__Stopped                                         = 0,
	EAudioGameplayBehaviorPlayState__Playing                                         = 1,
	EAudioGameplayBehaviorPlayState__TickingWhileStopped                             = 2,
	EAudioGameplayBehaviorPlayState__EAudioGameplayBehaviorPlayState_MAX             = 3
};

/// Struct /Script/AudioGameplayBehavior.PlayingId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPlayingId
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/AudioGameplayBehavior.ActiveVoice
/// Size: 0x0018 (0x000000 - 0x000018)
struct FActiveVoice
{ 
	class USoundBase*                                  sound;                                                      // 0x0000   (0x0008)  
	class UAudioComponent*                             Component;                                                  // 0x0008   (0x0008)  
	FPlayingId                                         ID;                                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/AudioGameplayBehavior.AudioGameplayBehavior
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UAudioGameplayBehavior : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	bool                                               bKillOnSoundsFinished;                                      // 0x00A8   (0x0001)  
	bool                                               bTickWhileStopped;                                          // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	SDK_UNDEFINED(16,11694) /* FMulticastInlineDelegate */ __um(OnAllSoundsFinished);                              // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,11695) /* FMulticastInlineDelegate */ __um(OnSoundFinished);                                  // 0x00C0   (0x0010)  
	TArray<FActiveVoice>                               PlayingSounds;                                              // 0x00D0   (0x0010)  
	class UAudioComponentGroup*                        ComponentGroupOwner;                                        // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToStringParam
	// void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate);                                             // [0xb917fcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToEvent
	// void SubscribeToEvent(FName EventName, FDelegateProperty Delegate);                                                   // [0xb917e78] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToBoolParam
	// void SubscribeToBoolParam(FName ParamName, FDelegateProperty Delegate);                                               // [0xb917d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopSound
	// void StopSound(class USoundBase* sound, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                           // [0xb917b68] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopComponent
	// void StopComponent(class UAudioComponent* Comp, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                   // [0xb917994] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopById
	// void StopById(FPlayingId ID, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                                      // [0xb9177b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopAllPlayingVoices
	// void StopAllPlayingVoices(float InFadeOutTime);                                                                       // [0xb9176ec] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Stop
	// void Stop();                                                                                                          // [0x1fda954] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Start
	// void Start();                                                                                                         // [0x6d0e0b0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SetPlayState
	// void SetPlayState(EAudioGameplayBehaviorPlayState NewState);                                                          // [0x6f7afb8] Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.PlaySound
	// FActiveVoice PlaySound(class USoundBase* sound, float InFadeInTime, float InTargetVolume, float InStartTime, bool bDisableAttenuation, EAudioFaderCurve InFadeCurve, FVector InRelativeLocation, FRotator InRelativeRotation); // [0xb917060] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.PlayFrom
	// void PlayFrom(class UAudioComponentGroup* SoundGroup);                                                                // [0x7fac19c] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Kill
	// void Kill();                                                                                                          // [0x1c0d610] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.IsVirtualized
	// bool IsVirtualized();                                                                                                 // [0x1ab2b0c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.IsPlayingAny
	// bool IsPlayingAny();                                                                                                  // [0x1f54790] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetStringParamValue
	// FString GetStringParamValue(FName ParamName);                                                                         // [0xb91696c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetStopState
	// EAudioGameplayBehaviorPlayState GetStopState();                                                                       // [0x6d0da80] Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetSoundGroup
	// class UAudioComponentGroup* GetSoundGroup();                                                                          // [0x6ee7c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetPlayState
	// EAudioGameplayBehaviorPlayState GetPlayState();                                                                       // [0xa0e4620] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetFloatParamValue
	// float GetFloatParamValue(FName ParamName);                                                                            // [0xb916894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetBoolParamValue
	// bool GetBoolParamValue(FName ParamName);                                                                              // [0xb9167b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.EnableVirtualization
	// void EnableVirtualization();                                                                                          // [0xb9167a4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.DisableVirtualization
	// void DisableVirtualization();                                                                                         // [0xb916790] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnVirtualized
	// void BP_OnVirtualized();                                                                                              // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnUnvirtualized
	// void BP_OnUnvirtualized();                                                                                            // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnStop
	// void BP_OnStop();                                                                                                     // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnStart
	// void BP_OnStart();                                                                                                    // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnGroupSet
	// void BP_OnGroupSet(class UAudioComponentGroup* SoundGroup);                                                           // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnFinished
	// void BP_OnFinished();                                                                                                 // [0x2047e54] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Struct /Script/AudioGameplayBehavior.AudioGameplayBehaviorInstance
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAudioGameplayBehaviorInstance
{ 
	class UClass*                                      sound;                                                      // 0x0000   (0x0008)  
	class UAudioGameplayBehavior*                      Instance;                                                   // 0x0008   (0x0008)  
};

