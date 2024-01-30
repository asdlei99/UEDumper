
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: StructUtils

/// Class /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven
/// Size: 0x02E8 (0x0000B8 - 0x0003A0)
class UFortActorComponent_StateDriven : public UFortActorComponent_FortInteractExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(float)                                     OverlapRadius                                               OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FVector)                                   SlottedItemPopOffset                                        OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	CMember(TArray<FGameplayTagQuery>)                 VariableTagQueries                                          OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<float>)                             VariableFloats                                              OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TWeakObjectPtr<UStaticMeshComponent*>)     MeshComponentPtr                                            OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(TWeakObjectPtr<USphereComponent*>)         OverlapComponentPtr                                         OFFSET(get<T>, {0x1E8, 8, 0, 0})
	SMember(FFortItemEntry)                            SlottedItemEntry                                            OFFSET(getStruct<T>, {0x1F0, 424, 0, 0})


	/// Functions
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.TriggerCustomEvent
	// void TriggerCustomEvent(FGameplayTag& EventTag);                                                                         // [0x87ad11c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.SetCurrentState
	// void SetCurrentState(FStateDrivenState& InCurrentState);                                                                 // [0xb41ade8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.PopSlottedItem
	// void PopSlottedItem();                                                                                                   // [0x32e4b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.PlayBurstGameplayCue
	// void PlayBurstGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0xb41acb8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupOverlapEventSettings
	// void OnSetupOverlapEventSettings();                                                                                      // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupInteractionEventSettings
	// void OnSetupInteractionEventSettings();                                                                                  // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupDamageEventSettings
	// void OnSetupDamageEventSettings();                                                                                       // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnResetCollisionSettings
	// void OnResetCollisionSettings();                                                                                         // [0x211c0a0] Event|Protected|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnMulticastStateTreeEvent
	// void OnMulticastStateTreeEvent(FGameplayTag TransitionTag, FGameplayCueTag BurstGameplayCueTag);                         // [0x211c0a0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnHandleStateTreeEvent
	// void OnHandleStateTreeEvent(FGameplayTag TransitionTag, FGameplayCueTag BurstGameplayCueTag);                            // [0x211c0a0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleInteraction
	// void HandleInteraction(class ABuildingActor* SelfActor, class AFortPawn* InteractingPawn);                               // [0x69b67c4] Final|Native|Private 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleEndOverlap
	// void HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x8109954] Final|Native|Private 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleDied
	// void HandleDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x867d2f0] Final|Native|Private|HasDefaults 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleDamaged
	// void HandleDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x867d2f0] Final|Native|Private|HasDefaults 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleBeginOverlap
	// void HandleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x81094d8] Final|Native|Private|HasOutParms 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.GetSlottedItemEntry
	// FFortItemEntry GetSlottedItemEntry();                                                                                    // [0xb41ac9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.GetSlottedItemDisplayName
	// FText GetSlottedItemDisplayName();                                                                                       // [0xb41ac58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.GetInteractionString
	// FText GetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0xb41ab74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.GetFailedInteractionString
	// FText GetFailedInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0xb41aa90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenStateTransitions
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateDrivenStateTransitions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              TransitionTag                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FInstancedStruct>)                  TransitionEvents                                            OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenState
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FStateDrivenState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FString)                                   DevNotes                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bApplyMeshTransform                                         OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FTransform)                                StaticMeshTransform                                         OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(TArray<TWeakObjectPtr<UMaterialInstance*>>) MaterialInstances                                          OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FGameplayCueTag)                           LoopingGameplayCueTag                                       OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	DMember(float)                                     OverlapRadius                                               OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FText)                                     InteractionStringOverride                                   OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FText)                                     InteractionFailedStringOverride                             OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	CMember(TArray<FStateDrivenStateTransitions>)      Transitions                                                 OFFSET(get<T>, {0xC8, 16, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FStateDrivenEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayCueTag)                           BurstGameplayCue                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UClass*)                             GameplayEffect                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UFortActorComponent_StateDriven*)    StateDrivenOwner                                            OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_BeginOverlap
/// Size: 0x0018 (0x000028 - 0x000040)
class FStateDrivenEvent_BeginOverlap : public FStateDrivenEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FStateDrivenTagQuery)                      OverlappingActorTagQuery                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenTagQuery
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateDrivenTagQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FInstancedStruct)                          InstancedTagQuery                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_InteractionBase
/// Size: 0x0030 (0x000028 - 0x000058)
class FStateDrivenEvent_InteractionBase : public FStateDrivenEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FStateDrivenTagQuery)                      PlayerTagQuery                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     InteractionStringOverride                                   OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_Conversation
/// Size: 0x0010 (0x000058 - 0x000068)
class FStateDrivenEvent_Conversation : public FStateDrivenEvent_InteractionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTag)                              ConversationEntryTag                                        OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortNonPlayerConversationParticipantComponent*>) ConversationComponentPtr              OFFSET(get<T>, {0x5C, 8, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_CustomEvent
/// Size: 0x0008 (0x000028 - 0x000030)
class FStateDrivenEvent_CustomEvent : public FStateDrivenEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_DamageInstance
/// Size: 0x0038 (0x000028 - 0x000060)
class FStateDrivenEvent_DamageInstance : public FStateDrivenEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FStateDrivenTagQuery)                      InstigatorTagQuery                                          OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FStateDrivenTagQuery)                      DamageInstanceTagQuery                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(float)                                     MinimumInstanceDamage                                       OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_DepositResource
/// Size: 0x0028 (0x000058 - 0x000080)
class FStateDrivenEvent_DepositResource : public FStateDrivenEvent_InteractionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      DepositItem                                                 OFFSET(get<T>, {0x58, 32, 0, 0})
	DMember(int32_t)                                   DepositAmount                                               OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_Destroy
