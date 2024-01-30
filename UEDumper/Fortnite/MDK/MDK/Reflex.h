
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
	// void SetReflexMode(EReflexMode Mode);                                                                                    // [0xc1bb734] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
	// void SetFlashIndicatorEnabled(bool bEnabled);                                                                            // [0xc1bb6c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
	// float GetRenderLatencyInMs();                                                                                            // [0xc1bb69c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexMode
	// EReflexMode GetReflexMode();                                                                                             // [0xc1bb618] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexAvailable
	// bool GetReflexAvailable();                                                                                               // [0xc1bb5f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
	// float GetGameToRenderLatencyInMs();                                                                                      // [0xc1bb5cc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
	// float GetGameLatencyInMs();                                                                                              // [0xc1bb5a4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
	// bool GetFlashIndicatorEnabled();                                                                                         // [0xc1bb520] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
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

