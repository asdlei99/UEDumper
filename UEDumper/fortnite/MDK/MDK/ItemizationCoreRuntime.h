
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: GameplayAbilities
/// dependency: McpProfileSys
/// dependency: NetCore
/// dependency: ProxyTable
/// dependency: VerseGameplayTags

/// Class /Script/ItemizationCoreRuntime.ItemPickup
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AItemPickup : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class UCapsuleComponent*)                  TouchCapsule                                                OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UItemDefinitionBase*)                ItemDefinition                                              OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(int64_t)                                   Amount                                                      OFFSET(get<int64_t>, {0x2A0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             SkeletalMesh                                                OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMesh                                                  OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemPickup.OnRep_ItemDefinition
	// void OnRep_ItemDefinition();                                                                                             // [0x7a62864] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryCollection
/// Size: 0x0648 (0x000290 - 0x0008D8)
class AInventoryCollection : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2264;

public:
	CMember(TArray<class UInventory*>)                 InventoryList                                               OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TMap<FGuid, UInventory*>)                  InventoryMap                                                OFFSET(get<T>, {0x2A0, 80, 0, 0})
	CMember(TMap<FGuid, FGuid>)                        ItemInventoryMap                                            OFFSET(get<T>, {0x2F0, 80, 0, 0})
	CMember(TMap<FGuid, UItemInstance*>)               ItemInstanceMap                                             OFFSET(get<T>, {0x340, 80, 0, 0})
	CMember(class UItemComponentStorageManager*)       ItemComponentStorageManager                                 OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(EInventoryCollectionType)                  InventoryCollectionType                                     OFFSET(get<T>, {0x8D0, 1, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.UseItem
	// void UseItem(FGuid& ItemId, FGuid AdditionalItemID);                                                                     // [0x7a4cc4c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetItemIntAttribute
	// bool SetItemIntAttribute(FGuid& TargetInventoryID, FGuid& ItemEntryID, class UClass*& Attribute, int64_t NewValue);      // [0x7a4ca00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetEquippableItemInactive
	// void SetEquippableItemInactive(FGuid& ItemEntryID);                                                                      // [0x7a4c970] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetEquippableItemActive
	// void SetEquippableItemActive(FGuid& ItemEntryID);                                                                        // [0x7a4c8e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_UseItem
	// void Server_UseItem(FGuid ItemId, FGuid AdditionalItemID);                                                               // [0x7a4c778] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetItemSlot
	// void Server_SetItemSlot(FGuid OwningInventoryID, FGuid ItemEntryID, uint16_t SlotNumber, EVkInventoryMoveBehaviour MoveBehaviour); // [0x7a4c534] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetEquippableItemInactive
	// void Server_SetEquippableItemInactive(FGuid ItemEntryID);                                                                // [0x7a4c46c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetEquippableItemActive
	// void Server_SetEquippableItemActive(FGuid ItemEntryID);                                                                  // [0x7a4c3a4] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_DropItem
	// void Server_DropItem(FGuid ItemEntryID, int64_t AmountToDrop);                                                           // [0x7a4c24c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.IsItemEquipped
	// bool IsItemEquipped(FGuid& ItemEntryID);                                                                                 // [0x7a4c0c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemSlotNumber
	// int32_t GetItemSlotNumber(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                                 // [0x7a4b72c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemIntAttribute
	// int64_t GetItemIntAttribute(FGuid& TargetInventoryID, FGuid& ItemEntryID, class UClass*& Attribute);                     // [0x7a4b5e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition(FGuid& TargetInventoryID, FGuid& ItemEntryID);                              // [0x7a4b4e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromInventory
	// int64_t GetItemAmountFromInventory(class UItemDefinitionBase* ItemDefinition, FGuid& TargetInventoryID);                 // [0x7a4b3a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromEntry
	// int64_t GetItemAmountFromEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                            // [0x7a4b2a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmount
	// int64_t GetItemAmount(class UItemDefinitionBase* ItemDefinition);                                                        // [0x7a4b1d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryName
	// FText GetInventoryName(FGuid& TargetInventoryID);                                                                        // [0x7a4b124] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryListInPickupPriorityForItemDefinition
	// TArray<FGuid> GetInventoryListInPickupPriorityForItemDefinition(class UItemDefinitionBase* ItemDefinition);              // [0x7a4aff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition(FGuid& TargetInventoryID);                                            // [0x7a4af54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoriesWithInventoryDefinition
	// TArray<FGuid> GetInventoriesWithInventoryDefinition(class UInventoryDefinition* InventoryDefinition);                    // [0x7a4ae70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllItemsInInventory
	// bool GetAllItemsInInventory(FGuid& TargetInventoryID, TArray<FGuid>& OutItemEntryIDList);                                // [0x7a4acc8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllInventoriesInCollection
	// bool GetAllInventoriesInCollection(TArray<FGuid>& OutInventoryIDList);                                                   // [0x7a4ac1c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.DropItem
	// void DropItem(FGuid& ItemEntryID, int64_t AmountToDrop);                                                                 // [0x7a4aa7c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.ClientOnItemAbilityCooldownUpdated
	// void ClientOnItemAbilityCooldownUpdated(class UInventory* Inventory, FGuid ItemEntryID, FItemAbilityCooldownState CooldownState); // [0x7a4a8a0] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
};

/// Class /Script/ItemizationCoreRuntime.Inventory
/// Size: 0x09D0 (0x0000A0 - 0x000A70)
class UInventory : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2672;

public:
	CMember(class AInventoryCollection*)               OwningInventoryCollection                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UInventoryDefinition*)               InventoryDefinition                                         OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FGuid)                                     InventoryID                                                 OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FItemEntryList)                            ItemEntryData                                               OFFSET(getStruct<T>, {0xC0, 760, 0, 0})
	SMember(FItemAttributeList)                        AttributeData                                               OFFSET(getStruct<T>, {0x3B8, 704, 0, 0})
	DMember(uint16_t)                                  InventoryTotalSlotsOverride                                 OFFSET(get<uint16_t>, {0x678, 2, 0, 0})
	DMember(int64_t)                                   InventoryMaxStackSizeOverride                               OFFSET(get<int64_t>, {0x680, 8, 0, 0})
	CMember(TArray<char>)                              InventoryMaxStackSizeOverrideAttributeData                  OFFSET(get<T>, {0x688, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_ItemData
	// void OnRep_ItemData();                                                                                                   // [0x7a4c1e0] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryTotalSlotsOverride
	// void OnRep_InventoryTotalSlotsOverride();                                                                                // [0x7a4c1b0] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryMaxStackSizeOverride
	// void OnRep_InventoryMaxStackSizeOverride();                                                                              // [0x7a4c188] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryID
	// void OnRep_InventoryID();                                                                                                // [0x7a4c174] Final|Native|Protected 
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventory
/// Size: 0x0060 (0x000A70 - 0x000AD0)
class UEquippableInventory : public UInventory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	CMember(TArray<FGuid>)                             EquippedItems                                               OFFSET(get<T>, {0xA70, 16, 0, 0})
	CMember(TArray<FGuid>)                             PreviouslyEquippedItems                                     OFFSET(get<T>, {0xA80, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.EquippableInventory.OnRep_EquippedItems
	// void OnRep_EquippedItems();                                                                                              // [0x7a4c160] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryDefinition
/// Size: 0x0048 (0x000030 - 0x000078)
class UInventoryDefinition : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(uint16_t)                                  Slots                                                       OFFSET(get<uint16_t>, {0x60, 2, 0, 0})
	DMember(char)                                      PickupPriority                                              OFFSET(get<char>, {0x62, 1, 0, 0})
	CMember(class UItemRequirements*)                  ItemRequirements                                            OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bEnableItemStacking                                         OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bRequireUniqueItemDefinitionPerStack                        OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventoryDefinition
/// Size: 0x0020 (0x000078 - 0x000098)
class UEquippableInventoryDefinition : public UInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FEquipItemRestriction>)             EquipRestrictions                                           OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FEquipItemCondition>)               EquipConditions                                             OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.EquipmentSlot
/// Size: 0x0000 (0x000098 - 0x000098)
class UEquipmentSlot : public UEquippableInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/ItemizationCoreRuntime.EquipmentHotBar
/// Size: 0x0000 (0x000098 - 0x000098)
class UEquipmentHotBar : public UEquippableInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/ItemizationCoreRuntime.InventoryCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryCheatManager : public UCheatManagerExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryUseItem
	// void InventoryUseItem(int32_t InventoryIndex, int32_t ItemIndex);                                                        // [0x6115158] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetItemSlot
	// void InventorySetItemSlot(int32_t InventoryIndex, int32_t ItemIndex, uint16_t NewSlotIndex);                             // [0x7a4bf24] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetEquippedItemActive
	// void InventorySetEquippedItemActive(int32_t InventoryIndex, int32_t ItemIndex, bool bActive);                            // [0x7a4bd84] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryRemoveFromItem
	// void InventoryRemoveFromItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToRemove);                         // [0x7a4b82c] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveItem
	// void InventoryMoveItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex);                   // [0x7a4bbe4] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveAmountOfItem
	// void InventoryMoveAmountOfItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex, int64_t AmountToMove); // [0x7a4b9cc] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryDropItem
	// void InventoryDropItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToDrop);                                 // [0x7a4b82c] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryAddToItem
	// void InventoryAddToItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToAdd);                                 // [0x7a4b82c] Final|Exec|Native|Public 
};

/// Class /Script/ItemizationCoreRuntime.InventorySetupData
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UInventorySetupData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<class UEquippableInventoryDefinition*>) EquipmentSetups                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UInventoryDefinition*>)       InventoryDefinitions                                        OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UItemDefinition*>)            StartingItems                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(class UInputMappingContext*)               InputMappingContext                                         OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InventoryUIWidgetClass                                      OFFSET(get<T>, {0x68, 32, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityConfigurationAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             GameplayAbilityClass                                        OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset.Construct
	// void Construct(class UGameplayAbility* Ability);                                                                         // [0x130d900] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCost
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemAbilityCost : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCostItem
/// Size: 0x0028 (0x000028 - 0x000050)
class UItemAbilityCostItem : public UItemAbilityCost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UItemDefinitionBase*>)      ItemDefinition                                              OFFSET(get<T>, {0x28, 32, 0, 0})
	DMember(int64_t)                                   NumConsumed                                                 OFFSET(get<int64_t>, {0x48, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCostAttribute
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemAbilityCostAttribute : public UItemAbilityCost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UClass*)                             Attribute                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int64_t)                                   MinValue                                                    OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	DMember(int64_t)                                   Change                                                      OFFSET(get<int64_t>, {0x38, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldown
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemAbilityCooldown : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bApplyOnStart                                               OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldownTime
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityCooldownTime : public UItemAbilityCooldown
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     CooldownTime                                                OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldownVelocityBased
/// Size: 0x0010 (0x000030 - 0x000040)
class UItemAbilityCooldownVelocityBased : public UItemAbilityCooldown
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     CooldownTimeIfStationary                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     CooldownTimeScaleFactorIfMoving                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      CooldownTimeIsResetToZeroWhenMoving                         OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachment
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AItemAttachment : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class UMeshComponent*)                     Mesh                                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UItemAttachmentDefinition*)          AttachmentData                                              OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute
/// Size: 0x0048 (0x000028 - 0x000070)
class UItemAttribute : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FText)                                     AttributeName                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     AttributeDescription                                        OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(TArray<char>)                              DefaultValueAsData                                          OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(EItemAttributeType)                        AttributeType                                               OFFSET(get<T>, {0x68, 1, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeName
	// FText GetAttributeName();                                                                                                // [0x7a4ae24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeDescription
	// FText GetAttributeDescription();                                                                                         // [0x7a4add8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Int
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_Int : public UItemAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int64_t)                                   DefaultValue                                                OFFSET(get<int64_t>, {0x70, 8, 0, 0})
	CMember(EAttributeCombineLogic_Math)               CombineLogic                                                OFFSET(get<T>, {0x78, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Decimal
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_Decimal : public UItemAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(double)                                    DefaultValue                                                OFFSET(get<double>, {0x70, 8, 0, 0})
	CMember(EAttributeCombineLogic_Math)               CombineLogic                                                OFFSET(get<T>, {0x78, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Bool
/// Size: 0x0008 (0x000070 - 0x000078)
class UItemAttribute_Bool : public UItemAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      DefaultValue                                                OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_String
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_String : public UItemAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   DefaultValue                                                OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValueBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemAttributeValueBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     QueriedItemEntryID                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<AInventoryCollection*>)     QueriedInventoryCollection                                  OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Int
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Int : public UItemAttributeValueBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Decimal
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Decimal : public UItemAttributeValueBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Bool
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Bool : public UItemAttributeValueBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_String
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_String : public UItemAttributeValueBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorageManager
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UItemComponentStorageManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<UClass*, FItemEntryStorageMap>)       ClassIndividualStorageMap                                   OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<UClass*, UItemComponentSharedLocalStorage*>) ClassSharedStorageMap                                OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentLocalStorage
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponentLocalStorage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentSharedLocalStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentSharedLocalStorage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Ability
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Ability : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FItemAbilityBinding>)               AbilityList                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Ability
/// Size: 0x0028 (0x000038 - 0x000060)
class UItemComponentStorage_Ability : public UItemComponentLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<bool>)                              AbilityIsAvailableList                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UItemComponent_Ability*)             SourceData                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UAbilitySystemComponent*)            AbilitySystemComponent                                      OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_AbilityShared
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemComponentStorage_AbilityShared : public UItemComponentSharedLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<uint32_t, FItemAbilityRuntimeData>)   RefCountedAbilityRuntimeData                                OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachmentDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemAttachmentDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EItemStateFilter)                          AttachmentVisibility                                        OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemMeshAttachmentDefinition
/// Size: 0x0050 (0x000030 - 0x000080)
class UItemMeshAttachmentDefinition : public UItemAttachmentDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     AttachToSocketName                                          OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FVector)                                   OffsetLocation                                              OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   MeshScale                                                   OFFSET(getStruct<T>, {0x68, 24, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemStaticMeshAttachmentDefinition
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UItemStaticMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TWeakObjectPtr<UStaticMesh*>)              Mesh                                                        OFFSET(get<T>, {0x80, 32, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemSkeletalMeshAttachmentDefinition
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UItemSkeletalMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            Mesh                                                        OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequence*>)            Animation                                                   OFFSET(get<T>, {0xA0, 32, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Attach
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Attach : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UItemAttachmentDefinition*>)  Attachments                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Attach
/// Size: 0x0020 (0x000038 - 0x000058)
class UItemComponentStorage_Attach : public UItemComponentLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<TWeakObjectPtr<AItemAttachment*>>)  ActorAttachments                                            OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_WasLoadedFromSave
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_WasLoadedFromSave : public UItemAttribute_Bool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Core
/// Size: 0x0020 (0x000028 - 0x000048)
class UItemComponent_Core : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UItemType*)                          ItemType                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UItemRarity*)                        ItemRarity                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FVerseGameplayTagContainer)                ItemTags                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemType
	// class UItemType* GetItemType();                                                                                          // [0x7a62828] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                      // [0x6200cfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI
