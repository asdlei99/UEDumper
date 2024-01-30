
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NavigationSystem
/// dependency: StructUtils
/// dependency: WorldConditions

/// Enum /Script/SmartObjectsModule.ESmartObjectChangeReason
/// Size: 0x14
enum class ESmartObjectChangeReason : uint8_t
{
	ESmartObjectChangeReason__None                                                   = 0,
	ESmartObjectChangeReason__OnEvent                                                = 1,
	ESmartObjectChangeReason__OnTagAdded                                             = 2,
	ESmartObjectChangeReason__OnTagRemoved                                           = 3,
	ESmartObjectChangeReason__OnClaimed                                              = 4,
	ESmartObjectChangeReason__OnOccupied                                             = 5,
	ESmartObjectChangeReason__OnReleased                                             = 6,
	ESmartObjectChangeReason__OnSlotEnabled                                          = 7,
	ESmartObjectChangeReason__OnSlotDisabled                                         = 8,
	ESmartObjectChangeReason__OnObjectEnabled                                        = 9,
	ESmartObjectChangeReason__OnObjectDisabled                                       = 10,
	ESmartObjectChangeReason__OnComponentBound                                       = 11,
	ESmartObjectChangeReason__OnComponentUnbound                                     = 12,
	ESmartObjectChangeReason__ESmartObjectChangeReason_MAX                           = 13
};

