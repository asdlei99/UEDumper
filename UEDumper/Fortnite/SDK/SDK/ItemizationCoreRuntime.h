
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: McpProfileSysCore
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
	// void OnRep_ItemDefinition();                                                                                          // [0x8019e74] Final|Native|Private 
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
	SDK_UNDEFINED(8,2439) /* TWeakObjectPtr<AInventoryCollection*> */ __um(OwningInventoryCollection);             // 0x0118   (0x0008)  
	SDK_UNDEFINED(8,2440) /* TWeakObjectPtr<UInventory*> */ __um(OwningInventory);                                 // 0x0120   (0x0008)  
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
	// void OnRep_ItemData();                                                                                                // [0x8005f64] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryTotalSlotsOverride
	// void OnRep_InventoryTotalSlotsOverride();                                                                             // [0x8005f28] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryMaxStackSizeOverride
	// void OnRep_InventoryMaxStackSizeOverride();                                                                           // [0x8005f00] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryID
	// void OnRep_InventoryID();                                                                                             // [0x8005eec] Final|Native|Protected 
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
	// void OnRep_EquippedItems();                                                                                           // [0x8005ed8] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryDefinition
/// Size: 0x0048 (0x000030 - 0x000078)
class UInventoryDefinition : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2441) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2442) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
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
	SDK_UNDEFINED(16,2443) /* TArray<TWeakObjectPtr<UItemDefinitionBase*>> */ __um(ItemDefinitions);               // 0x0008   (0x0010)  
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
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetEquippedItemActive
	// void InventorySetEquippedItemActive(int32_t InventoryIndex, int32_t ItemIndex, bool bActive);                         // [0x8005d48] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryRemoveFromItem
	// void InventoryRemoveFromItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToRemove);                      // [0x8005a64] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveItem
	// void InventoryMoveItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex);                // [0x8005c68] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveAmountOfItem
	// void InventoryMoveAmountOfItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex, int64_t AmountToMove); // [0x8005b48] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryDropItem
	// void InventoryDropItem(int32_t InventoryIndex, int32_t ItemIndex);                                                    // [0x63b6e18] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryAddToItem
	// void InventoryAddToItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToAdd);                              // [0x8005a64] Final|Exec|Native|Public 
};

