
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Enum /Script/JunoAIRuntime.EJunoNPCJobEndReason
/// Size: 0x04
enum class EJunoNPCJobEndReason : uint8_t
{
	EJunoNPCJobEndReason__ManualPlayerUnassignment                                   = 0,
	EJunoNPCJobEndReason__AutoUnassigmentViaFollowerAssignment                       = 1,
	EJunoNPCJobEndReason__AutoUnassignmentViaCampHardRemoval                         = 2,
	EJunoNPCJobEndReason__EJunoNPCJobEndReason_MAX                                   = 3
};

/// Enum /Script/JunoAIRuntime.EJunoNPCFollowEndReason
/// Size: 0x04
enum class EJunoNPCFollowEndReason : uint8_t
{
	EJunoNPCFollowEndReason__ManualPlayerUnassignment                                = 0,
	EJunoNPCFollowEndReason__AutoUnassigmentViaRecruitment                           = 1,
	EJunoNPCFollowEndReason__AutoUnassignmentDueToStaleFollower                      = 2,
	EJunoNPCFollowEndReason__EJunoNPCFollowEndReason_MAX                             = 3
};

/// Enum /Script/JunoAIRuntime.ENPCRewardType
/// Size: 0x03
enum class ENPCRewardType : uint8_t
{
	ENPCRewardType__LootTier                                                         = 0,
	ENPCRewardType__Recipe                                                           = 1,
	ENPCRewardType__ENPCRewardType_MAX                                               = 2
};

/// Enum /Script/JunoAIRuntime.EJunoWorldCondition_AIWorldSettingsExpectedValue
/// Size: 0x04
enum class EJunoWorldCondition_AIWorldSettingsExpectedValue : uint32_t
{
	EJunoWorldCondition_AIWorldSettingsExpectedValue__Any                            = 0,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__On                             = 1,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__Off                            = 2,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__EJunoWorldCondition_MAX        = 3
};