/// Size: 0x0068 (0x000028 - 0x000090)
class UItemComponent_DisplayUI : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               ItemIcon                                                    OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SmallItemIcon                                               OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       ItemMaterial                                                OFFSET(get<T>, {0x68, 32, 0, 0})
	SMember(FName)                                     MaterialTextureParameter                                    OFFSET(getStruct<T>, {0x88, 4, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallItemIcon();                                                                          // [0x7a62840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetMaterialTextureParameter
	// FName GetMaterialTextureParameter();                                                                                     // [0x5938bb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemMaterial
	// TWeakObjectPtr<UMaterialInterface*> GetItemMaterial();                                                                   // [0x7a627bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemIcon
	// TWeakObjectPtr<UTexture2D*> GetItemIcon();                                                                               // [0x7a62798] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemOwnerPoseAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemOwnerPoseAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UProxyTable*)                        ProxyTable                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_OwnerPose
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_OwnerPose : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EItemStateFilter)                          ApplyPoseState                                              OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(class UItemOwnerPoseAsset*)                PoseAsset                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_OwnerPose
/// Size: 0x0008 (0x000038 - 0x000040)
class UItemComponentStorage_OwnerPose : public UItemComponentLocalStorage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bHasAppliedProceduralLayer                                  OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Pickup
/// Size: 0x0040 (0x000028 - 0x000068)
class UItemComponent_Pickup : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            SkeletalMesh                                                OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              StaticMesh                                                  OFFSET(get<T>, {0x48, 32, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_StackSize
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_StackSize : public UItemAttribute_Int
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_MaxStackSize
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_MaxStackSize : public UItemAttribute_Int
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Stackable
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Stackable : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int64_t)                                   MaxStackSize                                                OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	DMember(bool)                                      AllowMultipleStacks                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      DestroyEmptyStacks                                          OFFSET(get<bool>, {0x31, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinitionBase
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UItemDefinitionBase : public UMcpItemDefinitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FText)                                     ItemName                                                    OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     ItemDescription                                             OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     ItemShortDescription                                        OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FItemComponentContainer)                   ComponentContainer                                          OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemShortDescription
	// FText GetItemShortDescription();                                                                                         // [0x7a627e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemDescription
	// FText GetItemDescription();                                                                                              // [0x7a62750] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemComponentByClass
	// class UItemComponentBase* GetItemComponentByClass(class UClass* ItemComponentClass);                                     // [0x7a60fac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0x7a60f64] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinition
/// Size: 0x00B0 (0x0000D8 - 0x000188)
class UItemDefinition : public UItemDefinitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	DMember(int32_t)                                   ModifiedComponentIdx                                        OFFSET(get<int32_t>, {0x180, 4, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemInputAction
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemInputAction : public UInputAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInputMappingContext
/// Size: 0x0000 (0x000058 - 0x000058)
class UItemInputMappingContext : public UInputMappingContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInstance
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     ItemEntryID                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataStringAttributeValue
	// FString GetItemDataStringAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                    // [0x7a623e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataSlot
	// int32_t GetItemDataSlot(FItemAggregatedData& ItemData);                                                                  // [0x7a6231c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataItemEntryID
	// FGuid GetItemDataItemEntryID(FItemAggregatedData& ItemData);                                                             // [0x7a62258] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataIntAttributeValue
	// int64_t GetItemDataIntAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                       // [0x7a61f0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDefinition
	// class UItemDefinitionBase* GetItemDataDefinition(FItemAggregatedData& ItemData);                                         // [0x7a61e38] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDecimalAttributeValue
	// double GetItemDataDecimalAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                    // [0x7a61aec] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataBoolAttributeValue
	// bool GetItemDataBoolAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                         // [0x7a617ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataAttributeList
	// TArray<UClass*> GetItemDataAttributeList(FItemAggregatedData& ItemData);                                                 // [0x7a61094] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeItemEntryID
	// FString DescribeItemEntryID(FGuid& ItemEntryID);                                                                         // [0x7a60bbc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeInventoryID
	// FString DescribeInventoryID(FGuid& InventoryID);                                                                         // [0x7a60bbc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationPickupFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SpawnItemPickupInWorld
	// class AItemPickup* SpawnItemPickupInWorld(class UObject* WorldContextObject, class UItemDefinitionBase* ItemDefinition, FVector& InPosition, int64_t Amount); // [0x7a629fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SetDefaultItemPickupMesh
	// void SetDefaultItemPickupMesh(class UStaticMesh* Mesh);                                                                  // [0x7a62948] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SetDefaultItemPickupClass
	// void SetDefaultItemPickupClass(class UClass* ItemPickupClass);                                                           // [0x7a62878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.DropItemFromInventoryAsPickup
	// class AItemPickup* DropItemFromInventoryAsPickup(class AInventoryCollection* Collection, FGuid& InventoryID, FGuid& ItemEntryID, int64_t AmountToDrop); // [0x7a60c68] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemRarity
/// Size: 0x0058 (0x000030 - 0x000088)
class UItemRarity : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(float)                                     Tier                                                        OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVerseGameplayTagContainer)                Tags                                                        OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetTier
	// float GetTier();                                                                                                         // [0x7a81ac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetName
	// FText GetName();                                                                                                         // [0x6f7fc6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetDescription
	// FText GetDescription();                                                                                                  // [0x7a81a6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetColor
	// FLinearColor GetColor();                                                                                                 // [0x7a81a54] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Rarity
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_Rarity : public UItemAttribute_Int
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemRarityTable
/// Size: 0x0040 (0x000030 - 0x000070)
class UItemRarityTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FText)                                     RarityTableName                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     RarityTableDescription                                      OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(TArray<FVkRarityEntry>)                    RarityList                                                  OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemRequirements
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UItemRequirements : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(TSet<UItemType*>)                          ItemTypes                                                   OFFSET(get<T>, {0x60, 80, 0, 0})
	SMember(FItemTagContainer)                         TagContainer                                                OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemType
/// Size: 0x0048 (0x000030 - 0x000078)
class UItemType : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(class UItemType*)                          ParentType                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FVerseGameplayTagContainer)                Tags                                                        OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemType.GetParentType
	// class UItemType* GetParentType();                                                                                        // [0x7a81ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemType.GetName
	// FText GetName();                                                                                                         // [0x6f7fc6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemType.GetDescription
	// FText GetDescription();                                                                                                  // [0x7a81a6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemVariant
/// Size: 0x0038 (0x0000D8 - 0x000110)
class UItemVariant : public UItemDefinitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class UItemDefinition*)                    Original                                                    OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<FOverriddenRecord>)                 CachedOverriddenList                                        OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(int32_t)                                   ModifiedComponentIdx                                        OFFSET(get<int32_t>, {0x108, 4, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.InventoryComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UInventoryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<TWeakObjectPtr<UInventoryDefinition*>>) InventoryDefinitions                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TWeakObjectPtr<AInventoryCollection*>)     InventoryCollection                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<class UProxyTable*>)                ActiveProceduralLayers                                      OFFSET(get<T>, {0xB8, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.UseItem
	// void UseItem(FGuid& ItemId, FGuid AdditionalItemID);                                                                     // [0x7a81c80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.SetEquippableItemActive
	// void SetEquippableItemActive(FGuid& ItemEntryID, bool bActive);                                                          // [0x7a81adc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.GetInventoryCollection
	// class AInventoryCollection* GetInventoryCollection();                                                                    // [0x7a81a88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.DropItem
	// void DropItem(FGuid& ItemEntryID);                                                                                       // [0x7a81998] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddOrResetInventory
	// void AddOrResetInventory(class UInventoryDefinition* NewInventoryDefinition);                                            // [0x5d87858] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddItem
	// void AddItem(class UItemDefinitionBase* ItemDefinition, int64_t Amount);                                                 // [0x7a81868] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemFilter
/// Size: 0x0018 (0x000000 - 0x000018)
class FEquipItemFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bAppliesToAllItems                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UItemDefinitionBase*>>) ItemDefinitions                                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemRestriction
/// Size: 0x0010 (0x000018 - 0x000028)
class FEquipItemRestriction : public FEquipItemFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   ActiveLimit                                                 OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	CMember(EEquipItemLimitHitBehaviour)               LimitHitBehaviour                                           OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemCondition
/// Size: 0x0000 (0x000018 - 0x000018)
class FEquipItemCondition : public FEquipItemFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ItemizationCoreRuntime.ItemAggregatedData
/// Size: 0x0070 (0x000000 - 0x000070)
class FItemAggregatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeValue
/// Size: 0x0028 (0x000000 - 0x000028)
class FItemAttributeValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             Attribute                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeEntry
/// Size: 0x0044 (0x00000C - 0x000050)
class FItemAttributeEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGuid)                                     ItemEntryID                                                 OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	SMember(FItemAttributeValue)                       AttributeValue                                              OFFSET(getStruct<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeList
/// Size: 0x01B8 (0x000108 - 0x0002C0)
class FItemAttributeList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(TArray<FItemAttributeEntry>)               AttributeList                                               OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TWeakObjectPtr<AInventoryCollection*>)     OwningInventoryCollection                                   OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TWeakObjectPtr<UInventory*>)               OwningInventory                                             OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryStorageMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FItemEntryStorageMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, UItemComponentLocalStorage*>)  ItemToStorageMap                                            OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityBinding
/// Size: 0x0050 (0x000000 - 0x000050)
class FItemAbilityBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UItemInputAction*>)         InputAction                                                 OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EItemStateFilter)                          ActiveState                                                 OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TArray<class UItemAbilityCost*>)           Costs                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UItemAbilityCooldown*>)       Cooldowns                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UItemAbilityConfigurationAsset*)     Ability                                                     OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityCooldownState
/// Size: 0x000C (0x000000 - 0x00000C)
class FItemAbilityCooldownState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Progress                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PredictedTimeLeft                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityRuntimeData
/// Size: 0x0038 (0x000000 - 0x000038)
class FItemAbilityRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayAbilitySpecHandle)                AbilityHandle                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FItemAbilityCooldownState)                 CooldownState                                               OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FItemComponentContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UItemComponentBase*>)         Components                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntry
/// Size: 0x002C (0x00000C - 0x000038)
class FItemEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UItemDefinitionBase*)                ItemDefinition                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGuid)                                     ItemEntryID                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   SlotNumber                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryList
/// Size: 0x01F0 (0x000108 - 0x0002F8)
class FItemEntryList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FItemEntry>)                        ItemList                                                    OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.VkRarityEntry
/// Size: 0x0040 (0x000000 - 0x000040)
class FVkRarityEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemTagContainer
/// Size: 0x0030 (0x000000 - 0x000030)
class FItemTagContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVerseGameplayTagContainer)                RequiredTags                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVerseGameplayTagContainer)                ForbiddenTags                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVerseGameplayTagContainer)                AnyTags                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.OverriddenRecord
/// Size: 0x0018 (0x000000 - 0x000018)
class FOverriddenRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Enum /Script/ItemizationCoreRuntime.EEquipItemLimitHitBehaviour
/// Size: 0x03
enum EEquipItemLimitHitBehaviour : uint8_t
{
	EEquipItemLimitHitBehaviour__UnequipLeastRecentlyUsed                            = 0,
	EEquipItemLimitHitBehaviour__Block                                               = 1,
	EEquipItemLimitHitBehaviour__EEquipItemLimitHitBehaviour_MAX                     = 2
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveResult
/// Size: 0x05
enum EVkInventoryMoveResult : uint8_t
{
	EVkInventoryMoveResult__Success                                                  = 0,
	EVkInventoryMoveResult__Failed                                                   = 1,
	EVkInventoryMoveResult__InvalidRequest                                           = 2,
	EVkInventoryMoveResult__NoChange                                                 = 3,
	EVkInventoryMoveResult__EVkInventoryMoveResult_MAX                               = 4
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveBehaviour
/// Size: 0x03
enum EVkInventoryMoveBehaviour : uint8_t
{
	EVkInventoryMoveBehaviour__SwapSlotNumber                                        = 0,
	EVkInventoryMoveBehaviour__EmplaceSlotNumber                                     = 1,
	EVkInventoryMoveBehaviour__EVkInventoryMoveBehaviour_MAX                         = 2
};

/// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionType
/// Size: 0x03
enum EInventoryCollectionType : uint8_t
{
	EInventoryCollectionType__Player                                                 = 0,
	EInventoryCollectionType__World                                                  = 1,
	EInventoryCollectionType__EInventoryCollectionType_MAX                           = 2
};

/// Enum /Script/ItemizationCoreRuntime.EItemState
/// Size: 0x05
enum EItemState : uint8_t
{
	EItemState__NotInInventory                                                       = 0,
	EItemState__InInventory                                                          = 1,
	EItemState__Equipped                                                             = 2,
	EItemState__NumStates                                                            = 3,
	EItemState__EItemState_MAX                                                       = 4
};

/// Enum /Script/ItemizationCoreRuntime.EItemStateFilter
/// Size: 0x04
enum EItemStateFilter : uint8_t
{
	EItemStateFilter__Owned                                                          = 0,
	EItemStateFilter__Equipped                                                       = 1,
	EItemStateFilter__EquippedAndActive                                              = 2,
	EItemStateFilter__EItemStateFilter_MAX                                           = 3
};

/// Enum /Script/ItemizationCoreRuntime.EItemAttributeType
/// Size: 0x06
enum EItemAttributeType : uint8_t
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
enum EAttributeCombineLogic_Math : uint8_t
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
enum EAttributeBasicCalculateLogic : uint8_t
{
	EAttributeBasicCalculateLogic__ReturnFirstFound                                  = 0,
	EAttributeBasicCalculateLogic__AddAllFound                                       = 1,
	EAttributeBasicCalculateLogic__MultiplyAllFound                                  = 2,
	EAttributeBasicCalculateLogic__EAttributeBasicCalculateLogic_MAX                 = 3
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicFirstFoundLogic
/// Size: 0x03
enum EAttributeBasicFirstFoundLogic : uint8_t
{
	EAttributeBasicFirstFoundLogic__PrioritizeItemEntry                              = 0,
	EAttributeBasicFirstFoundLogic__PrioritizeComponent                              = 1,
	EAttributeBasicFirstFoundLogic__EAttributeBasicFirstFoundLogic_MAX               = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicNotFoundResult
/// Size: 0x03
enum EAttributeBasicNotFoundResult : uint8_t
{
	EAttributeBasicNotFoundResult__ReturnInitial                                     = 0,
	EAttributeBasicNotFoundResult__ReturnZero                                        = 1,
	EAttributeBasicNotFoundResult__EAttributeBasicNotFoundResult_MAX                 = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeApplicationRule
/// Size: 0x04
enum EAttributeApplicationRule : uint8_t
{
	EAttributeApplicationRule__ItemEntryOnly                                         = 0,
	EAttributeApplicationRule__ComponentOnly                                         = 1,
	EAttributeApplicationRule__Anywhere                                              = 2,
	EAttributeApplicationRule__EAttributeApplicationRule_MAX                         = 3
};

