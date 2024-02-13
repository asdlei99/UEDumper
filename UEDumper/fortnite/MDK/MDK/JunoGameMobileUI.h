
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DynamicBacchusHUD
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameplayTags

/// Class /Script/JunoGameMobileUI.JunoMobileActionButtonBehavior_Interact
/// Size: 0x0000 (0x000138 - 0x000138)
class UJunoMobileActionButtonBehavior_Interact : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector
/// Size: 0x00D0 (0x000478 - 0x000548)
class AJunoGameDynamicMobileUIDirector : public ADynamicBacchusHUDDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
	SMember(FGameplayTagContainer)                     HUDTagsToSkip                                               OFFSET(getStruct<T>, {0x498, 32, 0, 0})
	SMember(FText)                                     ForcedPresetName                                            OFFSET(getStruct<T>, {0x4B8, 24, 0, 0})
	SMember(FGameplayTag)                              ForcedProfile                                               OFFSET(getStruct<T>, {0x4D0, 4, 0, 0})
	SMember(FGameplayTag)                              ForcedProfileContainer                                      OFFSET(getStruct<T>, {0x4D4, 4, 0, 0})
	CMember(TMap<FGameplayTag, UDynamicUIScene*>)      HUDContextVisibilityTagToScene                              OFFSET(get<T>, {0x4D8, 80, 0, 0})


	/// Functions
	// Function /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector.UpdateHUDLayoutContexts
	// void UpdateHUDLayoutContexts(FGameplayTagContainer ContextsToAdd, FGameplayTagContainer ContextsToRemove);               // [0xc14dae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameMobileUI.JunoGameDynamicMobileUIDirector.BP_OnBuildingModeChanged
	// void BP_OnBuildingModeChanged(FJunoEvent_BuildingModeChanged& Event);                                                    // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
};

