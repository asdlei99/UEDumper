
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonConversationRuntime
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: CraftingRuntime
/// dependency: DataRegistry
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: JunoGameNative
/// dependency: JunoLowMemoryFallbackRuntime
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/JunoUI.EBlockedDirection
/// Size: 0x05
enum class EBlockedDirection : uint8_t
{
	EBlockedDirection__Top                                                           = 0,
	EBlockedDirection__Right                                                         = 1,
	EBlockedDirection__Bottom                                                        = 2,
	EBlockedDirection__Left                                                          = 3,
	EBlockedDirection__EBlockedDirection_MAX                                         = 4
};

/// Enum /Script/JunoUI.EJunoBangVisibility
/// Size: 0x04
enum class EJunoBangVisibility : uint8_t
{
	EJunoBangVisibility__Hidden                                                      = 0,
	EJunoBangVisibility__UnviewedBang                                                = 1,
	EJunoBangVisibility__UnacquiredBang                                              = 2,
	EJunoBangVisibility__EJunoBangVisibility_MAX                                     = 3
};

/// Enum /Script/JunoUI.EBuildingLimitationState
/// Size: 0x05
enum class EBuildingLimitationState : uint8_t
{
	EBuildingLimitationState__WithinLimits                                           = 0,
	EBuildingLimitationState__ThresholdCrossed                                       = 1,
	EBuildingLimitationState__NearingMaxOut                                          = 2,
	EBuildingLimitationState__MaxedOut                                               = 3,
	EBuildingLimitationState__EBuildingLimitationState_MAX                           = 4
};

/// Enum /Script/JunoUI.EJunoEnchantmentScreenState
/// Size: 0x04
enum class EJunoEnchantmentScreenState : uint8_t
{
	EJunoEnchantmentScreenState__WeaponSelection                                     = 0,
	EJunoEnchantmentScreenState__EnchantmentSelection                                = 1,
	EJunoEnchantmentScreenState__Count                                               = 2,
	EJunoEnchantmentScreenState__EJunoEnchantmentScreenState_MAX                     = 3
};

/// Enum /Script/JunoUI.EJunoEnchantButtonState
/// Size: 0x06
enum class EJunoEnchantButtonState : uint8_t
{
	EJunoEnchantButtonState__CanEnchant                                              = 0,
	EJunoEnchantButtonState__NotEnoughResources                                      = 1,
	EJunoEnchantButtonState__NoAvailableEnchantments                                 = 2,
	EJunoEnchantButtonState__SlotsFull                                               = 3,
	EJunoEnchantButtonState__CanCancelEnchant                                        = 4,
	EJunoEnchantButtonState__EJunoEnchantButtonState_MAX                             = 5
};

/// Enum /Script/JunoUI.EJunoEnchantmentState
/// Size: 0x05
enum class EJunoEnchantmentState : uint8_t
{
	EJunoEnchantmentState__Empty                                                     = 0,
	EJunoEnchantmentState__Occupied                                                  = 1,
	EJunoEnchantmentState__Preview                                                   = 2,
	EJunoEnchantmentState__Updated                                                   = 3,
	EJunoEnchantmentState__EJunoEnchantmentState_MAX                                 = 4
};

/// Enum /Script/JunoUI.EJunoHudMenuScreen
/// Size: 0x06
enum class EJunoHudMenuScreen : uint8_t
{
	EJunoHudMenuScreen__InventoryScreen                                              = 0,
	EJunoHudMenuScreen__CraftingScreen                                               = 1,
	EJunoHudMenuScreen__CollectionScreen                                             = 2,
	EJunoHudMenuScreen__BuildingScreen                                               = 3,
	EJunoHudMenuScreen__Max_None                                                     = 4,
	EJunoHudMenuScreen__EJunoHudMenuScreen_MAX                                       = 5
};

/// Enum /Script/JunoUI.EJunoRecipeSortType
/// Size: 0x05
enum class EJunoRecipeSortType : uint8_t
{
	EJunoRecipeSortType__BySet                                                       = 0,
	EJunoRecipeSortType__ByName                                                      = 1,
	EJunoRecipeSortType__BySortPriority                                              = 2,
	EJunoRecipeSortType__MAX_None                                                    = 3,
	EJunoRecipeSortType__EJunoRecipeSortType_MAX                                     = 4
};

/// Enum /Script/JunoUI.EJunoSwapItemType
/// Size: 0x06
enum class EJunoSwapItemType : uint8_t
{
	EJunoSwapItemType__None                                                          = 0,
	EJunoSwapItemType__Source                                                        = 1,
	EJunoSwapItemType__SelectedDestination                                           = 2,
	EJunoSwapItemType__PotentialDestination                                          = 3,
	EJunoSwapItemType__GearDestinationInvalid                                        = 4,
	EJunoSwapItemType__EJunoSwapItemType_MAX                                         = 5
};

/// Enum /Script/JunoUI.EJunoCraftButtonState
/// Size: 0x04
enum class EJunoCraftButtonState : uint8_t
{
	EJunoCraftButtonState__CanCraft                                                  = 0,
	EJunoCraftButtonState__CannotCraft                                               = 1,
	EJunoCraftButtonState__StopCraft                                                 = 2,
	EJunoCraftButtonState__EJunoCraftButtonState_MAX                                 = 3
};

/// Enum /Script/JunoUI.ESelectRecipeButtonState
/// Size: 0x04
enum class ESelectRecipeButtonState : uint8_t
{
	ESelectRecipeButtonState__SelectRecipeHeroState                                  = 0,
	ESelectRecipeButtonState__SelectRecipeCommonState                                = 1,
	ESelectRecipeButtonState__DepositState                                           = 2,
	ESelectRecipeButtonState__ESelectRecipeButtonState_MAX                           = 3
};

/// Enum /Script/JunoUI.ECraftingStationsInventoryState
/// Size: 0x04
enum class ECraftingStationsInventoryState : uint8_t
{
	ECraftingStationsInventoryState__CanCraft                                        = 0,
	ECraftingStationsInventoryState__MissingIngredients                              = 1,
	ECraftingStationsInventoryState__OutputFull                                      = 2,
	ECraftingStationsInventoryState__ECraftingStationsInventoryState_MAX             = 3
};

/// Enum /Script/JunoUI.EJunoInventoryModalOperation
/// Size: 0x04
enum class EJunoInventoryModalOperation : uint8_t
{
	EJunoInventoryModalOperation__None                                               = 0,
	EJunoInventoryModalOperation__MoveAll                                            = 1,
	EJunoInventoryModalOperation__MergeAll                                           = 2,
	EJunoInventoryModalOperation__EJunoInventoryModalOperation_MAX                   = 3
};

/// Enum /Script/JunoUI.EJunoMapMarkerCustomizationEntryType
/// Size: 0x03
enum class EJunoMapMarkerCustomizationEntryType : uint8_t
{
	EJunoMapMarkerCustomizationEntryType__Icon                                       = 0,
	EJunoMapMarkerCustomizationEntryType__Color                                      = 1,
	EJunoMapMarkerCustomizationEntryType__EJunoMapMarkerCustomizationEntryType_MAX   = 2
};

/// Enum /Script/JunoUI.EJunoPickupStreamAnim
/// Size: 0x04
enum class EJunoPickupStreamAnim : uint8_t
{
	EJunoPickupStreamAnim__None                                                      = 0,
	EJunoPickupStreamAnim__Intro                                                     = 1,
	EJunoPickupStreamAnim__Update                                                    = 2,
	EJunoPickupStreamAnim__EJunoPickupStreamAnim_MAX                                 = 3
};

/// Enum /Script/JunoUI.EJunoHealthBarType
/// Size: 0x03
enum class EJunoHealthBarType : uint8_t
{
	EJunoHealthBarType__Health                                                       = 0,
	EJunoHealthBarType__Overshield                                                   = 1,
	EJunoHealthBarType__EJunoHealthBarType_MAX                                       = 2
};

/// Class /Script/JunoUI.GameStateComponent_JunoFeedback
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameStateComponent_JunoFeedback : public UGameStateComponent_PlayerFeedback
{ 
public:
};

/// Class /Script/JunoUI.JunoBangWidget
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UJunoBangWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x02C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoBangWidget.SetBangVisibility
	// void SetBangVisibility(EJunoBangVisibility BangVisibility);                                                           // [0x2047e54] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoUI.JunoBangWidget.SetBangCount
	// void SetBangCount(int32_t NewCount);                                                                                  // [0x2047e54] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoUI.JunoBangWidget.OnFreeBuildToggled
	// void OnFreeBuildToggled(bool bFreeBuildEnabled);                                                                      // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoBangWidget.IsFreeBuildEnabled
	// bool IsFreeBuildEnabled();                                                                                            // [0xc0abd44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoBedAssignmentListEntry
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UJunoBedAssignmentListEntry : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UJunoBedAssignmentListObject*                BedAssignmentListObject;                                    // 0x14E8   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoBedAssignmentListEntry.OnBedAssignmentObjectSet
	// void OnBedAssignmentObjectSet(class UJunoBedAssignmentListObject* NewBedAssignmentListObject);                        // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBedAssignmentListObject
/// Size: 0x0040 (0x000028 - 0x000068)
class UJunoBedAssignmentListObject : public UObject
{ 
public:
	FGameplayTag                                       NPCGameplayTag;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(24,14437) /* FText */                __um(NPCDisplayName);                                       // 0x0030   (0x0018)  
	SDK_UNDEFINED(32,14438) /* TWeakObjectPtr<UTexture2D*> */ __um(NPCIcon);                                       // 0x0048   (0x0020)  


	/// Functions
	// Function /Script/JunoUI.JunoBedAssignmentListObject.IsPlayer
	// bool IsPlayer();                                                                                                      // [0xc0abd74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.GetNPCIcon
	// TWeakObjectPtr<UTexture2D*> GetNPCIcon();                                                                             // [0xc0abb1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.GetNPCGameplayTag
	// FGameplayTag GetNPCGameplayTag();                                                                                     // [0x6743f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.GetNPCDisplayName
	// FText GetNPCDisplayName();                                                                                            // [0xc0abad0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoBiomeUIData
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoBiomeUIData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14439) /* TMap<EJunoBiome, FJunoBiomeUIDisplayData> */ __um(BiomeUIDisplayData);              // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/JunoUI.JunoBiomeUIData.GetJunoBIomeUIData
	// class UJunoBiomeUIData* GetJunoBIomeUIData();                                                                         // [0xc0aba90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoBiomeUIData.FindBiomeTypeUIData
	// bool FindBiomeTypeUIData(EJunoBiome& Biome, FJunoBiomeUIDisplayData& OutBiomeUIDisplayData);                          // [0xc0ab8e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoBuildingBarAssignScreen
/// Size: 0x0048 (0x000400 - 0x000448)
class UJunoBuildingBarAssignScreen : public UCommonActivatableWidget
{ 
public:
	class UJunoBuildingBarMenu*                        BuildingBarMenuWidget;                                      // 0x0400   (0x0008)  
	FJunoBuildingSlotData                              PreviewSlotData;                                            // 0x0408   (0x0040)  


