
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: GameplayTags

/// Class /Script/SilkWalkerRuntime.FortAthenaAIBotEvaluator_SilkwalkerInVehicle
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UFortAthenaAIBotEvaluator_SilkwalkerInVehicle : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              SilkwalkerInVehicleName;                                    // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FGameplayTagContainer                              SilkwalkerTags;                                             // 0x00B0   (0x0020)  
};

/// Class /Script/SilkWalkerRuntime.FortAthenaNpcEvaluator_SilkWalkerGiftTarget
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UFortAthenaNpcEvaluator_SilkWalkerGiftTarget : public UFortAthenaAIBotEvaluator
{ 
public:
	FName                                              GiftTargetActorName;                                        // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FName                                              GiftTargetStatusKeyName;                                    // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	float                                              MinGiftRadius;                                              // 0x00B8   (0x0004)  
	float                                              MaxGiftRadius;                                              // 0x00BC   (0x0004)  
	FGameplayTagContainer                              UndesiredTags;                                              // 0x00C0   (0x0020)  
	FGameplayTagContainer                              DesiredTags;                                                // 0x00E0   (0x0020)  
	SDK_UNDEFINED(8,15255) /* TWeakObjectPtr<AFortGameModeAthena*> */ __um(CachedGameMode);                        // 0x0100   (0x0008)  
	SDK_UNDEFINED(8,15256) /* TWeakObjectPtr<UFortGameStateComponent_AffiliationManager*> */ __um(CachedAffiliationManager); // 0x0108   (0x0008)  
};

/// Class /Script/SilkWalkerRuntime.FortSilkwalkerComponent_Telemetry
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortSilkwalkerComponent_Telemetry : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/SilkWalkerRuntime.FortSilkwalkerComponent_Telemetry.OnGiftThrown
	// void OnGiftThrown(class AFortPawn* TargetPawn, bool bGood);                                                           // [0xc1b5824] Final|Native|Private|BlueprintCallable 
};

