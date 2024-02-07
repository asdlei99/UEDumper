
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: GameplayAbilities
/// dependency: McpProfileSys
/// dependency: NetCore
/// dependency: ProxyTable
/// dependency: VerseGameplayTags

/// Enum /Script/ItemizationCoreRuntime.EEquipItemLimitHitBehaviour
/// Size: 0x03
enum class EEquipItemLimitHitBehaviour : uint8_t
{
	EEquipItemLimitHitBehaviour__UnequipLeastRecentlyUsed                            = 0,
	EEquipItemLimitHitBehaviour__Block                                               = 1,
	EEquipItemLimitHitBehaviour__EEquipItemLimitHitBehaviour_MAX                     = 2
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveResult
/// Size: 0x05
enum class EVkInventoryMoveResult : uint8_t
{
	EVkInventoryMoveResult__Success                                                  = 0,
	EVkInventoryMoveResult__Failed                                                   = 1,
	EVkInventoryMoveResult__InvalidRequest                                           = 2,
	EVkInventoryMoveResult__NoChange                                                 = 3,
	EVkInventoryMoveResult__EVkInventoryMoveResult_MAX                               = 4
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveBehaviour
/// Size: 0x03
enum class EVkInventoryMoveBehaviour : uint8_t
{
	EVkInventoryMoveBehaviour__SwapSlotNumber                                        = 0,
	EVkInventoryMoveBehaviour__EmplaceSlotNumber                                     = 1,
	EVkInventoryMoveBehaviour__EVkInventoryMoveBehaviour_MAX                         = 2
};

/// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionType
/// Size: 0x03
enum class EInventoryCollectionType : uint8_t
{
	EInventoryCollectionType__Player                                                 = 0,
	EInventoryCollectionType__World                                                  = 1,
	EInventoryCollectionType__EInventoryCollectionType_MAX                           = 2
};

/// Enum /Script/ItemizationCoreRuntime.EItemState
/// Size: 0x05
enum class EItemState : uint8_t
{
	EItemState__NotInInventory                                                       = 0,
	EItemState__InInventory                                                          = 1,
	EItemState__Equipped                                                             = 2,
	EItemState__NumStates                                                            = 3,
	EItemState__EItemState_MAX                                                       = 4
};

/// Enum /Script/ItemizationCoreRuntime.EItemStateFilter
/// Size: 0x04
enum class EItemStateFilter : uint8_t
{
	EItemStateFilter__Owned                                                          = 0,
	EItemStateFilter__Equipped                                                       = 1,
	EItemStateFilter__EquippedAndActive                                              = 2,
	EItemStateFilter__EItemStateFilter_MAX                                           = 3
};

/// Enum /Script/ItemizationCoreRuntime.EItemAttributeType
/// Size: 0x06
enum class EItemAttributeType : uint8_t
{
	EItemAttributeType__Int                                                          = 0,
	EItemAttributeType__Decimal                                                      = 1,
	EItemAttributeType__Bool                                                         = 2,
	EItemAttributeType__String                                                       = 3,
	EItemAttributeType__Invalid                                                      = 255,
	EItemAttributeType__EItemAttributeType_MAX                                       = 256
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeCombineLogic_Math
/// Size: 0x07
enum class EAttributeCombineLogic_Math : uint8_t
{
	EAttributeCombineLogic_Math__MustMatch                                           = 0,
	EAttributeCombineLogic_Math__UseTarget                                           = 1,
	EAttributeCombineLogic_Math__Combine                                             = 2,
	EAttributeCombineLogic_Math__Average                                             = 3,
	EAttributeCombineLogic_Math__Highest                                             = 4,
	EAttributeCombineLogic_Math__Lowest                                              = 5,
	EAttributeCombineLogic_Math__EAttributeCombineLogic_MAX                          = 6
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicCalculateLogic
/// Size: 0x04
enum class EAttributeBasicCalculateLogic : uint8_t
{
	EAttributeBasicCalculateLogic__ReturnFirstFound                                  = 0,
	EAttributeBasicCalculateLogic__AddAllFound                                       = 1,
	EAttributeBasicCalculateLogic__MultiplyAllFound                                  = 2,
	EAttributeBasicCalculateLogic__EAttributeBasicCalculateLogic_MAX                 = 3
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicFirstFoundLogic
/// Size: 0x03
enum class EAttributeBasicFirstFoundLogic : uint8_t
{
	EAttributeBasicFirstFoundLogic__PrioritizeItemEntry                              = 0,
	EAttributeBasicFirstFoundLogic__PrioritizeComponent                              = 1,
	EAttributeBasicFirstFoundLogic__EAttributeBasicFirstFoundLogic_MAX               = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicNotFoundResult
/// Size: 0x03
enum class EAttributeBasicNotFoundResult : uint8_t
{
	EAttributeBasicNotFoundResult__ReturnInitial                                     = 0,
	EAttributeBasicNotFoundResult__ReturnZero                                        = 1,
	EAttributeBasicNotFoundResult__EAttributeBasicNotFoundResult_MAX                 = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeApplicationRule
/// Size: 0x04
enum class EAttributeApplicationRule : uint8_t
{
	EAttributeApplicationRule__ItemEntryOnly                                         = 0,
	EAttributeApplicationRule__ComponentOnly                                         = 1,
	EAttributeApplicationRule__Anywhere                                              = 2,
	EAttributeApplicationRule__EAttributeApplicationRule_MAX                         = 3
};

/// Class /Script/ItemizationCoreRuntime.ItemPickup
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AItemPickup : public AActor
{ 
public:
	class UCapsuleComponent*                           TouchCapsule;                                               // 0x0290   (0x0008)  
	class UItemDefinitionBase*                         ItemDefinition;                                             // 0x0298   (0x0008)  
	int64_t                                            Amount;                                                     // 0x02A0   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x02B0   (0x0008)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemPickup.OnRep_ItemDefinition
	// void OnRep_ItemDefinition();                                                                                          // [0x7a2e134] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryCollection
/// Size: 0x0648 (0x000290 - 0x0008D8)
class AInventoryCollection : public AInfo
{ 
public:
	TArray<class UInventory*>                          InventoryList;                                              // 0x0290   (0x0010)  
	SDK_UNDEFINED(80,2430) /* TMap<FGuid, UInventory*> */ __um(InventoryMap);                                      // 0x02A0   (0x0050)  
	SDK_UNDEFINED(80,2431) /* TMap<FGuid, FGuid> */    __um(ItemInventoryMap);                                     // 0x02F0   (0x0050)  
	SDK_UNDEFINED(80,2432) /* TMap<FGuid, UItemInstance*> */ __um(ItemInstanceMap);                                // 0x0340   (0x0050)  
	class UItemComponentStorageManager*                ItemComponentStorageManager;                                // 0x0390   (0x0008)  
	unsigned char                                      UnknownData00_5[0x538];                                     // 0x0398   (0x0538)  MISSED
	EInventoryCollectionType                           InventoryCollectionType;                                    // 0x08D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x08D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.UseItem
	// void UseItem(FGuid& ItemId, FGuid AdditionalItemID);                                                                  // [0x7a1851c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetItemIntAttribute
	// bool SetItemIntAttribute(FGuid& TargetInventoryID, FGuid& ItemEntryID, class UClass*& Attribute, int64_t NewValue);   // [0x7a182d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetEquippableItemInactive
	// void SetEquippableItemInactive(FGuid& ItemEntryID);                                                                   // [0x7a18240] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetEquippableItemActive
	// void SetEquippableItemActive(FGuid& ItemEntryID);                                                                     // [0x7a181b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_UseItem
	// void Server_UseItem(FGuid ItemId, FGuid AdditionalItemID);                                                            // [0x7a18048] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetItemSlot
	// void Server_SetItemSlot(FGuid OwningInventoryID, FGuid ItemEntryID, uint16_t SlotNumber, EVkInventoryMoveBehaviour MoveBehaviour); // [0x7a17e04] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetEquippableItemInactive
	// void Server_SetEquippableItemInactive(FGuid ItemEntryID);                                                             // [0x7a17d3c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetEquippableItemActive
	// void Server_SetEquippableItemActive(FGuid ItemEntryID);                                                               // [0x7a17c74] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_DropItem
	// void Server_DropItem(FGuid ItemEntryID, int64_t AmountToDrop);                                                        // [0x7a17b1c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.IsItemEquipped
	// bool IsItemEquipped(FGuid& ItemEntryID);                                                                              // [0x7a17994] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemSlotNumber
	// int32_t GetItemSlotNumber(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                              // [0x7a16ffc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemIntAttribute
	// int64_t GetItemIntAttribute(FGuid& TargetInventoryID, FGuid& ItemEntryID, class UClass*& Attribute);                  // [0x7a16eb8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition(FGuid& TargetInventoryID, FGuid& ItemEntryID);                           // [0x7a16db8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromInventory
	// int64_t GetItemAmountFromInventory(class UItemDefinitionBase* ItemDefinition, FGuid& TargetInventoryID);              // [0x7a16c74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromEntry
	// int64_t GetItemAmountFromEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                         // [0x7a16b74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmount
	// int64_t GetItemAmount(class UItemDefinitionBase* ItemDefinition);                                                     // [0x7a16aa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryName
	// FText GetInventoryName(FGuid& TargetInventoryID);                                                                     // [0x7a169f4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryListInPickupPriorityForItemDefinition
	// TArray<FGuid> GetInventoryListInPickupPriorityForItemDefinition(class UItemDefinitionBase* ItemDefinition);           // [0x7a168c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition(FGuid& TargetInventoryID);                                         // [0x7a16824] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoriesWithInventoryDefinition
	// TArray<FGuid> GetInventoriesWithInventoryDefinition(class UInventoryDefinition* InventoryDefinition);                 // [0x7a16740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllItemsInInventory
	// bool GetAllItemsInInventory(FGuid& TargetInventoryID, TArray<FGuid>& OutItemEntryIDList);                             // [0x7a16598] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllInventoriesInCollection
	// bool GetAllInventoriesInCollection(TArray<FGuid>& OutInventoryIDList);                                                // [0x7a164ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.DropItem
	// void DropItem(FGuid& ItemEntryID, int64_t AmountToDrop);                                                              // [0x7a1634c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.ClientOnItemAbilityCooldownUpdated
	// void ClientOnItemAbilityCooldownUpdated(class UInventory* Inventory, FGuid ItemEntryID, FItemAbilityCooldownState CooldownState); // [0x7a16170] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntry
/// Size: 0x002C (0x00000C - 0x000038)
struct FItemEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UItemDefinitionBase*                         ItemDefinition;                                             // 0x0010   (0x0008)  
	FGuid                                              ItemEntryID;                                                // 0x0018   (0x0010)  
	int32_t                                            SlotNumber;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x002C   (0x000C)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryList
/// Size: 0x01F0 (0x000108 - 0x0002F8)
struct FItemEntryList : FFastArraySerializer
{ 
	TArray<FItemEntry>                                 ItemList;                                                   // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x1E0];                                     // 0x0118   (0x01E0)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeValue
/// Size: 0x0028 (0x000000 - 0x000028)
struct FItemAttributeValue
{ 
	class UClass*                                      Attribute;                                                  // 0x0000   (0x0008)  
	TArray<char>                                       Data;                                                       // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeEntry
/// Size: 0x0044 (0x00000C - 0x000050)
struct FItemAttributeEntry : FFastArraySerializerItem
{ 
	FGuid                                              ItemEntryID;                                                // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FItemAttributeValue                                AttributeValue;                                             // 0x0020   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeList
/// Size: 0x01B8 (0x000108 - 0x0002C0)
struct FItemAttributeList : FFastArraySerializer
{ 
	TArray<FItemAttributeEntry>                        AttributeList;                                              // 0x0108   (0x0010)  
	SDK_UNDEFINED(8,2433) /* TWeakObjectPtr<AInventoryCollection*> */ __um(OwningInventoryCollection);             // 0x0118   (0x0008)  
	SDK_UNDEFINED(8,2434) /* TWeakObjectPtr<UInventory*> */ __um(OwningInventory);                                 // 0x0120   (0x0008)  
	unsigned char                                      UnknownData00_6[0x198];                                     // 0x0128   (0x0198)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.Inventory
/// Size: 0x09D0 (0x0000A0 - 0x000A70)
class UInventory : public UActorComponent
{ 
public:
	class AInventoryCollection*                        OwningInventoryCollection;                                  // 0x00A0   (0x0008)  
	class UInventoryDefinition*                        InventoryDefinition;                                        // 0x00A8   (0x0008)  
	FGuid                                              InventoryID;                                                // 0x00B0   (0x0010)  
	FItemEntryList                                     ItemEntryData;                                              // 0x00C0   (0x02F8)  
	FItemAttributeList                                 AttributeData;                                              // 0x03B8   (0x02C0)  
	uint16_t                                           InventoryTotalSlotsOverride;                                // 0x0678   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x067A   (0x0006)  MISSED
	int64_t                                            InventoryMaxStackSizeOverride;                              // 0x0680   (0x0008)  
	TArray<char>                                       InventoryMaxStackSizeOverrideAttributeData;                 // 0x0688   (0x0010)  
	unsigned char                                      UnknownData01_6[0x3D8];                                     // 0x0698   (0x03D8)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_ItemData
	// void OnRep_ItemData();                                                                                                // [0x7a17ab0] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryTotalSlotsOverride
	// void OnRep_InventoryTotalSlotsOverride();                                                                             // [0x7a17a80] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryMaxStackSizeOverride
	// void OnRep_InventoryMaxStackSizeOverride();                                                                           // [0x7a17a58] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryID
	// void OnRep_InventoryID();                                                                                             // [0x7a17a44] Final|Native|Protected 
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventory
/// Size: 0x0060 (0x000A70 - 0x000AD0)
class UEquippableInventory : public UInventory
{ 
public:
	TArray<FGuid>                                      EquippedItems;                                              // 0x0A70   (0x0010)  
	TArray<FGuid>                                      PreviouslyEquippedItems;                                    // 0x0A80   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0A90   (0x0040)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.EquippableInventory.OnRep_EquippedItems
	// void OnRep_EquippedItems();                                                                                           // [0x7a17a30] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryDefinition
/// Size: 0x0048 (0x000030 - 0x000078)
class UInventoryDefinition : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2435) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2436) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	uint16_t                                           Slots;                                                      // 0x0060   (0x0002)  
	char                                               PickupPriority;                                             // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0063   (0x0005)  MISSED
	class UItemRequirements*                           ItemRequirements;                                           // 0x0068   (0x0008)  
	bool                                               bEnableItemStacking;                                        // 0x0070   (0x0001)  
	bool                                               bRequireUniqueItemDefinitionPerStack;                       // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemFilter
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEquipItemFilter
{ 
	bool                                               bAppliesToAllItems;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2437) /* TArray<TWeakObjectPtr<UItemDefinitionBase*>> */ __um(ItemDefinitions);               // 0x0008   (0x0010)  
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemRestriction
/// Size: 0x0010 (0x000018 - 0x000028)
struct FEquipItemRestriction : FEquipItemFilter
{ 
	int64_t                                            ActiveLimit;                                                // 0x0018   (0x0008)  
	EEquipItemLimitHitBehaviour                        LimitHitBehaviour;                                          // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemCondition
/// Size: 0x0000 (0x000018 - 0x000018)
struct FEquipItemCondition : FEquipItemFilter
{ 
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventoryDefinition
/// Size: 0x0020 (0x000078 - 0x000098)
class UEquippableInventoryDefinition : public UInventoryDefinition
{ 
public:
	TArray<FEquipItemRestriction>                      EquipRestrictions;                                          // 0x0078   (0x0010)  
	TArray<FEquipItemCondition>                        EquipConditions;                                            // 0x0088   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.EquipmentSlot
/// Size: 0x0000 (0x000098 - 0x000098)
class UEquipmentSlot : public UEquippableInventoryDefinition
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.EquipmentHotBar
/// Size: 0x0000 (0x000098 - 0x000098)
class UEquipmentHotBar : public UEquippableInventoryDefinition
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.InventoryCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryCheatManager : public UCheatManagerExtension
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryUseItem
	// void InventoryUseItem(int32_t InventoryIndex, int32_t ItemIndex);                                                     // [0x60dfe58] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetItemSlot
	// void InventorySetItemSlot(int32_t InventoryIndex, int32_t ItemIndex, uint16_t NewSlotIndex);                          // [0x7a177f4] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetEquippedItemActive
	// void InventorySetEquippedItemActive(int32_t InventoryIndex, int32_t ItemIndex, bool bActive);                         // [0x7a17654] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryRemoveFromItem
	// void InventoryRemoveFromItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToRemove);                      // [0x7a170fc] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveItem
	// void InventoryMoveItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex);                // [0x7a174b4] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveAmountOfItem
	// void InventoryMoveAmountOfItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex, int64_t AmountToMove); // [0x7a1729c] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryDropItem
	// void InventoryDropItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToDrop);                              // [0x7a170fc] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryAddToItem
	// void InventoryAddToItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToAdd);                              // [0x7a170fc] Final|Exec|Native|Public 
};

/// Class /Script/ItemizationCoreRuntime.InventorySetupData
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UInventorySetupData : public UDataAsset
{ 
public:
	TArray<class UEquippableInventoryDefinition*>      EquipmentSetups;                                            // 0x0030   (0x0010)  
	TArray<class UInventoryDefinition*>                InventoryDefinitions;                                       // 0x0040   (0x0010)  
	TArray<class UItemDefinition*>                     StartingItems;                                              // 0x0050   (0x0010)  
	class UInputMappingContext*                        InputMappingContext;                                        // 0x0060   (0x0008)  
	SDK_UNDEFINED(32,2438) /* TWeakObjectPtr<UClass*> */ __um(InventoryUIWidgetClass);                             // 0x0068   (0x0020)  
	SDK_UNDEFINED(24,2439) /* FText */                 __um(DisplayName);                                          // 0x0088   (0x0018)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityConfigurationAsset : public UPrimaryDataAsset
{ 
public:
	class UClass*                                      GameplayAbilityClass;                                       // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset.Construct
	// void Construct(class UGameplayAbility* Ability);                                                                      // [0x2047e54] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCost
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemAbilityCost : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCostItem
/// Size: 0x0028 (0x000028 - 0x000050)
class UItemAbilityCostItem : public UItemAbilityCost
{ 
public:
	SDK_UNDEFINED(32,2440) /* TWeakObjectPtr<UItemDefinitionBase*> */ __um(ItemDefinition);                        // 0x0028   (0x0020)  
	int64_t                                            NumConsumed;                                                // 0x0048   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCostAttribute
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemAbilityCostAttribute : public UItemAbilityCost
{ 
public:
	class UClass*                                      Attribute;                                                  // 0x0028   (0x0008)  
	int64_t                                            MinValue;                                                   // 0x0030   (0x0008)  
	int64_t                                            Change;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldown
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemAbilityCooldown : public UObject
{ 
public:
	bool                                               bApplyOnStart;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldownTime
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityCooldownTime : public UItemAbilityCooldown
{ 
public:
	float                                              CooldownTime;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldownVelocityBased
/// Size: 0x0010 (0x000030 - 0x000040)
class UItemAbilityCooldownVelocityBased : public UItemAbilityCooldown
{ 
public:
	float                                              CooldownTimeIfStationary;                                   // 0x0030   (0x0004)  
	float                                              CooldownTimeScaleFactorIfMoving;                            // 0x0034   (0x0004)  
	bool                                               CooldownTimeIsResetToZeroWhenMoving;                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachment
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AItemAttachment : public AActor
{ 
public:
	class UMeshComponent*                              Mesh;                                                       // 0x0290   (0x0008)  
	class UItemAttachmentDefinition*                   AttachmentData;                                             // 0x0298   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02A0   (0x0008)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute
/// Size: 0x0048 (0x000028 - 0x000070)
class UItemAttribute : public UObject
{ 
public:
	SDK_UNDEFINED(24,2441) /* FText */                 __um(AttributeName);                                        // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,2442) /* FText */                 __um(AttributeDescription);                                 // 0x0040   (0x0018)  
	TArray<char>                                       DefaultValueAsData;                                         // 0x0058   (0x0010)  
	EItemAttributeType                                 AttributeType;                                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeName
	// FText GetAttributeName();                                                                                             // [0x7a166f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeDescription
	// FText GetAttributeDescription();                                                                                      // [0x7a166a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Int
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_Int : public UItemAttribute
{ 
public:
	int64_t                                            DefaultValue;                                               // 0x0070   (0x0008)  
	EAttributeCombineLogic_Math                        CombineLogic;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Decimal
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_Decimal : public UItemAttribute
{ 
public:
	double                                             DefaultValue;                                               // 0x0070   (0x0008)  
	EAttributeCombineLogic_Math                        CombineLogic;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Bool
/// Size: 0x0008 (0x000070 - 0x000078)
class UItemAttribute_Bool : public UItemAttribute
{ 
public:
	bool                                               DefaultValue;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_String
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_String : public UItemAttribute
{ 
public:
	SDK_UNDEFINED(16,2443) /* FString */               __um(DefaultValue);                                         // 0x0070   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValueBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemAttributeValueBase : public UObject
{ 
public:
	FGuid                                              QueriedItemEntryID;                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(8,2444) /* TWeakObjectPtr<AInventoryCollection*> */ __um(QueriedInventoryCollection);            // 0x0038   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Int
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Int : public UItemAttributeValueBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Decimal
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Decimal : public UItemAttributeValueBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Bool
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Bool : public UItemAttributeValueBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_String
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_String : public UItemAttributeValueBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentBase : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorageManager
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UItemComponentStorageManager : public UObject
{ 
public:
	SDK_UNDEFINED(80,2445) /* TMap<UClass*, FItemEntryStorageMap> */ __um(ClassIndividualStorageMap);              // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,2446) /* TMap<UClass*, UItemComponentSharedLocalStorage*> */ __um(ClassSharedStorageMap);     // 0x0078   (0x0050)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentLocalStorage
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponentLocalStorage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentSharedLocalStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentSharedLocalStorage : public UObject
{ 
public:
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityBinding
/// Size: 0x0050 (0x000000 - 0x000050)
struct FItemAbilityBinding
{ 
	SDK_UNDEFINED(32,2447) /* TWeakObjectPtr<UItemInputAction*> */ __um(InputAction);                              // 0x0000   (0x0020)  
	EItemStateFilter                                   ActiveState;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<class UItemAbilityCost*>                    Costs;                                                      // 0x0028   (0x0010)  
	TArray<class UItemAbilityCooldown*>                Cooldowns;                                                  // 0x0038   (0x0010)  
	class UItemAbilityConfigurationAsset*              Ability;                                                    // 0x0048   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Ability
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Ability : public UItemComponentBase
{ 
public:
	TArray<FItemAbilityBinding>                        AbilityList;                                                // 0x0028   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Ability
/// Size: 0x0028 (0x000038 - 0x000060)
class UItemComponentStorage_Ability : public UItemComponentLocalStorage
{ 
public:
	TArray<bool>                                       AbilityIsAvailableList;                                     // 0x0038   (0x0010)  
	class UItemComponent_Ability*                      SourceData;                                                 // 0x0048   (0x0008)  
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_AbilityShared
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemComponentStorage_AbilityShared : public UItemComponentSharedLocalStorage
{ 
public:
	SDK_UNDEFINED(80,2448) /* TMap<uint32_t, FItemAbilityRuntimeData> */ __um(RefCountedAbilityRuntimeData);       // 0x0028   (0x0050)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachmentDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemAttachmentDefinition : public UObject
{ 
public:
	EItemStateFilter                                   AttachmentVisibility;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemMeshAttachmentDefinition
/// Size: 0x0050 (0x000030 - 0x000080)
class UItemMeshAttachmentDefinition : public UItemAttachmentDefinition
{ 
public:
	FName                                              AttachToSocketName;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FVector                                            OffsetLocation;                                             // 0x0038   (0x0018)  
	FRotator                                           OffsetRotation;                                             // 0x0050   (0x0018)  
	FVector                                            MeshScale;                                                  // 0x0068   (0x0018)  
};

/// Class /Script/ItemizationCoreRuntime.ItemStaticMeshAttachmentDefinition
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UItemStaticMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
public:
	SDK_UNDEFINED(32,2449) /* TWeakObjectPtr<UStaticMesh*> */ __um(Mesh);                                          // 0x0080   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemSkeletalMeshAttachmentDefinition
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UItemSkeletalMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
public:
	SDK_UNDEFINED(32,2450) /* TWeakObjectPtr<USkeletalMesh*> */ __um(Mesh);                                        // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,2451) /* TWeakObjectPtr<UAnimSequence*> */ __um(Animation);                                   // 0x00A0   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Attach
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Attach : public UItemComponentBase
{ 
public:
	TArray<class UItemAttachmentDefinition*>           Attachments;                                                // 0x0028   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Attach
/// Size: 0x0020 (0x000038 - 0x000058)
class UItemComponentStorage_Attach : public UItemComponentLocalStorage
{ 
public:
	SDK_UNDEFINED(16,2452) /* TArray<TWeakObjectPtr<AItemAttachment*>> */ __um(ActorAttachments);                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_WasLoadedFromSave
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_WasLoadedFromSave : public UItemAttribute_Bool
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Core
/// Size: 0x0020 (0x000028 - 0x000048)
class UItemComponent_Core : public UItemComponentBase
{ 
public:
	class UItemType*                                   ItemType;                                                   // 0x0028   (0x0008)  
	class UItemRarity*                                 ItemRarity;                                                 // 0x0030   (0x0008)  
	FVerseGameplayTagContainer                         ItemTags;                                                   // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemType
	// class UItemType* GetItemType();                                                                                       // [0x7a2e0f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                   // [0x61cb750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI
/// Size: 0x0068 (0x000028 - 0x000090)
class UItemComponent_DisplayUI : public UItemComponentBase
{ 
public:
	SDK_UNDEFINED(32,2453) /* TWeakObjectPtr<UTexture2D*> */ __um(ItemIcon);                                       // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,2454) /* TWeakObjectPtr<UTexture2D*> */ __um(SmallItemIcon);                                  // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,2455) /* TWeakObjectPtr<UMaterialInterface*> */ __um(ItemMaterial);                           // 0x0068   (0x0020)  
	FName                                              MaterialTextureParameter;                                   // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallItemIcon();                                                                       // [0x7a2e110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetMaterialTextureParameter
	// FName GetMaterialTextureParameter();                                                                                  // [0x5905e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemMaterial
	// TWeakObjectPtr<UMaterialInterface*> GetItemMaterial();                                                                // [0x7a2e08c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemIcon
	// TWeakObjectPtr<UTexture2D*> GetItemIcon();                                                                            // [0x7a2e068] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemOwnerPoseAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemOwnerPoseAsset : public UPrimaryDataAsset
{ 
public:
	class UProxyTable*                                 ProxyTable;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_OwnerPose
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_OwnerPose : public UItemComponentBase
{ 
public:
	EItemStateFilter                                   ApplyPoseState;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UItemOwnerPoseAsset*                         PoseAsset;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_OwnerPose
/// Size: 0x0008 (0x000038 - 0x000040)
class UItemComponentStorage_OwnerPose : public UItemComponentLocalStorage
{ 
public:
	bool                                               bHasAppliedProceduralLayer;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Pickup
/// Size: 0x0040 (0x000028 - 0x000068)
class UItemComponent_Pickup : public UItemComponentBase
{ 
public:
	SDK_UNDEFINED(32,2456) /* TWeakObjectPtr<USkeletalMesh*> */ __um(SkeletalMesh);                                // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,2457) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                    // 0x0048   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_StackSize
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_StackSize : public UItemAttribute_Int
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_MaxStackSize
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_MaxStackSize : public UItemAttribute_Int
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Stackable
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Stackable : public UItemComponentBase
{ 
public:
	int64_t                                            MaxStackSize;                                               // 0x0028   (0x0008)  
	bool                                               AllowMultipleStacks;                                        // 0x0030   (0x0001)  
	bool                                               DestroyEmptyStacks;                                         // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FItemComponentContainer
{ 
	TArray<class UItemComponentBase*>                  Components;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinitionBase
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UItemDefinitionBase : public UMcpItemDefinitionBase
{ 
public:
	SDK_UNDEFINED(24,2458) /* FText */                 __um(ItemName);                                             // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2459) /* FText */                 __um(ItemDescription);                                      // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,2460) /* FText */                 __um(ItemShortDescription);                                 // 0x0060   (0x0018)  
	FItemComponentContainer                            ComponentContainer;                                         // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0088   (0x0050)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemShortDescription
	// FText GetItemShortDescription();                                                                                      // [0x7a2e0b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemDescription
	// FText GetItemDescription();                                                                                           // [0x7a2e020] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemComponentByClass
	// class UItemComponentBase* GetItemComponentByClass(class UClass* ItemComponentClass);                                  // [0x7a2c87c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetDisplayName
	// FText GetDisplayName();                                                                                               // [0x7a2c834] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinition
/// Size: 0x00B0 (0x0000D8 - 0x000188)
class UItemDefinition : public UItemDefinitionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xA8];                                      // 0x00D8   (0x00A8)  MISSED
	int32_t                                            ModifiedComponentIdx;                                       // 0x0180   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemInputAction
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemInputAction : public UInputAction
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInputMappingContext
/// Size: 0x0000 (0x000058 - 0x000058)
class UItemInputMappingContext : public UInputMappingContext
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInstance
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemInstance : public UObject
{ 
public:
	FGuid                                              ItemEntryID;                                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataStringAttributeValue
	// FString GetItemDataStringAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                 // [0x7a2dcb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataSlot
	// int32_t GetItemDataSlot(FItemAggregatedData& ItemData);                                                               // [0x7a2dbec] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataItemEntryID
	// FGuid GetItemDataItemEntryID(FItemAggregatedData& ItemData);                                                          // [0x7a2db28] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataIntAttributeValue
	// int64_t GetItemDataIntAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                    // [0x7a2d7dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDefinition
	// class UItemDefinitionBase* GetItemDataDefinition(FItemAggregatedData& ItemData);                                      // [0x7a2d708] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDecimalAttributeValue
	// double GetItemDataDecimalAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                 // [0x7a2d3bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataBoolAttributeValue
	// bool GetItemDataBoolAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                      // [0x7a2d07c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataAttributeList
	// TArray<UClass*> GetItemDataAttributeList(FItemAggregatedData& ItemData);                                              // [0x7a2c964] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeItemEntryID
	// FString DescribeItemEntryID(FGuid& ItemEntryID);                                                                      // [0x7a2c48c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeInventoryID
	// FString DescribeInventoryID(FGuid& InventoryID);                                                                      // [0x7a2c48c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationPickupFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SpawnItemPickupInWorld
	// class AItemPickup* SpawnItemPickupInWorld(class UObject* WorldContextObject, class UItemDefinitionBase* ItemDefinition, FVector& InPosition, int64_t Amount); // [0x7a2e2cc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SetDefaultItemPickupMesh
	// void SetDefaultItemPickupMesh(class UStaticMesh* Mesh);                                                               // [0x7a2e218] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SetDefaultItemPickupClass
	// void SetDefaultItemPickupClass(class UClass* ItemPickupClass);                                                        // [0x7a2e148] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.DropItemFromInventoryAsPickup
	// class AItemPickup* DropItemFromInventoryAsPickup(class AInventoryCollection* Collection, FGuid& InventoryID, FGuid& ItemEntryID, int64_t AmountToDrop); // [0x7a2c538] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemRarity
/// Size: 0x0058 (0x000030 - 0x000088)
class UItemRarity : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2461) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2462) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0060   (0x0010)  
	float                                              Tier;                                                       // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FVerseGameplayTagContainer                         Tags;                                                       // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetTier
	// float GetTier();                                                                                                      // [0x7a4d2e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetName
	// FText GetName();                                                                                                      // [0x6f4b390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetDescription
	// FText GetDescription();                                                                                               // [0x7a4d28c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetColor
	// FLinearColor GetColor();                                                                                              // [0x7a4d274] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Rarity
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_Rarity : public UItemAttribute_Int
{ 
public:
};

/// Struct /Script/ItemizationCoreRuntime.VkRarityEntry
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVkRarityEntry
{ 
	SDK_UNDEFINED(24,2463) /* FText */                 __um(Name);                                                 // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,2464) /* FText */                 __um(Description);                                          // 0x0018   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemRarityTable
/// Size: 0x0040 (0x000030 - 0x000070)
class UItemRarityTable : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2465) /* FText */                 __um(RarityTableName);                                      // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2466) /* FText */                 __um(RarityTableDescription);                               // 0x0048   (0x0018)  
	TArray<FVkRarityEntry>                             RarityList;                                                 // 0x0060   (0x0010)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemTagContainer
/// Size: 0x0030 (0x000000 - 0x000030)
struct FItemTagContainer
{ 
	FVerseGameplayTagContainer                         RequiredTags;                                               // 0x0000   (0x0010)  
	FVerseGameplayTagContainer                         ForbiddenTags;                                              // 0x0010   (0x0010)  
	FVerseGameplayTagContainer                         AnyTags;                                                    // 0x0020   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemRequirements
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UItemRequirements : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2467) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2468) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	SDK_UNDEFINED(80,2469) /* TSet<UItemType*> */      __um(ItemTypes);                                            // 0x0060   (0x0050)  
	FItemTagContainer                                  TagContainer;                                               // 0x00B0   (0x0030)  
};

/// Class /Script/ItemizationCoreRuntime.ItemType
/// Size: 0x0048 (0x000030 - 0x000078)
class UItemType : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2470) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2471) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	class UItemType*                                   ParentType;                                                 // 0x0060   (0x0008)  
	FVerseGameplayTagContainer                         Tags;                                                       // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemType.GetParentType
	// class UItemType* GetParentType();                                                                                     // [0x7a4d2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemType.GetName
	// FText GetName();                                                                                                      // [0x6f4b390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemType.GetDescription
	// FText GetDescription();                                                                                               // [0x7a4d28c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ItemizationCoreRuntime.OverriddenRecord
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOverriddenRecord
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemVariant
/// Size: 0x0038 (0x0000D8 - 0x000110)
class UItemVariant : public UItemDefinitionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00D8   (0x0018)  MISSED
	class UItemDefinition*                             Original;                                                   // 0x00F0   (0x0008)  
	TArray<FOverriddenRecord>                          CachedOverriddenList;                                       // 0x00F8   (0x0010)  
	int32_t                                            ModifiedComponentIdx;                                       // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.InventoryComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UInventoryComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,2472) /* TArray<TWeakObjectPtr<UInventoryDefinition*>> */ __um(InventoryDefinitions);         // 0x00A0   (0x0010)  
	SDK_UNDEFINED(8,2473) /* TWeakObjectPtr<AInventoryCollection*> */ __um(InventoryCollection);                   // 0x00B0   (0x0008)  
	TArray<class UProxyTable*>                         ActiveProceduralLayers;                                     // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.UseItem
	// void UseItem(FGuid& ItemId, FGuid AdditionalItemID);                                                                  // [0x7a4d4a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.SetEquippableItemActive
	// void SetEquippableItemActive(FGuid& ItemEntryID, bool bActive);                                                       // [0x7a4d2fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.GetInventoryCollection
	// class AInventoryCollection* GetInventoryCollection();                                                                 // [0x7a4d2a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.DropItem
	// void DropItem(FGuid& ItemEntryID);                                                                                    // [0x7a4d1b8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddOrResetInventory
	// void AddOrResetInventory(class UInventoryDefinition* NewInventoryDefinition);                                         // [0x5d5254c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddItem
	// void AddItem(class UItemDefinitionBase* ItemDefinition, int64_t Amount);                                              // [0x7a4d088] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ItemizationCoreRuntime.ItemAggregatedData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FItemAggregatedData
{ 
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryStorageMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FItemEntryStorageMap
{ 
	SDK_UNDEFINED(80,2474) /* TMap<FGuid, UItemComponentLocalStorage*> */ __um(ItemToStorageMap);                  // 0x0000   (0x0050)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityCooldownState
/// Size: 0x000C (0x000000 - 0x00000C)
struct FItemAbilityCooldownState
{ 
	bool                                               bIsActive;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Progress;                                                   // 0x0004   (0x0004)  
	float                                              PredictedTimeLeft;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityRuntimeData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FItemAbilityRuntimeData
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x0004   (0x0014)  MISSED
	FItemAbilityCooldownState                          CooldownState;                                              // 0x0018   (0x000C)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0024   (0x0014)  MISSED
};

