
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/ItemizationCoreUI.InventoryCollectionViewModel
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UInventoryCollectionViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class UInventoryViewModel*>                 InventoryViewModels;                                        // 0x0068   (0x0010)  
	class UInventoryItemEntryViewModel*                SelectedInventoryItemEntryViewModel;                        // 0x0078   (0x0008)  
	class UInventoryItemEntryViewModel*                LastAmountChangedInventoryItemEntryViewModel;               // 0x0080   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0088   (0x0038)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.UnbindInventoryCollection
	// void UnbindInventoryCollection(bool bUnusedParam);                                                                    // [0xad6e118] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.InitializeViewModel
	// void InitializeViewModel(class UObject* InitializingObject);                                                          // [0xad6dc74] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ItemizationCoreUI.InventoryItemEntryViewModel
/// Size: 0x0140 (0x000068 - 0x0001A8)
class UInventoryItemEntryViewModel : public UMVVMViewModelBase
{ 
public:
	bool                                               bItemSelected;                                              // 0x0068   (0x0001)  
	bool                                               bItemBeingSwapped;                                          // 0x0069   (0x0001)  
	bool                                               bCanDrop;                                                   // 0x006A   (0x0001)  
	bool                                               bCanSwap;                                                   // 0x006B   (0x0001)  
	bool                                               bIsCooldownActive;                                          // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              CooldownTimeLeft;                                           // 0x0070   (0x0004)  
	float                                              CooldownProgress;                                           // 0x0074   (0x0004)  
	int64_t                                            ItemAmountChanged;                                          // 0x0078   (0x0008)  
	class UTexture2D*                                  CachedItemIcon;                                             // 0x0080   (0x0008)  
	class UTexture2D*                                  CachedSmallItemIcon;                                        // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x118];                                     // 0x0090   (0x0118)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UseItem
	// void UseItem(bool bUnused);                                                                                           // [0xad6e27c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UpdateCanSwap
	// void UpdateCanSwap(class UInventoryItemEntryViewModel* SwapInventoryItemEntryViewModel);                              // [0xad6e194] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.ToggleEquippableItemActive
	// void ToggleEquippableItemActive(bool bUnused);                                                                        // [0xad6e090] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetItemSlotNumber
	// void SetItemSlotNumber(int32_t SlotNumber);                                                                           // [0xad6df4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetEquippableItemActive
	// void SetEquippableItemActive(bool bActive);                                                                           // [0xad6de30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsSmallItemIconLoading
	// bool IsSmallItemIconLoading();                                                                                        // [0xad6de00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemIconLoading
	// bool IsItemIconLoading();                                                                                             // [0xad6ddd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemEntryIDValid
	// bool IsItemEntryIDValid();                                                                                            // [0xad6dda4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemActive
	// bool IsItemActive();                                                                                                  // [0xad6dd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsEquipSlotInputBindingVisible
	// bool IsEquipSlotInputBindingVisible();                                                                                // [0xad6dcf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSoftSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSoftSmallItemIcon();                                                                   // [0xad6dc0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSoftItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSoftItemIcon();                                                                        // [0xad6dbc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSmallItemIcon
	// class UTexture2D* GetSmallItemIcon();                                                                                 // [0xad6dba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemType
	// class UItemType* GetItemType();                                                                                       // [0xad6db5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemSlotNumber
	// int32_t GetItemSlotNumber();                                                                                          // [0xad6db38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                   // [0xad6daf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemPrimaryAmmoCount
	// int64_t GetItemPrimaryAmmoCount();                                                                                    // [0xad6dacc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemName
	// FText GetItemName();                                                                                                  // [0xad6da88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIconDisplayTextType
	// EItemIconDisplayTextType GetItemIconDisplayTextType();                                                                // [0xad6da64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIcon
	// class UTexture2D* GetItemIcon();                                                                                      // [0xad6da40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemEntryID
	// FGuid GetItemEntryID();                                                                                               // [0xad6da24] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDescription
	// FText GetItemDescription();                                                                                           // [0xad6d9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition();                                                                       // [0xad6d9bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemAmount
	// int64_t GetItemAmount();                                                                                              // [0xad6d998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetInventoryID
	// FGuid GetInventoryID();                                                                                               // [0xad6d1f4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetEquipSlotInputAction
	// class UInputAction* GetEquipSlotInputAction();                                                                        // [0xad6d170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropHalf
	// void DropHalf(bool bUnused);                                                                                          // [0xad6c9c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAmount
	// void DropAmount(int64_t Amount);                                                                                      // [0xad6c944] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAll
	// void DropAll(bool bUnused);                                                                                           // [0xad6c8c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeInactive
	// bool CanItemBeMadeInactive();                                                                                         // [0xad6c83c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeActive
	// bool CanItemBeMadeActive();                                                                                           // [0xad6c7ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModel
/// Size: 0x0068 (0x000068 - 0x0000D0)
class UInventoryViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class UInventoryItemEntryViewModel*>        InventoryItemEntryViewModels;                               // 0x0068   (0x0010)  
	class UInventoryItemEntryViewModel*                ActiveItemEntryViewModel;                                   // 0x0078   (0x0008)  
	class UInventoryItemEntryViewModel*                InventoryItemEntryViewModelBeingSwapped;                    // 0x0080   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0088   (0x0048)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetTotalSlots
	// int32_t GetTotalSlots();                                                                                              // [0xad6dc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryName
	// FText GetInventoryName();                                                                                             // [0xad6d95c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDescription
	// FText GetInventoryDescription();                                                                                      // [0xad6d1b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition();                                                                 // [0xad6d194] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryViewModelAllowedConversionFunctions : public UBlueprintFunctionLibrary
{ 
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
public:
};

/// Class /Script/ItemizationCoreUI.UniformGridEntryPanel
/// Size: 0x00C8 (0x0001B8 - 0x000280)
class UUniformGridEntryPanel : public UUniformGridPanel
{ 
public:
	SDK_UNDEFINED(16,14247) /* FMulticastInlineDelegate */ __um(OnGridItemsSet);                                   // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,14248) /* FMulticastInlineDelegate */ __um(OnGridEntryAdded);                                 // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,14249) /* FMulticastInlineDelegate */ __um(OnGridEntryRemoved);                               // 0x01D8   (0x0010)  
	class UClass*                                      EntryWidgetClass;                                           // 0x01E8   (0x0008)  
	int32_t                                            NumColumns;                                                 // 0x01F0   (0x0004)  
	SDK_UNDEFINED(1,14250) /* TEnumAsByte<EHorizontalAlignment> */ __um(SlotHorizontalAlignment);                  // 0x01F4   (0x0001)  
	SDK_UNDEFINED(1,14251) /* TEnumAsByte<EVerticalAlignment> */ __um(SlotVerticalAlignment);                      // 0x01F5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01F6   (0x0002)  MISSED
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x01F8   (0x0088)  


	/// Functions
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetSlotAlignment
	// void SetSlotAlignment(TEnumAsByte<EHorizontalAlignment> InSlotHorizontalAlignment, TEnumAsByte<EVerticalAlignment> InSlotVerticalAlignment); // [0xad6dfcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetGridItems
	// void SetGridItems(TArray<UObject*>& GridItems);                                                                       // [0xad6deb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridItemsSet__DelegateSignature
	// void OnGridItemsSet__DelegateSignature();                                                                             // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryRemoved__DelegateSignature
	// void OnGridEntryRemoved__DelegateSignature(class UWidget* GridEntry);                                                 // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryAdded__DelegateSignature
	// void OnGridEntryAdded__DelegateSignature(class UWidget* GridEntry);                                                   // [0x3d1d968] MulticastDelegate|Public|Delegate 
};

