
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Reflex.EReflexMode
/// Size: 0x04
enum class EReflexMode : uint8_t
{
	EReflexMode__Disabled                                                            = 0,
	EReflexMode__Enabled                                                             = 1,
	EReflexMode__EnabledPlusBoost                                                    = 3,
	EReflexMode__EReflexMode_MAX                                                     = 4
};

/// Class /Script/Reflex.ReflexBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetReflexMode
	// void SetReflexMode(EReflexMode Mode);                                                                                 // [0xc204ebc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
	// void SetFlashIndicatorEnabled(bool bEnabled);                                                                         // [0xc204e4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
	// float GetRenderLatencyInMs();                                                                                         // [0xc204e24] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexMode
	// EReflexMode GetReflexMode();                                                                                          // [0xc204da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexAvailable
	// bool GetReflexAvailable();                                                                                            // [0xc204d7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
	// float GetGameToRenderLatencyInMs();                                                                                   // [0xc204d54] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
	// float GetGameLatencyInMs();                                                                                           // [0xc204d2c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
	// bool GetFlashIndicatorEnabled();                                                                                      // [0xc204ca8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

