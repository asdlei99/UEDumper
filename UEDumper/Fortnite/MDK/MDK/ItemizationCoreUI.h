
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: ModelViewViewModel

/// Class /Script/ItemizationCoreUI.InventoryCollectionViewModel
/// Size: 0x0030 (0x000068 - 0x000098)
class UInventoryCollectionViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<class UInventoryViewModel*>)        InventoryViewModels                                         OFFSET(get<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.InitializeViewModel
	// void InitializeViewModel(class AInventoryCollection* InventoryCollection, TArray<UInventoryDefinition*>& RelevantInventoryDefinitions); // [0xc306e4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModel.GetInventoryViewModels
	// TArray<UInventoryViewModel*> GetInventoryViewModels();                                                                   // [0xb8149d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryItemEntryViewModel
/// Size: 0x0050 (0x000068 - 0x0000B8)
class UInventoryItemEntryViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemActive
	// bool IsItemActive();                                                                                                     // [0xc307538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemSlotNumber
	// int32_t GetItemSlotNumber();                                                                                             // [0xc306de4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition();                                                                          // [0xc306d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemAmount
	// int64_t GetItemAmount();                                                                                                 // [0xc306d3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModel
/// Size: 0x0028 (0x000068 - 0x000090)
class UInventoryViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UInventoryItemEntryViewModel*>) InventoryItemEntryViewModels                              OFFSET(get<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetTotalSlots
	// int32_t GetTotalSlots();                                                                                                 // [0xc306e08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryName
	// FText GetInventoryName();                                                                                                // [0xc306d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryItemEntryViewModels
	// TArray<UInventoryItemEntryViewModel*> GetInventoryItemEntryViewModels();                                                 // [0xb8149d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDescription
	// FText GetInventoryDescription();                                                                                         // [0xc306cc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition();                                                                    // [0xc306ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.FindInventoryItemEntryViewModelWithSlotNumber
	// class UInventoryItemEntryViewModel* FindInventoryItemEntryViewModelWithSlotNumber(int32_t ItemSlotNumber);               // [0xc306bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