/// Size: 0x0030 (0x000028 - 0x000058)
class FStateDrivenEvent_Destroy : public FStateDrivenEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FStateDrivenTagQuery)                      InstigatorTagQuery                                          OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FStateDrivenTagQuery)                      DamageInstanceTagQuery                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_EndOverlap
/// Size: 0x0018 (0x000028 - 0x000040)
class FStateDrivenEvent_EndOverlap : public FStateDrivenEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FStateDrivenTagQuery)                      OverlappingActorTagQuery                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_InsertItem
/// Size: 0x0018 (0x000058 - 0x000070)
class FStateDrivenEvent_InsertItem : public FStateDrivenEvent_InteractionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FStateDrivenTagQuery)                      EquippedItemTagQuery                                        OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_Interaction
/// Size: 0x0000 (0x000058 - 0x000058)
class FStateDrivenEvent_Interaction : public FStateDrivenEvent_InteractionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_PickupItem
/// Size: 0x0000 (0x000040 - 0x000040)
class FStateDrivenEvent_PickupItem : public FStateDrivenEvent_BeginOverlap
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_Timer
/// Size: 0x0020 (0x000028 - 0x000048)
class FStateDrivenEvent_Timer : public FStateDrivenEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FStateDrivenFloat)                         duration                                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FTimerHandle)                              TimerTransitionEventHandle                                  OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenFloat
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateDrivenFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FInstancedStruct)                          InstancedFloat                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_WithdrawItem
/// Size: 0x0000 (0x000058 - 0x000058)
class FStateDrivenEvent_WithdrawItem : public FStateDrivenEvent_InteractionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenFloat_Base
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateDrivenFloat_Base : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenFloat_Simple
/// Size: 0x0008 (0x000008 - 0x000010)
class FStateDrivenFloat_Simple : public FStateDrivenFloat_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenFloat_Variable
/// Size: 0x0008 (0x000008 - 0x000010)
class FStateDrivenFloat_Variable : public FStateDrivenFloat_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   VariableIndex                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Base
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateDrivenTagQuery_Base : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Simple
/// Size: 0x0048 (0x000008 - 0x000050)
class FStateDrivenTagQuery_Simple : public FStateDrivenTagQuery_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         Query                                                       OFFSET(getStruct<T>, {0x8, 72, 0, 0})
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Variable
/// Size: 0x0008 (0x000008 - 0x000010)
class FStateDrivenTagQuery_Variable : public FStateDrivenTagQuery_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   VariableIndex                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Enum /Script/StateDrivenActorRuntime.EStateDrivenStateID
/// Size: 0x14
enum EStateDrivenStateID : uint8_t
{
	EStateDrivenStateID__Invalid                                                     = 0,
	EStateDrivenStateID__Success                                                     = 1,
	EStateDrivenStateID__Failure                                                     = 2,
	EStateDrivenStateID__State_A                                                     = 3,
	EStateDrivenStateID__State_B                                                     = 4,
	EStateDrivenStateID__State_C                                                     = 5,
	EStateDrivenStateID__State_D                                                     = 6,
	EStateDrivenStateID__State_E                                                     = 7,
	EStateDrivenStateID__State_F                                                     = 8,
	EStateDrivenStateID__State_G                                                     = 9,
	EStateDrivenStateID__State_H                                                     = 10,
	EStateDrivenStateID__State_I                                                     = 11,
	EStateDrivenStateID__State_J                                                     = 12,
	EStateDrivenStateID__EStateDrivenStateID_MAX                                     = 13
};

