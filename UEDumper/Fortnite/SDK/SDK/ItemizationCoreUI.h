
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: ModelViewViewModel

/// Class /Script/ItemizationCoreUI.InventoryCollectionViewModel
/// Size: 0x0030 (0x000068 - 0x000098)
class UInventoryCollectionViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class UInventoryViewModel*>                 InventoryViewModels;                                        // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0078   (0x0020)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.InitializeViewModel
	// void InitializeViewModel(class AInventoryCollection* InventoryCollection, TArray<UInventoryDefinition*>& RelevantInventoryDefinitions); // [0xc306e4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.GetInventoryViewModels
	// TArray<UInventoryViewModel*> GetInventoryViewModels();                                                                // [0xb8149d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryItemEntryViewModel
/// Size: 0x0050 (0x000068 - 0x0000B8)
class UInventoryItemEntryViewModel : public UMVVMViewModelBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0068   (0x0050)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemActive
	// bool IsItemActive();                                                                                                  // [0xc307538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemSlotNumber
	// int32_t GetItemSlotNumber();                                                                                          // [0xc306de4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition();                                                                       // [0xc306d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemAmount
	// int64_t GetItemAmount();                                                                                              // [0xc306d3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModel
/// Size: 0x0028 (0x000068 - 0x000090)
class UInventoryViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class UInventoryItemEntryViewModel*>        InventoryItemEntryViewModels;                               // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetTotalSlots
	// int32_t GetTotalSlots();                                                                                              // [0xc306e08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryName
	// FText GetInventoryName();                                                                                             // [0xc306d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryItemEntryViewModels
	// TArray<UInventoryItemEntryViewModel*> GetInventoryItemEntryViewModels();                                              // [0xb8149d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDescription
	// FText GetInventoryDescription();                                                                                      // [0xc306cc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition();                                                                 // [0xc306ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.FindInventoryItemEntryViewModelWithSlotNumber
	// class UInventoryItemEntryViewModel* FindInventoryItemEntryViewModelWithSlotNumber(int32_t ItemSlotNumber);            // [0xc306bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