/// Enum /Script/SmartObjectsModule.ESmartObjectEntrancePriority
/// Size: 0x11
enum class ESmartObjectEntrancePriority : uint8_t
{
	ESmartObjectEntrancePriority__Lowest                                             = 0,
	ESmartObjectEntrancePriority__Lower                                              = 1,
	ESmartObjectEntrancePriority__Low                                                = 2,
	ESmartObjectEntrancePriority__BelowNormal                                        = 3,
	ESmartObjectEntrancePriority__Normal                                             = 4,
	ESmartObjectEntrancePriority__AboveNormal                                        = 5,
	ESmartObjectEntrancePriority__High                                               = 6,
	ESmartObjectEntrancePriority__Higher                                             = 7,
	ESmartObjectEntrancePriority__Highest                                            = 8,
	ESmartObjectEntrancePriority__MIN                                                = 0,
	ESmartObjectEntrancePriority__MAX                                                = 8
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotShape
/// Size: 0x03
enum class ESmartObjectSlotShape : uint8_t
{
	ESmartObjectSlotShape__Circle                                                    = 0,
	ESmartObjectSlotShape__Rectangle                                                 = 1,
	ESmartObjectSlotShape__ESmartObjectSlotShape_MAX                                 = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotState
/// Size: 0x06
enum class ESmartObjectSlotState : uint8_t
{
	ESmartObjectSlotState__Invalid                                                   = 0,
	ESmartObjectSlotState__Free                                                      = 1,
	ESmartObjectSlotState__Claimed                                                   = 2,
	ESmartObjectSlotState__Occupied                                                  = 3,
	ESmartObjectSlotState__Disabled                                                  = 4,
	ESmartObjectSlotState__ESmartObjectSlotState_MAX                                 = 5
};

/// Enum /Script/SmartObjectsModule.FSmartObjectSlotEntrySelectionMethod
/// Size: 0x03
enum class FSmartObjectSlotEntrySelectionMethod : uint8_t
{
	FSmartObjectSlotEntrySelectionMethod__First                                      = 0,
	FSmartObjectSlotEntrySelectionMethod__NearestToSearchLocation                    = 1,
	FSmartObjectSlotEntrySelectionMethod__FSmartObjectSlotEntrySelectionMethod_MAX   = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectCollectionRegistrationResult
/// Size: 0x05
enum class ESmartObjectCollectionRegistrationResult : uint8_t
{
	ESmartObjectCollectionRegistrationResult__Failed_InvalidCollection               = 0,
	ESmartObjectCollectionRegistrationResult__Failed_AlreadyRegistered               = 1,
	ESmartObjectCollectionRegistrationResult__Failed_NotFromPersistentLevel          = 2,
	ESmartObjectCollectionRegistrationResult__Succeeded                              = 3,
	ESmartObjectCollectionRegistrationResult__ESmartObjectCollectionRegistrationResult_MAX = 4
};

/// Enum /Script/SmartObjectsModule.ESmartObjectUnregistrationMode
/// Size: 0x03
enum class ESmartObjectUnregistrationMode : uint8_t
{
	ESmartObjectUnregistrationMode__KeepRuntimeInstanceActiveIfPartOfCollection      = 0,
	ESmartObjectUnregistrationMode__DestroyRuntimeInstance                           = 1,
	ESmartObjectUnregistrationMode__ESmartObjectUnregistrationMode_MAX               = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTagMergingPolicy
/// Size: 0x03
enum class ESmartObjectTagMergingPolicy : uint8_t
{
	ESmartObjectTagMergingPolicy__Combine                                            = 0,
	ESmartObjectTagMergingPolicy__Override                                           = 1,
	ESmartObjectTagMergingPolicy__ESmartObjectTagMergingPolicy_MAX                   = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTagFilteringPolicy
/// Size: 0x04
enum class ESmartObjectTagFilteringPolicy : uint8_t
{
	ESmartObjectTagFilteringPolicy__NoFilter                                         = 0,
	ESmartObjectTagFilteringPolicy__Combine                                          = 1,
	ESmartObjectTagFilteringPolicy__Override                                         = 2,
	ESmartObjectTagFilteringPolicy__ESmartObjectTagFilteringPolicy_MAX               = 3
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotNavigationLocationType
/// Size: 0x03
enum class ESmartObjectSlotNavigationLocationType : uint8_t
{
	ESmartObjectSlotNavigationLocationType__Entry                                    = 0,
	ESmartObjectSlotNavigationLocationType__Exit                                     = 1,
	ESmartObjectSlotNavigationLocationType__ESmartObjectSlotNavigationLocationType_MAX = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTraceType
/// Size: 0x04
enum class ESmartObjectTraceType : uint8_t
{
	ESmartObjectTraceType__ByChannel                                                 = 0,
	ESmartObjectTraceType__ByProfile                                                 = 1,
	ESmartObjectTraceType__ByObjectTypes                                             = 2,
	ESmartObjectTraceType__ESmartObjectTraceType_MAX                                 = 3
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequestFilter
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FSmartObjectRequestFilter
{ 
	class AActor*                                      UserActor;                                                  // 0x0000   (0x0008)  
	FGameplayTagContainer                              UserTags;                                                   // 0x0008   (0x0020)  
	FGameplayTagQuery                                  ActivityRequirements;                                       // 0x0028   (0x0048)  
	class UClass*                                      BehaviorDefinitionClass;                                    // 0x0070   (0x0008)  
	TArray<class UClass*>                              BehaviorDefinitionClasses;                                  // 0x0078   (0x0010)  
	bool                                               bShouldEvaluateConditions;                                  // 0x0088   (0x0001)  
	bool                                               bShouldIncludeClaimedSlots;                                 // 0x0089   (0x0001)  
	bool                                               bShouldIncludeDisabledSlots;                                // 0x008A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x65];                                      // 0x008B   (0x0065)  MISSED
};

/// Class /Script/SmartObjectsModule.EnvQueryGenerator_SmartObjects
/// Size: 0x0120 (0x000050 - 0x000170)
class UEnvQueryGenerator_SmartObjects : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      QueryOriginContext;                                         // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FSmartObjectRequestFilter                          SmartObjectRequestFilter;                                   // 0x0060   (0x00F0)  
	FVector                                            QueryBoxExtent;                                             // 0x0150   (0x0018)  
	bool                                               bOnlyClaimable;                                             // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0169   (0x0007)  MISSED
};

/// Class /Script/SmartObjectsModule.EnvQueryItemType_SmartObject
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_SmartObject : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class USmartObjectSettings : public UDeveloperSettings
{ 
public:
	ESmartObjectTagFilteringPolicy                     DefaultUserTagsFilteringPolicy;                             // 0x0030   (0x0001)  
	ESmartObjectTagMergingPolicy                       DefaultActivityTagsMergingPolicy;                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	class UClass*                                      DefaultWorldConditionSchemaClass;                           // 0x0038   (0x0008)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSmartObjectHandle
{ 
	uint64_t                                           ID;                                                         // 0x0000   (0x0008)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSmartObjectSlotHandle
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectUserHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSmartObjectUserHandle
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectClaimHandle
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSmartObjectClaimHandle
{ 
	FSmartObjectHandle                                 SmartObjectHandle;                                          // 0x0000   (0x0008)  
	FSmartObjectSlotHandle                             SlotHandle;                                                 // 0x0008   (0x0010)  
	FSmartObjectUserHandle                             UserHandle;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/SmartObjectsModule.BlackboardKeyType_SOClaimHandle
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_SOClaimHandle : public UBlackboardKeyType
{ 
public:
	FSmartObjectClaimHandle                            Handle;                                                     // 0x0030   (0x0020)  
};

/// Class /Script/SmartObjectsModule.GenericSmartObject
/// Size: 0x0008 (0x000290 - 0x000298)
class AGenericSmartObject : public AActor
{ 
public:
	class USmartObjectComponent*                       SOComponent;                                                // 0x0290   (0x0008)  
};

/// Class /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SmartObjectClaimHandle_Invalid
	// FSmartObjectClaimHandle SmartObjectClaimHandle_Invalid();                                                             // [0x76066cc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetValueAsSOClaimHandle
	// void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, FName& KeyName, FSmartObjectClaimHandle Value); // [0x76064e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetSmartObjectEnabled
	// bool SetSmartObjectEnabled(class AActor* SmartObjectActor, bool bEnabled);                                            // [0x76062a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetMultipleSmartObjectsEnabled
	// bool SetMultipleSmartObjectsEnabled(TArray<AActor*>& SmartObjectActors, bool bEnabled);                               // [0x7605f08] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetBlackboardValueAsSOClaimHandle
	// void SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FSmartObjectClaimHandle& Value); // [0x7605b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveSmartObject
	// bool RemoveSmartObject(class AActor* SmartObjectActor);                                                               // [0x76056b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveMultipleSmartObjects
	// bool RemoveMultipleSmartObjects(TArray<AActor*>& SmartObjectActors);                                                  // [0x76055d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.NotEqual_SmartObjectSlotHandleSmartObjectSlotHandle
	// bool NotEqual_SmartObjectSlotHandleSmartObjectSlotHandle(FSmartObjectSlotHandle& A, FSmartObjectSlotHandle& B);       // [0x7605438] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.NotEqual_SmartObjectHandleSmartObjectHandle
	// bool NotEqual_SmartObjectHandleSmartObjectHandle(FSmartObjectHandle& A, FSmartObjectHandle& B);                       // [0x760534c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsOccupied
	// class USmartObjectBehaviorDefinition* MarkSmartObjectSlotAsOccupied(class UObject* WorldContextObject, FSmartObjectClaimHandle ClaimHandle, class UClass* DefinitionClass); // [0x76050cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsFree
	// bool MarkSmartObjectSlotAsFree(class UObject* WorldContextObject, FSmartObjectClaimHandle ClaimHandle);               // [0x7604f3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsClaimed
	// FSmartObjectClaimHandle MarkSmartObjectSlotAsClaimed(class UObject* WorldContextObject, FSmartObjectSlotHandle SlotHandle, class AActor* UserActor); // [0x7604cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectSlotHandle
	// bool IsValidSmartObjectSlotHandle(FSmartObjectSlotHandle& Handle);                                                    // [0x7604c1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectHandle
	// bool IsValidSmartObjectHandle(FSmartObjectHandle& Handle);                                                            // [0x7604b88] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectClaimHandle
	// bool IsValidSmartObjectClaimHandle(FSmartObjectClaimHandle Handle);                                                   // [0x7604a38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetValueAsSOClaimHandle
	// FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, FName& KeyName);     // [0x76047c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetBlackboardValueAsSOClaimHandle
	// FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);     // [0x76038b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.FindSmartObjectsInTargetingRequest
	// bool FindSmartObjectsInTargetingRequest(class UObject* WorldContextObject, FSmartObjectRequestFilter& Filter, FTargetingRequestHandle TargetingHandle, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7602474] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.FindSmartObjectsInList
	// bool FindSmartObjectsInList(class UObject* WorldContextObject, FSmartObjectRequestFilter& Filter, TArray<AActor*>& ActorList, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7601b68] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.FindSmartObjectsInComponent
	// bool FindSmartObjectsInComponent(FSmartObjectRequestFilter& Filter, class USmartObjectComponent* SmartObjectComponent, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7601270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.FindSmartObjectsInActor
	// bool FindSmartObjectsInActor(FSmartObjectRequestFilter& Filter, class AActor* SearchActor, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7600978] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Equal_SmartObjectSlotHandleSmartObjectSlotHandle
	// bool Equal_SmartObjectSlotHandleSmartObjectSlotHandle(FSmartObjectSlotHandle& A, FSmartObjectSlotHandle& B);          // [0x75ffe7c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Equal_SmartObjectHandleSmartObjectHandle
	// bool Equal_SmartObjectHandleSmartObjectHandle(FSmartObjectHandle& A, FSmartObjectHandle& B);                          // [0x75ffd90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectSlotHandleToString
	// FString Conv_SmartObjectSlotHandleToString(FSmartObjectSlotHandle& Handle);                                           // [0x75ffcd8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectRequestResultToString
	// FString Conv_SmartObjectRequestResultToString(FSmartObjectRequestResult& Result);                                     // [0x75ffc2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectHandleToString
	// FString Conv_SmartObjectHandleToString(FSmartObjectHandle& Handle);                                                   // [0x75ffb84] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectDefinitionToString
	// FString Conv_SmartObjectDefinitionToString(class USmartObjectDefinition* Definition);                                 // [0x75ffaf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectClaimHandleToString
	// FString Conv_SmartObjectClaimHandleToString(FSmartObjectClaimHandle& Result);                                         // [0x75ffa40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddSmartObject
	// bool AddSmartObject(class AActor* SmartObjectActor);                                                                  // [0x75ff474] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddOrRemoveSmartObject
	// bool AddOrRemoveSmartObject(class AActor* SmartObject, bool bEnabled);                                                // [0x75ff380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddOrRemoveMultipleSmartObjects
	// bool AddOrRemoveMultipleSmartObjects(TArray<AActor*>& SmartObjectActors, bool bAdd);                                  // [0x75ff214] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddMultipleSmartObjects
	// bool AddMultipleSmartObjects(TArray<AActor*>& SmartObjectActors);                                                     // [0x75ff138] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SmartObjectsModule.SmartObjectCollectionEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FSmartObjectCollectionEntry
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	FSoftObjectPath                                    Path;                                                       // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	FBox                                               Bounds;                                                     // 0x00A0   (0x0038)  
	FSmartObjectHandle                                 Handle;                                                     // 0x00D8   (0x0008)  
	uint32_t                                           DefinitionIdx;                                              // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00E4   (0x000C)  MISSED
};

/// Class /Script/SmartObjectsModule.SmartObjectCollection
/// Size: 0x00B0 (0x000290 - 0x000340)
class ASmartObjectCollection : public AActor
{ 
public:
	FBox                                               Bounds;                                                     // 0x0290   (0x0038)  
	TArray<FSmartObjectCollectionEntry>                CollectionEntries;                                          // 0x02C8   (0x0010)  
	SDK_UNDEFINED(80,2301) /* TMap<FSmartObjectHandle, FSoftObjectPath> */ __um(RegisteredIdToObjectMap);          // 0x02D8   (0x0050)  
	TArray<class USmartObjectDefinition*>              Definitions;                                                // 0x0328   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0338   (0x0008)  MISSED
};

/// Class /Script/SmartObjectsModule.SmartObjectComponent
/// Size: 0x0050 (0x000290 - 0x0002E0)
class USmartObjectComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,2302) /* FMulticastInlineDelegate */ __um(OnSmartObjectEvent);                                // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x02A0   (0x0018)  MISSED
	class USmartObjectDefinition*                      DefinitionAsset;                                            // 0x02B8   (0x0008)  
	FSmartObjectHandle                                 RegisteredHandle;                                           // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x02C8   (0x0010)  MISSED
	bool                                               bCanBePartOfCollection;                                     // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02D9   (0x0007)  MISSED


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectComponent.SetSmartObjectEnabled
	// bool SetSmartObjectEnabled(bool bEnable);                                                                             // [0x7606394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.ReceiveOnEvent
	// void ReceiveOnEvent(FSmartObjectEventData& EventData, class AActor* Interactor);                                      // [0x211c0a0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.IsSmartObjectEnabled
	// bool IsSmartObjectEnabled();                                                                                          // [0x7604a14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.IsBoundToSimulation
	// bool IsBoundToSimulation();                                                                                           // [0x76048b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SmartObjectsModule.SmartObjectContainerRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class USmartObjectContainerRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/SmartObjectsModule.SmartObjectDebugRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{ 
public:
};

/// Class /Script/SmartObjectsModule.SmartObjectBehaviorDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectBehaviorDefinition : public UObject
{ 
public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotDefinitionDataProxy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSmartObjectSlotDefinitionDataProxy
{ 
	FInstancedStruct                                   Data;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotDefinition
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FSmartObjectSlotDefinition
{ 
	FVector3f                                          Offset;                                                     // 0x0000   (0x000C)  
	FRotator3f                                         Rotation;                                                   // 0x000C   (0x000C)  
	bool                                               bEnabled;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FGameplayTagQuery                                  UserTagFilter;                                              // 0x0020   (0x0048)  
	FGameplayTagContainer                              ActivityTags;                                               // 0x0068   (0x0020)  
	FGameplayTagContainer                              RuntimeTags;                                                // 0x0088   (0x0020)  
	FWorldConditionQueryDefinition                     SelectionPreconditions;                                     // 0x00A8   (0x0018)  
	TArray<class USmartObjectBehaviorDefinition*>      BehaviorDefinitions;                                        // 0x00C0   (0x0010)  
	TArray<FSmartObjectSlotDefinitionDataProxy>        DefinitionData;                                             // 0x00D0   (0x0010)  
};

/// Class /Script/SmartObjectsModule.SmartObjectDefinition
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class USmartObjectDefinition : public UDataAsset
{ 
public:
	TArray<FSmartObjectSlotDefinition>                 Slots;                                                      // 0x0030   (0x0010)  
	TArray<class USmartObjectBehaviorDefinition*>      DefaultBehaviorDefinitions;                                 // 0x0040   (0x0010)  
	FGameplayTagQuery                                  UserTagFilter;                                              // 0x0050   (0x0048)  
	FWorldConditionQueryDefinition                     Preconditions;                                              // 0x0098   (0x0018)  
	FGameplayTagContainer                              ActivityTags;                                               // 0x00B0   (0x0020)  
	class UClass*                                      WorldConditionSchemaClass;                                  // 0x00D0   (0x0008)  
	ESmartObjectTagMergingPolicy                       ActivityTagsMergingPolicy;                                  // 0x00D8   (0x0001)  
	ESmartObjectTagFilteringPolicy                     UserTagsFilteringPolicy;                                    // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00DA   (0x0006)  MISSED


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.SetUserTagFilter
	// void SetUserTagFilter(FGameplayTagQuery& InUserTagFilter);                                                            // [0x7606424] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.K2_GetSlots
	// TArray<FSmartObjectSlotDefinition> K2_GetSlots();                                                                     // [0x7604cb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.IsValidSlotIndex
	// bool IsValidSlotIndex(int32_t SlotIndex);                                                                             // [0x73ceaa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetUserTagsFilteringPolicy
	// ESmartObjectTagFilteringPolicy GetUserTagsFilteringPolicy();                                                          // [0x76047a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetUserTagFilter
	// FGameplayTagQuery GetUserTagFilter();                                                                                 // [0x760478c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetSlotWorldTransform
	// FTransform GetSlotWorldTransform(int32_t SlotIndex, FTransform& OwnerTransform);                                      // [0x76044d4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetSlotActivityTags
	// void GetSlotActivityTags(int32_t SlotIndex, FGameplayTagContainer& OutActivityTags);                                  // [0x7603c18] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetMutableSlot
	// FSmartObjectSlotDefinition GetMutableSlot(int32_t Index);                                                             // [0x7603b80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetBounds
	// FBox GetBounds();                                                                                                     // [0x76039f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetActivityTags
	// FGameplayTagContainer GetActivityTags();                                                                              // [0x7602db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SmartObjectsModule.SmartObjectSpacePartition
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectSpacePartition : public UObject
{ 
public:
};

/// Class /Script/SmartObjectsModule.SmartObjectHashGrid
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class USmartObjectHashGrid : public USmartObjectSpacePartition
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0028   (0x00A8)  MISSED
};

/// Class /Script/SmartObjectsModule.SmartObjectOctree
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class USmartObjectOctree : public USmartObjectSpacePartition
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0028   (0x00C8)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectContainer
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FSmartObjectContainer
{ 
	FBox                                               Bounds;                                                     // 0x0000   (0x0038)  
	TArray<FSmartObjectCollectionEntry>                CollectionEntries;                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,2303) /* TMap<FSmartObjectHandle, FSoftObjectPath> */ __um(RegisteredIdToObjectMap);          // 0x0048   (0x0050)  
	TArray<class USmartObjectDefinition*>              Definitions;                                                // 0x0098   (0x0010)  
	class UObject*                                     Owner;                                                      // 0x00A8   (0x0008)  
};

/// Class /Script/SmartObjectsModule.SmartObjectPersistentCollection
/// Size: 0x00B8 (0x000290 - 0x000348)
class ASmartObjectPersistentCollection : public AActor
{ 
public:
	FSmartObjectContainer                              SmartObjectContainer;                                       // 0x0290   (0x00B0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0340   (0x0008)  MISSED
};

/// Class /Script/SmartObjectsModule.SmartObjectRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class USmartObjectRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystem
/// Size: 0x0168 (0x000030 - 0x000198)
class USmartObjectSubsystem : public UWorldSubsystem
{ 
public:
	FSoftClassPath                                     SpacePartitionClassName;                                    // 0x0030   (0x0018)  
	class UClass*                                      SpacePartitionClass;                                        // 0x0048   (0x0008)  
	class USmartObjectSpacePartition*                  SpacePartition;                                             // 0x0050   (0x0008)  
	class ASmartObjectSubsystemRenderingActor*         RenderingActor;                                             // 0x0058   (0x0008)  
	FSmartObjectContainer                              SmartObjectContainer;                                       // 0x0060   (0x00B0)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0110   (0x0010)  MISSED
	SDK_UNDEFINED(80,2304) /* TMap<FSmartObjectHandle, FSmartObjectRuntime> */ __um(RuntimeSmartObjects);          // 0x0120   (0x0050)  
	TArray<class USmartObjectComponent*>               RegisteredSOComponents;                                     // 0x0170   (0x0010)  
	TArray<class USmartObjectComponent*>               PendingSmartObjectRegistration;                             // 0x0180   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0190   (0x0008)  MISSED


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.Use
	// class USmartObjectBehaviorDefinition* Use(FSmartObjectClaimHandle& ClaimHandle, class UClass* DefinitionClass);       // [0x76066f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.SetSlotEnabled
	// bool SetSlotEnabled(FSmartObjectSlotHandle SlotHandle, bool bEnabled);                                                // [0x7606074] Final|Native|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.SetEnabled
	// bool SetEnabled(FSmartObjectHandle Handle, bool bEnabled);                                                            // [0x7605cec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromSlot
	// bool RemoveTagFromSlot(FSmartObjectSlotHandle SlotHandle, FGameplayTag& tag);                                         // [0x7605920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromInstance
	// void RemoveTagFromInstance(FSmartObjectHandle Handle, FGameplayTag& tag);                                             // [0x760576c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.Release
	// bool Release(FSmartObjectClaimHandle& ClaimHandle);                                                                   // [0x7605534] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.IsEnabled
	// bool IsEnabled(FSmartObjectHandle Handle);                                                                            // [0x76048d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponentByRequestResult
	// class USmartObjectComponent* GetSmartObjectComponentByRequestResult(FSmartObjectRequestResult& Result);               // [0x76046e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponent
	// class USmartObjectComponent* GetSmartObjectComponent(FSmartObjectClaimHandle& ClaimHandle);                           // [0x7604638] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTransformFromRequestResult
	// bool GetSlotTransformFromRequestResult(FSmartObjectRequestResult& RequestResult, FTransform& OutSlotTransform);       // [0x7604324] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTransform
	// bool GetSlotTransform(FSmartObjectClaimHandle& ClaimHandle, FTransform& OutSlotTransform);                            // [0x7604170] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTags
	// FGameplayTagContainer GetSlotTags(FSmartObjectSlotHandle SlotHandle);                                                 // [0x7604018] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotState
	// ESmartObjectSlotState GetSlotState(FSmartObjectSlotHandle SlotHandle);                                                // [0x7603ecc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotLocation
	// bool GetSlotLocation(FSmartObjectClaimHandle& ClaimHandle, FVector& OutSlotLocation);                                 // [0x7603d2c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetInstanceTags
	// FGameplayTagContainer GetInstanceTags(FSmartObjectHandle Handle);                                                     // [0x7603a38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinitionByRequestResult
	// class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(FSmartObjectRequestResult& RequestResult, class UClass* DefinitionClass); // [0x7603710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinition
	// class USmartObjectBehaviorDefinition* GetBehaviorDefinition(FSmartObjectClaimHandle& ClaimHandle, class UClass* DefinitionClass); // [0x760356c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetAllSlots
	// void GetAllSlots(FSmartObjectHandle Handle, TArray<FSmartObjectSlotHandle>& OutSlots);                                // [0x7602dcc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects_BP
	// bool FindSmartObjects_BP(FSmartObjectRequest& Request, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x760013c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects
	// bool FindSmartObjects(FSmartObjectRequest& Request, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x760013c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.FindSmartObject
	// FSmartObjectRequestResult FindSmartObject(FSmartObjectRequest& Request, class AActor* UserActor);                     // [0x75fff78] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.Claim
	// FSmartObjectClaimHandle Claim(FSmartObjectRequestResult& RequestResult, class AActor* UserActor);                     // [0x75ff8a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.AddTagToSlot
	// void AddTagToSlot(FSmartObjectSlotHandle SlotHandle, FGameplayTag& tag);                                              // [0x75ff6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.AddTagToInstance
	// void AddTagToInstance(FSmartObjectHandle Handle, FGameplayTag& tag);                                                  // [0x75ff52c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystemRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class USmartObjectSubsystemRenderingComponent : public USmartObjectDebugRenderingComponent
{ 
public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystemRenderingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ASmartObjectSubsystemRenderingActor : public AActor
{ 
public:
	class USmartObjectSubsystemRenderingComponent*     RenderingComponent;                                         // 0x0290   (0x0008)  
};

/// Class /Script/SmartObjectsModule.SmartObjectTest
/// Size: 0x0008 (0x000028 - 0x000030)
class USmartObjectTest : public UObject
{ 
public:
	class ASmartObjectTestingActor*                    SmartObjectTestingActor;                                    // 0x0028   (0x0008)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequest
/// Size: 0x0130 (0x000000 - 0x000130)
struct FSmartObjectRequest
{ 
	FBox                                               QueryBox;                                                   // 0x0000   (0x0038)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSmartObjectRequestFilter                          Filter;                                                     // 0x0040   (0x00F0)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequestResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSmartObjectRequestResult
{ 
	FSmartObjectHandle                                 SmartObjectHandle;                                          // 0x0000   (0x0008)  
	FSmartObjectSlotHandle                             SlotHandle;                                                 // 0x0008   (0x0010)  
};

/// Class /Script/SmartObjectsModule.SmartObjectSimpleQueryTest
/// Size: 0x0140 (0x000030 - 0x000170)
class USmartObjectSimpleQueryTest : public USmartObjectTest
{ 
public:
	FSmartObjectRequest                                Request;                                                    // 0x0030   (0x0130)  
	TArray<FSmartObjectRequestResult>                  Results;                                                    // 0x0160   (0x0010)  
};

/// Class /Script/SmartObjectsModule.SmartObjectTestRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class USmartObjectTestRenderingComponent : public USmartObjectDebugRenderingComponent
{ 
public:
};

/// Class /Script/SmartObjectsModule.SmartObjectTestingActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASmartObjectTestingActor : public AActor
{ 
public:
	TArray<class USmartObjectTest*>                    Tests;                                                      // 0x0290   (0x0010)  
	class USmartObjectTestRenderingComponent*          RenderingComponent;                                         // 0x02A0   (0x0008)  
	class USmartObjectSubsystem*                       SmartObjectSubsystem;                                       // 0x02A8   (0x0008)  
	bool                                               bRunTestsEachFrame;                                         // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectTestingActor.RunTests
	// void RunTests();                                                                                                      // [0x7605b4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectTestingActor.ResetTests
	// void ResetTests();                                                                                                    // [0x7605af0] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/SmartObjectsModule.SmartObjectTraceParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSmartObjectTraceParams
{ 
	ESmartObjectTraceType                              Type;                                                       // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,2305) /* TEnumAsByte<ETraceTypeQuery> */ __um(TraceChannel);                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	SDK_UNDEFINED(16,2306) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(ObjectTypes);                          // 0x0008   (0x0010)  
	FCollisionProfileName                              CollisionProfile;                                           // 0x0018   (0x0004)  
	bool                                               bTraceComplex;                                              // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectUserCapsuleParams
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSmartObjectUserCapsuleParams
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	float                                              Height;                                                     // 0x0004   (0x0004)  
	float                                              StepHeight;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotValidationParams
/// Size: 0x0070 (0x000000 - 0x000070)
struct FSmartObjectSlotValidationParams
{ 
	class UClass*                                      NavigationFilter;                                           // 0x0000   (0x0008)  
	FVector                                            SearchExtents;                                              // 0x0008   (0x0018)  
	FSmartObjectTraceParams                            GroundTraceParameters;                                      // 0x0020   (0x0020)  
	FSmartObjectTraceParams                            TransitionTraceParameters;                                  // 0x0040   (0x0020)  
	bool                                               bUseNavigationCapsuleSize;                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	FSmartObjectUserCapsuleParams                      UserCapsule;                                                // 0x0064   (0x000C)  
};

/// Class /Script/SmartObjectsModule.SmartObjectSlotValidationFilter
/// Size: 0x00E8 (0x000028 - 0x000110)
class USmartObjectSlotValidationFilter : public UObject
{ 
public:
	FSmartObjectSlotValidationParams                   EntryParameters;                                            // 0x0028   (0x0070)  
	bool                                               bUseEntryParametersForExit;                                 // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FSmartObjectSlotValidationParams                   ExitParameters;                                             // 0x00A0   (0x0070)  
};

/// Class /Script/SmartObjectsModule.SmartObjectUserComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USmartObjectUserComponent : public UActorComponent
{ 
public:
	class UClass*                                      ValidationFilter;                                           // 0x00A0   (0x0008)  
};

/// Class /Script/SmartObjectsModule.SmartObjectWorldConditionSchema
/// Size: 0x0028 (0x000038 - 0x000060)
class USmartObjectWorldConditionSchema : public UWorldConditionSchema
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0038   (0x0028)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectEventData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSmartObjectEventData
{ 
	FSmartObjectHandle                                 SmartObjectHandle;                                          // 0x0000   (0x0008)  
	FSmartObjectSlotHandle                             SlotHandle;                                                 // 0x0008   (0x0010)  
	ESmartObjectChangeReason                           Reason;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FGameplayTag                                       tag;                                                        // 0x001C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceHandle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSmartObjectSlotEntranceHandle
{ 
	FSmartObjectSlotHandle                             SlotHandle;                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceLocationResult
/// Size: 0x0080 (0x000000 - 0x000080)
struct FSmartObjectSlotEntranceLocationResult
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0030   (0x0008)  MISSED
	FGameplayTag                                       tag;                                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FGameplayTagContainer                              Tags;                                                       // 0x0040   (0x0020)  
	FSmartObjectSlotEntranceHandle                     EntranceHandle;                                             // 0x0060   (0x0018)  
	bool                                               bIsValid;                                                   // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceLocationRequest
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSmartObjectSlotEntranceLocationRequest
{ 
	class AActor*                                      UserActor;                                                  // 0x0000   (0x0008)  
	class UClass*                                      ValidationFilter;                                           // 0x0008   (0x0008)  
	class ANavigationData*                             NavigationData;                                             // 0x0010   (0x0008)  
	FSmartObjectUserCapsuleParams                      UserCapsuleParams;                                          // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            SearchLocation;                                             // 0x0028   (0x0018)  
	FSmartObjectSlotEntrySelectionMethod               SelectMethod;                                               // 0x0040   (0x0001)  
	ESmartObjectSlotNavigationLocationType             LocationType;                                               // 0x0041   (0x0001)  
	bool                                               bProjectNavigationLocation;                                 // 0x0042   (0x0001)  
	bool                                               bTraceGroundLocation;                                       // 0x0043   (0x0001)  
	bool                                               bCheckTransitionTrajectory;                                 // 0x0044   (0x0001)  
	bool                                               bCheckEntranceLocationOverlap;                              // 0x0045   (0x0001)  
	bool                                               bCheckSlotLocationOverlap;                                  // 0x0046   (0x0001)  
	bool                                               bUseSlotLocationAsFallback;                                 // 0x0047   (0x0001)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotDefinitionData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSmartObjectSlotDefinitionData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotAnnotation
/// Size: 0x0000 (0x000008 - 0x000008)
struct FSmartObjectSlotAnnotation : FSmartObjectSlotDefinitionData
{ 
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionBase
/// Size: 0x0000 (0x000010 - 0x000010)
struct FSmartObjectWorldConditionBase : FWorldConditionBase
{ 
};

/// Struct /Script/SmartObjectsModule.SmartObjectAnnotation_SlotUserCollision
/// Size: 0x0010 (0x000008 - 0x000018)
struct FSmartObjectAnnotation_SlotUserCollision : FSmartObjectSlotAnnotation
{ 
	bool                                               bUseUserCapsuleSize;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FSmartObjectUserCapsuleParams                      Capsule;                                                    // 0x000C   (0x000C)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceAnnotation
/// Size: 0x0048 (0x000008 - 0x000050)
struct FSmartObjectSlotEntranceAnnotation : FSmartObjectSlotAnnotation
{ 
	FVector3f                                          Offset;                                                     // 0x0008   (0x000C)  
	FRotator3f                                         Rotation;                                                   // 0x0014   (0x000C)  
	FGameplayTagContainer                              Tags;                                                       // 0x0020   (0x0020)  
	bool                                               bIsEntry : 1;                                               // 0x0040:0 (0x0001)  
	bool                                               bIsExit : 1;                                                // 0x0040:1 (0x0001)  
	bool                                               bTraceGroundLocation : 1;                                   // 0x0040:2 (0x0001)  
	bool                                               bCheckTransitionTrajectory : 1;                             // 0x0040:3 (0x0001)  
	ESmartObjectEntrancePriority                       SelectionPriority;                                          // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              TrajectoryStartHeightOffset;                                // 0x0044   (0x0004)  
	float                                              TrajectorySlotHeightOffset;                                 // 0x0048   (0x0004)  
	float                                              TransitionCheckRadius;                                      // 0x004C   (0x0004)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotReference
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSmartObjectSlotReference
{ 
	char                                               Index;                                                      // 0x0000   (0x0001)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotLinkAnnotation
/// Size: 0x0008 (0x000008 - 0x000010)
struct FSmartObjectSlotLinkAnnotation : FSmartObjectSlotAnnotation
{ 
	FGameplayTag                                       tag;                                                        // 0x0008   (0x0004)  
	FSmartObjectSlotReference                          LinkedSlot;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectComponentInstanceData
/// Size: 0x0008 (0x000068 - 0x000070)
struct FSmartObjectComponentInstanceData : FActorComponentInstanceData
{ 
	class USmartObjectDefinition*                      DefinitionAsset;                                            // 0x0068   (0x0008)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectDefinitionPreviewData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSmartObjectDefinitionPreviewData
{ 
	SDK_UNDEFINED(32,2307) /* TWeakObjectPtr<UClass*> */ __um(ObjectActorClass);                                   // 0x0000   (0x0020)  
	FSoftObjectPath                                    ObjectMeshPath;                                             // 0x0020   (0x0018)  
	SDK_UNDEFINED(32,2308) /* TWeakObjectPtr<UClass*> */ __um(UserActorClass);                                     // 0x0038   (0x0020)  
	SDK_UNDEFINED(32,2309) /* TWeakObjectPtr<UClass*> */ __um(UserValidationFilterClass);                          // 0x0058   (0x0020)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectSpatialEntryData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSmartObjectSpatialEntryData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectHashGridEntryData
/// Size: 0x000B (0x000001 - 0x00000C)
struct FSmartObjectHashGridEntryData : FSmartObjectSpatialEntryData
{ 
	unsigned char                                      UnknownData00_1[0xB];                                       // 0x0001   (0x000B)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectOctreeEntryData
/// Size: 0x000F (0x000001 - 0x000010)
struct FSmartObjectOctreeEntryData : FSmartObjectSpatialEntryData
{ 
	unsigned char                                      UnknownData00_1[0xF];                                       // 0x0001   (0x000F)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotStateData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSmartObjectSlotStateData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotTransform
/// Size: 0x005F (0x000001 - 0x000060)
struct FSmartObjectSlotTransform : FSmartObjectSlotStateData
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectRuntimeSlot
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FSmartObjectRuntimeSlot
{ 
	FVector3f                                          Offset;                                                     // 0x0000   (0x000C)  
	FRotator3f                                         Rotation;                                                   // 0x000C   (0x000C)  
	FGameplayTagContainer                              Tags;                                                       // 0x0018   (0x0020)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0038   (0x0030)  MISSED
	FSmartObjectUserHandle                             User;                                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FWorldConditionQueryState                          PreconditionState;                                          // 0x0070   (0x0030)  
	ESmartObjectSlotState                              State;                                                      // 0x00A0   (0x0001)  
	bool                                               bSlotEnabled : 1;                                           // 0x00A1:0 (0x0001)  
	bool                                               bObjectEnabled : 1;                                         // 0x00A1:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00A2   (0x0006)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectRuntime
/// Size: 0x0120 (0x000000 - 0x000120)
struct FSmartObjectRuntime
{ 
	FWorldConditionQueryState                          PreconditionState;                                          // 0x0000   (0x0030)  
	TArray<FSmartObjectRuntimeSlot>                    Slots;                                                      // 0x0030   (0x0010)  
	class USmartObjectDefinition*                      Definition;                                                 // 0x0040   (0x0008)  
	SDK_UNDEFINED(8,2310) /* TWeakObjectPtr<USmartObjectComponent*> */ __um(OwnerComponent);                       // 0x0048   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	FGameplayTagContainer                              Tags;                                                       // 0x00B0   (0x0020)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x00D0   (0x0028)  MISSED
	FSmartObjectHandle                                 RegisteredHandle;                                           // 0x00F8   (0x0008)  
	FInstancedStruct                                   SpatialEntryData;                                           // 0x0100   (0x0010)  
	bool                                               bEnabled : 1;                                               // 0x0110:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0111   (0x000F)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotView
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSmartObjectSlotView
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotIndex
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSmartObjectSlotIndex
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectActorUserData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSmartObjectActorUserData
{ 
	SDK_UNDEFINED(8,2311) /* TWeakObjectPtr<AActor*> */ __um(UserActor);                                           // 0x0000   (0x0008)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionObjectTagQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSmartObjectWorldConditionObjectTagQueryState
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionObjectTagQuery
/// Size: 0x0058 (0x000010 - 0x000068)
struct FSmartObjectWorldConditionObjectTagQuery : FSmartObjectWorldConditionBase
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0010   (0x0010)  MISSED
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0020   (0x0048)  
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionSlotTagQueryState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSmartObjectWorldConditionSlotTagQueryState
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionSlotTagQuery
/// Size: 0x0058 (0x000010 - 0x000068)
struct FSmartObjectWorldConditionSlotTagQuery : FSmartObjectWorldConditionBase
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0010   (0x0010)  MISSED
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0020   (0x0048)  
};

/// Struct /Script/SmartObjectsModule.WorldCondition_SmartObjectActorTagQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWorldCondition_SmartObjectActorTagQueryState
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SmartObjectsModule.WorldCondition_SmartObjectActorTagQuery
/// Size: 0x0050 (0x000010 - 0x000060)
struct FWorldCondition_SmartObjectActorTagQuery : FSmartObjectWorldConditionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0010   (0x0008)  MISSED
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0018   (0x0048)  
};

