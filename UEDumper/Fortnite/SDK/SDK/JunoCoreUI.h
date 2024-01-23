
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: JunoWorldManagement
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Enum /Script/JunoCoreUI.EJunoPlayerCardStatus
/// Size: 0x04
enum class EJunoPlayerCardStatus : uint8_t
{
	EJunoPlayerCardStatus__InWorld                                                   = 0,
	EJunoPlayerCardStatus__NotInWorld                                                = 1,
	EJunoPlayerCardStatus__Count                                                     = 2,
	EJunoPlayerCardStatus__EJunoPlayerCardStatus_MAX                                 = 3
};

/// Enum /Script/JunoCoreUI.EJunoContextMenuAction
/// Size: 0x18
enum class EJunoContextMenuAction : uint8_t
{
	EJunoContextMenuAction__None                                                     = 0,
	EJunoContextMenuAction__Swap                                                     = 1,
	EJunoContextMenuAction__Drop                                                     = 2,
	EJunoContextMenuAction__Craft                                                    = 3,
	EJunoContextMenuAction__Equip                                                    = 4,
	EJunoContextMenuAction__Unequip                                                  = 5,
	EJunoContextMenuAction__Split                                                    = 6,
	EJunoContextMenuAction__DepositStack                                             = 7,
	EJunoContextMenuAction__Deposit                                                  = 8,
	EJunoContextMenuAction__TakeStack                                                = 9,
	EJunoContextMenuAction__Take                                                     = 10,
	EJunoContextMenuAction__MoveToInventory                                          = 11,
	EJunoContextMenuAction__MoveToMainHand                                           = 12,
	EJunoContextMenuAction__MoveToOffHand                                            = 13,
	EJunoContextMenuAction__OpenInventory                                            = 14,
	EJunoContextMenuAction__Spawn                                                    = 15,
	EJunoContextMenuAction__SpawnMultiple                                            = 16,
	EJunoContextMenuAction__EJunoContextMenuAction_MAX                               = 17
};

/// Enum /Script/JunoCoreUI.EJunoContextMenuActionState
/// Size: 0x04
enum class EJunoContextMenuActionState : uint8_t
{
	EJunoContextMenuActionState__Shown                                               = 0,
	EJunoContextMenuActionState__Disabled                                            = 1,
	EJunoContextMenuActionState__Hidden                                              = 2,
	EJunoContextMenuActionState__EJunoContextMenuActionState_MAX                     = 3
};

/// Enum /Script/JunoCoreUI.EJunoWorldSettingCategory
/// Size: 0x04
enum class EJunoWorldSettingCategory : uint8_t
{
	EJunoWorldSettingCategory__None                                                  = 0,
	EJunoWorldSettingCategory__Basic                                                 = 1,
	EJunoWorldSettingCategory__Advanced                                              = 2,
	EJunoWorldSettingCategory__EJunoWorldSettingCategory_MAX                         = 3
};

/// Enum /Script/JunoCoreUI.EJunoWorldSanctionType
/// Size: 0x04
enum class EJunoWorldSanctionType : uint8_t
{
	EJunoWorldSanctionType__MultiplayerBan                                           = 0,
	EJunoWorldSanctionType__CompleteBan                                              = 1,
	EJunoWorldSanctionType__None                                                     = 2,
	EJunoWorldSanctionType__EJunoWorldSanctionType_MAX                               = 3
};

/// Enum /Script/JunoCoreUI.EMatchmakingErrorType
/// Size: 0x05
enum class EMatchmakingErrorType : uint8_t
{
	EMatchmakingErrorType__NotEnoughWorldSpotsForParty                               = 0,
	EMatchmakingErrorType__NotAllPartyMembersHaveWorldAccess                         = 1,
	EMatchmakingErrorType__LookingForPartyIsEnabled                                  = 2,
	EMatchmakingErrorType__None                                                      = 3,
	EMatchmakingErrorType__EMatchmakingErrorType_MAX                                 = 4
};