	/// Functions
	// Function /Script/JunoUI.JunoBuildingBarAssignScreen.SetRecipeToAssign
	// void SetRecipeToAssign(FName InRecipeToAssign);                                                                       // [0xc0ac054] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoBuildingBarHud
/// Size: 0x0060 (0x000328 - 0x000388)
class UJunoBuildingBarHud : public UFortHUDElementWidget
{ 
public:
	class UDynamicEntryBox*                            EntryBox_Slots;                                             // 0x0328   (0x0008)  
	EJunoBuildModeType                                 BuildBarType;                                               // 0x0330   (0x0001)  
	unsigned char                                      UnknownData00_6[0x57];                                      // 0x0331   (0x0057)  MISSED
};

/// Class /Script/JunoUI.JunoBuildingBarHudSlot
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UJunoBuildingBarHudSlot : public UCommonUserWidget
{ 
public:
	class UJunoBuildingDisplaySlot*                    DisplaySlotWidget;                                          // 0x02E8   (0x0008)  
	class UFortKeybindWidget*                          KeyBind_Keyboard;                                           // 0x02F0   (0x0008)  
	bool                                               bCollapseOnEmpty;                                           // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoBuildingBarHudSlot.OnSelectionChanged
	// void OnSelectionChanged(bool bInSelected, FJunoBuildingSlotData& BuildingSlotInitData);                               // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingBarHudSlot.OnBuildingSlotPinned
	// void OnBuildingSlotPinned(bool bIsPinned);                                                                            // [0x2047e54] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBuildingBarMenu
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UJunoBuildingBarMenu : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02E8   (0x0010)  MISSED
	bool                                               bClickableSlots;                                            // 0x02F8   (0x0001)  
	EJunoBuildModeType                                 BuildBarType;                                               // 0x02F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x02FA   (0x000E)  MISSED
	class UDynamicEntryBox*                            EntryBox_Slots;                                             // 0x0308   (0x0008)  
	FJunoBuildingSlotData                              PreviewData;                                                // 0x0310   (0x0040)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0350   (0x0020)  MISSED
};

/// Class /Script/JunoUI.JunoBuildingBarMenuSlot
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UJunoBuildingBarMenuSlot : public UCommonButtonBase
{ 
public:
	class UJunoBuildingDisplaySlot*                    DisplaySlotWidget;                                          // 0x1490   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1498   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoBuildingBarMenuSlot.OnLeavePreview
	// void OnLeavePreview();                                                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingBarMenuSlot.OnEnterPreview
	// void OnEnterPreview(FJunoBuildingSlotData& InPreviewSlotData);                                                        // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBuildingDisplaySlot
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UJunoBuildingDisplaySlot : public UCommonUserWidget
{ 
public:
	FJunoBuildingSlotData                              BuildingSlotData;                                           // 0x02E8   (0x0040)  


	/// Functions
	// Function /Script/JunoUI.JunoBuildingDisplaySlot.OnSetBuildingSlotInitData
	// void OnSetBuildingSlotInitData(FJunoBuildingSlotData& BuildingSlotInitData);                                          // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingDisplaySlot.OnSelectionChanged
	// void OnSelectionChanged(bool bInSelected);                                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBuildingIngredientsGroup
/// Size: 0x0078 (0x000328 - 0x0003A0)
class UJunoBuildingIngredientsGroup : public UFortHUDElementWidget
{ 
public:
	class UDynamicEntryBox*                            EntryBox_Ingredients;                                       // 0x0328   (0x0008)  
	FGameplayTagContainer                              FilteredTags;                                               // 0x0330   (0x0020)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0350   (0x0050)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoBuildingIngredientsGroup.OnRecipeDisplayDataChanged
	// void OnRecipeDisplayDataChanged(FText& RecipeDisplayName, class UJunoBuildInstructionsItemDefinition* BuildingItemDefinition); // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingIngredientsGroup.OnCanCraftChanged
	// void OnCanCraftChanged(bool bCanCraft);                                                                               // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBuildingMemoryComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoBuildingMemoryComponent : public UActorComponent
{ 
public:
	class UDataTable*                                  Thresholds;                                                 // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00A8   (0x0020)  MISSED
};

/// Class /Script/JunoUI.JunoRecipeDetailsWidget
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UJunoRecipeDetailsWidget : public UCommonUserWidget
{ 
public:
	bool                                               bCanCraft;                                                  // 0x02E8   (0x0001)  
	bool                                               bDisableInfiniteIcon;                                       // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x16];                                      // 0x02EA   (0x0016)  MISSED
	TArray<FCraftingIngredientRequirement>             IngredientRequirements;                                     // 0x0300   (0x0010)  
	SDK_UNDEFINED(8,14440) /* TWeakObjectPtr<AActor*> */ __um(CraftingObject);                                     // 0x0310   (0x0008)  
	FName                                              CurrentRecipe;                                              // 0x0318   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x031C   (0x0004)  MISSED
	class UDynamicEntryBox*                            EntryBox_Ingredients;                                       // 0x0320   (0x0008)  
	class UScrollBox*                                  ScrollBox_Ingredients;                                      // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.UpdateRecipeFocus
	// void UpdateRecipeFocus(FName& Recipe);                                                                                // [0xc0be478] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.SetCraftingObject
	// void SetCraftingObject(class AActor* InCraftingObject);                                                               // [0xc0be024] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.OnSetRecipeDetails
	// void OnSetRecipeDetails(FText& Name, EJunoKnowledgeState KnowledgeState, int32_t CraftCount, class UFortItemDefinition* CraftedItemDef, FText& SourceName, FSlateBrush SourceIcon); // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.HandleInventoryChanged
	// void HandleInventoryChanged(FJunoItemSlot& Item, EJunoItemChangeType ChangeType);                                     // [0xc0bd408] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                       // [0xc0bd20c] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.GetCurrentRecipe
	// FName GetCurrentRecipe();                                                                                             // [0xc0bc984] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoBuildingRecipeDetails
/// Size: 0x0048 (0x000330 - 0x000378)
class UJunoBuildingRecipeDetails : public UJunoRecipeDetailsWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UDynamicEntryBox*                            EntryBox_GuidedBuildingIngredients;                         // 0x0338   (0x0008)  
	float                                              LoadingMinimumWaitTimeSeconds;                              // 0x0340   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	SDK_UNDEFINED(32,14441) /* TWeakObjectPtr<UClass*> */ __um(ActorClassToBuild);                                 // 0x0348   (0x0020)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0368   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoBuildingRecipeDetails.SetGuidedBuildIngredientsToPreviewCount
	// void SetGuidedBuildIngredientsToPreviewCount(int32_t InGuidedBuildIngredientsToPreviewCount);                         // [0xc0abf98] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoBuildingRecipeDetails.OnLoadingBuildingActorAssetComplete
	// void OnLoadingBuildingActorAssetComplete(FJunoGuidedBuildingUIData GuidedBuildingUIData);                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingRecipeDetails.OnLoadingBuildingActorAsset
	// void OnLoadingBuildingActorAsset();                                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoConversationMarker
/// Size: 0x0138 (0x0003D0 - 0x000508)
class UJunoConversationMarker : public UFortActorIndicatorWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03D0   (0x0008)  MISSED
	class UFortKeybindWidget*                          Keybind_Interact;                                           // 0x03D8   (0x0008)  
	float                                              MessageBubbleDuration;                                      // 0x03E0   (0x0004)  
	float                                              LastTextBubbleDuration;                                     // 0x03E4   (0x0004)  
	bool                                               bSetCustomInteractionWidgetOnlyWhenNeeded;                  // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1F];                                      // 0x03E9   (0x001F)  MISSED
	SDK_UNDEFINED(80,14442) /* TMap<FGameplayTag, FJunoNPCStateUIData> */ __um(CachedNPCStateMap);                 // 0x0408   (0x0050)  
	SDK_UNDEFINED(80,14443) /* TMap<FGameplayTag, FJunoNPCStateUIData> */ __um(ActiveNPCStateMap);                 // 0x0458   (0x0050)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x04A8   (0x0060)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoConversationMarker.SetNPCStatus
	// void SetNPCStatus(FJunoNPCStateUIData& NPCStateData);                                                                 // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationMarker.OnParticipantNameChanged
	// void OnParticipantNameChanged(FText& InParticipantName);                                                              // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationMarker.OnMessageUpdated
	// void OnMessageUpdated(FText& MessageText);                                                                            // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationMarker.OnConversationInteractionUpdated
	// void OnConversationInteractionUpdated(EDialogMarkerInteractionState NewInteractionState, bool bNewCanInteract);       // [0x2047e54] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationMarker.OnCanInteract
	// bool OnCanInteract();                                                                                                 // [0xc0abd94] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoConversationMarker.GetInteractionState
	// EDialogMarkerInteractionState GetInteractionState();                                                                  // [0xc0aba78] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoConversationMarker.ClearNPCStatus
	// void ClearNPCStatus();                                                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoConversationOption
/// Size: 0x0080 (0x001490 - 0x001510)
class UJunoConversationOption : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x1490   (0x0008)  MISSED
	FClientConversationOptionEntry                     RepresentedOption;                                          // 0x1498   (0x0070)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x1508   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoConversationOption.OnDisplayItemDefLoaded
	// void OnDisplayItemDefLoaded(class UFortItemDefinition* ResolvedItemDef);                                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationOption.OnDisplayAssetLoaded
	// void OnDisplayAssetLoaded(class UObject* ResolvedAsset);                                                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationOption.OnConversationOptionUpdated
	// void OnConversationOptionUpdated(FClientConversationOptionEntry& InOption);                                           // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationOption.GetConversationOption
	// FClientConversationOptionEntry GetConversationOption();                                                               // [0xc0aba44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoConversationScreen
/// Size: 0x0080 (0x000400 - 0x000480)
class UJunoConversationScreen : public UCommonActivatableWidget
{ 
public:
	class UCommonButtonGroupBase*                      Group_Options;                                              // 0x0400   (0x0008)  
	SDK_UNDEFINED(32,14444) /* TWeakObjectPtr<UTexture2D*> */ __um(ParticipantIconSmall);                          // 0x0408   (0x0020)  
	class UDynamicEntryBox*                            EntryBox_Options;                                           // 0x0428   (0x0008)  
	class UJunoConversationOption*                     LastEntryHovered;                                           // 0x0430   (0x0008)  
	FDataTableRowHandle                                CloseScreenAction;                                          // 0x0438   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0448   (0x0038)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoConversationScreen.OnParticipantIconChanged
	// void OnParticipantIconChanged(TWeakObjectPtr<UTexture2D*>& Icon);                                                     // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationScreen.OnConversationStarted
	// void OnConversationStarted();                                                                                         // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationScreen.OnConversationOptionsUpdated
	// void OnConversationOptionsUpdated();                                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationScreen.OnConversationMessageUpdated
	// void OnConversationMessageUpdated(FClientConversationMessage& ConversationMessage);                                   // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationScreen.HandleParticipantIconChanged
	// void HandleParticipantIconChanged(TWeakObjectPtr<UTexture2D*>& Icon);                                                 // [0xc0abca4] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoConversationScreen.EndConversation
	// void EndConversation();                                                                                               // [0xc0ab8cc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoDebugWatermark
/// Size: 0x0000 (0x000328 - 0x000328)
class UJunoDebugWatermark : public UFortHUDElementWidget
{ 
public:


	/// Functions
	// Function /Script/JunoUI.JunoDebugWatermark.ShouldShowSeed
	// bool ShouldShowSeed();                                                                                                // [0xc0ac114] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoDebugWatermark.GetWorldID
	// FString GetWorldID();                                                                                                 // [0xc0abbbc] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/JunoUI.JunoDynamicControlPromptsWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UJunoDynamicControlPromptsWidget : public UFortHUDElementWidget
{ 
public:
	class UDynamicEntryBox*                            EntryBox;                                                   // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoDynamicControlPromptsWidget.InitializeEntry
	// void InitializeEntry(FJunoInputAlternateDisplayText& DisplayText, class UUserWidget* EntryWidget);                    // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoDynamicControlPromptsWidget.AddEntry
	// void AddEntry(FJunoInputAlternateDisplayText& DisplayText);                                                           // [0xc0ab7bc] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoEnchantmentScreen
/// Size: 0x0088 (0x000400 - 0x000488)
class UJunoEnchantmentScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UJunoPlayerInventoryContainer*               Container_PlayerInventory;                                  // 0x0408   (0x0008)  
	class UGridListView*                               RecipeList_Enchantments;                                    // 0x0410   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_RecipeIngredients;                                 // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_Enchant;                                             // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_TouchSelect;                                         // 0x0428   (0x0008)  
	class AJunoCraftingObjectBGA*                      CraftingObject;                                             // 0x0430   (0x0008)  
	class UJunoInventorySlot*                          LastInventorySlot;                                          // 0x0438   (0x0008)  
	class UFortItem*                                   ChosenItem;                                                 // 0x0440   (0x0008)  
	TArray<FFortAlterationSlotStatus>                  ChosenItemAlterations;                                      // 0x0448   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0458   (0x0008)  MISSED
	class UJunoInventorySlot*                          HoveredInventorySlot;                                       // 0x0460   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0468   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoEnchantmentScreen.SelectInventorySlot
	// void SelectInventorySlot(class UJunoInventorySlot* InventorySlot);                                                    // [0xc0abdf0] Final|Native|Private 
	// Function /Script/JunoUI.JunoEnchantmentScreen.RequestBackout
	// void RequestBackout();                                                                                                // [0xc0abdac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnRecipeEntrySelected
	// void OnRecipeEntrySelected(class UFortAlterationItemDefinition* PreviewEnchantment);                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnRecipeEntryHovered
	// void OnRecipeEntryHovered(class UFortAlterationItemDefinition* PreviewEnchantment);                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnItemEnchanted
	// void OnItemEnchanted(class UFortItem* Item, class UFortItemDefinition* PreviewAlteration, int32_t UpdatedAlterationIndex); // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnInventoryItemHovered
	// void OnInventoryItemHovered(class UFortItem* HoveredInventoryItem);                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnInventoryItemChosen
	// void OnInventoryItemChosen(class UFortItem* ChosenInventoryItem);                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType NewInputType);                                                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnEnchantmentStationHeaderData
	// void OnEnchantmentStationHeaderData(FJunoCraftingStationUIDataEntry& InEntry);                                        // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnEnchantButtonStateChanged
	// void OnEnchantButtonStateChanged(EJunoEnchantButtonState InButtonState);                                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnEnchantableItemSlotsCreated
	// void OnEnchantableItemSlotsCreated(bool bNothingToEnchant);                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnDisabledInventoryItemHovered
	// void OnDisabledInventoryItemHovered();                                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                       // [0xc0abbfc] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoEnchantmentScreen.GetCurrentScreenState
	// EJunoEnchantmentScreenState GetCurrentScreenState();                                                                  // [0xc0aba60] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoEnchantmentScreen.CancelEnchanting
	// void CancelEnchanting();                                                                                              // [0xc0ab858] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoEnchantmentsWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UJunoEnchantmentsWidget : public UCommonUserWidget
{ 
public:
	class UDynamicEntryBox*                            EntryBox_Enchantments;                                      // 0x02E8   (0x0008)  
	class UFortItem*                                   RepresentedItem;                                            // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoEnchantmentsWidget.SetUpdatedEnchantmentIndex
	// void SetUpdatedEnchantmentIndex(int32_t UpdatedIndex);                                                                // [0xc0adf3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoEnchantmentsWidget.SetRepresentedItem
	// void SetRepresentedItem(class UFortItem* InRepresentedItem);                                                          // [0xc0add04] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoEnchantmentsWidget.SetPreviewEnchantment
	// void SetPreviewEnchantment(class UFortAlterationItemDefinition* InEnchantment);                                       // [0xc0adbec] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoEnchantmentsWidget.OnEnchantmentsUpdated
	// void OnEnchantmentsUpdated(bool bHasEnchantments);                                                                    // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoEnchantmentWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UJunoEnchantmentWidget : public UCommonUserWidget
{ 
public:
	class UFortAlterationItemDefinition*               Enchantment;                                                // 0x02E8   (0x0008)  
	EJunoEnchantmentState                              EnchantmentState;                                           // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02F1   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoEnchantmentWidget.OnRepresentedItemChanged
	// void OnRepresentedItemChanged();                                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Struct /Script/JunoUI.JunoMapZoomBounds
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoMapZoomBounds
{ 
	float                                              MinZoom;                                                    // 0x0000   (0x0004)  
	float                                              MaximumZoom;                                                // 0x0004   (0x0004)  
};

/// Class /Script/JunoUI.JunoFullScreenMap
/// Size: 0x0150 (0x000400 - 0x000550)
class UJunoFullScreenMap : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0400   (0x0028)  MISSED
	FDataTableRowHandle                                CloseScreenAction;                                          // 0x0428   (0x0010)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0438   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0440   (0x0008)  
	class UJunoMapWidget*                              MapWidget;                                                  // 0x0448   (0x0008)  
	float                                              ZoomMouseWheelScale;                                        // 0x0450   (0x0004)  
	FJunoMapZoomBounds                                 ZoomBounds;                                                 // 0x0454   (0x0008)  
	float                                              WorldMetersInWidth;                                         // 0x045C   (0x0004)  
	float                                              TouchZoomSpeed;                                             // 0x0460   (0x0004)  
	float                                              GamepadZoomSpeed;                                           // 0x0464   (0x0004)  
	float                                              GamepadPanSpeed;                                            // 0x0468   (0x0004)  
	float                                              GamepadDeadZone;                                            // 0x046C   (0x0004)  
	bool                                               bLockPanningToPlayerVisibility;                             // 0x0470   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0471   (0x0003)  MISSED
	float                                              PlayerVisibilityPadding;                                    // 0x0474   (0x0004)  
	SDK_UNDEFINED(32,14445) /* TWeakObjectPtr<UMaterialInterface*> */ __um(PlayerIconMaterial);                    // 0x0478   (0x0020)  
	int32_t                                            PlayerIconSize;                                             // 0x0498   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x049C   (0x0004)  MISSED
	SDK_UNDEFINED(32,14446) /* TWeakObjectPtr<UMaterialInterface*> */ __um(AnchoringArrowIconMaterial);            // 0x04A0   (0x0020)  
	int32_t                                            AnchoringArrowIconSize;                                     // 0x04C0   (0x0004)  
	float                                              AnchorMapPadding;                                           // 0x04C4   (0x0004)  
	float                                              MarkerCyclingDisplayDuration;                               // 0x04C8   (0x0004)  
	float                                              InContainerIconDistance;                                    // 0x04CC   (0x0004)  
	FName                                              FogOfWarMaterialParameterName;                              // 0x04D0   (0x0004)  
	FName                                              FogOfWarScaleParameterName;                                 // 0x04D4   (0x0004)  
	FName                                              FogOfWarOffsetParameterName;                                // 0x04D8   (0x0004)  
	FName                                              FogOfWarRandomSignParameterName;                            // 0x04DC   (0x0004)  
	FName                                              FogOfWarRandomIntensityParameterName;                       // 0x04E0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x04E4   (0x0004)  MISSED
	SDK_UNDEFINED(32,14447) /* TWeakObjectPtr<UMaterialInterface*> */ __um(MapTileMaterial);                       // 0x04E8   (0x0020)  
	FName                                              TerrainMaterialParameterName;                               // 0x0508   (0x0004)  
	FName                                              ZoomLevelMaterialParameterName;                             // 0x050C   (0x0004)  
	FName                                              MapContainerSizeXParameterName;                             // 0x0510   (0x0004)  
	FName                                              MapContainerSizeYParameterName;                             // 0x0514   (0x0004)  
	FName                                              MapContainerVerticalOffsetParameterName;                    // 0x0518   (0x0004)  
	SDK_UNDEFINED(8,14448) /* TWeakObjectPtr<UJunoMapViewModel*> */ __um(MapViewModel);                            // 0x051C   (0x0008)  
	unsigned char                                      UnknownData04_6[0x2C];                                      // 0x0524   (0x002C)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoFullScreenMap.ResetFocusToPlayer
	// void ResetFocusToPlayer();                                                                                            // [0xc0adbc8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoFullScreenMap.IsMapTabAllowed
	// bool IsMapTabAllowed();                                                                                               // [0xc0ad724] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoHudMenuBaseInitData
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoHudMenuBaseInitData : public UObject
{ 
public:
	FName                                              InitialHudMenuBaseTab;                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/JunoUI.JunoHudMenuBase
/// Size: 0x0038 (0x000400 - 0x000438)
class UJunoHudMenuBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0400   (0x0010)  MISSED
	class UFortTabListWidgetBase*                      TabList_MenuTabs;                                           // 0x0410   (0x0008)  
	class UCommonActivatableWidgetSwitcher*            Switcher_Tabs;                                              // 0x0418   (0x0008)  
	FDataTableRowHandle                                CloseHUDMenuAction;                                         // 0x0420   (0x0010)  
	class UJunoHudMenuBaseInitData*                    HudMenuBaseInitData;                                        // 0x0430   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoHudMenuBase.OnInitDataSet
	// void OnInitDataSet(class UJunoHudMenuBaseInitData* InInitData);                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoHudMenuContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoHudMenuContentInterface : public UInterface
{ 
public:
};

/// Class /Script/JunoUI.JunoHUDMenuTabButton
/// Size: 0x0000 (0x001490 - 0x001490)
class UJunoHUDMenuTabButton : public UCommonButtonBase
{ 
public:


	/// Functions
	// Function /Script/JunoUI.JunoHUDMenuTabButton.GetNumUnviewedItems
	// int32_t GetNumUnviewedItems();                                                                                        // [0x6f178a8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Struct /Script/JunoUI.JunoIngredientInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoIngredientInfo
{ 
	SDK_UNDEFINED(32,14449) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(Ingredient);                           // 0x0000   (0x0020)  
	int32_t                                            RequiredCount;                                              // 0x0020   (0x0004)  
	int32_t                                            OwnedCount;                                                 // 0x0024   (0x0004)  
};

/// Class /Script/JunoUI.JunoIngredientWidget
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UJunoIngredientWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02E8   (0x0008)  MISSED
	FJunoIngredientInfo                                CachedInfo;                                                 // 0x02F0   (0x0028)  
	class UCommonTextBlock*                            Text_Name;                                                  // 0x0318   (0x0008)  
	bool                                               bDisableInfiniteIcon;                                       // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0321   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoIngredientWidget.OnSetIngredientData
	// void OnSetIngredientData(TWeakObjectPtr<UTexture2D*>& Icon, EFortRarity ItemRarity, int32_t EntryIndex, FText& ItemDescription); // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoIngredientWidget.OnSetIngredientCounts
	// void OnSetIngredientCounts(int32_t OwnedCount, int32_t RequiredCount);                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoIngredientWidget.OnSetHasEnough
	// void OnSetHasEnough(bool bHasEnough);                                                                                 // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoInventoryUIData
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoInventoryUIData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14450) /* TMap<FGameplayTag, FJunoInventoryGroupUIDataList> */ __um(IndividualInventoryGroupUIData); // 0x0030   (0x0050)  
};

/// Class /Script/JunoUI.JunoItemSpawnerEntrySlot
/// Size: 0x0050 (0x001490 - 0x0014E0)
class UJunoItemSpawnerEntrySlot : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x1490   (0x0008)  MISSED
	class UMenuAnchor*                                 ContextMenuAnchor;                                          // 0x1498   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x14A0   (0x0004)  MISSED
	int32_t                                            StackSizeMultiplier;                                        // 0x14A4   (0x0004)  
	class UJunoItemSpawnerListEntry*                   ListEntry;                                                  // 0x14A8   (0x0008)  
	class UClass*                                      ContextMenuClass;                                           // 0x14B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x14B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.UpdateItemDisplay
	// void UpdateItemDisplay(class UFortItemDefinition* FortItemDefinition);                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.OnLeaveContextMenuMode
	// void OnLeaveContextMenuMode();                                                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.OnEnterContextMenuMode
	// void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot);                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.HandleOnMenuOpenChanged
	// void HandleOnMenuOpenChanged(bool bIsOpen);                                                                           // [0xc0ad5a0] Final|Native|Private 
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.GetContextMenu
	// class UUserWidget* GetContextMenu();                                                                                  // [0xc0ad548] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoItemSpawnerSubCategoryHeader
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UJunoItemSpawnerSubCategoryHeader : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x1490   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_Name;                                                  // 0x1498   (0x0008)  
	class UJunoItemSpawnerListEntry*                   ListEntry;                                                  // 0x14A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x14A8   (0x0008)  MISSED
};

/// Class /Script/JunoUI.JunoItemSpawnerScreen
/// Size: 0x0230 (0x000400 - 0x000630)
class UJunoItemSpawnerScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0400   (0x0028)  MISSED
	class UFortTabListWidgetBase*                      TabList_FilterTabs;                                         // 0x0428   (0x0008)  
	class UClass*                                      FilterTabWidget;                                            // 0x0430   (0x0008)  
	SDK_UNDEFINED(80,14451) /* TMap<FGameplayTag, FJunoItemSpawnerItemTagOrder> */ __um(SubCategoryTagOrderByCategoryTag); // 0x0438   (0x0050)  
	SDK_UNDEFINED(80,14452) /* TMap<FGameplayTag, FJunoItemSpawnerItemTagOrder> */ __um(ItemTypeTagOrderBySubCategoryTag); // 0x0488   (0x0050)  
	class UGridListView*                               GridListView_SubCategories;                                 // 0x04D8   (0x0008)  
	FName                                              SubCategoryItemType;                                        // 0x04E0   (0x0004)  
	FName                                              EntrySlotItemType;                                          // 0x04E4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x04E8   (0x0008)  MISSED
	SDK_UNDEFINED(80,14453) /* TMap<FName, FGameplayTag> */ __um(TabIDToCategoryTagMap);                           // 0x04F0   (0x0050)  
	class UJunoItemSpawnerListEntry*                   SelectedListEntry;                                          // 0x0540   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0548   (0x0008)  
	class UCommonButtonBase*                           Button_Close;                                               // 0x0550   (0x0008)  
	class UCommonButtonBase*                           Button_Spawn;                                               // 0x0558   (0x0008)  
	class UCommonButtonBase*                           Button_SpawnMultiple;                                       // 0x0560   (0x0008)  
	class UJunoNotificationWidget*                     ItemSpawnedNotification;                                    // 0x0568   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x0570   (0x00C0)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoItemSpawnerScreen.UpdateItemDetails
	// void UpdateItemDetails(class UFortItemDefinition* FortItemDefinition);                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoItemSpawnerScreen.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                  // [0xc0ad664] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoItemSpawnerListEntry
/// Size: 0x0030 (0x000028 - 0x000058)
class UJunoItemSpawnerListEntry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0028   (0x0018)  MISSED
	class UFortItemDefinition*                         ItemDefinition;                                             // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/JunoUI.JunoLocalPlayerUIMapState
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UJunoLocalPlayerUIMapState : public UObject
{ 
public:
	SDK_UNDEFINED(32,14454) /* TWeakObjectPtr<UMaterialInterface*> */ __um(PlayerIconMaterial);                    // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,14455) /* TWeakObjectPtr<UMaterialInterface*> */ __um(AnchoringArrowIconMaterial);            // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,14456) /* TWeakObjectPtr<UMaterialInterface*> */ __um(MapTileMaterial);                       // 0x0068   (0x0020)  
	SDK_UNDEFINED(8,14457) /* TWeakObjectPtr<UJunoMapViewModel*> */ __um(MapViewModel);                            // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0090   (0x0058)  MISSED
};

/// Class /Script/JunoUI.JunoMiniMapIndicator
/// Size: 0x0008 (0x000140 - 0x000148)
class UJunoMiniMapIndicator : public UFortMiniMapIndicator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0140   (0x0008)  MISSED
};

/// Class /Script/JunoUI.JunoMapMarkerIndicators
/// Size: 0x0008 (0x000148 - 0x000150)
class UJunoMapMarkerIndicators : public UJunoMiniMapIndicator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/JunoUI.JunoMapTeamIndicators
/// Size: 0x00F8 (0x000148 - 0x000240)
class UJunoMapTeamIndicators : public UJunoMiniMapIndicator
{ 
public:
	FName                                              RotationParamName;                                          // 0x0148   (0x0004)  
	FName                                              AvatarParamName;                                            // 0x014C   (0x0004)  
	FName                                              ShowDirectionParamName;                                     // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0154   (0x000C)  MISSED
	FSlateBrush                                        TeamIcon;                                                   // 0x0160   (0x00C0)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0220   (0x0008)  MISSED
	TArray<class UMaterialInstanceDynamic*>            MIDTeamIcons;                                               // 0x0228   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0238   (0x0008)  MISSED
};

/// Class /Script/JunoUI.JunoMapWidget
/// Size: 0x0020 (0x000178 - 0x000198)
class UJunoMapWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0178   (0x0010)  MISSED
	SDK_UNDEFINED(16,14458) /* FMulticastInlineDelegate */ __um(OnMapDragBlocked);                                 // 0x0188   (0x0010)  
};

/// Struct /Script/JunoUI.JunoModalSelectionChoice
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoModalSelectionChoice
{ 
	SDK_UNDEFINED(24,14459) /* FText */                __um(SelectionTitle);                                       // 0x0000   (0x0018)  
	FDataTableRowHandle                                Action;                                                     // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,14460) /* FMulticastInlineDelegate */ __um(SelectionDelegate);                                // 0x0028   (0x0010)  
};

/// Class /Script/JunoUI.JunoModalSelectionContext
/// Size: 0x0040 (0x000028 - 0x000068)
class UJunoModalSelectionContext : public UObject
{ 
public:
	SDK_UNDEFINED(24,14461) /* FText */                __um(Title);                                                // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,14462) /* FText */                __um(Description);                                          // 0x0040   (0x0018)  
	TArray<FJunoModalSelectionChoice>                  Choices;                                                    // 0x0058   (0x0010)  
};

/// Class /Script/JunoUI.JunoSelectionModal
/// Size: 0x0030 (0x000400 - 0x000430)
class UJunoSelectionModal : public UCommonActivatableWidget
{ 
public:
	class UClass*                                      SelectionButtonClass;                                       // 0x0400   (0x0008)  
	class UJunoModalSelectionContext*                  SelectionContext;                                           // 0x0408   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0410   (0x0020)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoSelectionModal.OnSetTitleAndDescription
	// void OnSetTitleAndDescription(FText& Title, FText& Description);                                                      // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoSelectionModal.OnSelectionButtonCreated
	// void OnSelectionButtonCreated(class UCommonButtonBase* NewButton, FText& SelectionTitle);                             // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoNPCStatusWidgetBase
/// Size: 0x0010 (0x0003D0 - 0x0003E0)
class UJunoNPCStatusWidgetBase : public UFortActorIndicatorWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x03D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoNPCStatusWidgetBase.OnActorHealthChanged
	// void OnActorHealthChanged(float NewHealth, float NewMaxHealth);                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoNPCStatusWidgetBase.InitializeHealthBar
	// void InitializeHealthBar(float StartingHealth, float StartingMaxHealth);                                              // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoPlayerAvatarContainer
/// Size: 0x0008 (0x000328 - 0x000330)
class UJunoPlayerAvatarContainer : public UFortHUDElementWidget
{ 
public:
	class UFortPlayerAvatarViewModel*                  PlayerAvatarViewModel;                                      // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoPlayerAvatarContainer.RepresentRemotePlayer
	// void RepresentRemotePlayer(FUniqueNetIdRepl& UniqueID, class UFortPlayerAvatarViewModel* InPlayerAvatarViewModel);    // [0xc0ad998] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoPlayerAvatarContainer.RepresentLocalPlayer
	// void RepresentLocalPlayer(class UFortPlayerAvatarViewModel* InPlayerAvatarViewModel);                                 // [0xc0ad838] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoPlayerInventoryContainer
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UJunoPlayerInventoryContainer : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(8,14463) /* TWeakObjectPtr<AFortPlayerController*> */ __um(OwningPlayer);                        // 0x02E8   (0x0008)  
	class UJunoInventoryGroup*                         Group_MainInventory;                                        // 0x02F0   (0x0008)  
	class UJunoInventoryGroup*                         Group_MainHand;                                             // 0x02F8   (0x0008)  
	class UJunoInventoryGroup*                         Group_OffHand;                                              // 0x0300   (0x0008)  
	TArray<class UJunoInventoryGroup*>                 GroupList;                                                  // 0x0308   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0318   (0x0010)  MISSED
};

/// Class /Script/JunoUI.JunoPlayerManagementScreen
/// Size: 0x0048 (0x000400 - 0x000448)
class UJunoPlayerManagementScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0400   (0x0048)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoPlayerManagementScreen.OpenSidebar
	// void OpenSidebar();                                                                                                   // [0xc0ad7b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoPlayerManagementScreen.HandleBackButtonClicked
	// void HandleBackButtonClicked();                                                                                       // [0xc0ad56c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoQuickBuildRadialPicker
/// Size: 0x0020 (0x000400 - 0x000420)
class UJunoQuickBuildRadialPicker : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UFortPickerOverlay*                          PickerOverlay_QuickBuildItems;                              // 0x0408   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_Ingredients;                                       // 0x0410   (0x0008)  
	class UJunoQuickBuildSelectionData*                QuickBuildSelectionData;                                    // 0x0418   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoQuickBuildRadialPicker.OnQuickBuildSlotSelected
	// void OnQuickBuildSlotSelected(FJunoQuickBuildSlotData& SelectedQuickBuildSlotData);                                   // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickBuildRadialPicker.CancelSelection
	// void CancelSelection();                                                                                               // [0x6f751d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoQuickBuildRadialPicker.ApplyCurrentSelection
	// void ApplyCurrentSelection();                                                                                         // [0xc0ad52c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoRecipeFilterButton
/// Size: 0x0040 (0x001490 - 0x0014D0)
class UJunoRecipeFilterButton : public UCommonButtonBase
{ 
public:
	SDK_UNDEFINED(8,14464) /* TWeakObjectPtr<AActor*> */ __um(CraftingObject);                                     // 0x1490   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x1498   (0x0010)  MISSED
	class UJunoBangWidget*                             JunoBangWidget;                                             // 0x14A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x14B0   (0x0020)  MISSED
};

/// Class /Script/JunoUI.JunoRecipeListEntry
/// Size: 0x00C0 (0x001490 - 0x001550)
class UJunoRecipeListEntry : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x1490   (0x0008)  MISSED
	class UMenuAnchor*                                 ContextMenuAnchor;                                          // 0x1498   (0x0008)  
	class UJunoBangWidget*                             JunoBangWidget;                                             // 0x14A0   (0x0008)  
	class UJunoRecipeListObject*                       RecipeListObject;                                           // 0x14A8   (0x0008)  
	class UClass*                                      ContextMenuClass;                                           // 0x14B0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x14B8   (0x0050)  MISSED
	int32_t                                            MaxCraftCount;                                              // 0x1508   (0x0004)  
	bool                                               bCanCraft;                                                  // 0x150C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x43];                                      // 0x150D   (0x0043)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoRecipeListEntry.ViewRecipe
	// void ViewRecipe();                                                                                                    // [0xc0be504] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoRecipeListEntry.SetPartsRemaining
	// void SetPartsRemaining(FJunoGuidedBuildRemainingPartsInfo& RemainingParts);                                           // [0xc0be164] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnUpdateListEntryVisuals
	// void OnUpdateListEntryVisuals();                                                                                      // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnUpdateBangVisibility
	// void OnUpdateBangVisibility(EJunoBangVisibility BangType);                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnSetRecipeInfo
	// void OnSetRecipeInfo(class UFortItemDefinition* CraftedItemDef, int32_t CraftCount, FSlateBrush& SourceIcon);         // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnRecipePinned
	// void OnRecipePinned(bool bIsPinned);                                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnLeaveContextMenuMode
	// void OnLeaveContextMenuMode(bool bUnselectSlot);                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnInitWidgetComplete
	// void OnInitWidgetComplete();                                                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnEnterContextMenuMode
	// void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot);                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnCurrentStageUpdate
	// void OnCurrentStageUpdate(FGuidedBuildingUpdate& UpdateData);                                                         // [0xc0bdd24] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                    // [0xc0bcb7c] Final|Native|Protected 
	// Function /Script/JunoUI.JunoRecipeListEntry.GetKnowledgeState
	// EJunoKnowledgeState GetKnowledgeState();                                                                              // [0xc0bc99c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoRecipeListEntry.GetCanCraft
	// bool GetCanCraft();                                                                                                   // [0xc0bc96c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoUI.JunoRecipeHeaderWidget
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UJunoRecipeHeaderWidget : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x1490   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_Name;                                                  // 0x1498   (0x0008)  
	class UJunoRecipeListObject*                       RecipeListObject;                                           // 0x14A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x14A8   (0x0008)  MISSED
};

/// Class /Script/JunoUI.JunoStandaloneCraftingInitData
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoStandaloneCraftingInitData : public UJunoHudMenuBaseInitData
{ 
public:
	SDK_UNDEFINED(8,14465) /* TWeakObjectPtr<AJunoCraftingObjectBGA*> */ __um(CraftingObject);                     // 0x0030   (0x0008)  
};

/// Class /Script/JunoUI.JunoStandaloneCraftingContainer
/// Size: 0x0008 (0x000438 - 0x000440)
class UJunoStandaloneCraftingContainer : public UJunoHudMenuBase
{ 
public:
	FName                                              UpgradeTab;                                                 // 0x0438   (0x0004)  
	FName                                              JobTab;                                                     // 0x043C   (0x0004)  


	/// Functions
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.OnUpdateCraftingStationAttachedRecipe
	// void OnUpdateCraftingStationAttachedRecipe(FText& NewAttachedRecipe);                                                 // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.OnSetCraftingStationUIEntry
	// void OnSetCraftingStationUIEntry(FJunoCraftingStationUIDataEntry CraftingStationUIEntry);                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.OnRecipeCraftingComplete
	// void OnRecipeCraftingComplete(class UFortItemDefinition* Item);                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                       // [0xc0bd2b4] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.HandleCraftingStationRecipeChanged
	// void HandleCraftingStationRecipeChanged(FName FormulaRowName);                                                        // [0xc0bd14c] Final|Native|Private 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.HandleCraftingObjectEndPlay
	// void HandleCraftingObjectEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                     // [0xc0bd018] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoStationUpgradeScreen
/// Size: 0x00A8 (0x000400 - 0x0004A8)
class UJunoStationUpgradeScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0400   (0x0030)  MISSED
	SDK_UNDEFINED(8,14466) /* TWeakObjectPtr<AJunoCraftingObjectBGA*> */ __um(CraftingObject);                     // 0x0430   (0x0008)  
	class UJunoRecipeDetailsWidget*                    RecipeDetailsWidget;                                        // 0x0438   (0x0008)  
	class UCommonButtonBase*                           Button_Craft;                                               // 0x0440   (0x0008)  
	FName                                              RecipeToCraft;                                              // 0x0448   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x044C   (0x0004)  MISSED
	class UCommonButtonBase*                           Button_Close;                                               // 0x0450   (0x0008)  
	class UCommonButtonBase*                           Button_TouchClose;                                          // 0x0458   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0460   (0x0048)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoStationUpgradeScreen.OnUpdateCraftButton
	// void OnUpdateCraftButton(EJunoCraftButtonState InButtonState, bool bIsStationUpgrade);                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoStationUpgradeScreen.OnSetCurrentCraftingRecipeIcon
	// void OnSetCurrentCraftingRecipeIcon(TWeakObjectPtr<UTexture2D*>& UpgradeIcon);                                        // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoStationUpgradeScreen.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                       // [0xc0bd35c] Native|Protected|HasOutParms 
};

/// Class /Script/JunoUI.JunoUIFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoUIFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoUI.JunoUIFunctionLibrary.ShouldShowUnacquiredBang
	// bool ShouldShowUnacquiredBang(class APlayerController* PlayerController, FName RecipeRowName);                        // [0xc0be338] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.RemoveModalScene
	// void RemoveModalScene(class APlayerController* PlayerController);                                                     // [0xc0bddb8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.NumUnviewedRecipesInCategory
	// int32_t NumUnviewedRecipesInCategory(FCountUnviewedRecipesInCategoryArgs& InArgs);                                    // [0xc0bdc08] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.NumUnviewedItemsInInventory
	// int32_t NumUnviewedItemsInInventory(class AFortPlayerController* PlayerController);                                   // [0xc0bd888] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.NumUnviewedItemsInGroup
	// int32_t NumUnviewedItemsInGroup(class AFortPlayerController* PlayerController, FGameplayTag& GroupTag);               // [0xc0bd6a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.GetRecipesFromCraftingObject
	// TArray<FName> GetRecipesFromCraftingObject(class AFortPlayerController* PlayerController, class AActor* CraftingObject, FGameplayTag& CategoryTag, FGameplayTag& SubCategoryTag, bool bOnlyKnownRecipes); // [0xc0bccc8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.GetRecipeCategoryUIData
	// FJunoCraftingCategoryUIDataEntry GetRecipeCategoryUIData(FGameplayTag& CategoryTag);                                  // [0xc0bcba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.AddModalScene
	// void AddModalScene(class APlayerController* PlayerController, FJunoModalSceneOperation& ModalScene);                  // [0xc0bc860] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoUIGameFeatureData
/// Size: 0x00F8 (0x000530 - 0x000628)
class UJunoUIGameFeatureData : public UFortGameFeatureData
{ 
public:
	SDK_UNDEFINED(32,14467) /* TWeakObjectPtr<UJunoCraftingCategoryUIData*> */ __um(CraftingCategoryUIData);       // 0x0530   (0x0020)  
	SDK_UNDEFINED(32,14468) /* TWeakObjectPtr<UJunoFreeBuildCategoryUIData*> */ __um(FreeBuildCategoryUIData);     // 0x0550   (0x0020)  
	SDK_UNDEFINED(32,14469) /* TWeakObjectPtr<UJunoInventoryUIData*> */ __um(InventoryUIData);                     // 0x0570   (0x0020)  
	SDK_UNDEFINED(32,14470) /* TWeakObjectPtr<UJunoBiomeUIData*> */ __um(BiomeUIData);                             // 0x0590   (0x0020)  
	SDK_UNDEFINED(32,14471) /* TWeakObjectPtr<UJunoVillageUIDataAsset*> */ __um(VillageUIData);                    // 0x05B0   (0x0020)  
	SDK_UNDEFINED(80,14472) /* TMap<FGameplayTag, FJunoNPCStateUIData> */ __um(NPCStateUIDataMap);                 // 0x05D0   (0x0050)  
	FDataRegistryType                                  WeaponEssenceDataRegistryType;                              // 0x0620   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0624   (0x0004)  MISSED
};

/// Class /Script/JunoUI.JunoVillageAwesomePointsIngredientWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UJunoVillageAwesomePointsIngredientWidget : public UJunoIngredientWidget
{ 
public:


	/// Functions
	// Function /Script/JunoUI.JunoVillageAwesomePointsIngredientWidget.SetAwesomePointsInfo
	// void SetAwesomePointsInfo(int32_t CurrentAwesomePoints, int32_t RequiredAwesomePoints, int32_t InEntryIndex);         // [0xc0bde68] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoVillageMenuInitData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoVillageMenuInitData : public UJunoHudMenuBaseInitData
{ 
public:
	class AJunoCampActor*                              CampActor;                                                  // 0x0030   (0x0008)  
	class UJunoCampMembershipActorComponent*           CampActorMembershipActorComponent;                          // 0x0038   (0x0008)  
	class UJunoAwesomeLevelComponent*                  AwesomeLevelComponent;                                      // 0x0040   (0x0008)  
};

/// Class /Script/JunoUI.JunoVillageMenuContainer
/// Size: 0x0010 (0x000438 - 0x000448)
class UJunoVillageMenuContainer : public UJunoHudMenuBase
{ 
public:
	FName                                              DetailsTabName;                                             // 0x0438   (0x0004)  
	FName                                              UpgradeTabName;                                             // 0x043C   (0x0004)  
	class UJunoAwesomeLevelComponent*                  AwesomeLevelComponent;                                      // 0x0440   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoVillageMenuContainer.OnAwesomeLevelChanged
	// void OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& LevelChangeData);                                             // [0xc0bdca0] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/JunoUI.JunoVillageRewardEntryInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FJunoVillageRewardEntryInfo
{ 
	int32_t                                            AwesomeLevel;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FAwesomePerkReward                                 AwesomePerkReward;                                          // 0x0008   (0x0050)  
	int32_t                                            NewVillagerSlotCount;                                       // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<class UJunoKnowledgeBundle*>                KnowledgeBundles;                                           // 0x0060   (0x0010)  
	int32_t                                            ButtonIndex;                                                // 0x0070   (0x0004)  
	int32_t                                            IndexWithinGroup;                                           // 0x0074   (0x0004)  
	int32_t                                            ButtonsWithinGroup;                                         // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/JunoUI.JunoVillageUIData
/// Size: 0x0138 (0x000000 - 0x000138)
struct FJunoVillageUIData
{ 
	SDK_UNDEFINED(24,14473) /* FText */                __um(POIName);                                              // 0x0000   (0x0018)  
	FJunoMarker                                        Marker;                                                     // 0x0018   (0x0098)  
	EJunoBiome                                         BiomeType;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	int32_t                                            AwesomeLevel;                                               // 0x00B4   (0x0004)  
	int32_t                                            MaxAwesomeLevel;                                            // 0x00B8   (0x0004)  
	int32_t                                            AwesomePoints;                                              // 0x00BC   (0x0004)  
	int32_t                                            AwesomePointGoal;                                           // 0x00C0   (0x0004)  
	int32_t                                            AwesomePointFloor;                                          // 0x00C4   (0x0004)  
	int32_t                                            AwesomePointsNeededForNextLevel;                            // 0x00C8   (0x0004)  
	float                                              AwesomeProgressToNextLevel;                                 // 0x00CC   (0x0004)  
	float                                              AwesomeEffectiveProgressToNextLevel;                        // 0x00D0   (0x0004)  
	int32_t                                            AwesomeLevelFromCurrentPoints;                              // 0x00D4   (0x0004)  
	TArray<FAwesomeLevelRewardEntry>                   AwesomeLevelRewardEntries;                                  // 0x00D8   (0x0010)  
	FJunoAwesomeUpgradeResourceCostList                CurrentUpgradeResourceCosts;                                // 0x00E8   (0x0010)  
	TArray<FAwesomePerkReward>                         UnlockedPlayerPerks;                                        // 0x00F8   (0x0010)  
	TArray<FActiveCampNPCEntry>                        ActiveNPCEntries;                                           // 0x0108   (0x0010)  
	int32_t                                            MaxNPCs;                                                    // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	SDK_UNDEFINED(16,14474) /* TArray<TWeakObjectPtr<UJunoKnowledgeBundle*>> */ __um(KnowledgeBundles);            // 0x0120   (0x0010)  
	class UFortItemDefinition*                         VillageCenterItemDefinition;                                // 0x0130   (0x0008)  
};

/// Class /Script/JunoUI.JunoVillageRewardEntry
/// Size: 0x01C0 (0x001490 - 0x001650)
class UJunoVillageRewardEntry : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x1490   (0x0008)  MISSED
	FJunoVillageRewardEntryInfo                        VillageRewardEntryInfo;                                     // 0x1498   (0x0080)  
	FJunoVillageUIData                                 ParentVillageUIData;                                        // 0x1518   (0x0138)  


	/// Functions
	// Function /Script/JunoUI.JunoVillageRewardEntry.SetVillageRewardEntryInfo
	// void SetVillageRewardEntryInfo(FJunoVillageRewardEntryInfo& InVillageRewardEntryInfo, FJunoVillageUIData& InParentVillageUIData); // [0xc0be200] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoWorldManagementUIComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJunoWorldManagementUIComponent : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/JunoUI.JunoWorldSettingsScreen
/// Size: 0x0028 (0x000400 - 0x000428)
class UJunoWorldSettingsScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0400   (0x0028)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoWorldSettingsScreen.HandleBackButtonClicked
	// void HandleBackButtonClicked();                                                                                       // [0xc0ad56c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.GridListDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGridListDataInterface : public UInterface
{ 
public:
};

/// Struct /Script/JunoUI.JunoFreeBuildCategoryUIDataEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FJunoFreeBuildCategoryUIDataEntry
{ 
	FGameplayTag                                       CategoryTag;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14475) /* TWeakObjectPtr<UTexture2D*> */ __um(CategoryIcon);                                  // 0x0008   (0x0020)  
	SDK_UNDEFINED(24,14476) /* FText */                __um(CategoryTitle);                                        // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,14477) /* FText */                __um(CategoryDescription);                                  // 0x0040   (0x0018)  
};

/// Struct /Script/JunoUI.JunoFreeBuildSubCategoryUIDataEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoFreeBuildSubCategoryUIDataEntry
{ 
	FGameplayTag                                       SubCategoryTag;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14478) /* FText */                __um(SubCategoryTitle);                                     // 0x0008   (0x0018)  
};

/// Class /Script/JunoUI.JunoFreeBuildCategoryUIData
/// Size: 0x0020 (0x000030 - 0x000050)
class UJunoFreeBuildCategoryUIData : public UDataAsset
{ 
public:
	TArray<FJunoFreeBuildCategoryUIDataEntry>          Categories;                                                 // 0x0030   (0x0010)  
	TArray<FJunoFreeBuildSubCategoryUIDataEntry>       Subcategories;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/JunoUI.GridListSlotInfo
/// Size: 0x0024 (0x000000 - 0x000024)
struct FGridListSlotInfo
{ 
	FName                                              SlotType;                                                   // 0x0000   (0x0004)  
	float                                              Height;                                                     // 0x0004   (0x0004)  
	float                                              Width;                                                      // 0x0008   (0x0004)  
	int32_t                                            ItemsPerRow;                                                // 0x000C   (0x0004)  
	FMargin                                            ItemPadding;                                                // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0020   (0x0004)  MISSED
};

/// Struct /Script/JunoUI.GridListViewInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGridListViewInfo
{ 
	class UClass*                                      UserWidgetClass;                                            // 0x0000   (0x0008)  
	FGridListSlotInfo                                  GridListSlotInfo;                                           // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/JunoUI.GridListSlotInfoContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGridListSlotInfoContainer
{ 
	TArray<FGridListSlotInfo>                          GridListInfo;                                               // 0x0000   (0x0010)  
};

/// Class /Script/JunoUI.GridListView
/// Size: 0x0040 (0x000C00 - 0x000C40)
class UGridListView : public UCommonTileView
{ 
public:
	TArray<FGridListViewInfo>                          GridListViewInfo;                                           // 0x0BF8   (0x0010)  
	bool                                               bAlwaysShowScrollbar;                                       // 0x0C08   (0x0001)  
	bool                                               bAlwaysShowScrollbarTrack;                                  // 0x0C09   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0C0A   (0x0006)  MISSED
	FVector2D                                          ScrollbarThickness;                                         // 0x0C10   (0x0010)  
	FGridListSlotInfoContainer                         GeneratedGridListSlotInfo;                                  // 0x0C20   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0C30   (0x0010)  MISSED
};

/// Class /Script/JunoUI.JunoAdjustableInventorySlot
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UJunoAdjustableInventorySlot : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x02E8   (0x0030)  MISSED
	class UCommonButtonBase*                           Button_Increase;                                            // 0x0318   (0x0008)  
	class UCommonButtonBase*                           Button_Decrease;                                            // 0x0320   (0x0008)  
	class UJunoInventorySlot*                          Container_InventorySlot;                                    // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoAdjustableInventorySlot.OnIncreaseEventHandled
	// void OnIncreaseEventHandled();                                                                                        // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoAdjustableInventorySlot.OnDecreaseEventHandled
	// void OnDecreaseEventHandled();                                                                                        // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoAdjustableInventorySlot.OnButtonsStateUpdated
	// void OnButtonsStateUpdated();                                                                                         // [0x2047e54] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoInventorySlot
/// Size: 0x0170 (0x001490 - 0x001600)
class UJunoInventorySlot : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x1490   (0x0080)  MISSED
	class UMenuAnchor*                                 ContextMenuAnchor;                                          // 0x1510   (0x0008)  
	class UJunoBangWidget*                             JunoBangWidget;                                             // 0x1518   (0x0008)  
	bool                                               bCanShowItemDetails;                                        // 0x1520   (0x0001)  
	bool                                               bSupportsTooltipDisplay;                                    // 0x1521   (0x0001)  
	bool                                               bDragAndDropAllowed;                                        // 0x1522   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x1523   (0x0005)  MISSED
	class UClass*                                      ContextMenuClass;                                           // 0x1528   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x1530   (0x0008)  MISSED
	class AActor*                                      InventoryOwner;                                             // 0x1538   (0x0008)  
	SDK_UNDEFINED(32,14479) /* TWeakObjectPtr<UObject*> */ __um(InventoryGroupIcon);                               // 0x1540   (0x0020)  
	SDK_UNDEFINED(32,14480) /* TWeakObjectPtr<UTexture2D*> */ __um(MatchingItemIcon);                              // 0x1560   (0x0020)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x1580   (0x0008)  MISSED
	FJunoItemSlot                                      SlotData;                                                   // 0x1588   (0x0050)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x15D8   (0x0028)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoInventorySlot.ShowItemDetails
	// void ShowItemDetails(bool bShow);                                                                                     // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnStackCountChanged
	// void OnStackCountChanged(int32_t StackCount, int32_t MaxStackCount);                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnShowSelected
	// void OnShowSelected(bool bInSelected);                                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnPreviewImageChanged
	// void OnPreviewImageChanged(TWeakObjectPtr<UTexture2D*>& SlotImage, bool bIsValidItem, TWeakObjectPtr<UObject*>& InInventoryGroupIcon, TWeakObjectPtr<UTexture2D*>& InMatchingItemIcon, EFortRarity ItemRarity); // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnLeaveSwappingMode
	// void OnLeaveSwappingMode();                                                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnLeaveContextMenuMode
	// void OnLeaveContextMenuMode(bool bUnselectSlot);                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnItemHasBeenViewed
	// void OnItemHasBeenViewed(bool bHasBeenPreviouslyViewed);                                                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnEnterSwappingMode
	// void OnEnterSwappingMode(EJunoSwapItemType InSwapItemType, class UFortItem* Item);                                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnEnterContextMenuMode
	// void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot);                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnEnchantmentsChanged
	// void OnEnchantmentsChanged(int32_t TotalSlots, int32_t OccupiedSlots);                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnEnabledForScreenChanged
	// void OnEnabledForScreenChanged(bool bEnabledForScreen);                                                               // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnDurabilityChanged
	// void OnDurabilityChanged(float CurrentDurability, float MaxDurability, float NormalizedDurability, bool bFromItemInitializtion); // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.HandleOnMenuOpenChanged
	// void HandleOnMenuOpenChanged(bool bIsOpen);                                                                           // [0xc0bd5e0] Final|Native|Private 
	// Function /Script/JunoUI.JunoInventorySlot.GetSlotTags
	// FGameplayTagContainer GetSlotTags();                                                                                  // [0xc0bcfd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventorySlot.GetRepresentedItem
	// class UFortItem* GetRepresentedItem();                                                                                // [0xc0bcfbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventorySlot.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                    // [0xc0bcb58] Final|Native|Private 
	// Function /Script/JunoUI.JunoInventorySlot.GetMatchingItemGameplayTags
	// FGameplayTagContainer GetMatchingItemGameplayTags();                                                                  // [0xc0bca00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoInventorySlotsInfo
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UJunoInventorySlotsInfo : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(8,14481) /* TWeakObjectPtr<AActor*> */ __um(WeakOptionalInventoryObject);                        // 0x02E8   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoInventorySlotsInfo.OnInventorySlotChanged
	// void OnInventorySlotChanged();                                                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlotsInfo.GetNumInventorySlots
	// int32_t GetNumInventorySlots(bool bOccupied);                                                                         // [0xc0bca88] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventorySlotsInfo.GetMaxInventorySlotsAvailable
	// int32_t GetMaxInventorySlotsAvailable();                                                                              // [0xc0bca3c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoUI.JunoCraftingHeaderUIDataEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoCraftingHeaderUIDataEntry
{ 
	FGameplayTag                                       HeaderTag;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14482) /* FText */                __um(HeaderText);                                           // 0x0008   (0x0018)  
};

/// Struct /Script/JunoUI.JunoCraftingSubCategoryUIDataEntry
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoCraftingSubCategoryUIDataEntry
{ 
	FGameplayTag                                       CategoryTag;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14483) /* TWeakObjectPtr<UTexture2D*> */ __um(CategoryIcon);                                  // 0x0008   (0x0020)  
	SDK_UNDEFINED(24,14484) /* FText */                __um(CategoryTitle);                                        // 0x0028   (0x0018)  
	TArray<FJunoCraftingHeaderUIDataEntry>             Headers;                                                    // 0x0040   (0x0010)  
	TArray<EJunoRecipeSortType>                        SortingPreferences;                                         // 0x0050   (0x0010)  
};

/// Struct /Script/JunoUI.JunoCraftingCategoryUIDataEntry
/// Size: 0x0070 (0x000000 - 0x000070)
struct FJunoCraftingCategoryUIDataEntry
{ 
	FGameplayTag                                       CategoryTag;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14485) /* TWeakObjectPtr<UTexture2D*> */ __um(CategoryIcon);                                  // 0x0008   (0x0020)  
	SDK_UNDEFINED(24,14486) /* FText */                __um(CategoryTitle);                                        // 0x0028   (0x0018)  
	TArray<FJunoCraftingHeaderUIDataEntry>             Headers;                                                    // 0x0040   (0x0010)  
	TArray<FJunoCraftingSubCategoryUIDataEntry>        Subcategories;                                              // 0x0050   (0x0010)  
	TArray<EJunoRecipeSortType>                        SortingPreferences;                                         // 0x0060   (0x0010)  
};

/// Struct /Script/JunoUI.JunoCraftingStationUIDataEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FJunoCraftingStationUIDataEntry
{ 
	FGameplayTag                                       SourceTag;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14487) /* TWeakObjectPtr<UClass*> */ __um(CraftingObjectRef);                                 // 0x0008   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FSlateBrush                                        CraftStationIcon;                                           // 0x0030   (0x00C0)  
};

/// Class /Script/JunoUI.JunoCraftingCategoryUIData
/// Size: 0x0040 (0x000030 - 0x000070)
class UJunoCraftingCategoryUIData : public UDataAsset
{ 
public:
	TArray<FJunoCraftingCategoryUIDataEntry>           Entries;                                                    // 0x0030   (0x0010)  
	TArray<FJunoCraftingStationUIDataEntry>            Stations;                                                   // 0x0040   (0x0010)  
	FGameplayTagContainer                              IgnoredCraftingCategories;                                  // 0x0050   (0x0020)  
};

/// Class /Script/JunoUI.JunoRecipeListObject
/// Size: 0x0030 (0x000028 - 0x000058)
class UJunoRecipeListObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0028   (0x0020)  MISSED
	SDK_UNDEFINED(8,14488) /* TWeakObjectPtr<AActor*> */ __um(CraftingObject);                                     // 0x0048   (0x0008)  
	SDK_UNDEFINED(8,14489) /* TWeakObjectPtr<UJunoRecipeScreenBase*> */ __um(RecipeScreen);                        // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoRecipeListObject.GetIsRecipeBeingCrafted
	// bool GetIsRecipeBeingCrafted();                                                                                       // [0xbb1b1b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoRecipeScreenBase
/// Size: 0x00D0 (0x000400 - 0x0004D0)
class UJunoRecipeScreenBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0400   (0x0030)  MISSED
	SDK_UNDEFINED(8,14490) /* TWeakObjectPtr<AActor*> */ __um(CraftingObject);                                     // 0x0430   (0x0008)  
	class UJunoRecipeDetailsWidget*                    RecipeDetailsWidget;                                        // 0x0438   (0x0008)  
	class UCommonButtonBase*                           Button_TouchSelect;                                         // 0x0440   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0448   (0x0008)  
	class UCommonButtonBase*                           Button_TouchClose;                                          // 0x0450   (0x0008)  
	class UGridListView*                               RecipeList;                                                 // 0x0458   (0x0008)  
	FGameplayTag                                       HeaderPrefix;                                               // 0x0460   (0x0004)  
	bool                                               UpdateRecipeDetailsOnHover;                                 // 0x0464   (0x0001)  
	bool                                               SkipSortOnInventoryChange;                                  // 0x0465   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0466   (0x0002)  MISSED
	SDK_UNDEFINED(8,14491) /* TWeakObjectPtr<UObject*> */ __um(WeakSelectedRecipe);                                // 0x0468   (0x0008)  
	TArray<class UJunoRecipeListObject*>               CurrentRecipes;                                             // 0x0470   (0x0010)  
	class UClass*                                      FilterTabWidget;                                            // 0x0480   (0x0008)  
	FName                                              HeaderEntryType;                                            // 0x0488   (0x0004)  
	FName                                              RecipeEntryType;                                            // 0x048C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0490   (0x0040)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoRecipeScreenBase.OnRecipeListUpdated
	// void OnRecipeListUpdated();                                                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoUIGameFeatureAction_AddHUDMenuTab
/// Size: 0x0070 (0x000028 - 0x000098)
class UJunoUIGameFeatureAction_AddHUDMenuTab : public UFortUIGameFeatureAction
{ 
public:
	FName                                              TabNameID;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(24,14492) /* FText */                __um(TabDisplayName);                                       // 0x0030   (0x0018)  
	SDK_UNDEFINED(32,14493) /* TWeakObjectPtr<UClass*> */ __um(TabButtonType);                                     // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,14494) /* TWeakObjectPtr<UClass*> */ __um(TabContentType);                                    // 0x0068   (0x0020)  
	SDK_UNDEFINED(16,14495) /* FString */              __um(OptionalBooleanGatingCVar);                            // 0x0088   (0x0010)  
};

/// Class /Script/JunoUI.JunoBedAssignmentScreen
/// Size: 0x0078 (0x000400 - 0x000478)
class UJunoBedAssignmentScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	FGameplayTag                                       AssignPlayerActionGameplayTag;                              // 0x0408   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x040C   (0x0004)  MISSED
	SDK_UNDEFINED(24,14496) /* FText */                __um(AssignPlayerCharacterDisplayText);                     // 0x0410   (0x0018)  
	SDK_UNDEFINED(32,14497) /* TWeakObjectPtr<UTexture2D*> */ __um(AssignPlayerCharacterIcon);                     // 0x0428   (0x0020)  
	class UCommonButtonBase*                           BackButton;                                                 // 0x0448   (0x0008)  
	class UCommonButtonBase*                           CloseButton;                                                // 0x0450   (0x0008)  
	class UListView*                                   Characters_List;                                            // 0x0458   (0x0008)  
	TArray<class UJunoBedAssignmentListObject*>        CharacterListObjects;                                       // 0x0460   (0x0010)  
	class AActor*                                      BedObject;                                                  // 0x0470   (0x0008)  
};

/// Class /Script/JunoUI.JunoBuildingScreen
/// Size: 0x01E8 (0x0004D0 - 0x0006B8)
class UJunoBuildingScreen : public UJunoRecipeScreenBase
{ 
public:
	FName                                              PreviewRecipe;                                              // 0x04D0   (0x0004)  
	FGameplayTag                                       PrimaryCategoryPrefix;                                      // 0x04D4   (0x0004)  
	FGameplayTag                                       SecondaryCategoryPrefix;                                    // 0x04D8   (0x0004)  
	bool                                               bSortPriorityAscending;                                     // 0x04DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04DD   (0x0003)  MISSED
	class UFortTabListWidgetBase*                      TabList_PrimaryCategories;                                  // 0x04E0   (0x0008)  
	class UFortTabListWidgetBase*                      TabList_SecondaryCategories;                                // 0x04E8   (0x0008)  
	class UCommonButtonBase*                           Button_AssignBuildingBarSlot;                               // 0x04F0   (0x0008)  
	FDataTableRowHandle                                CloseScreenAction;                                          // 0x04F8   (0x0010)  
	float                                              PreviewWaitTime;                                            // 0x0508   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x050C   (0x0004)  MISSED
	TArray<EJunoRecipeSortType>                        DefaultSortingPreferences;                                  // 0x0510   (0x0010)  
	unsigned char                                      UnknownData02_6[0x198];                                     // 0x0520   (0x0198)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoBuildingScreen.OnSecondaryCategoriesChanged
	// void OnSecondaryCategoriesChanged(bool bHasSecondaryCategories);                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingScreen.OnRecipeHovered
	// void OnRecipeHovered();                                                                                               // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingScreen.OnGuidedBuildingSnapsUpdated
	// void OnGuidedBuildingSnapsUpdated(TArray<int32_t>& UpdatedSnaps);                                                     // [0xc0f5e24] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoBuildingScreen.OnGuidedBuildingSetComplete
	// void OnGuidedBuildingSetComplete(FGuidedBuildingUpdate& UpdateData);                                                  // [0xc0f5da0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoBuildingScreen.HasPreviewRecipe
	// bool HasPreviewRecipe();                                                                                              // [0xc0f5bc8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBuildingScreen.HandleSecondaryTabTransitionComplete
	// void HandleSecondaryTabTransitionComplete();                                                                          // [0xc0f5ba4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoBuildingScreen.HandleSecondaryCategorySelected
	// void HandleSecondaryCategorySelected(FName TabID);                                                                    // [0xc0f5ae4] Final|Native|Private 
	// Function /Script/JunoUI.JunoBuildingScreen.HandlePrimaryCategorySelected
	// void HandlePrimaryCategorySelected(FName TabID);                                                                      // [0xc0f5a10] Final|Native|Private 
	// Function /Script/JunoUI.JunoBuildingScreen.HandleBackClicked
	// void HandleBackClicked();                                                                                             // [0x6f23004] Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoBuildingScreen.GetWidgetFromItem
	// class UJunoRecipeListEntry* GetWidgetFromItem(class UObject* Item);                                                   // [0xc0f5744] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBuildingScreen.GetSecondaryCategoryUIData
	// bool GetSecondaryCategoryUIData(FName PrimaryTabId, FName SecondaryTabId, FJunoCraftingSubCategoryUIDataEntry& OutSecondaryCategoryUIData); // [0xc0f55a4] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBuildingScreen.GetPrimaryCategoryUIData
	// bool GetPrimaryCategoryUIData(FName PrimaryTabId, FJunoCraftingCategoryUIDataEntry& OutPrimaryCategoryUIData);        // [0xc0f5454] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBuildingScreen.GetCraftingObject
	// class AActor* GetCraftingObject();                                                                                    // [0xc0f52a4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoCraftingScreen
/// Size: 0x01D8 (0x0004D0 - 0x0006A8)
class UJunoCraftingScreen : public UJunoRecipeScreenBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x04D0   (0x0010)  MISSED
	FName                                              SelectedRecipe;                                             // 0x04E0   (0x0004)  
	FName                                              AttachedRecipe;                                             // 0x04E4   (0x0004)  
	ECraftingStationsInventoryState                    CraftingStationInventoryState;                              // 0x04E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x04E9   (0x0007)  MISSED
	class UDynamicUIScene*                             ConfirmationModalScene;                                     // 0x04F0   (0x0008)  
	SDK_UNDEFINED(24,14498) /* FText */                __um(CancelJobConfirmationTitle);                           // 0x04F8   (0x0018)  
	SDK_UNDEFINED(24,14499) /* FText */                __um(CancelJobConfirmationDescription);                     // 0x0510   (0x0018)  
	SDK_UNDEFINED(24,14500) /* FText */                __um(CancelJobConfirmButtonText);                           // 0x0528   (0x0018)  
	SDK_UNDEFINED(24,14501) /* FText */                __um(CancelJobCancelButtonText);                            // 0x0540   (0x0018)  
	FGameplayTag                                       CategoryTagPrefix;                                          // 0x0558   (0x0004)  
	FGameplayTag                                       TypeTagPrefix;                                              // 0x055C   (0x0004)  
	class UCommonButtonBase*                           Button_Craft;                                               // 0x0560   (0x0008)  
	class UCommonButtonBase*                           Button_SelectRecipe;                                        // 0x0568   (0x0008)  
	class UCommonButtonBase*                           Button_QuickDeposit;                                        // 0x0570   (0x0008)  
	class UCommonButtonBase*                           Button_RemoveAll;                                           // 0x0578   (0x0008)  
	class UCommonButtonBase*                           Button_WithdrawOutput;                                      // 0x0580   (0x0008)  
	class UFortTabListWidgetBase*                      TabList_Categories;                                         // 0x0588   (0x0008)  
	unsigned char                                      UnknownData02_5[0xA0];                                      // 0x0590   (0x00A0)  MISSED
	class UWidget*                                     Container_PassiveSlots;                                     // 0x0630   (0x0008)  
	class UJunoInventoryGroup*                         InventoryGroup_Input;                                       // 0x0638   (0x0008)  
	class UJunoInventoryGroup*                         InventoryGroup_Output;                                      // 0x0640   (0x0008)  
	FDataTableRowHandle                                ModalConfirmAction;                                         // 0x0648   (0x0010)  
	FDataTableRowHandle                                ModalCancelAction;                                          // 0x0658   (0x0010)  
	class UJunoPassiveCraftingComponent*               JunoPassiveCraftingComponent;                               // 0x0668   (0x0008)  
	class UJunoControllerComponent_CraftingNetworkEvents* CraftingEventComp;                                       // 0x0670   (0x0008)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x0678   (0x0030)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoCraftingScreen.OnWithdrawStateUpdated
	// void OnWithdrawStateUpdated(bool bWithdrawEnabled);                                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnUpdateSelectRecipeButton
	// void OnUpdateSelectRecipeButton(ESelectRecipeButtonState InButtonState);                                              // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnUpdatePassiveCraftingProgress
	// void OnUpdatePassiveCraftingProgress(int32_t ItemsToCraft);                                                           // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnUpdateCraftingStationInventoryState
	// void OnUpdateCraftingStationInventoryState(ECraftingStationsInventoryState StationInventoryState);                    // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnUpdateCraftButton
	// void OnUpdateCraftButton(EJunoCraftButtonState InButtonState);                                                        // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnPassiveScreenFocusChange
	// void OnPassiveScreenFocusChange(bool bInputSlotsFocused);                                                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                       // [0xc0f5968] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoCraftingScreen.HandleCategorySelected
	// void HandleCategorySelected(FName TabID);                                                                             // [0xc0f58a8] Final|Native|Protected 
	// Function /Script/JunoUI.JunoCraftingScreen.HandleAttachNewRecipeConfirmed
	// void HandleAttachNewRecipeConfirmed();                                                                                // [0xc0f5894] Final|Native|Private 
	// Function /Script/JunoUI.JunoCraftingScreen.HandleAttachNewRecipeCancelled
	// void HandleAttachNewRecipeCancelled();                                                                                // [0xc0f5880] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoInventoryGroup
/// Size: 0x0070 (0x0002E8 - 0x000358)
class UJunoInventoryGroup : public UCommonUserWidget
{ 
public:
	TArray<class UJunoInventorySlot*>                  TrackedInventorySlots;                                      // 0x02E8   (0x0010)  
	TArray<class UJunoAdjustableInventorySlot*>        CraftingInputInventorySlots;                                // 0x02F8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0308   (0x0008)  MISSED
	SDK_UNDEFINED(32,14502) /* TWeakObjectPtr<UObject*> */ __um(GroupIcon);                                        // 0x0310   (0x0020)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0330   (0x0010)  MISSED
	class UUniformGridPanel*                           GridPanel_Slots;                                            // 0x0340   (0x0008)  
	class UClass*                                      InventorySlotClass;                                         // 0x0348   (0x0008)  
	class UClass*                                      CraftingInputInventorySlotClass;                            // 0x0350   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoInventoryGroup.OnSetGroupName
	// void OnSetGroupName(FText& InGroupName);                                                                              // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryGroup.GetInventorySlot
	// class UJunoInventorySlot* GetInventorySlot(int32_t RowIndex, int32_t ColumnIndex);                                    // [0xc0f5308] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventoryGroup.GetFirstSlot
	// class UJunoInventorySlot* GetFirstSlot();                                                                             // [0xc0f52e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoInventoryScreen
/// Size: 0x01E8 (0x000400 - 0x0005E8)
class UJunoInventoryScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0400   (0x0030)  MISSED
	SDK_UNDEFINED(24,14503) /* FText */                __um(MoveAllProgressTitle);                                 // 0x0430   (0x0018)  
	SDK_UNDEFINED(24,14504) /* FText */                __um(MoveAllProgressDescription);                           // 0x0448   (0x0018)  
	SDK_UNDEFINED(24,14505) /* FText */                __um(MergeAllProgressTitle);                                // 0x0460   (0x0018)  
	SDK_UNDEFINED(24,14506) /* FText */                __um(MergeAllProgressDescription);                          // 0x0478   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0490   (0x0008)  MISSED
	class UJunoInventorySlot*                          LastSelectedSlot;                                           // 0x0498   (0x0008)  
	class UJunoInventorySlot*                          LastHoveredSlot;                                            // 0x04A0   (0x0008)  
	SDK_UNDEFINED(8,14507) /* TWeakObjectPtr<AActor*> */ __um(WeakOtherInventoryActor);                            // 0x04A8   (0x0008)  
	class UJunoInventoryGroup*                         Group_ObjectInventory;                                      // 0x04B0   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_AllSlots;                                       // 0x04B8   (0x0008)  
	class UClass*                                      InventoryGroupClass;                                        // 0x04C0   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x04C8   (0x0008)  
	class UCommonButtonBase*                           WBP_Juno_CloseButton_Touch;                                 // 0x04D0   (0x0008)  
	class UCommonButtonBase*                           Button_MoreActions;                                         // 0x04D8   (0x0008)  
	class UCommonButtonBase*                           Button_Equip;                                               // 0x04E0   (0x0008)  
	class UCommonButtonBase*                           Button_Unequip;                                             // 0x04E8   (0x0008)  
	class UCommonButtonBase*                           Button_MoveToInventory;                                     // 0x04F0   (0x0008)  
	class UCommonButtonBase*                           Button_MoveToMainHand;                                      // 0x04F8   (0x0008)  
	class UCommonButtonBase*                           Button_MoveToOffHand;                                       // 0x0500   (0x0008)  
	class UCommonButtonBase*                           Button_Drop;                                                // 0x0508   (0x0008)  
	class UCommonButtonBase*                           Button_TakeAll;                                             // 0x0510   (0x0008)  
	class UCommonButtonBase*                           Button_Merge;                                               // 0x0518   (0x0008)  
	class UCommonButtonBase*                           Button_TakeStack;                                           // 0x0520   (0x0008)  
	class UCommonButtonBase*                           Button_DepositStack;                                        // 0x0528   (0x0008)  
	class UDynamicUIScene*                             ModalProgressScene;                                         // 0x0530   (0x0008)  
	FDataTableRowHandle                                CancelAction;                                               // 0x0538   (0x0010)  
	FDataTableRowHandle                                BackAction;                                                 // 0x0548   (0x0010)  
	FDataTableRowHandle                                CloseScreenAction;                                          // 0x0558   (0x0010)  
	class UJunoPlayerInventoryContainer*               Container_PlayerInventory;                                  // 0x0568   (0x0008)  
	class UJunoInventoryGroup*                         Group_PlayerGear;                                           // 0x0570   (0x0008)  
	class UNamedSlot*                                  NamedSlot_ObjectInventory;                                  // 0x0578   (0x0008)  
	float                                              ItemsModificationProgressMinimumWaitTimeSeconds;            // 0x0580   (0x0004)  
	unsigned char                                      UnknownData02_5[0x5C];                                      // 0x0584   (0x005C)  MISSED
	class UJunoInventoryDragAndDropHandler*            JunoInventoryDragAndDropHandler;                            // 0x05E0   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoInventoryScreen.OnSlotItemSelected
	// void OnSlotItemSelected(class UFortItem* Item);                                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryScreen.OnMoveAllItemsStatusChanged
	// void OnMoveAllItemsStatusChanged(bool bStarted);                                                                      // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryScreen.OnMergeAllItemsStatusChanged
	// void OnMergeAllItemsStatusChanged(bool bStarted);                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryScreen.OnInventoryObjectUpdated
	// void OnInventoryObjectUpdated(bool bInventoryObjectPresent);                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryScreen.GetCurrentModalOperation
	// EJunoInventoryModalOperation GetCurrentModalOperation();                                                              // [0xc0f52cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoHudMenu
/// Size: 0x0008 (0x000438 - 0x000440)
class UJunoHudMenu : public UJunoHudMenuBase
{ 
public:
	class UCommonButtonBase*                           Button_ItemShop;                                            // 0x0438   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoHudMenu.ShouldShowPlayersTab
	// bool ShouldShowPlayersTab();                                                                                          // [0xc0ac114] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/JunoUI.JunoInventoryDragAndDropHandler
/// Size: 0x0058 (0x000028 - 0x000080)
class UJunoInventoryDragAndDropHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0028   (0x0030)  MISSED
	SDK_UNDEFINED(8,14508) /* TWeakObjectPtr<UCommonButtonGroupBase*> */ __um(WeakButtonGroup_InventorySlots);     // 0x0058   (0x0008)  
	SDK_UNDEFINED(8,14509) /* TWeakObjectPtr<AFortPlayerController*> */ __um(WeakOwningPlayer);                    // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UJunoInventorySlot*                          SourceInventorySlot;                                        // 0x0070   (0x0008)  
	class UJunoInventorySlot*                          DestinationInventorySlot;                                   // 0x0078   (0x0008)  
};

/// Class /Script/JunoUI.JunoMapMarkerCustomizationEntry
/// Size: 0x0070 (0x001490 - 0x001500)
class UJunoMapMarkerCustomizationEntry : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x1490   (0x0010)  MISSED
	SDK_UNDEFINED(32,14510) /* TWeakObjectPtr<UTexture*> */ __um(Icon);                                            // 0x14A0   (0x0020)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x14C0   (0x0010)  MISSED
	class UFortLazyImage*                              Image_MarkerIcon;                                           // 0x14D0   (0x0008)  
	class UBorder*                                     ColorBorder;                                                // 0x14D8   (0x0008)  
	class UImage*                                      Checkmark;                                                  // 0x14E0   (0x0008)  
	FLinearColor                                       IconEntryBackgroundColor;                                   // 0x14E8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x14F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoMapMarkerCustomizationEntry.OnEntryInitialized
	// void OnEntryInitialized(FJunoMapMarkerEntryInitData EntryInitData);                                                   // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoMapMarkerCustomizationScreen
/// Size: 0x0060 (0x000400 - 0x000460)
class UJunoMapMarkerCustomizationScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UJunoMapMarkerCustomizationEntry*            SelectedColor;                                              // 0x0408   (0x0008)  
	class UJunoMapMarkerCustomizationEntry*            SelectedIcon;                                               // 0x0410   (0x0008)  
	class UClass*                                      EntryClass;                                                 // 0x0418   (0x0008)  
	FName                                              ColorParamName;                                             // 0x0420   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0424   (0x0004)  MISSED
	class UDynamicEntryBox*                            ColorPanel;                                                 // 0x0428   (0x0008)  
	class UDynamicEntryBox*                            IconPanel;                                                  // 0x0430   (0x0008)  
	class UCommonButtonBase*                           ConfirmButton;                                              // 0x0438   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_AllIconSlots;                                   // 0x0440   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_AllColorSlots;                                  // 0x0448   (0x0008)  
	class UFortLazyImage*                              Image_PreviewMarker;                                        // 0x0450   (0x0008)  
	class UJunoMapMarkerCustomizationInitData*         InitData;                                                   // 0x0458   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoMapMarkerCustomizationScreen.SetPreviewMarkerMaterial
	// void SetPreviewMarkerMaterial();                                                                                      // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoMapMarkerCustomizationScreen.SetMarkerNameText
	// void SetMarkerNameText(FText& Name);                                                                                  // [0x2047e54] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoVillageScreenBase
/// Size: 0x0190 (0x000400 - 0x000590)
class UJunoVillageScreenBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0400   (0x0030)  MISSED
	class UCommonButtonBase*                           Button_Back;                                                // 0x0430   (0x0008)  
	class UCommonButtonBase*                           Button_Close;                                               // 0x0438   (0x0008)  
	FJunoVillageUIData                                 VillageUIData;                                              // 0x0440   (0x0138)  
	class AJunoCampActor*                              CampActor;                                                  // 0x0578   (0x0008)  
	class UJunoCampMembershipActorComponent*           CampMembershipActorComponent;                               // 0x0580   (0x0008)  
	class UJunoAwesomeLevelComponent*                  AwesomeLevelComponent;                                      // 0x0588   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoVillageScreenBase.OnVillageDataChanged
	// void OnVillageDataChanged();                                                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoVillageScreenBase.OnAwesomePointsModified
	// void OnAwesomePointsModified(FJunoAwesomePointModificationData& PointModificationData);                               // [0xc0f5c78] Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoVillageScreenBase.OnAwesomeLevelChanged
	// void OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& LevelChangeData);                                             // [0xc0f5be4] Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoVillageScreenBase.BP_OnAwesomePointsChanged
	// void BP_OnAwesomePointsChanged(FJunoAwesomePointModificationData& Data);                                              // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoVillageScreenBase.BP_OnAwesomeLevelChanged
	// void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& Data);                                                     // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoVillageDetailsScreen
/// Size: 0x00A8 (0x000590 - 0x000638)
class UJunoVillageDetailsScreen : public UJunoVillageScreenBase
{ 
public:
	class UCommonButtonBase*                           Button_RemoveVillage;                                       // 0x0590   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_AllRewards;                                     // 0x0598   (0x0008)  
	class UDynamicEntryBox*                            RewardList;                                                 // 0x05A0   (0x0008)  
	class UJunoVillageRewardEntry*                     LastHoveredEntry;                                           // 0x05A8   (0x0008)  
	class UDynamicUIScene*                             RemoveVillageModalScene;                                    // 0x05B0   (0x0008)  
	SDK_UNDEFINED(24,14511) /* FText */                __um(RemoveVillageConfirmationTitle);                       // 0x05B8   (0x0018)  
	SDK_UNDEFINED(24,14512) /* FText */                __um(RemoveVillageConfirmationDescription);                 // 0x05D0   (0x0018)  
	SDK_UNDEFINED(24,14513) /* FText */                __um(RemoveVillageConfirmButtonText);                       // 0x05E8   (0x0018)  
	SDK_UNDEFINED(24,14514) /* FText */                __um(RemoveVillageCancelButtonText);                        // 0x0600   (0x0018)  
	FDataTableRowHandle                                ModalConfirmAction;                                         // 0x0618   (0x0010)  
	FDataTableRowHandle                                ModalCancelAction;                                          // 0x0628   (0x0010)  


	/// Functions
	// Function /Script/JunoUI.JunoVillageDetailsScreen.OnEntryHovered
	// void OnEntryHovered(class UJunoVillageRewardEntry* Entry);                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoVillageDetailsScreen.HandleRemoveVillageConfirmed
	// void HandleRemoveVillageConfirmed();                                                                                  // [0xc0f5ad0] Final|Native|Protected 
	// Function /Script/JunoUI.JunoVillageDetailsScreen.HandleRemoveVillageCancelled
	// void HandleRemoveVillageCancelled();                                                                                  // [0xc0f5880] Final|Native|Protected 
};

/// Class /Script/JunoUI.JunoVillageUIDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoVillageUIDataAsset : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14515) /* TMap<FGameplayTag, TWeakObjectPtr<UTexture2D*>> */ __um(PerkTagToIcon);             // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/JunoUI.JunoVillageUIDataAsset.FindPerkImage
	// TWeakObjectPtr<UTexture2D*> FindPerkImage(FGameplayTagContainer& InTagContainer);                                     // [0xc0f51c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoUI.JunoVillageUpgradeCelebrationScreen
/// Size: 0x0000 (0x000328 - 0x000328)
class UJunoVillageUpgradeCelebrationScreen : public UFortHUDElementWidget
{ 
public:
};

/// Class /Script/JunoUI.JunoVillageUpgradeScreen
/// Size: 0x0028 (0x000590 - 0x0005B8)
class UJunoVillageUpgradeScreen : public UJunoVillageScreenBase
{ 
public:
	class UCommonButtonBase*                           Button_Upgrade;                                             // 0x0590   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_Ingredients;                                       // 0x0598   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_Perks;                                             // 0x05A0   (0x0008)  
	class UScrollBox*                                  ScrollBox_Rewards;                                          // 0x05A8   (0x0008)  
	class UScrollBox*                                  ScrollBox_Requirements;                                     // 0x05B0   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoVillageUpgradeScreen.OnUpgrade
	// void OnUpgrade();                                                                                                     // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoGuidedBuildingHudBar
/// Size: 0x0000 (0x000388 - 0x000388)
class UJunoGuidedBuildingHudBar : public UJunoBuildingBarHud
{ 
public:
};

/// Class /Script/JunoUI.JunoGuidedBuildingHudBarSlot
/// Size: 0x0000 (0x000300 - 0x000300)
class UJunoGuidedBuildingHudBarSlot : public UJunoBuildingBarHudSlot
{ 
public:
};

/// Class /Script/JunoUI.JunoGuidedBuildingHudStateWidget
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UJunoGuidedBuildingHudStateWidget : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(8,14516) /* TWeakObjectPtr<AJunoGuidedBuildingActor*> */ __um(CurrentGuidedBuildingActor);       // 0x02E8   (0x0008)  
	float                                              AutoHideTimeLength;                                         // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x02F4   (0x0044)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.ShowWidget
	// void ShowWidget();                                                                                                    // [0xa013338] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnStageComplete
	// void OnStageComplete(FGuidedBuildingUpdate& UpdateData);                                                              // [0xc0f6080] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnSnapsUpdated
	// void OnSnapsUpdated(TArray<int32_t>& UpdatedSnaps);                                                                   // [0xc0f5fe0] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnSetComplete
	// void OnSetComplete(FGuidedBuildingUpdate& UpdateData);                                                                // [0xc0f5f4c] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnSectionComplete
	// void OnSectionComplete(FGuidedBuildingUpdate& UpdateData);                                                            // [0xc0f5eb8] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnCurrentStageUpdate
	// void OnCurrentStageUpdate(FGuidedBuildingUpdate& UpdateData);                                                         // [0xc0f5d0c] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnAutoHideTimereFinished
	// void OnAutoHideTimereFinished();                                                                                      // [0x1fda954] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.HideWidget
	// void HideWidget();                                                                                                    // [0xba06528] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoEquipmentWidget
/// Size: 0x0060 (0x000328 - 0x000388)
class UJunoEquipmentWidget : public UFortHUDElementWidget
{ 
public:
	class UJunoInventorySlot*                          InventorySlot_Item;                                         // 0x0328   (0x0008)  
	FJunoItemSlot                                      ItemSlotData;                                               // 0x0330   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0380   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoEquipmentWidget.OnSlotItemChanged
	// void OnSlotItemChanged(EJunoItemChangeType ChangeType, class UFortItem* SlotItem);                                    // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoGliderWidget
/// Size: 0x0018 (0x000328 - 0x000340)
class UJunoGliderWidget : public UFortHUDElementWidget
{ 
public:
	class UWidget*                                     MainContent;                                                // 0x0328   (0x0008)  
	class UOverlay*                                    Overlay_MainContent;                                        // 0x0330   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0338   (0x0008)  MISSED
};

/// Class /Script/JunoUI.JunoIndicatorLayerManagerWidget
/// Size: 0x0178 (0x000328 - 0x0004A0)
class UJunoIndicatorLayerManagerWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UFortActorCanvas*                            GeneralIndicators;                                          // 0x0330   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0338   (0x0008)  MISSED
	int32_t                                            PlayerIndicatorPoolSize;                                    // 0x0340   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	FUserWidgetPool                                    IndicatorPool;                                              // 0x0348   (0x0088)  
	class UJunoLocalPlayerViewModel*                   LocalPlayerViewModel;                                       // 0x03D0   (0x0008)  
	class UClass*                                      PlayerIndicatorClass;                                       // 0x03D8   (0x0008)  
	class UFortActorCanvas*                            PlayerIndicators;                                           // 0x03E0   (0x0008)  
	float                                              MinimumInFocusRadius;                                       // 0x03E8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x03EC   (0x0004)  MISSED
	SDK_UNDEFINED(80,14517) /* TMap<FGameplayTag, UClass*> */ __um(NPCIndicatorClasses);                           // 0x03F0   (0x0050)  
	int32_t                                            NPCHealthPoolSize;                                          // 0x0440   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0444   (0x0004)  MISSED
	class UClass*                                      NPCHealthWidgetClass;                                       // 0x0448   (0x0008)  
	SDK_UNDEFINED(80,14518) /* TSet<AActor*> */        __um(KnownNPCHealthOwners);                                 // 0x0450   (0x0050)  
};

/// Class /Script/JunoUI.JunoInteractionIndicatorWidget
/// Size: 0x0018 (0x0003D0 - 0x0003E8)
class UJunoInteractionIndicatorWidget : public UFortActorIndicatorWidget
{ 
public:
	class UFortInteractContextInfo*                    CurrentContextInfo;                                         // 0x03D0   (0x0008)  
	class UFortKeybindWidget*                          KeybindWidget;                                              // 0x03D8   (0x0008)  
	class UCommonTextBlock*                            Text_KeyBindName;                                           // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoInteractionIndicatorWidget.OnShowPickup
	// void OnShowPickup(class AFortPickup* InCurrentPickup);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInteractionIndicatorWidget.OnShowBasicInteraction
	// void OnShowBasicInteraction(FText& Description, FLinearColor DescriptionColor, int32_t InteractionCount);             // [0x2047e54] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoLocalPlayerViewModel
/// Size: 0x0038 (0x000188 - 0x0001C0)
class UJunoLocalPlayerViewModel : public UFortPlayerViewModel
{ 
public:
	SDK_UNDEFINED(8,14519) /* TWeakObjectPtr<AFortPlayerControllerAthena*> */ __um(TrackedPlayerController);       // 0x0188   (0x0008)  
	SDK_UNDEFINED(16,14520) /* TArray<TWeakObjectPtr<AFortPlayerState*>> */ __um(CachedPlayerStates);              // 0x0190   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x01A0   (0x0020)  MISSED
};

/// Class /Script/JunoUI.JunoMapViewModel
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UJunoMapViewModel : public UFortPerUserViewModel
{ 
public:
	SDK_UNDEFINED(80,14521) /* TMap<FUniqueNetIdRepl, UFortPlayerAvatarViewModel*> */ __um(TeamPlayerAvatarViewModels); // 0x0070   (0x0050)  
	class UFortPlayerAvatarViewModel*                  LocalPlayerAvatarViewModel;                                 // 0x00C0   (0x0008)  
};

/// Struct /Script/JunoUI.JunoNotificationData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoNotificationData
{ 
	FGameplayTag                                       NotificationType;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<class UFortItemDefinition*>                 ItemDefinitions;                                            // 0x0008   (0x0010)  
	FGameplayTagContainer                              AdditionalTags;                                             // 0x0018   (0x0020)  
	SDK_UNDEFINED(16,14522) /* FString */              __um(PlayerName);                                           // 0x0038   (0x0010)  
	class UObject*                                     InitObject;                                                 // 0x0048   (0x0008)  
};

/// Class /Script/JunoUI.JunoNotificationWidget
/// Size: 0x0058 (0x000400 - 0x000458)
class UJunoNotificationWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0400   (0x0040)  MISSED
	FFortPrioritizedWidgetData                         PrioData;                                                   // 0x0440   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0442   (0x0006)  MISSED
	TArray<FJunoNotificationData>                      QueuedNotifications;                                        // 0x0448   (0x0010)  


	/// Functions
	// Function /Script/JunoUI.JunoNotificationWidget.OnNotificationFinished
	// void OnNotificationFinished();                                                                                        // [0xc107068] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoNotificationWidget.BP_DisplayNotification
	// void BP_DisplayNotification(FJunoNotificationData& NotificationData);                                                 // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoNotificationHostWidget
/// Size: 0x00D0 (0x000328 - 0x0003F8)
class UJunoNotificationHostWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UFortPrioritizedWidgetSwitcher*              WidgetSwitcher;                                             // 0x0330   (0x0008)  
	SDK_UNDEFINED(80,14523) /* TMap<FGameplayTag, UClass*> */ __um(TagToWidgetClassMap);                           // 0x0338   (0x0050)  
	SDK_UNDEFINED(80,14524) /* TMap<FGameplayTag, UJunoNotificationWidget*> */ __um(TagToWidgetMap);               // 0x0388   (0x0050)  
	FGameplayTagContainer                              RecipeFilterTags;                                           // 0x03D8   (0x0020)  
};

/// Class /Script/JunoUI.JunoOffhandWidget
/// Size: 0x0040 (0x000328 - 0x000368)
class UJunoOffhandWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0328   (0x0018)  MISSED
	class UDynamicEntryBox*                            EntryBox_Slots;                                             // 0x0340   (0x0008)  
	TArray<class UJunoOffhandWidgetSlot*>              CachedOffhandWidgetSlots;                                   // 0x0348   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0358   (0x0010)  MISSED
};

/// Class /Script/JunoUI.JunoOffhandWidgetSlot
/// Size: 0x0068 (0x000328 - 0x000390)
class UJunoOffhandWidgetSlot : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0328   (0x0010)  MISSED
	FJunoItemSlot                                      ItemSlotData;                                               // 0x0338   (0x0050)  
	class UJunoInventorySlot*                          InventorySlot_Item;                                         // 0x0388   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoOffhandWidgetSlot.OnSlotItemChanged
	// void OnSlotItemChanged(EJunoItemChangeType ChangeType, class UFortItem* SlotItem);                                    // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoPickupStream
/// Size: 0x00B8 (0x000328 - 0x0003E0)
class UJunoPickupStream : public UFortHUDElementWidget
{ 
public:
	FUserWidgetPool                                    PickupDisplayPool;                                          // 0x0328   (0x0088)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x03B0   (0x0010)  MISSED
	int32_t                                            MaxDisplayedItems;                                          // 0x03C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03C4   (0x0004)  MISSED
	class UClass*                                      PickupEntryWidgetClass;                                     // 0x03C8   (0x0008)  
	float                                              ExpirationTime;                                             // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UVerticalBox*                                VerticalBox_PickupMessages;                                 // 0x03D8   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoPickupStream.RefreshPickupEntry
	// void RefreshPickupEntry(class UUserWidget* EntryWidget, TWeakObjectPtr<UTexture2D*>& Icon, FText& DisplayName, int32_t Count, int32_t TotalInventoryCount, EFortRarity ItemRarity, EJunoPickupStreamAnim AnimType); // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoPickupStream.OnHideExpiredPickup
	// void OnHideExpiredPickup(class UUserWidget* EntryWidget);                                                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPickupStream.OnActivePickupsPresent
	// void OnActivePickupsPresent(bool bHasActivePickups);                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPickupStream.HandleItemPickedUp
	// void HandleItemPickedUp(class UFortWorldItem* WorldItem, int32_t Count);                                              // [0xc106e6c] Final|Native|Protected 
	// Function /Script/JunoUI.JunoPickupStream.HandleEntryHideAnimComplete
	// void HandleEntryHideAnimComplete(class UUserWidget* EntryWidget);                                                     // [0xc106d84] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoPlayerHitpointWidget
/// Size: 0x0018 (0x000328 - 0x000340)
class UJunoPlayerHitpointWidget : public UFortHUDElementWidget
{ 
public:
	EJunoHealthBarType                                 BarType;                                                    // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0329   (0x0003)  MISSED
	float                                              ValueCurrent;                                               // 0x032C   (0x0004)  
	float                                              ValueLast;                                                  // 0x0330   (0x0004)  
	float                                              ValueMax;                                                   // 0x0334   (0x0004)  
	class UJunoLocalPlayerViewModel*                   JunoPlayerViewModel;                                        // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.OnValueChangedWithReason
	// void OnValueChangedWithReason(EFortHitPointModificationReason Reason);                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.OnMaxValueChanged
	// void OnMaxValueChanged(float Value);                                                                                  // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.OnDeltaChanged
	// void OnDeltaChanged();                                                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.GetLastValuePercentage
	// float GetLastValuePercentage();                                                                                       // [0xc106d08] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.GetCurrentValuePercentage
	// float GetCurrentValuePercentage();                                                                                    // [0xc106cd8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoPlayerIndicatorWidget
/// Size: 0x0030 (0x0003D0 - 0x000400)
class UJunoPlayerIndicatorWidget : public UFortActorIndicatorWidget
{ 
public:
	bool                                               bCollapseInfoOnClamp;                                       // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03D1   (0x0003)  MISSED
	float                                              MinDistanceToDisplayInfo;                                   // 0x03D4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x03D8   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_Distance;                                              // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x03E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.OnPlayerDataUpdated
	// void OnPlayerDataUpdated(FJunoPlayerIndicatorData& PlayerIndicatorData);                                              // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.OnInFocusStateChanged
	// void OnInFocusStateChanged(bool bInInFocus);                                                                          // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.OnClampedStatusChanged
	// void OnClampedStatusChanged(bool bInIsClamped);                                                                       // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.HandlePlayerStatePawnDied
	// void HandlePlayerStatePawnDied(FPawnDamageData& PawnDamageInfo);                                                      // [0xc106fa8] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.HandleCurrentPawnChanged
	// void HandleCurrentPawnChanged();                                                                                      // [0xc106d70] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoQuickbar
/// Size: 0x00A8 (0x000328 - 0x0003D0)
class UJunoQuickbar : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0328   (0x0020)  MISSED
	class UDynamicEntryBox*                            EntryBox_Slots;                                             // 0x0348   (0x0008)  
	TArray<class UJunoQuickbarSlot*>                   CachedQuickbarSlots;                                        // 0x0350   (0x0010)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x0360   (0x0070)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoQuickbar.OnQuickbarSlotChanged
	// void OnQuickbarSlotChanged(int32_t SelectedSlotIndex);                                                                // [0x2047e54] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoQuickbarMobileContainer
/// Size: 0x0020 (0x000350 - 0x000370)
class UJunoQuickbarMobileContainer : public UFortMobileHUDElement
{ 
public:
	class UJunoQuickbar*                               JunoQuickbar;                                               // 0x0350   (0x0008)  
	class UJunoOffhandWidget*                          JunoOffhandWidget;                                          // 0x0358   (0x0008)  
	class UJunoInventoryDragAndDropHandler*            JunoInventoryDragAndDropHandler;                            // 0x0360   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_AllSlots;                                       // 0x0368   (0x0008)  
};

/// Class /Script/JunoUI.JunoQuickbarSlot
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UJunoQuickbarSlot : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02E8   (0x0010)  MISSED
	class UJunoInventorySlot*                          InventorySlot_Item;                                         // 0x02F8   (0x0008)  
	class UFortKeybindWidget*                          KeyBind_Keyboard;                                           // 0x0300   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0308   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoQuickbarSlot.OnSlotItemChangeFailed
	// void OnSlotItemChangeFailed();                                                                                        // [0x2047e54] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.OnSlotItemChanged
	// void OnSlotItemChanged(EJunoItemChangeType ChangeType);                                                               // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.OnSlotInitialized
	// void OnSlotInitialized();                                                                                             // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.OnSetQuickbarSlotSelected
	// void OnSetQuickbarSlotSelected(bool bInSelected, FText& ItemName);                                                    // [0x2047e54] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.OnPrebuildStateChanged
	// void OnPrebuildStateChanged(bool bInEnabled);                                                                         // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.GetSlotItem
	// class UFortItem* GetSlotItem();                                                                                       // [0xc106d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoDynamicUIDirector
/// Size: 0x0160 (0x0002B0 - 0x000410)
class AJunoDynamicUIDirector : public ADynamicUIDirectorBase
{ 
public:
	class UJunoLocalPlayerViewModel*                   PlayerViewModel;                                            // 0x02B0   (0x0008)  
	class UFortPlaylist*                               CurrentPlaylist;                                            // 0x02B8   (0x0008)  
	class UJunoAsyncAction_WaitForEventRouter*         WaitForEventRouterAction;                                   // 0x02C0   (0x0008)  
	class UClass*                                      LocalPlayerUIMapStateClass;                                 // 0x02C8   (0x0008)  
	class UJunoLocalPlayerUIMapState*                  LocalPlayerUIMapState;                                      // 0x02D0   (0x0008)  
	class UClass*                                      TeamMapIndicatorsClass;                                     // 0x02D8   (0x0008)  
	class UJunoMapTeamIndicators*                      TeamMapIndicators;                                          // 0x02E0   (0x0008)  
	class UClass*                                      MarkerMapIndicatorsClass;                                   // 0x02E8   (0x0008)  
	class UJunoMapMarkerIndicators*                    MarkerMapIndicators;                                        // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	FGameplayTag                                       LastBuildingRecipeTag;                                      // 0x0300   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0304   (0x0004)  MISSED
	FGameplayTagContainer                              HideWithMenuTags;                                           // 0x0308   (0x0020)  
	FGameplayTagContainer                              DisallowMenuTags;                                           // 0x0328   (0x0020)  
	unsigned char                                      UnknownData02_6[0xC8];                                      // 0x0348   (0x00C8)  MISSED


	/// Functions
	// Function /Script/JunoUI.JunoDynamicUIDirector.StartRegisteringUI
	// void StartRegisteringUI();                                                                                            // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoDynamicUIDirector.OpenStandaloneMenuScene
	// void OpenStandaloneMenuScene(FJunoWidgetSceneAndIndex WidgetSceneAndIndex, class UObject* BoundObject);               // [0xc107204] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoDynamicUIDirector.OpenHudMenuScene
	// void OpenHudMenuScene(FJunoWidgetSceneAndIndex WidgetSceneAndIndex, class UJunoHudMenuBaseInitData* HudMenuData);     // [0xc10707c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoDynamicUIDirector.OnShouldShowMobileHUDChanged
	// void OnShouldShowMobileHUDChanged();                                                                                  // [0x2047e54] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoUI.JunoDynamicUIDirector.OnEnteredConversation
	// void OnEnteredConversation();                                                                                         // [0x2047e54] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoDynamicUIDirector.HandleHudMenuSceneClosed
	// void HandleHudMenuSceneClosed();                                                                                      // [0xc106e44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoDynamicUIDirector.GetShouldShowMobileHUD
	// bool GetShouldShowMobileHUD();                                                                                        // [0xc106d38] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoNullHUD
/// Size: 0x0000 (0x000440 - 0x000440)
class UJunoNullHUD : public UFortNullHUD
{ 
public:
};

/// Struct /Script/JunoUI.RecipeFocus
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRecipeFocus
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/JunoUI.RecipeCategoryChange
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRecipeCategoryChange
{ 
	FGameplayTagContainer                              FilterTags;                                                 // 0x0000   (0x0020)  
};

/// Struct /Script/JunoUI.CanCraftRecipeChange
/// Size: 0x0001 (0x000000 - 0x000001)
struct FCanCraftRecipeChange
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/JunoUI.JunoBiomeUIDisplayData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoBiomeUIDisplayData
{ 
	SDK_UNDEFINED(24,14525) /* FText */                __um(DisplayText);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(32,14526) /* TWeakObjectPtr<UObject*> */ __um(Icon);                                             // 0x0018   (0x0020)  
};

/// Struct /Script/JunoUI.JunoMemoryMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FJunoMemoryMessage
{ 
	EBuildingLimitationState                           BuildingLimitationState;                                    // 0x0000   (0x0001)  
};

/// Struct /Script/JunoUI.JunoBuildingMemoryThreshold
/// Size: 0x0008 (0x000008 - 0x000010)
struct FJunoBuildingMemoryThreshold : FTableRowBase
{ 
	int32_t                                            BuildingPercentLimit;                                       // 0x0008   (0x0004)  
	EJunoLowMemoryState                                MemoryStateLimit;                                           // 0x000C   (0x0001)  
	EBuildingLimitationState                           LimitationState;                                            // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/JunoUI.JunoGuidedBuildingUIData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoGuidedBuildingUIData
{ 
	bool                                               bIsGuidedBuildingSet;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            TotalStagesInSet;                                           // 0x0004   (0x0004)  
	int32_t                                            ExtraIngredientsInSet;                                      // 0x0008   (0x0004)  
};

/// Struct /Script/JunoUI.TrackedTouchData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTrackedTouchData
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/JunoUI.JunoHudMenuTabRequest
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoHudMenuTabRequest
{ 
	FName                                              NameId;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14527) /* FText */                __um(DisplayName);                                          // 0x0008   (0x0018)  
	class UClass*                                      ButtonType;                                                 // 0x0020   (0x0008)  
	class UClass*                                      ContentType;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/JunoUI.JunoInventoryGroupUIData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoInventoryGroupUIData
{ 
	FGameplayTag                                       GroupTag;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14528) /* FText */                __um(DisplayName);                                          // 0x0008   (0x0018)  
	SDK_UNDEFINED(32,14529) /* TWeakObjectPtr<UObject*> */ __um(OptionalIcon);                                     // 0x0020   (0x0020)  
};

/// Struct /Script/JunoUI.JunoInventoryGroupUIDataList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoInventoryGroupUIDataList
{ 
	TArray<FJunoInventoryGroupUIData>                  GroupDataList;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/JunoUI.JunoItemSpawnerListEntries
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoItemSpawnerListEntries
{ 
	TArray<class UJunoItemSpawnerListEntry*>           ListEntries;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/JunoUI.JunoItemSpawnerItemTagOrder
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoItemSpawnerItemTagOrder
{ 
	TArray<FGameplayTag>                               ItemTags;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/JunoUI.JunoModalSceneOperation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoModalSceneOperation
{ 
	class UDynamicUIScene*                             ModalScene;                                                 // 0x0000   (0x0008)  
	class UObject*                                     Payload;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/JunoUI.JunoQuickBuildSlotData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoQuickBuildSlotData
{ 
	SDK_UNDEFINED(32,14530) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                          // 0x0000   (0x0020)  
	SDK_UNDEFINED(24,14531) /* FText */                __um(DisplayName);                                          // 0x0020   (0x0018)  
};

/// Struct /Script/JunoUI.CountUnviewedRecipesInCategoryArgs
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCountUnviewedRecipesInCategoryArgs
{ 
	class AFortPlayerController*                       PlayerController;                                           // 0x0000   (0x0008)  
	class AActor*                                      CraftingObject;                                             // 0x0008   (0x0008)  
	FGameplayTag                                       CategoryTag;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       SubCategoryTag;                                             // 0x0014   (0x0004)  
	bool                                               bOnlyKnownRecipes;                                          // 0x0018   (0x0001)  
	bool                                               bCountUnacquiredRecipes;                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/JunoUI.JunoNPCStateUIData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FJunoNPCStateUIData
{ 
	int32_t                                            Priority;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14532) /* TWeakObjectPtr<UObject*> */ __um(PrimaryIcon);                                      // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,14533) /* TWeakObjectPtr<UObject*> */ __um(SecondaryIcon);                                    // 0x0028   (0x0020)  
};

/// Struct /Script/JunoUI.JunoMapMarkerEntryInitData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoMapMarkerEntryInitData
{ 
	EJunoMapMarkerCustomizationEntryType               WidgetEntryType;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(32,14534) /* TWeakObjectPtr<UTexture*> */ __um(EntryIcon);                                       // 0x0008   (0x0020)  
	FLinearColor                                       EntryColor;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/JunoUI.JunoHUDShowVillageUpgradeCelebrationEvent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoHUDShowVillageUpgradeCelebrationEvent
{ 
	SDK_UNDEFINED(24,14535) /* FText */                __um(VillageName);                                          // 0x0000   (0x0018)  
	EJunoBiome                                         Biome;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            NewLevel;                                                   // 0x001C   (0x0004)  
};

/// Struct /Script/JunoUI.JunoNotificationEvent
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoNotificationEvent
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14536) /* TWeakObjectPtr<UClass*> */ __um(NotificationSoftClass);                             // 0x0008   (0x0020)  
	class UObject*                                     InitObject;                                                 // 0x0028   (0x0008)  
};

/// Struct /Script/JunoUI.JunoPlayerIndicatorData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FJunoPlayerIndicatorData
{ 
	SDK_UNDEFINED(16,14537) /* FString */              __um(PlayerName);                                           // 0x0000   (0x0010)  
	bool                                               bIsAlive;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FUniqueNetIdRepl                                   UniqueNetId;                                                // 0x0018   (0x0030)  
};

/// Struct /Script/JunoUI.JunoWidgetSceneAndIndex
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoWidgetSceneAndIndex
{ 
	class UDynamicUIScene*                             WidgetScene;                                                // 0x0000   (0x0008)  
	int32_t                                            WidgetAllowedIndex;                                         // 0x0008   (0x0004)  
	bool                                               bRemoveOnDeath;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

