
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Reflex.ReflexBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetReflexMode
	// void SetReflexMode(EReflexMode Mode);                                                                                    // [0xc4fea70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
	// void SetFlashIndicatorEnabled(bool bEnabled);                                                                            // [0xc4fea00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
	// float GetRenderLatencyInMs();                                                                                            // [0xc4fe9d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexMode
	// EReflexMode GetReflexMode();                                                                                             // [0xc4fe954] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexAvailable
	// bool GetReflexAvailable();                                                                                               // [0xc4fe930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
	// float GetGameToRenderLatencyInMs();                                                                                      // [0xc4fe908] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
	// float GetGameLatencyInMs();                                                                                              // [0xc4fe8e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
	// bool GetFlashIndicatorEnabled();                                                                                         // [0xc4fe85c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/Reflex.EReflexMode
/// Size: 0x04
enum EReflexMode : uint8_t
{
	EReflexMode__Disabled                                                            = 0,
	EReflexMode__Enabled                                                             = 1,
	EReflexMode__EnabledPlusBoost                                                    = 3,
	EReflexMode__EReflexMode_MAX                                                     = 4
};