/// Class /Script/ItemizationCoreRuntime.InventoryCollection
/// Size: 0x0418 (0x000290 - 0x0006A8)
class AInventoryCollection : public AInfo
{ 
public:
	TArray<class UInventory*>                          InventoryList;                                              // 0x0290   (0x0010)  
	SDK_UNDEFINED(80,2444) /* TMap<FGuid, UInventory*> */ __um(InventoryMap);                                      // 0x02A0   (0x0050)  
	SDK_UNDEFINED(80,2445) /* TMap<FGuid, FGuid> */    __um(ItemInventoryMap);                                     // 0x02F0   (0x0050)  
	class UItemComponentStorageManager*                ItemComponentStorageManager;                                // 0x0340   (0x0008)  
	unsigned char                                      UnknownData00_6[0x360];                                     // 0x0348   (0x0360)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.UnequipItem
	// bool UnequipItem(FGuid& ItemEntryID);                                                                                 // [0x8005fd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.IsItemEquipped
	// bool IsItemEquipped(FGuid& ItemEntryID);                                                                              // [0x8005e28] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemSlotNumber
	// int32_t GetItemSlotNumber(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                              // [0x8005964] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemIntAttribute
	// int64_t GetItemIntAttribute(FGuid& TargetInventoryID, FGuid& ItemEntryID, class UClass*& Attribute);                  // [0x8005820] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition(FGuid& TargetInventoryID, FGuid& ItemEntryID);                           // [0x8005720] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromInventory
	// int64_t GetItemAmountFromInventory(class UItemDefinitionBase* ItemDefinition, FGuid& TargetInventoryID);              // [0x8005618] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromEntry
	// int64_t GetItemAmountFromEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                         // [0x8005518] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmount
	// int64_t GetItemAmount(class UItemDefinitionBase* ItemDefinition);                                                     // [0x8005468] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryName
	// FText GetInventoryName(FGuid& TargetInventoryID);                                                                     // [0x80053b8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryListInPickupPriorityForItemDefinition
	// TArray<FGuid> GetInventoryListInPickupPriorityForItemDefinition(class UItemDefinitionBase* ItemDefinition);           // [0x80052c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition(FGuid& TargetInventoryID);                                         // [0x8005228] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoriesWithInventoryDefinition
	// TArray<FGuid> GetInventoriesWithInventoryDefinition(class UInventoryDefinition* InventoryDefinition);                 // [0x8005184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllItemsInInventory
	// bool GetAllItemsInInventory(FGuid& TargetInventoryID, TArray<FGuid>& OutItemEntryIDList);                             // [0x8004fdc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllInventoriesInCollection
	// bool GetAllInventoriesInCollection(TArray<FGuid>& OutInventoryIDList);                                                // [0x8004f30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.EquipItem
	// bool EquipItem(FGuid& ItemEntryID);                                                                                   // [0x8004e58] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachment
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AItemAttachment : public AActor
{ 
public:
	class UMeshComponent*                              Mesh;                                                       // 0x0290   (0x0008)  
	class UItemAttachmentDefinition*                   AttachmentData;                                             // 0x0298   (0x0008)  
	EItemState                                         ItemState;                                                  // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAttachment.OnRep_ItemStateChanged
	// void OnRep_ItemStateChanged();                                                                                        // [0x8005ec4] Final|Native|Private 
	// Function /Script/ItemizationCoreRuntime.ItemAttachment.OnRep_AttachmentDataChanged
	// void OnRep_AttachmentDataChanged();                                                                                   // [0x8005ec4] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute
/// Size: 0x0040 (0x000028 - 0x000068)
class UItemAttribute : public UObject
{ 
public:
	SDK_UNDEFINED(24,2446) /* FText */                 __um(AttributeName);                                        // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,2447) /* FText */                 __um(AttributeDescription);                                 // 0x0040   (0x0018)  
	TArray<char>                                       DefaultValueAsData;                                         // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeName
	// FText GetAttributeName();                                                                                             // [0x8005138] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeDescription
	// FText GetAttributeDescription();                                                                                      // [0x80050ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Int
/// Size: 0x0010 (0x000068 - 0x000078)
class UItemAttribute_Int : public UItemAttribute
{ 
public:
	int64_t                                            DefaultValue;                                               // 0x0068   (0x0008)  
	EAttributeCombineLogic_Math                        CombineLogic;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Decimal
/// Size: 0x0010 (0x000068 - 0x000078)
class UItemAttribute_Decimal : public UItemAttribute
{ 
public:
	double                                             DefaultValue;                                               // 0x0068   (0x0008)  
	EAttributeCombineLogic_Math                        CombineLogic;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Bool
/// Size: 0x0008 (0x000068 - 0x000070)
class UItemAttribute_Bool : public UItemAttribute
{ 
public:
	bool                                               DefaultValue;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_String
/// Size: 0x0010 (0x000068 - 0x000078)
class UItemAttribute_String : public UItemAttribute
{ 
public:
	SDK_UNDEFINED(16,2448) /* FString */               __um(DefaultValue);                                         // 0x0068   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValueBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemAttributeValueBase : public UObject
{ 
public:
	FGuid                                              QueriedItemEntryID;                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(8,2449) /* TWeakObjectPtr<AInventoryCollection*> */ __um(QueriedInventoryCollection);            // 0x0038   (0x0008)  
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
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemComponentBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentLocalStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentLocalStorage : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentSharedLocalStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentSharedLocalStorage : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorageManager
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UItemComponentStorageManager : public UObject
{ 
public:
	SDK_UNDEFINED(80,2450) /* TMap<UClass*, FItemEntryStorageMap> */ __um(ClassIndividualStorageMap);              // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,2451) /* TMap<UClass*, UItemComponentSharedLocalStorage*> */ __um(ClassSharedStorageMap);     // 0x0078   (0x0050)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FItemAbilityBinding
{ 
	SDK_UNDEFINED(32,2452) /* TWeakObjectPtr<UInputAction*> */ __um(InputAction);                                  // 0x0000   (0x0020)  
	EItemStateFilter                                   ActiveState;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	class UItemAbilityConfigurationAsset*              Ability;                                                    // 0x0028   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Ability
/// Size: 0x0030 (0x000030 - 0x000060)
class UItemComponent_Ability : public UItemComponentBase
{ 
public:
	TArray<FItemAbilityBinding>                        AbilityList;                                                // 0x0030   (0x0010)  
	SDK_UNDEFINED(32,2453) /* TWeakObjectPtr<UInputMappingContext*> */ __um(InputMapping);                         // 0x0040   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Ability
/// Size: 0x0020 (0x000028 - 0x000048)
class UItemComponentStorage_Ability : public UItemComponentLocalStorage
{ 
public:
	TArray<bool>                                       AbilityHasBeenActivated;                                    // 0x0028   (0x0010)  
	class UItemComponent_Ability*                      SourceData;                                                 // 0x0038   (0x0008)  
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0040   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_AbilityShared
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemComponentStorage_AbilityShared : public UItemComponentSharedLocalStorage
{ 
public:
	SDK_UNDEFINED(80,2454) /* TMap<uint32_t, FItemAbilityRuntimeData> */ __um(RefCountedAbilityRuntimeData);       // 0x0028   (0x0050)  
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
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemMeshAttachmentDefinition : public UItemAttachmentDefinition
{ 
public:
	FName                                              AttachToSocketName;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemStaticMeshAttachmentDefinition
/// Size: 0x0020 (0x000038 - 0x000058)
class UItemStaticMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
public:
	SDK_UNDEFINED(32,2455) /* TWeakObjectPtr<UStaticMesh*> */ __um(Mesh);                                          // 0x0038   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemSkeletalMeshAttachmentDefinition
/// Size: 0x0040 (0x000038 - 0x000078)
class UItemSkeletalMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
public:
	SDK_UNDEFINED(32,2456) /* TWeakObjectPtr<USkeletalMesh*> */ __um(Mesh);                                        // 0x0038   (0x0020)  
	SDK_UNDEFINED(32,2457) /* TWeakObjectPtr<UAnimSequence*> */ __um(Animation);                                   // 0x0058   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Attach
/// Size: 0x0010 (0x000030 - 0x000040)
class UItemComponent_Attach : public UItemComponentBase
{ 
public:
	TArray<class UItemAttachmentDefinition*>           Attachments;                                                // 0x0030   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Attach
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponentStorage_Attach : public UItemComponentLocalStorage
{ 
public:
	SDK_UNDEFINED(16,2458) /* TArray<TWeakObjectPtr<AItemAttachment*>> */ __um(Attachments);                       // 0x0028   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_WasLoadedFromSave
/// Size: 0x0000 (0x000070 - 0x000070)
class UItemAttribute_WasLoadedFromSave : public UItemAttribute_Bool
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Core
/// Size: 0x0040 (0x000030 - 0x000070)
class UItemComponent_Core : public UItemComponentBase
{ 
public:
	SDK_UNDEFINED(24,2459) /* FText */                 __um(ItemName);                                             // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2460) /* FText */                 __um(ItemDescription);                                      // 0x0048   (0x0018)  
	class UItemType*                                   ItemType;                                                   // 0x0060   (0x0008)  
	class UItemRarity*                                 ItemRarity;                                                 // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemType
	// class UItemType* GetItemType();                                                                                       // [0x8019e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                   // [0x631d150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemName
	// FText GetItemName();                                                                                                  // [0x70804e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemDescription
	// FText GetItemDescription();                                                                                           // [0x8019dbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI
/// Size: 0x0068 (0x000030 - 0x000098)
class UItemComponent_DisplayUI : public UItemComponentBase
{ 
public:
	SDK_UNDEFINED(32,2461) /* TWeakObjectPtr<UTexture2D*> */ __um(ItemIcon);                                       // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,2462) /* TWeakObjectPtr<UTexture2D*> */ __um(SmallItemIcon);                                  // 0x0050   (0x0020)  
	SDK_UNDEFINED(32,2463) /* TWeakObjectPtr<UMaterialInterface*> */ __um(ItemMaterial);                           // 0x0070   (0x0020)  
	FName                                              MaterialTextureParameter;                                   // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallItemIcon();                                                                       // [0x8019e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetMaterialTextureParameter
	// FName GetMaterialTextureParameter();                                                                                  // [0x8019e38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemMaterial
	// TWeakObjectPtr<UMaterialInterface*> GetItemMaterial();                                                                // [0x8019dfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemIcon
	// TWeakObjectPtr<UTexture2D*> GetItemIcon();                                                                            // [0x8019dd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemOwnerPoseAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemOwnerPoseAsset : public UPrimaryDataAsset
{ 
public:
	class UProxyTable*                                 ProxyTable;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_OwnerPose
/// Size: 0x0010 (0x000030 - 0x000040)
class UItemComponent_OwnerPose : public UItemComponentBase
{ 
public:
	EItemStateFilter                                   ApplyPoseState;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UItemOwnerPoseAsset*                         PoseAsset;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_OwnerPose
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemComponentStorage_OwnerPose : public UItemComponentLocalStorage
{ 
public:
	bool                                               bHasAppliedProceduralLayer;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Pickup
/// Size: 0x0040 (0x000030 - 0x000070)
class UItemComponent_Pickup : public UItemComponentBase
{ 
public:
	SDK_UNDEFINED(32,2464) /* TWeakObjectPtr<USkeletalMesh*> */ __um(SkeletalMesh);                                // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,2465) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                    // 0x0050   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_StackSize
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_StackSize : public UItemAttribute_Int
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_MaxStackSize
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_MaxStackSize : public UItemAttribute_Int
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Stackable
/// Size: 0x0010 (0x000030 - 0x000040)
class UItemComponent_Stackable : public UItemComponentBase
{ 
public:
	int64_t                                            MaxStackSize;                                               // 0x0030   (0x0008)  
	bool                                               AllowMultipleStacks;                                        // 0x0038   (0x0001)  
	bool                                               DestroyEmptyStacks;                                         // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FItemComponentContainer
{ 
	TArray<class UItemComponentBase*>                  Components;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinitionBase
/// Size: 0x0110 (0x000030 - 0x000140)
class UItemDefinitionBase : public UMcpItemDefinitionBase
{ 
public:
	FItemComponentContainer                            ComponentContainer;                                         // 0x0030   (0x0010)  
	TArray<class UItemComponentBase*>                  CachedComponentList;                                        // 0x0040   (0x0010)  
	SDK_UNDEFINED(80,2466) /* TMap<UClass*, UItemComponentBase*> */ __um(CachedComponentMap);                      // 0x0050   (0x0050)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x00A0   (0x0050)  MISSED
	SDK_UNDEFINED(80,2467) /* TSet<UClass*> */         __um(CachedAttributeSet);                                   // 0x00F0   (0x0050)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemComponentByClass
	// class UItemComponentBase* GetItemComponentByClass(class UClass* ItemComponentClass);                                  // [0x8018c64] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinition
/// Size: 0x00B0 (0x000140 - 0x0001F0)
class UItemDefinition : public UItemDefinitionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xA8];                                      // 0x0140   (0x00A8)  MISSED
	int32_t                                            ModifiedComponentIdx;                                       // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01EC   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityConfigurationAsset : public UPrimaryDataAsset
{ 
public:
	class UClass*                                      GameplayAbilityClass;                                       // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset.Construct
	// void Construct(class UItemGameplayAbility* Ability);                                                                  // [0x211c0a0] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemGameplayAbility
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UItemGameplayAbility : public UGameplayAbility
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataStringAttributeValue
	// FString GetItemDataStringAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                 // [0x8019bdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataSlot
	// int32_t GetItemDataSlot(FItemAggregatedData& ItemData);                                                               // [0x8019b18] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataItemEntryID
	// FGuid GetItemDataItemEntryID(FItemAggregatedData& ItemData);                                                          // [0x8019a54] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataIntAttributeValue
	// int64_t GetItemDataIntAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                    // [0x801988c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDefinition
	// class UItemDefinitionBase* GetItemDataDefinition(FItemAggregatedData& ItemData);                                      // [0x80197b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDecimalAttributeValue
	// double GetItemDataDecimalAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                 // [0x80195f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataBoolAttributeValue
	// bool GetItemDataBoolAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                      // [0x8019428] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataAttributeList
	// TArray<UClass*> GetItemDataAttributeList(FItemAggregatedData& ItemData);                                              // [0x8018d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeItemEntryID
	// FString DescribeItemEntryID(FGuid& ItemEntryID);                                                                      // [0x8018a04] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeInventoryID
	// FString DescribeInventoryID(FGuid& InventoryID);                                                                      // [0x8018a04] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationPickupFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SpawnItemPickupInWorld
	// class AItemPickup* SpawnItemPickupInWorld(class UObject* WorldContextObject, class UItemDefinitionBase* ItemDefinition, FVector& InPosition, int64_t Amount); // [0x801a1a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SetDefaultItemPickupMesh
	// void SetDefaultItemPickupMesh(class UStaticMesh* Mesh);                                                               // [0x801a12c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SetDefaultItemPickupClass
	// void SetDefaultItemPickupClass(class UClass* ItemPickupClass);                                                        // [0x801a0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.DropItemFromInventoryAsPickup
	// class AItemPickup* DropItemFromInventoryAsPickup(class AInventoryCollection* Collection, FGuid& InventoryID, FGuid& ItemEntryID); // [0x8018ab0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemRarity
/// Size: 0x0048 (0x000030 - 0x000078)
class UItemRarity : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2468) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2469) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0060   (0x0010)  
	float                                              Tier;                                                       // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Rarity
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_Rarity : public UItemAttribute_Int
{ 
public:
};

/// Struct /Script/ItemizationCoreRuntime.VkRarityEntry
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVkRarityEntry
{ 
	SDK_UNDEFINED(24,2470) /* FText */                 __um(Name);                                                 // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,2471) /* FText */                 __um(Description);                                          // 0x0018   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemRarityTable
/// Size: 0x0040 (0x000030 - 0x000070)
class UItemRarityTable : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2472) /* FText */                 __um(RarityTableName);                                      // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2473) /* FText */                 __um(RarityTableDescription);                               // 0x0048   (0x0018)  
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
	SDK_UNDEFINED(24,2474) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2475) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	SDK_UNDEFINED(80,2476) /* TSet<UItemType*> */      __um(ItemTypes);                                            // 0x0060   (0x0050)  
	FItemTagContainer                                  TagContainer;                                               // 0x00B0   (0x0030)  
};

/// Class /Script/ItemizationCoreRuntime.ItemType
/// Size: 0x0048 (0x000030 - 0x000078)
class UItemType : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2477) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2478) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	class UItemType*                                   ParentType;                                                 // 0x0060   (0x0008)  
	FVerseGameplayTagContainer                         Tags;                                                       // 0x0068   (0x0010)  
};

/// Struct /Script/ItemizationCoreRuntime.OverriddenRecord
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOverriddenRecord
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemVariant
/// Size: 0x0038 (0x000140 - 0x000178)
class UItemVariant : public UItemDefinitionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0140   (0x0018)  MISSED
	class UItemDefinition*                             Original;                                                   // 0x0158   (0x0008)  
	TArray<FOverriddenRecord>                          CachedOverriddenList;                                       // 0x0160   (0x0010)  
	int32_t                                            ModifiedComponentIdx;                                       // 0x0170   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0174   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.InventoryComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UInventoryComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,2479) /* TArray<TWeakObjectPtr<UInventoryDefinition*>> */ __um(InventoryDefinitions);         // 0x00A0   (0x0010)  
	SDK_UNDEFINED(8,2480) /* TWeakObjectPtr<AInventoryCollection*> */ __um(InventoryCollection);                   // 0x00B0   (0x0008)  
	TArray<class UProxyTable*>                         ActiveProceduralLayers;                                     // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.Server_SetEquippableItemActive
	// void Server_SetEquippableItemActive(FGuid ItemEntryID, bool bActive);                                                 // [0x8019e88] Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.GetInventoryCollection
	// class AInventoryCollection* GetInventoryCollection();                                                                 // [0x8018c3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddOrResetInventory
	// void AddOrResetInventory(class UInventoryDefinition* NewInventoryDefinition);                                         // [0x604b150] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddItem
	// void AddItem(class UItemDefinitionBase* ItemDefinition, int64_t Amount);                                              // [0x8018960] Final|Native|Public|BlueprintCallable 
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
	SDK_UNDEFINED(80,2481) /* TMap<FGuid, UItemComponentLocalStorage*> */ __um(ItemToStorageMap);                  // 0x0000   (0x0050)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityRuntimeData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FItemAbilityRuntimeData
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0004   (0x001C)  MISSED
};