/// Class /Script/JunoAIRuntime.JunoAIBotController
/// Size: 0x01F0 (0x001750 - 0x001940)
class AJunoAIBotController : public AFortAthenaAIBotController
{ 
public:
	class UJunoAIInventoryComponent*                   JunoAIInventoryComponent;                                   // 0x1750   (0x0008)  
	TArray<FItemAndCount>                              DefaultItemsToAdd;                                          // 0x1758   (0x0010)  
	unsigned char                                      UnknownData00_5[0x78];                                      // 0x1768   (0x0078)  MISSED
	bool                                               bRequiresPersistentInventory;                               // 0x17E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x17E1   (0x0007)  MISSED
	FScalableFloat                                     EnableDurabilityOnInventory;                                // 0x17E8   (0x0028)  
	FScalableFloat                                     UseRoleCheckForDurability;                                  // 0x1810   (0x0028)  
	FGameplayTagQuery                                  RequiredRoleForDurability;                                  // 0x1838   (0x0048)  
	bool                                               bUseFocusedActorEyeLocationForFocalPoint;                   // 0x1880   (0x0001)  
	bool                                               bUseValidItemsPerType;                                      // 0x1881   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x1882   (0x0006)  MISSED
	FScalableFloat                                     EffectivenessMultiplierForWeaponSelectionOnPickedOrAddedItem; // 0x1888   (0x0028)  
	SDK_UNDEFINED(80,14022) /* TMap<FGameplayTag, UDataTable*> */ __um(ValidItemsTablePerType);                    // 0x18B0   (0x0050)  
	class UFortItemDefinition*                         AutomaticallyEquippedWeaponOnDurabilityBreak;               // 0x1900   (0x0008)  
	FScalableFloat                                     DurabilityMultiplier;                                       // 0x1908   (0x0028)  
	FGameplayTag                                       TagToApplyWhenAddingFallbackItemForDurabilityBreak;         // 0x1930   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x1934   (0x000C)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_FallbackBehavior
/// Size: 0x0080 (0x0001A8 - 0x000228)
class UJunoAIBotEvaluator_FallbackBehavior : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x01A8   (0x0018)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x01C0   (0x0048)  
	class UClass*                                      NavigationQueryFilterClass;                                 // 0x0208   (0x0008)  
	bool                                               bFallbackToPointWithNoCustomNavigationQueryFilter;          // 0x0210   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0211   (0x0003)  MISSED
	FName                                              BestTargetActorName;                                        // 0x0214   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0218   (0x0004)  MISSED
	FName                                              EnableKeyName;                                              // 0x021C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0220   (0x0008)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAIFTUERuntimeConfiguration
/// Size: 0x0088 (0x000000 - 0x000088)
struct FJunoAIFTUERuntimeConfiguration
{ 
	FScalableFloat                                     MaxDistanceFromCampToTeleport;                              // 0x0000   (0x0028)  
	FScalableFloat                                     MinDistanceFromPlayersToTeleport;                           // 0x0028   (0x0028)  
	FScalableFloat                                     TeleportToCampDelay;                                        // 0x0050   (0x0028)  
	class UEnvQuery*                                   TeleportToPlayerQueryTemplate;                              // 0x0078   (0x0008)  
	SDK_UNDEFINED(1,14023) /* TEnumAsByte<EEnvQueryRunMode> */ __um(TeleportToPlayerRunMode);                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_FTUENPC
/// Size: 0x00C0 (0x0000A8 - 0x000168)
class UJunoAIBotEvaluator_FTUENPC : public UFortAthenaAIBotEvaluator
{ 
public:
	unsigned char                                      UnknownData00_2[0x24];                                      // 0x00A8   (0x0024)  MISSED
	FName                                              TeleportDestinationKeyName;                                 // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D0   (0x0004)  MISSED
	FName                                              ShouldTeleportKeyName;                                      // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FJunoAIFTUERuntimeConfiguration                    FTUERuntimeConfiguration;                                   // 0x00E0   (0x0088)  
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_HardRemovalStart
/// Size: 0x0088 (0x0001A8 - 0x000230)
class UJunoAIBotEvaluator_HardRemovalStart : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x01A8   (0x0018)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x01C0   (0x0048)  
	FScalableFloat                                     RequestHardRemovalOnSuccess;                                // 0x0208   (0x0028)  
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_OffhandWeapon
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UJunoAIBotEvaluator_OffhandWeapon : public UFortAthenaAIBotEvaluator
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00A8   (0x0018)  MISSED
	FGameplayTag                                       TorchWeaponTag;                                             // 0x00C0   (0x0004)  
	FGameplayTag                                       MinTemperatureStateToAlwaysEquipTorch;                      // 0x00C4   (0x0004)  
	FGameplayTag                                       TemperatureStateUsedToDecideSpecialTimeTorchUsage;          // 0x00C8   (0x0004)  
	float                                              MaxDeltaFromHotTemperatureToEquipTorch;                     // 0x00CC   (0x0004)  
	TArray<FName>                                      ExecutionStatusesToCheckedToHolsterKeyNames;                // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00E0   (0x0010)  MISSED
	TArray<FName>                                      BoolsToCheckToHolsterKeyNames;                              // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0100   (0x0010)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_UnderThunderBehavior
/// Size: 0x0110 (0x0001A8 - 0x0002B8)
class UJunoAIBotEvaluator_UnderThunderBehavior : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x01A8   (0x0030)  MISSED
	FScalableFloat                                     IsEnabled;                                                  // 0x01D8   (0x0028)  
	FScalableFloat                                     UseTagForShelterCheck;                                      // 0x0200   (0x0028)  
	FGameplayTag                                       TagToCheckForSheltered;                                     // 0x0228   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	SDK_UNDEFINED(16,14024) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(ShelterQueryTypes);                   // 0x0230   (0x0010)  
	FScalableFloat                                     MaxShelterDistance;                                         // 0x0240   (0x0028)  
	FScalableFloat                                     MinDistanceFromShelterLocationToKeepItValid;                // 0x0268   (0x0028)  
	FGameplayTagContainer                              ShelterCollidingActorRequiresAnyTag;                        // 0x0290   (0x0020)  
	FGameplayTag                                       TagToApplyForShelteredNPC;                                  // 0x02B0   (0x0004)  
	FGameplayTag                                       TagToApplyForNonShelteredNPC;                               // 0x02B4   (0x0004)  
};

/// Struct /Script/JunoAIRuntime.JunoAIUnstuckFailsafeConfiguration
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FJunoAIUnstuckFailsafeConfiguration
{ 
	FScalableFloat                                     MinimumTimeUnderLandscape;                                  // 0x0000   (0x0028)  
	FScalableFloat                                     MinZThresholdForLandscapeTeleport;                          // 0x0028   (0x0028)  
	FScalableFloat                                     TeleportToLandscapeDelay;                                   // 0x0050   (0x0028)  
	class UEnvQuery*                                   TeleportToLandscapeQueryTemplate;                           // 0x0078   (0x0008)  
	SDK_UNDEFINED(1,14025) /* TEnumAsByte<EEnvQueryRunMode> */ __um(TeleportToLandscapeRunMode);                   // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FScalableFloat                                     MinimumTimeFalling;                                         // 0x0088   (0x0028)  
	FScalableFloat                                     TeleportToNavmeshDelay;                                     // 0x00B0   (0x0028)  
	class UEnvQuery*                                   TeleportToNavmeshQueryTemplate;                             // 0x00D8   (0x0008)  
	SDK_UNDEFINED(1,14026) /* TEnumAsByte<EEnvQueryRunMode> */ __um(TeleportToNavmeshRunMode);                     // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_UnstuckFailsafe
/// Size: 0x0110 (0x0000A8 - 0x0001B8)
class UJunoAIBotEvaluator_UnstuckFailsafe : public UFortAthenaAIBotEvaluator
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00A8   (0x0018)  MISSED
	FName                                              TeleportDestinationKeyName;                                 // 0x00C0   (0x0004)  
	FName                                              ShouldTeleportKeyName;                                      // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FJunoAIUnstuckFailsafeConfiguration                Configuration;                                              // 0x00D0   (0x00E8)  
};

/// Class /Script/JunoAIRuntime.JunoAICampPawnComponent
/// Size: 0x0278 (0x0000A8 - 0x000320)
class UJunoAICampPawnComponent : public UFortPawnComponent
{ 
public:
	SDK_UNDEFINED(16,14027) /* FMulticastInlineDelegate */ __um(OnJunoAICampPawnComponentChangedSoftRemovedReason); // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_5[0xF0];                                      // 0x00B8   (0x00F0)  MISSED
	TArray<class UClass*>                              PreFTUESkillSetClasses;                                     // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x01B8   (0x0048)  MISSED
	SDK_UNDEFINED(80,14028) /* TMap<FGameplayTag, FText> */ __um(AIRoleToDisplayText);                             // 0x0200   (0x0050)  
	TArray<class UClass*>                              FTUESkillSetClasses;                                        // 0x0250   (0x0010)  
	FGameplayTagContainer                              FTUETagsToAdd;                                              // 0x0260   (0x0020)  
	FScalableFloat                                     FTUEOverrideTileGenerationRadius;                           // 0x0280   (0x0028)  
	FScalableFloat                                     FTUEOverrideTileRemovalRadius;                              // 0x02A8   (0x0028)  
	FScalableFloat                                     TimeToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds; // 0x02D0   (0x0028)  
	FScalableFloat                                     TimeForVisitorsToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds; // 0x02F8   (0x0028)  


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetSoftRemovedReasons
	// FGameplayTagContainer GetSoftRemovedReasons();                                                                        // [0xbbd9514] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetAIRoleDisplayText
	// FText GetAIRoleDisplayText();                                                                                         // [0xbbd94e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetAIRole
	// FGameplayTag GetAIRole();                                                                                             // [0x62b1e44] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.ConvertAIRoleToDisplayText
	// FText ConvertAIRoleToDisplayText(FGameplayTag& AIRole);                                                               // [0xbbd9408] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAIRuntime.JunoAIInventoryComponent
/// Size: 0x0010 (0x000318 - 0x000328)
class UJunoAIInventoryComponent : public UJunoInventoryComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0318   (0x0010)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIMerchantComponent
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UJunoAIMerchantComponent : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00A8   (0x0050)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIRuntimeAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAIRuntimeAnalytics : public UObject
{ 
public:
};

/// Class /Script/JunoAIRuntime.JunoBTTask_FTUENPC
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UJunoBTTask_FTUENPC : public UFortBTTask_ExecuteGameplayAbility
{ 
public:
	FName                                              FTUENPCStatusKeyName;                                       // 0x00C8   (0x0004)  
	FName                                              ShouldTeleportKeyName;                                      // 0x00CC   (0x0004)  
};

/// Class /Script/JunoAIRuntime.JunoBTTask_ReactToVerb
/// Size: 0x0008 (0x000080 - 0x000088)
class UJunoBTTask_ReactToVerb : public UFortAthenaBTTask_ReactToVerb
{ 
public:
	FName                                              MoodReactionTagKeyName;                                     // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.RandomizedMoodReactionConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRandomizedMoodReactionConfig
{ 
	FScalableFloat                                     Weight;                                                     // 0x0000   (0x0028)  
	FGameplayTag                                       MoodReactionTag;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoBTTask_RunMoodReaction
/// Size: 0x0010 (0x000070 - 0x000080)
class UJunoBTTask_RunMoodReaction : public UBTTaskNode
{ 
public:
	TArray<FRandomizedMoodReactionConfig>              PossibleMoodReactions;                                      // 0x0070   (0x0010)  
};

/// Class /Script/JunoAIRuntime.FJunoAICampManagementVisitorWorldConditionSchema
/// Size: 0x0000 (0x000040 - 0x000040)
class UFJunoAICampManagementVisitorWorldConditionSchema : public UJunoCampWorldConditionSchema
{ 
public:
};

/// Class /Script/JunoAIRuntime.JunoAICampManagementRewardsWorldConditionSchema
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoAICampManagementRewardsWorldConditionSchema : public UJunoCampWorldConditionSchema
{ 
public:
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorConfigurationRuntime
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoAICampManagementVisitorConfigurationRuntime
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
	FWorldConditionQueryState                          SelectionPreconditionsQueryState;                           // 0x0030   (0x0030)  
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsConfigurationDigested
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoAICampManagementVisitorsConfigurationDigested
{ 
	TArray<FJunoAICampManagementVisitorConfigurationRuntime> PossibleVisitors;                                     // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsRarityConfiguration
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoAICampManagementVisitorsRarityConfiguration
{ 
	FGameplayTag                                       Rarity;                                                     // 0x0000   (0x0004)  
	int32_t                                            PickPercentage;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsPickingConfiguration
/// Size: 0x0018 (0x000008 - 0x000020)
struct FJunoAICampManagementVisitorsPickingConfiguration : FTableRowBase
{ 
	TArray<FJunoAICampManagementVisitorsRarityConfiguration> RaritiesConfiguration;                                // 0x0008   (0x0010)  
	int32_t                                            MaxRecruitableNPCs;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementLWMConfiguration
/// Size: 0x03A0 (0x000000 - 0x0003A0)
struct FJunoAICampManagementLWMConfiguration
{ 
	FFortAthenaLivingWorldEvent                        EventTemplate;                                              // 0x0000   (0x01B0)  
	FFortAthenaLivingWorldEventDataActorSpawnDescription SpawnDescriptionTemplate;                                 // 0x01B0   (0x0130)  
	FPointProviderFilterEntry                          FilterEntry;                                                // 0x02E0   (0x0088)  
	SDK_UNDEFINED(32,14029) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(Encounter);                // 0x0368   (0x0020)  
	TArray<class UClass*>                              PointProviderClasses;                                       // 0x0388   (0x0010)  
	bool                                               bRegisterReservoir;                                         // 0x0398   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0399   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsConfiguration
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoAICampManagementVisitorsConfiguration
{ 
	class UDataTable*                                  PossibleVisitorsDataTable;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     InitialInGameHoursDelay;                                    // 0x0008   (0x0028)  
};

/// Class /Script/JunoAIRuntime.JunoCampAIManagementComponent
/// Size: 0x06E8 (0x0000A0 - 0x000788)
class UJunoCampAIManagementComponent : public UJunoCampComponentBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x100];                                     // 0x00A0   (0x0100)  MISSED
	SDK_UNDEFINED(16,14030) /* TArray<TScriptInterface<Class>> */ __um(PointProviders);                            // 0x01A0   (0x0010)  
	class UFortAthenaLivingWorldEncounterInstance*     Encounter;                                                  // 0x01B0   (0x0008)  
	FJunoAICampManagementVisitorsConfigurationDigested VisitorsConfigurationDigested;                              // 0x01B8   (0x0018)  
	FJunoAICampManagementVisitorsPickingConfiguration  CachedVisitorsPickingConfigurationAtCurrentAwesomenessLevel; // 0x01D0   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01F0   (0x0008)  MISSED
	FJunoAICampManagementLWMConfiguration              LWMConfiguration;                                           // 0x01F8   (0x03A0)  
	FJunoAICampManagementVisitorsConfiguration         VisitorsConfiguration;                                      // 0x0598   (0x0030)  
	SDK_UNDEFINED(80,14031) /* TMap<int32_t, FDataTableRowHandle> */ __um(AwesomenessLevelToVisitorsPickingConfiguration); // 0x05C8   (0x0050)  
	SDK_UNDEFINED(80,14032) /* TMap<int32_t, UDataTable*> */ __um(AwesomenessLevelToNPCRewards);                   // 0x0618   (0x0050)  
	FScalableFloat                                     InitialIngameHoursDelayBeforeFirstRewardRoll;               // 0x0668   (0x0028)  
	FScalableFloat                                     MinimumIngameHoursBetweenRewardRolls;                       // 0x0690   (0x0028)  
	FScalableFloat                                     PassiveResourceGatheringTime;                               // 0x06B8   (0x0028)  
	FScalableFloat                                     MultiplierForSimulatedGeneration;                           // 0x06E0   (0x0028)  
	FScalableFloat                                     MaximumAllocableSOPerAIForSimulation;                       // 0x0708   (0x0028)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0730   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0734   (0x0004)  MISSED
	FScalableFloat                                     ShouldCheckWCForRemoteRecruitment;                          // 0x0738   (0x0028)  
	FScalableFloat                                     RequireNPCToBeInVisitorsListForRemoteRecruitment;           // 0x0760   (0x0028)  
};

/// Class /Script/JunoAIRuntime.JunoCaveLivingWorldEventData
/// Size: 0x0058 (0x000150 - 0x0001A8)
class UJunoCaveLivingWorldEventData : public UFortAthenaLivingWorldEventData
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0150   (0x0008)  MISSED
	FScalableFloat                                     CaveRoomDistanceMin;                                        // 0x0158   (0x0028)  
	FScalableFloat                                     CaveRoomDistanceMax;                                        // 0x0180   (0x0028)  
};

/// Class /Script/JunoAIRuntime.JunoAIFTUEEndWorldConditionSchema
/// Size: 0x0000 (0x000038 - 0x000038)
class UJunoAIFTUEEndWorldConditionSchema : public UWorldConditionSchema
{ 
public:
};

/// Struct /Script/JunoAIRuntime.JunoAIGlobalLWMConfiguration
/// Size: 0x0390 (0x000000 - 0x000390)
struct FJunoAIGlobalLWMConfiguration
{ 
	FFortAthenaLivingWorldEvent                        EventTemplate;                                              // 0x0000   (0x01B0)  
	FFortAthenaLivingWorldEventDataActorSpawnDescription SpawnDescriptionTemplate;                                 // 0x01B0   (0x0130)  
	FPointProviderFilterEntry                          FilterEntry;                                                // 0x02E0   (0x0088)  
	SDK_UNDEFINED(32,14033) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(Encounter);                // 0x0368   (0x0020)  
	bool                                               bRegisterReservoir;                                         // 0x0388   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0389   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAIFollowerLWMConfiguration
/// Size: 0x0010 (0x000390 - 0x0003A0)
struct FJunoAIFollowerLWMConfiguration : FJunoAIGlobalLWMConfiguration
{ 
	TArray<class UClass*>                              PointProviderClasses;                                       // 0x0390   (0x0010)  
};

/// Struct /Script/JunoAIRuntime.JunoAISinglePointProviderEncounterLWMConfiguration
/// Size: 0x0008 (0x000390 - 0x000398)
struct FJunoAISinglePointProviderEncounterLWMConfiguration : FJunoAIGlobalLWMConfiguration
{ 
	class UClass*                                      PointProviderClass;                                         // 0x0390   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoAITemporaryGlobalEncounterLWMConfiguration
/// Size: 0x0000 (0x000398 - 0x000398)
struct FJunoAITemporaryGlobalEncounterLWMConfiguration : FJunoAISinglePointProviderEncounterLWMConfiguration
{ 
};

/// Struct /Script/JunoAIRuntime.JunoAIFTUEConfiguration
/// Size: 0x00E8 (0x000398 - 0x000480)
struct FJunoAIFTUEConfiguration : FJunoAISinglePointProviderEncounterLWMConfiguration
{ 
	FGameplayTagQuery                                  PossibleFTUEDescriptorTagQuery;                             // 0x0398   (0x0048)  
	TArray<class UClass*>                              GEsToAddToFTUENPC;                                          // 0x03E0   (0x0010)  
	FWorldConditionQueryDefinition                     EndConditions;                                              // 0x03F0   (0x0018)  
	FScalableFloat                                     CustomLeashInnerRadius;                                     // 0x0408   (0x0028)  
	FScalableFloat                                     CustomLeashOuterRadius;                                     // 0x0430   (0x0028)  
	FScalableFloat                                     SpawnDelay;                                                 // 0x0458   (0x0028)  
};

/// Struct /Script/JunoAIRuntime.JunoAIFollowerManagedData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FJunoAIFollowerManagedData
{ 
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0000   (0x0030)  
	class UFortAthenaLivingWorldEncounterInstance*     Encounter;                                                  // 0x0030   (0x0008)  
	SDK_UNDEFINED(16,14034) /* TArray<TScriptInterface<Class>> */ __um(PointProviders);                            // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement
/// Size: 0x0E60 (0x0000F8 - 0x000F58)
class UPlayspaceComponent_Root_JunoAIManagement : public UFortPlayspaceComponent
{ 
public:
	FJunoAIFollowerLWMConfiguration                    LWMConfiguration;                                           // 0x00F8   (0x03A0)  
	FJunoAITemporaryGlobalEncounterLWMConfiguration    TemporaryGlobalEncounterLWMConfiguration;                   // 0x0498   (0x0398)  
	FJunoAIFTUEConfiguration                           FTUEConfiguration;                                          // 0x0830   (0x0480)  
	FScalableFloat                                     MaxNoInteractionTimeBeforeSoftRemovalInJunoGameTimeHours;   // 0x0CB0   (0x0028)  
	FScalableFloat                                     TimeBeforeSoftRemovedAIBecomesHardRemovedInJunoGameTimeHours; // 0x0CD8   (0x0028)  
	FScalableFloat                                     TimeToRemoveStaleFollowersFromDisconnectedPlayersInRealHours; // 0x0D00   (0x0028)  
	FScalableFloat                                     SecondsToWaitBeforeRemovingStaleFollowers;                  // 0x0D28   (0x0028)  
	FScalableFloat                                     GlobalRecruitableNPCsCap;                                   // 0x0D50   (0x0028)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0D78   (0x0020)  MISSED
	TArray<FJunoAIFollowerManagedData>                 ManagedFollowers;                                           // 0x0D98   (0x0010)  
	SDK_UNDEFINED(16,14035) /* TScriptInterface<Class> */ __um(TemporaryGlobalEncounterPointProvider);             // 0x0DA8   (0x0010)  
	class UFortAthenaLivingWorldEncounterInstance*     TemporaryGlobalEncounter;                                   // 0x0DB8   (0x0008)  
	SDK_UNDEFINED(16,14036) /* TScriptInterface<Class> */ __um(FTUEEncounterPointProvider);                        // 0x0DC0   (0x0010)  
	class UFortAthenaLivingWorldEncounterInstance*     FTUEEncounter;                                              // 0x0DD0   (0x0008)  
	FWorldConditionQueryState                          FTUEEndQueryState;                                          // 0x0DD8   (0x0030)  
	unsigned char                                      UnknownData01_5[0xB0];                                      // 0x0E08   (0x00B0)  MISSED
	SDK_UNDEFINED(80,14037) /* TMap<FGameplayTag, FJunoAIWorldNPCSpawningData> */ __um(WorldAssignedNPCs);         // 0x0EB8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0F08   (0x0050)  MISSED


	/// Functions
	// Function /Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement.HandleFTUENPCSpawned
	// void HandleFTUENPCSpawned(class AActor* FTUENPC);                                                                     // [0xbbeb608] Final|Native|Private 
};

/// Class /Script/JunoAIRuntime.JunoAISafetyBubbleComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UJunoAISafetyBubbleComponent : public UActorComponent
{ 
public:
	TArray<FFortAthenaLivingWorldEventTagDensityRegistration> TagsData;                                            // 0x00A0   (0x0010)  
	FScalableFloat                                     InGameHoursDuration;                                        // 0x00B0   (0x0028)  
	FScalableFloat                                     SafetyBubbleRadius;                                         // 0x00D8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0100   (0x0048)  MISSED


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAISafetyBubbleComponent.OnTimeOfDayPhaseChanged
	// void OnTimeOfDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);        // [0xbbeb688] Final|Native|Protected 
};

/// Class /Script/JunoAIRuntime.EnvQueryTest_JunoIsNearBuilding
/// Size: 0x00A0 (0x0001F8 - 0x000298)
class UEnvQueryTest_JunoIsNearBuilding : public UEnvQueryTest
{ 
public:
	FEnvOverlapData                                    OverlapData;                                                // 0x01F8   (0x0030)  
	FAIDataProviderBoolValue                           GenerateOnlyInsideClusterBounds;                            // 0x0228   (0x0038)  
	FAIDataProviderFloatValue                          MinimumBuildingClusterVolume;                               // 0x0260   (0x0038)  
};

/// Class /Script/JunoAIRuntime.EnvQueryTest_JunoIsUnderCeiling
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UEnvQueryTest_JunoIsUnderCeiling : public UEnvQueryTest
{ 
public:
	FEnvOverlapData                                    SweepData;                                                  // 0x01F8   (0x0030)  
	FAIDataProviderFloatValue                          SweepHeight;                                                // 0x0228   (0x0038)  
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_ReactToVerb
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
class UJunoAIBotEvaluator_ReactToVerb : public UFortAthenaAIBotEvaluator_ReactToVerb
{ 
public:
};

/// Class /Script/JunoAIRuntime.JunoAICheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAICheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableHostileCreatures
	// void JunoEnableHostileCreatures(bool bEnable);                                                                        // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableFriendlyNPCs
	// void JunoEnableFriendlyNPCs(bool bEnable);                                                                            // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableFriendlyCreatures
	// void JunoEnableFriendlyCreatures(bool bEnable);                                                                       // [0x60325ec] Final|BlueprintAuthorityOnly|Exec|Native|Private 
};

/// Class /Script/JunoAIRuntime.PlayspaceComponent_JunoAISafetyBubble
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPlayspaceComponent_JunoAISafetyBubble : public UFortPlayspaceComponent
{ 
public:
	class UClass*                                      SafetyBubbleComponent;                                      // 0x00F8   (0x0008)  
	bool                                               bPreventSafetyBubbleInCamp;                                 // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoMoveConfig
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoMoveConfig
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Class /Script/JunoAIRuntime.AITask_JunoMoveTo
/// Size: 0x0010 (0x000118 - 0x000128)
class UAITask_JunoMoveTo : public UAITask_MoveTo
{ 
public:
	FJunoMoveConfig                                    MoveConfig;                                                 // 0x0118   (0x0008)  
	SDK_UNDEFINED(8,14038) /* TWeakObjectPtr<AActor*> */ __um(BlockedByActor);                                     // 0x0120   (0x0008)  
};

/// Class /Script/JunoAIRuntime.BTTask_JunoMoveTo
/// Size: 0x00B8 (0x0000B0 - 0x000168)
class UBTTask_JunoMoveTo : public UBTTask_MoveTo
{ 
public:
	bool                                               bOnUnreachableGoalFindBlockingBuilding : 1;                 // 0x00B0:0 (0x0001)  
	bool                                               bAssignFoundBlockingBuildingAsTarget : 1;                   // 0x00B0:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FScalableFloat                                     BlockingBuildingTraceDistance;                              // 0x00B8   (0x0028)  
	FScalableFloat                                     BlockingBuildingTraceCooldown;                              // 0x00E0   (0x0028)  
	FBlackboardKeySelector                             BlockedByBuildingKeySelector;                               // 0x0108   (0x0028)  
	FBlackboardKeySelector                             LastBlockingBuildingTraceTimeKeySelector;                   // 0x0130   (0x0028)  
	bool                                               bApplyCostLimit : 1;                                        // 0x0158:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              PathingCostLimitFactor;                                     // 0x015C   (0x0004)  
	float                                              PathingMinimumCostLimit;                                    // 0x0160   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0164   (0x0004)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings_State
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoWorldCondition_AIWorldSettings_State : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoNPCValidItemRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FJunoNPCValidItemRow : FTableRowBase
{ 
	class UFortItemDefinition*                         ValidItem;                                                  // 0x0008   (0x0008)  
	bool                                               bCanBeEquippedAsMainWeapon;                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoNPCValidItems
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoNPCValidItems
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementNPCRewardRecipe
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoAICampManagementNPCRewardRecipe
{ 
	SDK_UNDEFINED(32,14039) /* TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*> */ __um(KnowledgeItemDefinition); // 0x0000   (0x0020)  
	EJunoKnowledgeState                                NewState;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementNPCReward
/// Size: 0x0040 (0x000008 - 0x000048)
struct FJunoAICampManagementNPCReward : FTableRowBase
{ 
	bool                                               bAlwaysPick;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              PickWeight;                                                 // 0x000C   (0x0004)  
	FWorldConditionQueryDefinition                     SelectionPreconditions;                                     // 0x0010   (0x0018)  
	ENPCRewardType                                     RewardType;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            MaximumPickAmount;                                          // 0x002C   (0x0004)  
	FName                                              MaximumPickSaveName;                                        // 0x0030   (0x0004)  
	FName                                              LootTierGroup;                                              // 0x0034   (0x0004)  
	TArray<FJunoAICampManagementNPCRewardRecipe>       Recipes;                                                    // 0x0038   (0x0010)  
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorConfiguration
/// Size: 0x0020 (0x000008 - 0x000028)
struct FJunoAICampManagementVisitorConfiguration : FTableRowBase
{ 
	FGameplayTag                                       UniqueAIIdentifier;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FWorldConditionQueryDefinition                     SelectionPreconditions;                                     // 0x0010   (0x0018)  
};

/// Struct /Script/JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoIsVillagerProviderExpiredStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(8,14040) /* TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*> */ __um(VillagerProvider); // 0x0000   (0x0008)  
	bool                                               bIsExpired;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0010   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FJunoIsVillagerProviderExpiredStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/JunoAIRuntime.JunoNPCVerbReactionTableRow
/// Size: 0x0008 (0x000078 - 0x000080)
struct FJunoNPCVerbReactionTableRow : FFortNPCVerbReactionTableRow
{ 
	FGameplayTag                                       MoodReactionTag;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTaskInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoResetVillagerProviderTimerStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(8,14041) /* TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*> */ __um(VillagerProvider); // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,14042) /* TWeakObjectPtr<AActor*> */ __um(Villager);                                           // 0x0008   (0x0008)  
	FScalableFloat                                     ResetDuration;                                              // 0x0010   (0x0028)  
	class AActor*                                      UserActor;                                                  // 0x0038   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FJunoResetVillagerProviderTimerStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionAILocalCampChecks
/// Size: 0x0020 (0x000010 - 0x000030)
struct FJunoWorldConditionAILocalCampChecks : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	int32_t                                            RequiredNPCsSlots;                                          // 0x0018   (0x0004)  
	float                                              MinimumRemainingNPCSoftRemovalTimeInJunoHours;              // 0x001C   (0x0004)  
	FGameplayTag                                       HasGatheringActorUsableByRole;                              // 0x0020   (0x0004)  
	FWorldConditionContextDataRef                      HasGatheringActorUsableByActorRef;                          // 0x0024   (0x0008)  
	bool                                               bRequireGatheringActorToBeActive;                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionHitGlobalNPCsCap
/// Size: 0x0008 (0x000010 - 0x000018)
struct FJunoWorldConditionHitGlobalNPCsCap : FWorldConditionCommonBase
{ 
	int32_t                                            RequiredSpaceInGlobalCap;                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionNearestCampChecks
/// Size: 0x0038 (0x000010 - 0x000048)
struct FJunoWorldConditionNearestCampChecks : FWorldConditionCommonActorBase
{ 
	int32_t                                            RequiredCamps;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FScalableFloat                                     MaxDistanceFromCamp;                                        // 0x0018   (0x0028)  
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0040   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionNPCCampReward
/// Size: 0x0008 (0x000010 - 0x000018)
struct FJunoWorldConditionNPCCampReward : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      AIRef;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoWorldCondition_IsInTemporaryGlobalEncounter
/// Size: 0x0008 (0x000010 - 0x000018)
struct FJunoWorldCondition_IsInTemporaryGlobalEncounter : FWorldConditionCommonBase
{ 
	FGameplayTag                                       NPCGameplayTag;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAIWorldNPCSpawningData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoAIWorldNPCSpawningData
{ 
	SDK_UNDEFINED(8,14043) /* TWeakObjectPtr<UObject*> */ __um(AssignedPointProvider);                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	SDK_UNDEFINED(8,14044) /* TWeakObjectPtr<UFortAthenaLivingWorldEventData*> */ __um(EventData);                 // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoUniqueNPCLivingWorldPointProviderSelector
/// Size: 0x0070 (0x000008 - 0x000078)
struct FJunoUniqueNPCLivingWorldPointProviderSelector : FFortAthenaLivingWorldPointProviderSelector
{ 
	FGameplayTag                                       NPCGameplayTag;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FScalableFloat                                     InitialPersistenceDuration;                                 // 0x0010   (0x0028)  
	FScalableFloat                                     RespawnPersistenceDuration;                                 // 0x0038   (0x0028)  
	SDK_UNDEFINED(8,14045) /* TWeakObjectPtr<UFortAthenaLivingWorldEventData*> */ __um(EventData);                 // 0x0060   (0x0008)  
	SDK_UNDEFINED(8,14046) /* TWeakObjectPtr<UPlayspaceComponent_Root_JunoAIManagement*> */ __um(CachedRootJunoAIManagement); // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoVillagerSpawnerDataSelector
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FJunoVillagerSpawnerDataSelector : FFortAthenaLivingWorldSpawnerDataSelector
{ 
	SDK_UNDEFINED(8,14047) /* TWeakObjectPtr<UPlayspaceComponent_JunoAIPersistence*> */ __um(CachedRootAIPersistence); // 0x0008   (0x0008)  
	FGameplayTagQuery                                  SpawnerDataToFilter;                                        // 0x0010   (0x0048)  
	FGameplayTagQuery                                  RoleMustMatchQuery;                                         // 0x0058   (0x0048)  
};

/// Struct /Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings
/// Size: 0x0010 (0x000010 - 0x000020)
struct FJunoWorldCondition_AIWorldSettings : FWorldConditionCommonBase
{ 
	EJunoWorldCondition_AIWorldSettingsExpectedValue   FriendlyCreatures;                                          // 0x0010   (0x0004)  
	EJunoWorldCondition_AIWorldSettingsExpectedValue   HostileCreatures;                                           // 0x0014   (0x0004)  
	EJunoWorldCondition_AIWorldSettingsExpectedValue   FriendlyNPCs;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