/// Enum /Script/JunoCoreUI.ESanctionType
/// Size: 0x06
enum class ESanctionType : uint8_t
{
	ESanctionType__OwnerWithoutPartyMultiplayerBan                                   = 0,
	ESanctionType__OwnerWithPartyMultiplayerBan                                      = 1,
	ESanctionType__KeyHolderBan                                                      = 2,
	ESanctionType__CompleteBan                                                       = 3,
	ESanctionType__None                                                              = 4,
	ESanctionType__ESanctionType_MAX                                                 = 5
};

/// Class /Script/JunoCoreUI.JunoPlayerCardViewModel
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UJunoPlayerCardViewModel : public UMVVMViewModelBase
{ 
public:
	class UFortPlayerAvatarViewModel*                  PlayerAvatarViewModel;                                      // 0x0068   (0x0008)  
	SDK_UNDEFINED(24,14048) /* FText */                __um(PlayerName);                                           // 0x0070   (0x0018)  
	EJunoWorldOccupantKind                             PlayerRole;                                                 // 0x0088   (0x0001)  
	EJunoPlayerCardStatus                              PlayerStatus;                                               // 0x0089   (0x0001)  
	bool                                               IsInParty;                                                  // 0x008A   (0x0001)  
	bool                                               IsViewOnly;                                                 // 0x008B   (0x0001)  
	bool                                               IsFriendsWithWorldOwner;                                    // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	int32_t                                            NumKeysLeft;                                                // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0094   (0x0014)  MISSED
	class UClass*                                      OpenProfileActionMenuClass;                                 // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x00B0   (0x0020)  MISSED
	SDK_UNDEFINED(16,14049) /* FMulticastInlineDelegate */ __um(OnWorldKeyGranted);                                // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,14050) /* FMulticastInlineDelegate */ __um(OnWorldKeyRevoked);                                // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.ShowNotificationToast
	// void ShowNotificationToast(class AFortPlayerController* FortPlayerController, FText& Title, FText& Description, EFortNotificationType NotificationType); // [0xbdaa470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.RevokeWorldKey
	// void RevokeWorldKey();                                                                                                // [0xbdaa434] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.OpenSidebarUserProfile
	// void OpenSidebarUserProfile(class UCommonActivatableWidget* CurrentStateWidget, class ULocalPlayer* LocalPlayer);     // [0xbdaa360] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.OnWorldKeyRevoked__DelegateSignature
	// void OnWorldKeyRevoked__DelegateSignature();                                                                          // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.OnWorldKeyGranted__DelegateSignature
	// void OnWorldKeyGranted__DelegateSignature();                                                                          // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.OnOpenUserProfile__DelegateSignature
	// void OnOpenUserProfile__DelegateSignature();                                                                          // [0x2177018] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.KickWorldUser
	// void KickWorldUser();                                                                                                 // [0xbdaa34c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.GrantWorldKey
	// void GrantWorldKey();                                                                                                 // [0xbdaa0a4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoCoreUI.JunoPlayerManagementViewModel
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UJunoPlayerManagementViewModel : public UMVVMViewModelBase
{ 
public:
	TArray<class UJunoPlayerCardViewModel*>            NeedsInvitePlayerCards;                                     // 0x0068   (0x0010)  
	TArray<class UJunoPlayerCardViewModel*>            InWorldPlayerCards;                                         // 0x0078   (0x0010)  
	TArray<class UJunoPlayerCardViewModel*>            NotInWorldPlayerCards;                                      // 0x0088   (0x0010)  
	class UJunoPlayerCardViewModel*                    SelectedPlayerCard;                                         // 0x0098   (0x0008)  
	EJunoWorldSanctionType                             WorldSanctionType;                                          // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            NumKeysLeft;                                                // 0x00A4   (0x0004)  
	int32_t                                            NumSpotsLeft;                                               // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(24,14051) /* FText */                __um(WorldName);                                            // 0x00B0   (0x0018)  
	SDK_UNDEFINED(24,14052) /* FText */                __um(OwnerName);                                            // 0x00C8   (0x0018)  
	bool                                               IsWorldOwner;                                               // 0x00E0   (0x0001)  
	bool                                               IsViewOnly;                                                 // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00E2   (0x0002)  MISSED
	int32_t                                            MaxNumOfPlayers;                                            // 0x00E4   (0x0004)  
	int32_t                                            MaxNumOfKeys;                                               // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/JunoCoreUI.JunoPlayerManagementViewModel.UpdateFromData
	// void UpdateFromData(class APlayerController* WidgetOwner, class UJunoWorld* JunoWorld);                               // [0xbdaa708] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerManagementViewModel.SetupDummyData
	// void SetupDummyData();                                                                                                // [0xbdaa45c] Final|Native|Private|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerManagementViewModel.IsInGame
	// bool IsInGame();                                                                                                      // [0xbdaa328] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoCoreUI.JunoWorldDataViewModel
/// Size: 0x0138 (0x000068 - 0x0001A0)
class UJunoWorldDataViewModel : public UMVVMViewModelBase
{ 
public:
	SDK_UNDEFINED(24,14053) /* FText */                __um(WorldName);                                            // 0x0068   (0x0018)  
	int32_t                                            WorldSlotNumber;                                            // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	SDK_UNDEFINED(24,14054) /* FText */                __um(WorldOwner);                                           // 0x0088   (0x0018)  
	FUniqueNetIdRepl                                   WorldOwnerId;                                               // 0x00A0   (0x0030)  
	FDateTime                                          CreationDate;                                               // 0x00D0   (0x0008)  
	FDateTime                                          LastPlayed;                                                 // 0x00D8   (0x0008)  
	SDK_UNDEFINED(24,14055) /* FText */                __um(TimePlayed);                                           // 0x00E0   (0x0018)  
	bool                                               bIsCreateFlow;                                              // 0x00F8   (0x0001)  
	bool                                               bIsNewInvitation;                                           // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00FA   (0x0006)  MISSED
	class UJunoWorldImageObject*                       WorldImageObj;                                              // 0x0100   (0x0008)  
	int32_t                                            ActivePlayers;                                              // 0x0108   (0x0004)  
	int32_t                                            GrantedKeys;                                                // 0x010C   (0x0004)  
	class UJunoWorldSettingViewModel*                  ModeVM;                                                     // 0x0110   (0x0008)  
	class UJunoWorldSettingViewModel*                  ImageVM;                                                    // 0x0118   (0x0008)  
	class UJunoWorldSettingViewModel*                  SeedVM;                                                     // 0x0120   (0x0008)  
	bool                                               bSettingsLocked;                                            // 0x0128   (0x0001)  
	bool                                               bSettingsChangedAfterGeneration;                            // 0x0129   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x012A   (0x0002)  MISSED
	int32_t                                            MaxPlayersInWorld;                                          // 0x012C   (0x0004)  
	EMatchmakingErrorType                              MatchmakingError;                                           // 0x0130   (0x0001)  
	ESanctionType                                      SanctionType;                                               // 0x0131   (0x0001)  
	bool                                               bIsSharedWorld;                                             // 0x0132   (0x0001)  
	bool                                               bIsCustom;                                                  // 0x0133   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	TArray<class UJunoWorldSettingViewModel*>          AdvancedSettingsList;                                       // 0x0138   (0x0010)  
	TArray<class UJunoWorldImageObject*>               WorldImageList;                                             // 0x0148   (0x0010)  
	bool                                               bRequestResult;                                             // 0x0158   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0159   (0x0007)  MISSED
	SDK_UNDEFINED(24,14056) /* FText */                __um(RequestMessage);                                       // 0x0160   (0x0018)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	SDK_UNDEFINED(16,14057) /* FString */              __um(WorldId);                                              // 0x0180   (0x0010)  
	class UJunoUserWorldView*                          OriginalData;                                               // 0x0190   (0x0008)  
	class AFortPlayerController*                       WidgetOwnerPC;                                              // 0x0198   (0x0008)  


	/// Functions
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.SaveChanges
	// void SaveChanges();                                                                                                   // [0xbdaa448] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.RemoveSharedWorld
	// void RemoveSharedWorld();                                                                                             // [0xbdaa420] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.HandlePlayClicked
	// void HandlePlayClicked();                                                                                             // [0xbdaa214] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.GetTagNames
	// TArray<FText> GetTagNames();                                                                                          // [0xbdaa024] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.GetSelectedWorldImageIndex
	// int32_t GetSelectedWorldImageIndex();                                                                                 // [0xbda9fd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.GetLastPlayedFormatted
	// FText GetLastPlayedFormatted();                                                                                       // [0xbda9f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.GetCreationDateFormatted
	// FText GetCreationDateFormatted();                                                                                     // [0xbda9ec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.DeleteWorld
	// void DeleteWorld();                                                                                                   // [0xbda9eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.CheckWorldMatchmakingAvailability
	// bool CheckWorldMatchmakingAvailability();                                                                             // [0xbda9e8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.CancelChanges
	// void CancelChanges();                                                                                                 // [0xbda9e68] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoCoreUI.JunoWorldImageObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoWorldImageObject : public UObject
{ 
public:
	SDK_UNDEFINED(16,14058) /* FMulticastInlineDelegate */ __um(OnTextureUpdated);                                 // 0x0028   (0x0010)  
	FDataTableRowHandle                                RowHandle;                                                  // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/JunoCoreUI.JunoWorldImageObject.UpdateImageReference
	// void UpdateImageReference(FName& NewRowName);                                                                         // [0xbdaa7cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldImageObject.GetTexture
	// TWeakObjectPtr<UTexture2D*> GetTexture();                                                                             // [0xbdaa060] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldImageObject.GetImageReferenceName
	// FName GetImageReferenceName();                                                                                        // [0x36069a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoCoreUI.JunoSettingOptionRow
/// Size: 0x0038 (0x000000 - 0x000038)
struct FJunoSettingOptionRow
{ 
	FName                                              ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14059) /* FText */                __um(Name);                                                 // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,14060) /* FText */                __um(Description);                                          // 0x0020   (0x0018)  
};

/// Class /Script/JunoCoreUI.JunoWorldSettingViewModel
/// Size: 0x0098 (0x000068 - 0x000100)
class UJunoWorldSettingViewModel : public UMVVMViewModelBase
{ 
public:
	SDK_UNDEFINED(16,14061) /* FString */              __um(SettingId);                                            // 0x0068   (0x0010)  
	SDK_UNDEFINED(24,14062) /* FText */                __um(SettingName);                                          // 0x0078   (0x0018)  
	EJunoWorldSettingCategory                          SettingCategory;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	int32_t                                            SelectedOption;                                             // 0x0094   (0x0004)  
	int32_t                                            SelectedModeIndex;                                          // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<int32_t>                                    DefaultOptionPerMode;                                       // 0x00A0   (0x0010)  
	int32_t                                            NumericValue;                                               // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	TArray<FJunoSettingOptionRow>                      OptionList;                                                 // 0x00B8   (0x0010)  
	SDK_UNDEFINED(32,14063) /* TWeakObjectPtr<UTexture2D*> */ __um(SettingImage);                                  // 0x00C8   (0x0020)  
	bool                                               bShowDefaultTag;                                            // 0x00E8   (0x0001)  
	bool                                               bIsCustom;                                                  // 0x00E9   (0x0001)  
	bool                                               bIsLocked;                                                  // 0x00EA   (0x0001)  
	bool                                               bCanBeLocked;                                               // 0x00EB   (0x0001)  
	unsigned char                                      UnknownData03_6[0x14];                                      // 0x00EC   (0x0014)  MISSED


	/// Functions
	// Function /Script/JunoCoreUI.JunoWorldSettingViewModel.IsDefaultOptionSelected
	// bool IsDefaultOptionSelected();                                                                                       // [0xbdaa2fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldSettingViewModel.GetOptionName
	// FText GetOptionName();                                                                                                // [0xbda9fa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldSettingViewModel.GetOptionDescription
	// FText GetOptionDescription();                                                                                         // [0xbda9f74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldSettingViewModel.GetCurrentDefaultIndex
	// int32_t GetCurrentDefaultIndex();                                                                                     // [0xbda9f08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoCoreUI.JunoDropSplitModal
/// Size: 0x0028 (0x000400 - 0x000428)
class UJunoDropSplitModal : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0400   (0x0020)  MISSED
	class UCommonButtonBase*                           Button_Confirm;                                             // 0x0420   (0x0008)  


	/// Functions
	// Function /Script/JunoCoreUI.JunoDropSplitModal.OnOperationSet
	// void OnOperationSet(EJunoContextMenuAction ActionType, FText& ActionText, int32_t StackCount, int32_t QuantityDisplayMultiplier); // [0x2177018] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoCoreUI.JunoDropSplitModal.HandleQuantityChanged
	// void HandleQuantityChanged(EJunoContextMenuAction InActionType, int32_t InUpdatedCount);                              // [0xbdaa228] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoDropSplitModal.HandleConfirmOperation
	// void HandleConfirmOperation(EJunoContextMenuAction InActionType, int32_t InDesiredCount);                             // [0xbdaa0b8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoCoreUI.JunoContextMenu
/// Size: 0x00A0 (0x000400 - 0x0004A0)
class UJunoContextMenu : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0400   (0x0038)  MISSED
	SDK_UNDEFINED(80,14064) /* TMap<EJunoContextMenuAction, FText> */ __um(MenuActionToDisplayText);               // 0x0438   (0x0050)  
	class UJunoDropSplitModal*                         Widget_QuantitySelector;                                    // 0x0488   (0x0008)  
	FDataTableRowHandle                                BackAction;                                                 // 0x0490   (0x0010)  


	/// Functions
	// Function /Script/JunoCoreUI.JunoContextMenu.OnShowQuantitySelectorState
	// void OnShowQuantitySelectorState();                                                                                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCoreUI.JunoContextMenu.OnAddMenuEntry
	// void OnAddMenuEntry(EJunoContextMenuAction MenuAction, bool bDisabled);                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCoreUI.JunoContextMenu.HandleContextEntrySelected
	// void HandleContextEntrySelected(EJunoContextMenuAction MenuAction);                                                   // [0xbdaa194] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoContextMenu.GetAllAvailableActions
	// TSet<EJunoContextMenuAction> GetAllAvailableActions();                                                                // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Struct /Script/JunoCoreUI.JunoContextMenuInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoContextMenuInfo
{ 
	EJunoContextMenuAction                             MenuAction;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            QuantityCount;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/JunoCoreUI.JunoContextMenuQuantityChange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoContextMenuQuantityChange
{ 
	EJunoContextMenuAction                             MenuAction;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            QuantityCount;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/JunoCoreUI.JunoSettingDataRow
/// Size: 0x0048 (0x000008 - 0x000050)
struct FJunoSettingDataRow : FTableRowBase
{ 
	SDK_UNDEFINED(24,14065) /* FText */                __um(SettingName);                                          // 0x0008   (0x0018)  
	EJunoWorldSettingCategory                          Category;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<int32_t>                                    DefaultOptionPerMode;                                       // 0x0028   (0x0010)  
	TArray<FJunoSettingOptionRow>                      Options;                                                    // 0x0038   (0x0010)  
	bool                                               bCanBeLocked;                                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/JunoCoreUI.JunoWorldImageDataRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FJunoWorldImageDataRow : FTableRowBase
{ 
	SDK_UNDEFINED(32,14066) /* TWeakObjectPtr<UTexture2D*> */ __um(WorldImage);                                    // 0x0008   (0x0020)  
};

