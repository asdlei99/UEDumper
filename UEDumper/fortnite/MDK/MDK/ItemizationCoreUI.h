
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/ItemizationCoreUI.InventoryCollectionViewModel
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UInventoryCollectionViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class UInventoryViewModel*>)        InventoryViewModels                                         OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UInventoryItemEntryViewModel*)       SelectedInventoryItemEntryViewModel                         OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UInventoryItemEntryViewModel*)       LastAmountChangedInventoryItemEntryViewModel                OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.UnbindInventoryCollection
	// void UnbindInventoryCollection(bool bUnusedParam);                                                                       // [0xad6e118] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.InitializeViewModel
	// void InitializeViewModel(class UObject* InitializingObject);                                                             // [0xad6dc74] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ItemizationCoreUI.InventoryItemEntryViewModel
/// Size: 0x0140 (0x000068 - 0x0001A8)
class UInventoryItemEntryViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(bool)                                      bItemSelected                                               OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bItemBeingSwapped                                           OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bCanDrop                                                    OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bCanSwap                                                    OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(bool)                                      bIsCooldownActive                                           OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     CooldownTimeLeft                                            OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     CooldownProgress                                            OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int64_t)                                   ItemAmountChanged                                           OFFSET(get<int64_t>, {0x78, 8, 0, 0})
	CMember(class UTexture2D*)                         CachedItemIcon                                              OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UTexture2D*)                         CachedSmallItemIcon                                         OFFSET(get<T>, {0x88, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UseItem
	// void UseItem(bool bUnused);                                                                                              // [0xad6e27c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UpdateCanSwap
	// void UpdateCanSwap(class UInventoryItemEntryViewModel* SwapInventoryItemEntryViewModel);                                 // [0xad6e194] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.ToggleEquippableItemActive
	// void ToggleEquippableItemActive(bool bUnused);                                                                           // [0xad6e090] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetItemSlotNumber
	// void SetItemSlotNumber(int32_t SlotNumber);                                                                              // [0xad6df4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetEquippableItemActive
	// void SetEquippableItemActive(bool bActive);                                                                              // [0xad6de30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsSmallItemIconLoading
	// bool IsSmallItemIconLoading();                                                                                           // [0xad6de00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemIconLoading
	// bool IsItemIconLoading();                                                                                                // [0xad6ddd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemEntryIDValid
	// bool IsItemEntryIDValid();                                                                                               // [0xad6dda4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemActive
	// bool IsItemActive();                                                                                                     // [0xad6dd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsEquipSlotInputBindingVisible
	// bool IsEquipSlotInputBindingVisible();                                                                                   // [0xad6dcf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSoftSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSoftSmallItemIcon();                                                                      // [0xad6dc0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSoftItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSoftItemIcon();                                                                           // [0xad6dbc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSmallItemIcon
	// class UTexture2D* GetSmallItemIcon();                                                                                    // [0xad6dba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemType
	// class UItemType* GetItemType();                                                                                          // [0xad6db5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemSlotNumber
	// int32_t GetItemSlotNumber();                                                                                             // [0xad6db38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                      // [0xad6daf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemPrimaryAmmoCount
	// int64_t GetItemPrimaryAmmoCount();                                                                                       // [0xad6dacc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemName
	// FText GetItemName();                                                                                                     // [0xad6da88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIconDisplayTextType
	// EItemIconDisplayTextType GetItemIconDisplayTextType();                                                                   // [0xad6da64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIcon
	// class UTexture2D* GetItemIcon();                                                                                         // [0xad6da40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemEntryID
	// FGuid GetItemEntryID();                                                                                                  // [0xad6da24] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDescription
	// FText GetItemDescription();                                                                                              // [0xad6d9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition();                                                                          // [0xad6d9bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemAmount
	// int64_t GetItemAmount();                                                                                                 // [0xad6d998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetInventoryID
	// FGuid GetInventoryID();                                                                                                  // [0xad6d1f4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetEquipSlotInputAction
	// class UInputAction* GetEquipSlotInputAction();                                                                           // [0xad6d170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropHalf
	// void DropHalf(bool bUnused);                                                                                             // [0xad6c9c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAmount
	// void DropAmount(int64_t Amount);                                                                                         // [0xad6c944] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAll
	// void DropAll(bool bUnused);                                                                                              // [0xad6c8c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeInactive
	// bool CanItemBeMadeInactive();                                                                                            // [0xad6c83c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeActive
	// bool CanItemBeMadeActive();                                                                                              // [0xad6c7ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModel
/// Size: 0x0068 (0x000068 - 0x0000D0)
class UInventoryViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<class UInventoryItemEntryViewModel*>) InventoryItemEntryViewModels                              OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UInventoryItemEntryViewModel*)       ActiveItemEntryViewModel                                    OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UInventoryItemEntryViewModel*)       InventoryItemEntryViewModelBeingSwapped                     OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetTotalSlots
	// int32_t GetTotalSlots();                                                                                                 // [0xad6dc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryName
	// FText GetInventoryName();                                                                                                // [0xad6d95c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDescription
	// FText GetInventoryDescription();                                                                                         // [0xad6d1b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition();                                                                    // [0xad6d194] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryViewModelAllowedConversionFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions.GetInventoryItemEntryViewModels
	// TArray<UInventoryItemEntryViewModel*> GetInventoryItemEntryViewModels(TArray<UInventoryItemEntryViewModel*> InventoryItemEntryViewModels, bool bIncludeEmptySlots); // [0xad6d210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions.FindInventoryViewModel
	// class UInventoryViewModel* FindInventoryViewModel(class UInventoryDefinition* InventoryDefinition, TArray<UInventoryViewModel*>& InventoryViewModels); // [0xad6ca5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModelConversionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryViewModelConversionFunctions : public UInventoryViewModelAllowedConversionFunctions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreUI.UniformGridEntryPanel
/// Size: 0x00C8 (0x0001B8 - 0x000280)
class UUniformGridEntryPanel : public UUniformGridPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FMulticastInlineDelegate)                  OnGridItemsSet                                              OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGridEntryAdded                                            OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGridEntryRemoved                                          OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	CMember(class UClass*)                             EntryWidgetClass                                            OFFSET(get<T>, {0x1E8, 8, 0, 0})
	DMember(int32_t)                                   NumColumns                                                  OFFSET(get<int32_t>, {0x1F0, 4, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         SlotHorizontalAlignment                                     OFFSET(get<T>, {0x1F4, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           SlotVerticalAlignment                                       OFFSET(get<T>, {0x1F5, 1, 0, 0})
	SMember(FUserWidgetPool)                           EntryWidgetPool                                             OFFSET(getStruct<T>, {0x1F8, 136, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetSlotAlignment
	// void SetSlotAlignment(TEnumAsByte<EHorizontalAlignment> InSlotHorizontalAlignment, TEnumAsByte<EVerticalAlignment> InSlotVerticalAlignment); // [0xad6dfcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetGridItems
	// void SetGridItems(TArray<UObject*>& GridItems);                                                                          // [0xad6deb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridItemsSet__DelegateSignature
	// void OnGridItemsSet__DelegateSignature();                                                                                // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryRemoved__DelegateSignature
	// void OnGridEntryRemoved__DelegateSignature(class UWidget* GridEntry);                                                    // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryAdded__DelegateSignature
	// void OnGridEntryAdded__DelegateSignature(class UWidget* GridEntry);                                                      // [0x3d1d968] MulticastDelegate|Public|Delegate 
};

