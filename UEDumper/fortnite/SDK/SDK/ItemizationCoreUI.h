
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
/// Size: 0x0040 (0x000068 - 0x0000A8)
class UInventoryCollectionViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class UInventoryViewModel*>                 InventoryViewModels;                                        // 0x0068   (0x0010)  
	class UInventoryItemEntryViewModel*                SelectedInventoryItemEntryViewModel;                        // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0080   (0x0028)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.UnbindInventoryCollection
	// void UnbindInventoryCollection(bool bUnusedParam);                                                                    // [0xaa6de24] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.InitializeViewModel
	// void InitializeViewModel(bool bUnusedParam);                                                                          // [0xaa6d894] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.GetInventoryViewModels
	// TArray<UInventoryViewModel*> GetInventoryViewModels();                                                                // [0xaa6d62c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryItemEntryViewModel
/// Size: 0x00E0 (0x000068 - 0x000148)
class UInventoryItemEntryViewModel : public UMVVMViewModelBase
{ 
public:
	bool                                               bItemSelected;                                              // 0x0068   (0x0001)  
	bool                                               bItemBeingSwapped;                                          // 0x0069   (0x0001)  
	bool                                               bCanDrop;                                                   // 0x006A   (0x0001)  
	bool                                               bCanSwap;                                                   // 0x006B   (0x0001)  
	float                                              CooldownTimeLeft;                                           // 0x006C   (0x0004)  
	float                                              CooldownProgress;                                           // 0x0070   (0x0004)  
	bool                                               bIsCooldownActive;                                          // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	class UTexture2D*                                  CachedItemIcon;                                             // 0x0078   (0x0008)  
	class UTexture2D*                                  CachedSmallItemIcon;                                        // 0x0080   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC0];                                      // 0x0088   (0x00C0)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UseItem
	// void UseItem(bool bUnused);                                                                                           // [0xaa6e008] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UpdateCanSwap
	// void UpdateCanSwap(class UInventoryItemEntryViewModel* SwapInventoryItemEntryViewModel);                              // [0xaa6dee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.ToggleEquippableItemActive
	// void ToggleEquippableItemActive(bool bUnused);                                                                        // [0xaa6dd5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetItemSlotNumber
	// void SetItemSlotNumber(int32_t SlotNumber);                                                                           // [0xaa6db60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetEquippableItemActive
	// void SetEquippableItemActive(bool bActive);                                                                           // [0xaa6da00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsSmallItemIconLoading
	// bool IsSmallItemIconLoading();                                                                                        // [0xaa6d9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemIconLoading
	// bool IsItemIconLoading();                                                                                             // [0xaa6d9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemEntryIDValid
	// bool IsItemEntryIDValid();                                                                                            // [0xaa6d974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemActive
	// bool IsItemActive();                                                                                                  // [0xaa6d950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSmallItemIcon
	// class UTexture2D* GetSmallItemIcon();                                                                                 // [0xaa6d84c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemType
	// class UItemType* GetItemType();                                                                                       // [0xaa6d804] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemSlotNumber
	// int32_t GetItemSlotNumber();                                                                                          // [0xaa6d7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                   // [0xaa6d798] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemName
	// FText GetItemName();                                                                                                  // [0xaa6d754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIcon
	// class UTexture2D* GetItemIcon();                                                                                      // [0xaa6d730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemEntryID
	// FGuid GetItemEntryID();                                                                                               // [0xa878340] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDescription
	// FText GetItemDescription();                                                                                           // [0xaa6d6ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition();                                                                       // [0xaa6d6c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemAmount
	// int64_t GetItemAmount();                                                                                              // [0xaa6d6a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetInventoryID
	// FGuid GetInventoryID();                                                                                               // [0xa14d83c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropHalf
	// void DropHalf(bool bUnused);                                                                                          // [0xaa6c584] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAmount
	// void DropAmount(int64_t Amount);                                                                                      // [0xaa6c4c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAll
	// void DropAll(bool bUnused);                                                                                           // [0xaa6c408] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeInactive
	// bool CanItemBeMadeInactive();                                                                                         // [0xaa6c37c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeActive
	// bool CanItemBeMadeActive();                                                                                           // [0xaa6c2ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModel
/// Size: 0x0048 (0x000068 - 0x0000B0)
class UInventoryViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class UInventoryItemEntryViewModel*>        InventoryItemEntryViewModels;                               // 0x0068   (0x0010)  
	class UInventoryItemEntryViewModel*                InventoryItemEntryViewModelBeingSwapped;                    // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0080   (0x0030)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetTotalSlots
	// int32_t GetTotalSlots();                                                                                              // [0xaa6d870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryName
	// FText GetInventoryName();                                                                                             // [0xaa6cea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryItemEntryViewModels
	// TArray<UInventoryItemEntryViewModel*> GetInventoryItemEntryViewModels();                                              // [0xaa6c6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDescription
	// FText GetInventoryDescription();                                                                                      // [0xaa6c684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition();                                                                 // [0xaa6c660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModelConversionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryViewModelConversionFunctions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModelConversionFunctions.GetInventoryViewModelWithInventoryDefinition
	// class UInventoryViewModel* GetInventoryViewModelWithInventoryDefinition(class UInventoryDefinition* InventoryDefinition, TArray<UInventoryViewModel*>& InventoryViewModels); // [0xaa6cedc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreUI.InventoryViewModelConversionFunctions.GetInventoryItemEntryViewModels
	// TArray<UInventoryItemEntryViewModel*> GetInventoryItemEntryViewModels(TArray<UInventoryItemEntryViewModel*> InventoryItemEntryViewModels, bool bIncludeEmptySlots); // [0xaa6c6f8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreUI.UniformGridEntryPanel
/// Size: 0x00C8 (0x0001B8 - 0x000280)
class UUniformGridEntryPanel : public UUniformGridPanel
{ 
public:
	SDK_UNDEFINED(16,14150) /* FMulticastInlineDelegate */ __um(OnGridItemsSet);                                   // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,14151) /* FMulticastInlineDelegate */ __um(OnGridEntryAdded);                                 // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,14152) /* FMulticastInlineDelegate */ __um(OnGridEntryRemoved);                               // 0x01D8   (0x0010)  
	class UClass*                                      EntryWidgetClass;                                           // 0x01E8   (0x0008)  
	int32_t                                            NumColumns;                                                 // 0x01F0   (0x0004)  
	SDK_UNDEFINED(1,14153) /* TEnumAsByte<EHorizontalAlignment> */ __um(SlotHorizontalAlignment);                  // 0x01F4   (0x0001)  
	SDK_UNDEFINED(1,14154) /* TEnumAsByte<EVerticalAlignment> */ __um(SlotVerticalAlignment);                      // 0x01F5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01F6   (0x0002)  MISSED
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x01F8   (0x0088)  


	/// Functions
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetSlotAlignment
	// void SetSlotAlignment(TEnumAsByte<EHorizontalAlignment> InSlotHorizontalAlignment, TEnumAsByte<EVerticalAlignment> InSlotVerticalAlignment); // [0xaa6dc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetGridItems
	// void SetGridItems(TArray<UObject*>& GridItems);                                                                       // [0xaa6dac4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridItemsSet__DelegateSignature
	// void OnGridItemsSet__DelegateSignature();                                                                             // [0x130d900] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryRemoved__DelegateSignature
	// void OnGridEntryRemoved__DelegateSignature(class UWidget* GridEntry);                                                 // [0x130d900] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryAdded__DelegateSignature
	// void OnGridEntryAdded__DelegateSignature(class UWidget* GridEntry);                                                   // [0x130d900] MulticastDelegate|Public|Delegate 
};

