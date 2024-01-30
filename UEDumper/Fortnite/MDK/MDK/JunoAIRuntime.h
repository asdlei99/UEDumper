
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteAIServer
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: JunoGameNative
/// dependency: LagerRuntime
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: StateTreeModule
/// dependency: WorldConditions

/// Class /Script/JunoAIRuntime.JunoAIBotController
/// Size: 0x01F0 (0x001750 - 0x001940)
class AJunoAIBotController : public AFortAthenaAIBotController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6464;

public:
	CMember(class UJunoAIInventoryComponent*)          JunoAIInventoryComponent                                    OFFSET(get<T>, {0x1750, 8, 0, 0})
	CMember(TArray<FItemAndCount>)                     DefaultItemsToAdd                                           OFFSET(get<T>, {0x1758, 16, 0, 0})
	DMember(bool)                                      bRequiresPersistentInventory                                OFFSET(get<bool>, {0x17E0, 1, 0, 0})
	SMember(FScalableFloat)                            EnableDurabilityOnInventory                                 OFFSET(getStruct<T>, {0x17E8, 40, 0, 0})
	SMember(FScalableFloat)                            UseRoleCheckForDurability                                   OFFSET(getStruct<T>, {0x1810, 40, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredRoleForDurability                                   OFFSET(getStruct<T>, {0x1838, 72, 0, 0})
	DMember(bool)                                      bUseFocusedActorEyeLocationForFocalPoint                    OFFSET(get<bool>, {0x1880, 1, 0, 0})
	DMember(bool)                                      bUseValidItemsPerType                                       OFFSET(get<bool>, {0x1881, 1, 0, 0})
	SMember(FScalableFloat)                            EffectivenessMultiplierForWeaponSelectionOnPickedOrAddedItem OFFSET(getStruct<T>, {0x1888, 40, 0, 0})
	CMember(TMap<FGameplayTag, UDataTable*>)           ValidItemsTablePerType                                      OFFSET(get<T>, {0x18B0, 80, 0, 0})
	CMember(class UFortItemDefinition*)                AutomaticallyEquippedWeaponOnDurabilityBreak                OFFSET(get<T>, {0x1900, 8, 0, 0})
	SMember(FScalableFloat)                            DurabilityMultiplier                                        OFFSET(getStruct<T>, {0x1908, 40, 0, 0})
	SMember(FGameplayTag)                              TagToApplyWhenAddingFallbackItemForDurabilityBreak          OFFSET(getStruct<T>, {0x1930, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_FallbackBehavior
/// Size: 0x0080 (0x0001A8 - 0x000228)
class UJunoAIBotEvaluator_FallbackBehavior : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x1C0, 72, 0, 0})
	CMember(class UClass*)                             NavigationQueryFilterClass                                  OFFSET(get<T>, {0x208, 8, 0, 0})
	DMember(bool)                                      bFallbackToPointWithNoCustomNavigationQueryFilter           OFFSET(get<bool>, {0x210, 1, 0, 0})
	SMember(FName)                                     BestTargetActorName                                         OFFSET(getStruct<T>, {0x214, 4, 0, 0})
	SMember(FName)                                     EnableKeyName                                               OFFSET(getStruct<T>, {0x21C, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_FTUENPC
/// Size: 0x00C0 (0x0000A8 - 0x000168)
class UJunoAIBotEvaluator_FTUENPC : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     TeleportDestinationKeyName                                  OFFSET(getStruct<T>, {0xCC, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportKeyName                                       OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	SMember(FJunoAIFTUERuntimeConfiguration)           FTUERuntimeConfiguration                                    OFFSET(getStruct<T>, {0xE0, 136, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_HardRemovalStart
/// Size: 0x0088 (0x0001A8 - 0x000230)
class UJunoAIBotEvaluator_HardRemovalStart : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x1C0, 72, 0, 0})
	SMember(FScalableFloat)                            RequestHardRemovalOnSuccess                                 OFFSET(getStruct<T>, {0x208, 40, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_OffhandWeapon
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UJunoAIBotEvaluator_OffhandWeapon : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGameplayTag)                              TorchWeaponTag                                              OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FGameplayTag)                              MinTemperatureStateToAlwaysEquipTorch                       OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FGameplayTag)                              TemperatureStateUsedToDecideSpecialTimeTorchUsage           OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	DMember(float)                                     MaxDeltaFromHotTemperatureToEquipTorch                      OFFSET(get<float>, {0xCC, 4, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckedToHolsterKeyNames                 OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FName>)                             BoolsToCheckToHolsterKeyNames                               OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_UnderThunderBehavior
/// Size: 0x0110 (0x0001A8 - 0x0002B8)
class UJunoAIBotEvaluator_UnderThunderBehavior : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FScalableFloat)                            IsEnabled                                                   OFFSET(getStruct<T>, {0x1D8, 40, 0, 0})
	SMember(FScalableFloat)                            UseTagForShelterCheck                                       OFFSET(getStruct<T>, {0x200, 40, 0, 0})
	SMember(FGameplayTag)                              TagToCheckForSheltered                                      OFFSET(getStruct<T>, {0x228, 4, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     ShelterQueryTypes                                           OFFSET(get<T>, {0x230, 16, 0, 0})
	SMember(FScalableFloat)                            MaxShelterDistance                                          OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceFromShelterLocationToKeepItValid                 OFFSET(getStruct<T>, {0x268, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ShelterCollidingActorRequiresAnyTag                         OFFSET(getStruct<T>, {0x290, 32, 0, 0})
	SMember(FGameplayTag)                              TagToApplyForShelteredNPC                                   OFFSET(getStruct<T>, {0x2B0, 4, 0, 0})
	SMember(FGameplayTag)                              TagToApplyForNonShelteredNPC                                OFFSET(getStruct<T>, {0x2B4, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_UnstuckFailsafe
/// Size: 0x0110 (0x0000A8 - 0x0001B8)
class UJunoAIBotEvaluator_UnstuckFailsafe : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FName)                                     TeleportDestinationKeyName                                  OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportKeyName                                       OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FJunoAIUnstuckFailsafeConfiguration)       Configuration                                               OFFSET(getStruct<T>, {0xD0, 232, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAICampPawnComponent
/// Size: 0x0278 (0x0000A8 - 0x000320)
class UJunoAICampPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoAICampPawnComponentChangedSoftRemovedReason           OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class UClass*>)                     PreFTUESkillSetClasses                                      OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TMap<FGameplayTag, FText>)                 AIRoleToDisplayText                                         OFFSET(get<T>, {0x200, 80, 0, 0})
	CMember(TArray<class UClass*>)                     FTUESkillSetClasses                                         OFFSET(get<T>, {0x250, 16, 0, 0})
	SMember(FGameplayTagContainer)                     FTUETagsToAdd                                               OFFSET(getStruct<T>, {0x260, 32, 0, 0})
	SMember(FScalableFloat)                            FTUEOverrideTileGenerationRadius                            OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            FTUEOverrideTileRemovalRadius                               OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            TimeForVisitorsToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetSoftRemovedReasons
	// FGameplayTagContainer GetSoftRemovedReasons();                                                                           // [0xbbd9514] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetAIRoleDisplayText
	// FText GetAIRoleDisplayText();                                                                                            // [0xbbd94e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetAIRole
	// FGameplayTag GetAIRole();                                                                                                // [0x62b1e44] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.ConvertAIRoleToDisplayText
	// FText ConvertAIRoleToDisplayText(FGameplayTag& AIRole);                                                                  // [0xbbd9408] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAIRuntime.JunoAIInventoryComponent
/// Size: 0x0010 (0x000318 - 0x000328)
class UJunoAIInventoryComponent : public UJunoInventoryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/JunoAIRuntime.JunoAIMerchantComponent
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UJunoAIMerchantComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/JunoAIRuntime.JunoAIRuntimeAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAIRuntimeAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoAIRuntime.JunoBTTask_FTUENPC
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UJunoBTTask_FTUENPC : public UFortBTTask_ExecuteGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     FTUENPCStatusKeyName                                        OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportKeyName                                       OFFSET(getStruct<T>, {0xCC, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoBTTask_ReactToVerb
/// Size: 0x0008 (0x000080 - 0x000088)
class UJunoBTTask_ReactToVerb : public UFortAthenaBTTask_ReactToVerb
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     MoodReactionTagKeyName                                      OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoBTTask_RunMoodReaction
/// Size: 0x0010 (0x000070 - 0x000080)
class UJunoBTTask_RunMoodReaction : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FRandomizedMoodReactionConfig>)     PossibleMoodReactions                                       OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/JunoAIRuntime.FJunoAICampManagementVisitorWorldConditionSchema
/// Size: 0x0000 (0x000040 - 0x000040)
class UFJunoAICampManagementVisitorWorldConditionSchema : public UJunoCampWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoAIRuntime.JunoAICampManagementRewardsWorldConditionSchema
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoAICampManagementRewardsWorldConditionSchema : public UJunoCampWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoAIRuntime.JunoCampAIManagementComponent
/// Size: 0x06E8 (0x0000A0 - 0x000788)
class UJunoCampAIManagementComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1928;

public:
	CMember(TArray<TScriptInterface<Class>>)           PointProviders                                              OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) Encounter                                              OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(FJunoAICampManagementVisitorsConfigurationDigested) VisitorsConfigurationDigested                      OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	SMember(FJunoAICampManagementVisitorsPickingConfiguration) CachedVisitorsPickingConfigurationAtCurrentAwesomenessLevel OFFSET(getStruct<T>, {0x1D0, 32, 0, 0})
	SMember(FJunoAICampManagementLWMConfiguration)     LWMConfiguration                                            OFFSET(getStruct<T>, {0x1F8, 928, 0, 0})
	SMember(FJunoAICampManagementVisitorsConfiguration) VisitorsConfiguration                                      OFFSET(getStruct<T>, {0x598, 48, 0, 0})
	CMember(TMap<int32_t, FDataTableRowHandle>)        AwesomenessLevelToVisitorsPickingConfiguration              OFFSET(get<T>, {0x5C8, 80, 0, 0})
	CMember(TMap<int32_t, UDataTable*>)                AwesomenessLevelToNPCRewards                                OFFSET(get<T>, {0x618, 80, 0, 0})
	SMember(FScalableFloat)                            InitialIngameHoursDelayBeforeFirstRewardRoll                OFFSET(getStruct<T>, {0x668, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumIngameHoursBetweenRewardRolls                        OFFSET(getStruct<T>, {0x690, 40, 0, 0})
	SMember(FScalableFloat)                            PassiveResourceGatheringTime                                OFFSET(getStruct<T>, {0x6B8, 40, 0, 0})
	SMember(FScalableFloat)                            MultiplierForSimulatedGeneration                            OFFSET(getStruct<T>, {0x6E0, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumAllocableSOPerAIForSimulation                        OFFSET(getStruct<T>, {0x708, 40, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0x730, 4, 0, 0})
	SMember(FScalableFloat)                            ShouldCheckWCForRemoteRecruitment                           OFFSET(getStruct<T>, {0x738, 40, 0, 0})
	SMember(FScalableFloat)                            RequireNPCToBeInVisitorsListForRemoteRecruitment            OFFSET(getStruct<T>, {0x760, 40, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoCaveLivingWorldEventData
/// Size: 0x0058 (0x000150 - 0x0001A8)
class UJunoCaveLivingWorldEventData : public UFortAthenaLivingWorldEventData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FScalableFloat)                            CaveRoomDistanceMin                                         OFFSET(getStruct<T>, {0x158, 40, 0, 0})
	SMember(FScalableFloat)                            CaveRoomDistanceMax                                         OFFSET(getStruct<T>, {0x180, 40, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIFTUEEndWorldConditionSchema
/// Size: 0x0000 (0x000038 - 0x000038)
class UJunoAIFTUEEndWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement
/// Size: 0x0E60 (0x0000F8 - 0x000F58)
class UPlayspaceComponent_Root_JunoAIManagement : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3928;

public:
	SMember(FJunoAIFollowerLWMConfiguration)           LWMConfiguration                                            OFFSET(getStruct<T>, {0xF8, 928, 0, 0})
	SMember(FJunoAITemporaryGlobalEncounterLWMConfiguration) TemporaryGlobalEncounterLWMConfiguration              OFFSET(getStruct<T>, {0x498, 920, 0, 0})
	SMember(FJunoAIFTUEConfiguration)                  FTUEConfiguration                                           OFFSET(getStruct<T>, {0x830, 1152, 0, 0})
	SMember(FScalableFloat)                            MaxNoInteractionTimeBeforeSoftRemovalInJunoGameTimeHours    OFFSET(getStruct<T>, {0xCB0, 40, 0, 0})
	SMember(FScalableFloat)                            TimeBeforeSoftRemovedAIBecomesHardRemovedInJunoGameTimeHours OFFSET(getStruct<T>, {0xCD8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToRemoveStaleFollowersFromDisconnectedPlayersInRealHours OFFSET(getStruct<T>, {0xD00, 40, 0, 0})
	SMember(FScalableFloat)                            SecondsToWaitBeforeRemovingStaleFollowers                   OFFSET(getStruct<T>, {0xD28, 40, 0, 0})
	SMember(FScalableFloat)                            GlobalRecruitableNPCsCap                                    OFFSET(getStruct<T>, {0xD50, 40, 0, 0})
	CMember(TArray<FJunoAIFollowerManagedData>)        ManagedFollowers                                            OFFSET(get<T>, {0xD98, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TemporaryGlobalEncounterPointProvider                       OFFSET(get<T>, {0xDA8, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) TemporaryGlobalEncounter                               OFFSET(get<T>, {0xDB8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   FTUEEncounterPointProvider                                  OFFSET(get<T>, {0xDC0, 16, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) FTUEEncounter                                          OFFSET(get<T>, {0xDD0, 8, 0, 0})
	SMember(FWorldConditionQueryState)                 FTUEEndQueryState                                           OFFSET(getStruct<T>, {0xDD8, 48, 0, 0})
	CMember(TMap<FGameplayTag, FJunoAIWorldNPCSpawningData>) WorldAssignedNPCs                                     OFFSET(get<T>, {0xEB8, 80, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement.HandleFTUENPCSpawned
	// void HandleFTUENPCSpawned(class AActor* FTUENPC);                                                                        // [0xbbeb608] Final|Native|Private 
};

/// Class /Script/JunoAIRuntime.JunoAISafetyBubbleComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UJunoAISafetyBubbleComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<FFortAthenaLivingWorldEventTagDensityRegistration>) TagsData                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FScalableFloat)                            InGameHoursDuration                                         OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            SafetyBubbleRadius                                          OFFSET(getStruct<T>, {0xD8, 40, 0, 0})


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAISafetyBubbleComponent.OnTimeOfDayPhaseChanged
	// void OnTimeOfDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);           // [0xbbeb688] Final|Native|Protected 
};

/// Class /Script/JunoAIRuntime.EnvQueryTest_JunoIsNearBuilding
/// Size: 0x00A0 (0x0001F8 - 0x000298)
class UEnvQueryTest_JunoIsNearBuilding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FEnvOverlapData)                           OverlapData                                                 OFFSET(getStruct<T>, {0x1F8, 48, 0, 0})
	SMember(FAIDataProviderBoolValue)                  GenerateOnlyInsideClusterBounds                             OFFSET(getStruct<T>, {0x228, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MinimumBuildingClusterVolume                                OFFSET(getStruct<T>, {0x260, 56, 0, 0})
};

/// Class /Script/JunoAIRuntime.EnvQueryTest_JunoIsUnderCeiling
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UEnvQueryTest_JunoIsUnderCeiling : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FEnvOverlapData)                           SweepData                                                   OFFSET(getStruct<T>, {0x1F8, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SweepHeight                                                 OFFSET(getStruct<T>, {0x228, 56, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_ReactToVerb
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
class UJunoAIBotEvaluator_ReactToVerb : public UFortAthenaAIBotEvaluator_ReactToVerb
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
};

/// Class /Script/JunoAIRuntime.JunoAICheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAICheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableHostileCreatures
	// void JunoEnableHostileCreatures(bool bEnable);                                                                           // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableFriendlyNPCs
	// void JunoEnableFriendlyNPCs(bool bEnable);                                                                               // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableFriendlyCreatures
	// void JunoEnableFriendlyCreatures(bool bEnable);                                                                          // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Private 
};

/// Class /Script/JunoAIRuntime.PlayspaceComponent_JunoAISafetyBubble
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPlayspaceComponent_JunoAISafetyBubble : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UClass*)                             SafetyBubbleComponent                                       OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bPreventSafetyBubbleInCamp                                  OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Class /Script/JunoAIRuntime.AITask_JunoMoveTo
/// Size: 0x0010 (0x000118 - 0x000128)
class UAITask_JunoMoveTo : public UAITask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FJunoMoveConfig)                           MoveConfig                                                  OFFSET(getStruct<T>, {0x118, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   BlockedByActor                                              OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/JunoAIRuntime.BTTask_JunoMoveTo
/// Size: 0x00B8 (0x0000B0 - 0x000168)
class UBTTask_JunoMoveTo : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(bool)                                      bOnUnreachableGoalFindBlockingBuilding                      OFFSET(get<bool>, {0xB0, 1, 1, 0})
	DMember(bool)                                      bAssignFoundBlockingBuildingAsTarget                        OFFSET(get<bool>, {0xB0, 1, 1, 1})
	SMember(FScalableFloat)                            BlockingBuildingTraceDistance                               OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            BlockingBuildingTraceCooldown                               OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlockedByBuildingKeySelector                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    LastBlockingBuildingTraceTimeKeySelector                    OFFSET(getStruct<T>, {0x130, 40, 0, 0})
	DMember(bool)                                      bApplyCostLimit                                             OFFSET(get<bool>, {0x158, 1, 1, 0})
	DMember(float)                                     PathingCostLimitFactor                                      OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     PathingMinimumCostLimit                                     OFFSET(get<float>, {0x160, 4, 0, 0})
};

/// Class /Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings_State
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoWorldCondition_AIWorldSettings_State : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/JunoAIRuntime.JunoNPCValidItemRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FJunoNPCValidItemRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UFortItemDefinition*)                ValidItem                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bCanBeEquippedAsMainWeapon                                  OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoNPCValidItems
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoNPCValidItems : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/JunoAIRuntime.JunoAIFTUERuntimeConfiguration
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoAIFTUERuntimeConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FScalableFloat)                            MaxDistanceFromCampToTeleport                               OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceFromPlayersToTeleport                            OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportToCampDelay                                         OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	CMember(class UEnvQuery*)                          TeleportToPlayerQueryTemplate                               OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             TeleportToPlayerRunMode                                     OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIUnstuckFailsafeConfiguration
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FJunoAIUnstuckFailsafeConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FScalableFloat)                            MinimumTimeUnderLandscape                                   OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MinZThresholdForLandscapeTeleport                           OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportToLandscapeDelay                                    OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	CMember(class UEnvQuery*)                          TeleportToLandscapeQueryTemplate                            OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             TeleportToLandscapeRunMode                                  OFFSET(get<T>, {0x80, 1, 0, 0})
	SMember(FScalableFloat)                            MinimumTimeFalling                                          OFFSET(getStruct<T>, {0x88, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportToNavmeshDelay                                      OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(class UEnvQuery*)                          TeleportToNavmeshQueryTemplate                              OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             TeleportToNavmeshRunMode                                    OFFSET(get<T>, {0xE0, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.RandomizedMoodReactionConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FRandomizedMoodReactionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FScalableFloat)                            Weight                                                      OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementLWMConfiguration
/// Size: 0x03A0 (0x000000 - 0x0003A0)
class FJunoAICampManagementLWMConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FFortAthenaLivingWorldEvent)               EventTemplate                                               OFFSET(getStruct<T>, {0x0, 432, 0, 0})
	SMember(FFortAthenaLivingWorldEventDataActorSpawnDescription) SpawnDescriptionTemplate                         OFFSET(getStruct<T>, {0x1B0, 304, 0, 0})
	SMember(FPointProviderFilterEntry)                 FilterEntry                                                 OFFSET(getStruct<T>, {0x2E0, 136, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Encounter                                            OFFSET(get<T>, {0x368, 32, 0, 0})
	CMember(TArray<class UClass*>)                     PointProviderClasses                                        OFFSET(get<T>, {0x388, 16, 0, 0})
	DMember(bool)                                      bRegisterReservoir                                          OFFSET(get<bool>, {0x398, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsRarityConfiguration
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoAICampManagementVisitorsRarityConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              Rarity                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PickPercentage                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsPickingConfiguration
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoAICampManagementVisitorsPickingConfiguration : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FJunoAICampManagementVisitorsRarityConfiguration>) RaritiesConfiguration                        OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   MaxRecruitableNPCs                                          OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementNPCRewardRecipe
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoAICampManagementNPCRewardRecipe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>) KnowledgeItemDefinition                         OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EJunoKnowledgeState)                       NewState                                                    OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementNPCReward
/// Size: 0x0040 (0x000008 - 0x000048)
class FJunoAICampManagementNPCReward : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bAlwaysPick                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     PickWeight                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(ENPCRewardType)                            RewardType                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   MaximumPickAmount                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FName)                                     MaximumPickSaveName                                         OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     LootTierGroup                                               OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	CMember(TArray<FJunoAICampManagementNPCRewardRecipe>) Recipes                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorConfiguration
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoAICampManagementVisitorConfiguration : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorConfigurationRuntime
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoAICampManagementVisitorConfigurationRuntime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWorldConditionQueryState)                 SelectionPreconditionsQueryState                            OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsConfiguration
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoAICampManagementVisitorsConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDataTable*)                         PossibleVisitorsDataTable                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            InitialInGameHoursDelay                                     OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsConfigurationDigested
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoAICampManagementVisitorsConfigurationDigested : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FJunoAICampManagementVisitorConfigurationRuntime>) PossibleVisitors                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoIsVillagerProviderExpiredStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*>) VillagerProvider                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsExpired                                                  OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoIsVillagerProviderExpiredStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoAIRuntime.JunoNPCVerbReactionTableRow
/// Size: 0x0008 (0x000078 - 0x000080)
class FJunoNPCVerbReactionTableRow : public FFortNPCVerbReactionTableRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTaskInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoResetVillagerProviderTimerStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*>) VillagerProvider                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Villager                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FScalableFloat)                            ResetDuration                                               OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FJunoResetVillagerProviderTimerStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionAILocalCampChecks
/// Size: 0x0020 (0x000010 - 0x000030)
class FJunoWorldConditionAILocalCampChecks : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   RequiredNPCsSlots                                           OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     MinimumRemainingNPCSoftRemovalTimeInJunoHours               OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FGameplayTag)                              HasGatheringActorUsableByRole                               OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FWorldConditionContextDataRef)             HasGatheringActorUsableByActorRef                           OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	DMember(bool)                                      bRequireGatheringActorToBeActive                            OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionHitGlobalNPCsCap
/// Size: 0x0008 (0x000010 - 0x000018)
class FJunoWorldConditionHitGlobalNPCsCap : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   RequiredSpaceInGlobalCap                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionNearestCampChecks
/// Size: 0x0038 (0x000010 - 0x000048)
class FJunoWorldConditionNearestCampChecks : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   RequiredCamps                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceFromCamp                                         OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionNPCCampReward
/// Size: 0x0008 (0x000010 - 0x000018)
class FJunoWorldConditionNPCCampReward : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FWorldConditionContextDataRef)             AIRef                                                       OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoWorldCondition_IsInTemporaryGlobalEncounter
/// Size: 0x0008 (0x000010 - 0x000018)
class FJunoWorldCondition_IsInTemporaryGlobalEncounter : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              NPCGameplayTag                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIGlobalLWMConfiguration
/// Size: 0x0390 (0x000000 - 0x000390)
class FJunoAIGlobalLWMConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FFortAthenaLivingWorldEvent)               EventTemplate                                               OFFSET(getStruct<T>, {0x0, 432, 0, 0})
	SMember(FFortAthenaLivingWorldEventDataActorSpawnDescription) SpawnDescriptionTemplate                         OFFSET(getStruct<T>, {0x1B0, 304, 0, 0})
	SMember(FPointProviderFilterEntry)                 FilterEntry                                                 OFFSET(getStruct<T>, {0x2E0, 136, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Encounter                                            OFFSET(get<T>, {0x368, 32, 0, 0})
	DMember(bool)                                      bRegisterReservoir                                          OFFSET(get<bool>, {0x388, 1, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAISinglePointProviderEncounterLWMConfiguration
/// Size: 0x0008 (0x000390 - 0x000398)
class FJunoAISinglePointProviderEncounterLWMConfiguration : public FJunoAIGlobalLWMConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(class UClass*)                             PointProviderClass                                          OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAITemporaryGlobalEncounterLWMConfiguration
/// Size: 0x0000 (0x000398 - 0x000398)
class FJunoAITemporaryGlobalEncounterLWMConfiguration : public FJunoAISinglePointProviderEncounterLWMConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
};

/// Struct /Script/JunoAIRuntime.JunoAIFTUEConfiguration
/// Size: 0x00E8 (0x000398 - 0x000480)
class FJunoAIFTUEConfiguration : public FJunoAISinglePointProviderEncounterLWMConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FGameplayTagQuery)                         PossibleFTUEDescriptorTagQuery                              OFFSET(getStruct<T>, {0x398, 72, 0, 0})
	CMember(TArray<class UClass*>)                     GEsToAddToFTUENPC                                           OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(FWorldConditionQueryDefinition)            EndConditions                                               OFFSET(getStruct<T>, {0x3F0, 24, 0, 0})
	SMember(FScalableFloat)                            CustomLeashInnerRadius                                      OFFSET(getStruct<T>, {0x408, 40, 0, 0})
	SMember(FScalableFloat)                            CustomLeashOuterRadius                                      OFFSET(getStruct<T>, {0x430, 40, 0, 0})
	SMember(FScalableFloat)                            SpawnDelay                                                  OFFSET(getStruct<T>, {0x458, 40, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIFollowerLWMConfiguration
/// Size: 0x0010 (0x000390 - 0x0003A0)
class FJunoAIFollowerLWMConfiguration : public FJunoAIGlobalLWMConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(TArray<class UClass*>)                     PointProviderClasses                                        OFFSET(get<T>, {0x390, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIFollowerManagedData
/// Size: 0x0098 (0x000000 - 0x000098)
class FJunoAIFollowerManagedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FUniqueNetIdRepl)                          PlayerId                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(class UFortAthenaLivingWorldEncounterInstance*) Encounter                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           PointProviders                                              OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoAIWorldNPCSpawningData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoAIWorldNPCSpawningData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UObject*>)                  AssignedPointProvider                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoUniqueNPCLivingWorldPointProviderSelector
/// Size: 0x0070 (0x000008 - 0x000078)
class FJunoUniqueNPCLivingWorldPointProviderSelector : public FFortAthenaLivingWorldPointProviderSelector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              NPCGameplayTag                                              OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FScalableFloat)                            InitialPersistenceDuration                                  OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FScalableFloat)                            RespawnPersistenceDuration                                  OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<UPlayspaceComponent_Root_JunoAIManagement*>) CachedRootJunoAIManagement                 OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoVillagerSpawnerDataSelector
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FJunoVillagerSpawnerDataSelector : public FFortAthenaLivingWorldSpawnerDataSelector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TWeakObjectPtr<UPlayspaceComponent_JunoAIPersistence*>) CachedRootAIPersistence                        OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTagQuery)                         SpawnerDataToFilter                                         OFFSET(getStruct<T>, {0x10, 72, 0, 0})
	SMember(FGameplayTagQuery)                         RoleMustMatchQuery                                          OFFSET(getStruct<T>, {0x58, 72, 0, 0})
};

/// Struct /Script/JunoAIRuntime.JunoMoveConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoMoveConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldCondition_AIWorldSettings : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EJunoWorldCondition_AIWorldSettingsExpectedValue) FriendlyCreatures                                    OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(EJunoWorldCondition_AIWorldSettingsExpectedValue) HostileCreatures                                     OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(EJunoWorldCondition_AIWorldSettingsExpectedValue) FriendlyNPCs                                         OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Enum /Script/JunoAIRuntime.EJunoNPCJobEndReason
/// Size: 0x04
enum EJunoNPCJobEndReason : uint8_t
{
	EJunoNPCJobEndReason__ManualPlayerUnassignment                                   = 0,
	EJunoNPCJobEndReason__AutoUnassigmentViaFollowerAssignment                       = 1,
	EJunoNPCJobEndReason__AutoUnassignmentViaCampHardRemoval                         = 2,
	EJunoNPCJobEndReason__EJunoNPCJobEndReason_MAX                                   = 3
};

/// Enum /Script/JunoAIRuntime.EJunoNPCFollowEndReason
/// Size: 0x04
enum EJunoNPCFollowEndReason : uint8_t
{
	EJunoNPCFollowEndReason__ManualPlayerUnassignment                                = 0,
	EJunoNPCFollowEndReason__AutoUnassigmentViaRecruitment                           = 1,
	EJunoNPCFollowEndReason__AutoUnassignmentDueToStaleFollower                      = 2,
	EJunoNPCFollowEndReason__EJunoNPCFollowEndReason_MAX                             = 3
};

/// Enum /Script/JunoAIRuntime.ENPCRewardType
/// Size: 0x03
enum ENPCRewardType : uint8_t
{
	ENPCRewardType__LootTier                                                         = 0,
	ENPCRewardType__Recipe                                                           = 1,
	ENPCRewardType__ENPCRewardType_MAX                                               = 2
};

/// Enum /Script/JunoAIRuntime.EJunoWorldCondition_AIWorldSettingsExpectedValue
/// Size: 0x04
enum EJunoWorldCondition_AIWorldSettingsExpectedValue : uint32_t
{
	EJunoWorldCondition_AIWorldSettingsExpectedValue__Any                            = 0,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__On                             = 1,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__Off                            = 2,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__EJunoWorldCondition_MAX        = 3
};

