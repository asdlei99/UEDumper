
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricRuntime
/// dependency: FMDeviceCablesRuntime
/// dependency: FortniteGame
/// dependency: StructUtils
/// dependency: UMG

/// Class /Script/FMInWorldKnobsRuntime.FabricChildActorTickSubsystem
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
class UFabricChildActorTickSubsystem : public UFortManagedTickSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<TWeakObjectPtr<UFabricChildActorComponent*>>) ChildActorComponentsPendingSpawn                  OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/FMInWorldKnobsRuntime.FabricChildActorComponent
/// Size: 0x0080 (0x000270 - 0x0002F0)
class UFabricChildActorComponent : public UChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UFMDeviceCableModulatorPortComponent*) InWorldKnobModulatorPort                                  OFFSET(get<T>, {0x280, 8, 0, 0})
	DMember(bool)                                      bUseScreenGrid                                              OFFSET(get<bool>, {0x288, 1, 0, 0})
	SMember(FVector2D)                                 ScreenGridPosition                                          OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FModulatorPortSaveData)                    ModulatorPortSaveData                                       OFFSET(getStruct<T>, {0x2A0, 32, 0, 0})
	CMember(class UClass*)                             CableManagerClassForModulatorPorts                          OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.OnModulatorPortDisconnected
	// void OnModulatorPortDisconnected(class UFMDeviceCablePortComponent* DisconnectedPort);                                   // [0xb937954] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.OnModulatorPortConnected
	// void OnModulatorPortConnected(class UFMDeviceCablePortComponent* ConnectedPort);                                         // [0xb937954] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetKnobOptionKey
	// FString GetKnobOptionKey();                                                                                              // [0xb93412c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsInWorldKnobActorBase
	// class AFMInWorldKnobActorBase* GetChildActorAsInWorldKnobActorBase();                                                    // [0xb933d54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsFabricInteractable
	// TScriptInterface<Class> GetChildActorAsFabricInteractable();                                                             // [0xb933d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsFabricButton
	// class AFabricButtonBase* GetChildActorAsFabricButton();                                                                  // [0xb933cfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.CreateModulatorPortIfNeeded
	// class UFMDeviceCableModulatorPortComponent* CreateModulatorPortIfNeeded();                                               // [0xb933c88] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.FabricScreenComponent
/// Size: 0x00A0 (0x000220 - 0x0002C0)
class UFabricScreenComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FMulticastInlineDelegate)                  OnWidgetCreated                                             OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetAdded                                               OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	CMember(TWeakObjectPtr<UFabricScreenWidget*>)      ScreenWidget                                                OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UWidgetComponent*)                   ScreenWidgetComponent                                       OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(TMap<UFMInWorldKnobActorCopyComponent*, FScreenWidgetLayoutInfo>) CopyComponentsToWidget               OFFSET(get<T>, {0x268, 80, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.SnapUnrealLocationToScreenGrid
	// FVector SnapUnrealLocationToScreenGrid(FVector UnrealPosition);                                                          // [0xb938b80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.SetScreenSize
	// void SetScreenSize(int32_t InWidth, int32_t InHeight);                                                                   // [0xb9388d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.OnCopiedKnobActorSet
	// void OnCopiedKnobActorSet(class UFMInWorldKnobActorCopyComponent* CopyComponent, class AFMInWorldKnobActorBase* NewKnobActor); // [0xb935390] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.Initialize
	// void Initialize(class UWidgetComponent* InScreenWidgetComponent, int32_t InWidth, int32_t InHeight, class UFabricScreenLayoutDataAsset* ScreenLayout); // [0xb934f48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.GetScreenGridWidth
	// int32_t GetScreenGridWidth();                                                                                            // [0xb934834] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.GetScreenGridHeight
	// int32_t GetScreenGridHeight();                                                                                           // [0xb93481c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.ConvertUnrealLocationToGridPosition
	// FVector2D ConvertUnrealLocationToGridPosition(FVector UnrealPosition);                                                   // [0xb933a9c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.ConvertGridPositionToUnrealLocation
	// FVector ConvertGridPositionToUnrealLocation(FVector2D GridPosition);                                                     // [0xb933934] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMInWorldKnobsRuntime.FabricScreenLayoutDataAsset
/// Size: 0x0018 (0x000030 - 0x000048)
class UFabricScreenLayoutDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FFabricScreenLayout>)               Layout                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UClass*)                             FabricScreenWidgetClass                                     OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionPresetAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricUserOptionPresetAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FFabricUserOptionPresetCollection)         UserOptionPreset                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveModulatable
/// Size: 0x0030 (0x000328 - 0x000358)
class UFabricUserOptionSaveModulatable : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UFabricUserOptionSaveComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TArray<FString>)                           UserOptionsToSave                                           OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(int32_t)                                   MaxSaveSlots                                                OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	SMember(FString)                                   SaveIndexParam                                              OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class UFabricUserOptionPresetAsset*>) PresetAssets                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FString)                                   PresetIndexParam                                            OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FString)                                   ApplyIndexImmediatelyToggleParam                            OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveOverridesChanged                                    OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(class ABuildingActor*)                     Owner                                                       OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UFabricUserOptionSaveModulatable*)   UserOptionSaveModulatable                                   OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<FFabricUserOptionSaveData>)         Presets                                                     OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FFabricUserOptionSaveData>)         Saves                                                       OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TSet<FString>)                             FloatUserOptions                                            OFFSET(get<T>, {0x148, 80, 0, 0})
	DMember(int32_t)                                   ActiveSaveIndex                                             OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	DMember(int32_t)                                   ActivePresetIndex                                           OFFSET(get<int32_t>, {0x19C, 4, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetSaveSlot
	// void SetSaveSlot(int32_t SaveSlotIndex);                                                                                 // [0xb938858] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetPreset
	// void SetPreset(int32_t PresetIndex);                                                                                     // [0xb9387d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* MusicClockComponent);                                                     // [0xb938578] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                               // [0xb9351f4] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.OnActiveOverridesChanged__DelegateSignature
	// void OnActiveOverridesChanged__DelegateSignature();                                                                      // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.IsApplyingOverrides
	// bool IsApplyingOverrides();                                                                                              // [0xb935084] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.HasOverrideForParam
	// bool HasOverrideForParam(FString Param);                                                                                 // [0xb934898] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.GetOverrideForParam
	// FString GetOverrideForParam(FString Param);                                                                              // [0xb93416c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFMInWorldCableOptionsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                                  // [0xb9379d0] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent.OnCableDisconncted
	// void OnCableDisconncted(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* DisconnectedPort); // [0xb9352cc] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent.OnCableConnected
	// void OnCableConnected(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* ConnectedPort);  // [0xb935208] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent.OnAnyOptionChanged
	// void OnAnyOptionChanged();                                                                                               // [0xb9351cc] Final|Native|Protected 
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase
/// Size: 0x0120 (0x000290 - 0x0003B0)
class AFMInWorldKnobActorBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FMulticastInlineDelegate)                  OnModulatedPropertyValueChanged                             OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobRuntimeValueChanged                                   OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobSerializedValueChanged                                OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFloatProviderConnectionChanged                            OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	SMember(FString)                                   OptionKey                                                   OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FText)                                     OverriddenTitle                                             OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
	DMember(bool)                                      bCanBeModulated                                             OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bKnobEnabled                                                OFFSET(get<bool>, {0x311, 1, 0, 0})
	DMember(bool)                                      bKnobDisplayOnly                                            OFFSET(get<bool>, {0x312, 1, 0, 0})
	CMember(class USceneComponent*)                    ModulatorPortParent                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UFMDeviceCableModulatorPortComponent*) ModulatorPort                                             OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UPlaylistUserOptionBase*)            MyUserOption                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFabricFloatProviderBase*>>) CurrentFloatProviders                               OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(TWeakObjectPtr<UFabricFloatProviderBase*>) ActiveFloatProvider                                         OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class USceneComponent*)                    HitComponent                                                OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(TWeakObjectPtr<APlayerController*>)        InteractingController                                       OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(EFabricInteractableType)                   InteractableType                                            OFFSET(get<T>, {0x360, 1, 0, 0})
	CMember(TWeakObjectPtr<UFabricInteractableViewModel*>) WidgetViewModel                                         OFFSET(get<T>, {0x364, 8, 0, 0})
	CMember(TArray<FText>)                             OverrideLabels                                              OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(TArray<FText>)                             OptionLabels                                                OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(TArray<FString>)                           OptionValues                                                OFFSET(get<T>, {0x390, 16, 0, 0})
	DMember(int32_t)                                   SerializedOptionIndex                                       OFFSET(get<int32_t>, {0x3A0, 4, 0, 0})
	DMember(int32_t)                                   CurrentOptionIndex                                          OFFSET(get<int32_t>, {0x3A4, 4, 0, 0})
	DMember(float)                                     ClampedKnobValue                                            OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(bool)                                      bTrackingInput                                              OFFSET(get<bool>, {0x3AC, 1, 0, 0})
	DMember(bool)                                      bIsVisibilityBound                                          OFFSET(get<bool>, {0x3AD, 1, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateInteractableVisuals
	// void UpdateInteractableVisuals(bool bInteractable);                                                                      // [0xb938e7c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateFocusVisuals
	// void UpdateFocusVisuals(bool bFocused);                                                                                  // [0xb938df8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateEnabledVisuals
	// void UpdateEnabledVisuals(bool bEnabled);                                                                                // [0xb938d74] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateDisplayOnlyVisuals
	// void UpdateDisplayOnlyVisuals(bool bDisplayOnly);                                                                        // [0xb938cf0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.StopTrackingInput
	// void StopTrackingInput();                                                                                                // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.StartTrackingInput
	// void StartTrackingInput(class APlayerController* PlayerController);                                                      // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                                  // [0xb938b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetTitle
	// void SetTitle(FText& Title);                                                                                             // [0xb938a60] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index, bool SnapToSelection);                                                              // [0xb938998] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetOverrideOptionLabels
	// void SetOverrideOptionLabels(TArray<FText>& Labels);                                                                     // [0xb9386fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetNumberOptions
	// void SetNumberOptions(int32_t NumberOptions);                                                                            // [0xb938678] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetKnobEnabled
	// void SetKnobEnabled(bool bEnabled);                                                                                      // [0xb9384c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetKnobDisplayOnly
	// void SetKnobDisplayOnly(bool bDisplayOnly);                                                                              // [0xb938448] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetCurrentKnobPosition
	// void SetCurrentKnobPosition(float KnobPosition);                                                                         // [0x91b7574] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.ResetToDefaultValue
	// void ResetToDefaultValue(class APlayerController* PlayerController);                                                     // [0xb9381c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.ReceiveOnWidgetViewModelSet
	// void ReceiveOnWidgetViewModelSet();                                                                                      // [0x3d1d968] Event|Public|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnReceiveFloatProvidersFromPort
	// void OnReceiveFloatProvidersFromPort(TArray<UFabricFloatProviderBase*>& FloatProvider);                                  // [0xb9379f8] Final|Native|Private|HasOutParms 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnKnobIsVisible
	// void OnKnobIsVisible(bool bInIsVisible);                                                                                 // [0xb9378d4] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnFloatProviderFloatUpdated
	// void OnFloatProviderFloatUpdated(float NewFloat);                                                                        // [0xb935454] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.KnobValueChanged
	// void KnobValueChanged(int32_t NewIndex, bool SnapToSelection, class APlayerController* PlayerController);                // [0xb9350c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.IsOverriddenByPort
	// bool IsOverriddenByPort();                                                                                               // [0xb93509c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.HitComponentUpdated
	// void HitComponentUpdated(class USceneComponent* NewHitComponent);                                                        // [0x3d1d968] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.HasActiveFloatProvider
	// bool HasActiveFloatProvider();                                                                                           // [0xb934874] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetWidgetViewModel
	// class UFabricInteractableViewModel* GetWidgetViewModel();                                                                // [0xb93484c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetNumberOptions
	// int32_t GetNumberOptions();                                                                                              // [0xa1429bc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetInteractingController
	// class APlayerController* GetInteractingController();                                                                     // [0xb934104] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetHitComponent
	// class USceneComponent* GetHitComponent();                                                                                // [0xb896278] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueLabel
	// FText GetCurrentValueLabel();                                                                                            // [0xb9340c0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsString
	// FString GetCurrentValueAsString();                                                                                       // [0xb934080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsName
	// FName GetCurrentValueAsName();                                                                                           // [0xb934054] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsInt
	// int32_t GetCurrentValueAsInt();                                                                                          // [0xb933ff8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsFloat
	// float GetCurrentValueAsFloat();                                                                                          // [0xb933fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsEnum
	// char GetCurrentValueAsEnum();                                                                                            // [0xb933f54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsBool
	// bool GetCurrentValueAsBool();                                                                                            // [0xb933f04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentOptionIndex
	// int32_t GetCurrentOptionIndex();                                                                                         // [0xb933eec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCopyWidgetClassInternal
	// class UClass* GetCopyWidgetClassInternal();                                                                              // [0xb933e68] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCopyClassInternal
	// class UClass* GetCopyClassInternal();                                                                                    // [0x20b7ce8] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetConsumeInteractionFromChildInteractable
	// bool GetConsumeInteractionFromChildInteractable(class APlayerController* PlayerController);                              // [0xb933d78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.EnsureProperCollision
	// void EnsureProperCollision();                                                                                            // [0xb933cac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.CopyAttributesFromOtherKnobInternal
	// void CopyAttributesFromOtherKnobInternal(class AFMInWorldKnobActorBase* OtherKnob);                                      // [0x9160fc4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.CopyAttributesFromOtherKnob
	// void CopyAttributesFromOtherKnob(class AFMInWorldKnobActorBase* OtherKnob);                                              // [0xb933c08] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent
/// Size: 0x0110 (0x0002F0 - 0x000400)
class UFMInWorldKnobActorCopyComponent : public UFabricChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FMulticastInlineDelegate)                  OnModulatedPropertyValueChanged                             OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobRuntimeValueChanged                                   OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobSerializedValueChanged                                OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFloatProviderConnectionChanged                            OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobActorSet                                              OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	CMember(class UClass*)                             DefaultKnobActorClass                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class AFMInWorldKnobActorBase*)            InWorldKnobActor                                            OFFSET(get<T>, {0x358, 8, 0, 0})
	SMember(FString)                                   OptionKey                                                   OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	SMember(FText)                                     OverriddenTitle                                             OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	DMember(bool)                                      bCanBeModulated                                             OFFSET(get<bool>, {0x388, 1, 0, 0})
	DMember(bool)                                      bKnobEnabled                                                OFFSET(get<bool>, {0x389, 1, 0, 0})
	CMember(class UPlaylistUserOptionBase*)            OuterUserOption                                             OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UPlaylistUserOptionBase*)            CopiedUserOption                                            OFFSET(get<T>, {0x3C8, 8, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.SetCopiedInWorldKnob
	// void SetCopiedInWorldKnob(class UObject* InWorldKnobObject);                                                             // [0xb938240] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobSerializedValueChanged
	// void OnInWorldKnobSerializedValueChanged(FString Value, class UPlaylistUserOptionBase* Option, class APlayerController* PlayerController); // [0xb9371a4] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobRuntimeValueChanged
	// void OnInWorldKnobRuntimeValueChanged(FString Value, class UPlaylistUserOptionBase* Option);                             // [0xb936380] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobModulatedPropertyValueChanged
	// void OnInWorldKnobModulatedPropertyValueChanged(FString Value, class UObject* ModulatorObject);                          // [0xb935598] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobFloatProviderConnectionChanged
	// void OnInWorldKnobFloatProviderConnectionChanged(bool bConnected, class UObject* ModulatorObject);                       // [0xb9354d4] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.GetCurrentKnobValueBP
	// FString GetCurrentKnobValueBP();                                                                                         // [0xb933ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.ClearCopiedInWorldKnob
	// void ClearCopiedInWorldKnob();                                                                                           // [0xb933920] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.InWorldKnobInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInWorldKnobInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent
/// Size: 0x0208 (0x0000A0 - 0x0002A8)
class UFMInWorldKnobOptionsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FMulticastInlineDelegate)                  OnInitialKnobValuesLoaded                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllKnobsLoaded                                            OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnyKnobRuntimeValueChanged                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnyKnobSerializedValueChanged                             OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(TSet<UObject*>)                            InWorldKnobInterfaceObjects                                 OFFSET(get<T>, {0xE8, 80, 0, 0})
	CMember(TArray<class UObject*>)                    ReplicatedInWorldKnobInterfaceObjects                       OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<class UObject*>)                    ReplicatedFabricInteractableObjects                         OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<class UFMDeviceCableModulatorPortComponent*>) ReplicatedModulatorPorts                          OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(class ABuildingActor*)                     BuildingActorOwner                                          OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UClass*)                             OwnerClass                                                  OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UFabricUserOptionSaveComponent*)     SaveComponent                                               OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(TMap<FString, UPlaylistUserOptionBase*>)   PropertiesEditedByUserOptions                               OFFSET(get<T>, {0x180, 80, 0, 0})
	CMember(TMap<FString, UObject*>)                   OptionKeyToInWorldKnobObject                                OFFSET(get<T>, {0x1D0, 80, 0, 0})
	CMember(TMap<FString, UFMDeviceCableModulatorPortComponent*>) OptionKeyToModulatorPort                         OFFSET(get<T>, {0x220, 80, 0, 0})
	CMember(TArray<class UFabricModulatable*>)         PendingFabricModulatables                                   OFFSET(get<T>, {0x270, 16, 0, 0})
	SMember(FTimerHandle)                              ActorSaveRequestTimer                                       OFFSET(getStruct<T>, {0x280, 8, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OwnsInWorldKnobObject
	// bool OwnsInWorldKnobObject(class UObject* InWorldKnobObject);                                                            // [0xb938108] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnSaveOverridesChanged
	// void OnSaveOverridesChanged();                                                                                           // [0xb9380f4] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedModulatorPorts
	// void OnRep_ReplicatedModulatorPorts();                                                                                   // [0xb9380e0] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedInWorldKnobInterfaceObjects
	// void OnRep_ReplicatedInWorldKnobInterfaceObjects();                                                                      // [0xb9380cc] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedFabricInteractableObjects
	// void OnRep_ReplicatedFabricInteractableObjects();                                                                        // [0xb9380b8] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                                  // [0xb9379e4] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInWorldKnobSerializedOptionChanged
	// void OnInWorldKnobSerializedOptionChanged(FString Value, class UPlaylistUserOptionBase* Option, class APlayerController* PlayerController); // [0xb936a74] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInWorldKnobRuntimeOptionChanged
	// void OnInWorldKnobRuntimeOptionChanged(FString Value, class UPlaylistUserOptionBase* Option);                            // [0xb935c8c] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInitialKnobValuesLoaded__DelegateSignature
	// void OnInitialKnobValuesLoaded__DelegateSignature();                                                                     // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                               // [0xb9351e0] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyKnobSerializedValueChanged__DelegateSignature
	// void OnAnyKnobSerializedValueChanged__DelegateSignature();                                                               // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyKnobRuntimeValueChanged__DelegateSignature
	// void OnAnyKnobRuntimeValueChanged__DelegateSignature();                                                                  // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAllKnobsLoaded__DelegateSignature
	// void OnAllKnobsLoaded__DelegateSignature();                                                                              // [0x3d1d968] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.CanMakeUserOptionChanges
	// bool CanMakeUserOptionChanges();                                                                                         // [0xb9338fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.AreAllKnobsLoadedForNotify
	// bool AreAllKnobsLoadedForNotify();                                                                                       // [0xb9338e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.ActorHasValidControllerBP
	// bool ActorHasValidControllerBP(class AActor* Actor, class AFortPlayerPawn*& OutFortPlayerPawn, class APlayerController*& OutPlayerController); // [0x3d1d968] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FMInWorldKnobsRuntime.PlaylistUserOptionFMOutgoingCableConnection
/// Size: 0x0030 (0x0001D0 - 0x000200)
class UPlaylistUserOptionFMOutgoingCableConnection : public UPlaylistUserOptionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FFMOutgoingCableConnection)                DefaultValue                                                OFFSET(getStruct<T>, {0x1D0, 48, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFabricUserOptionSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFabricUserOptionSavedValue>)       SavedUserOptions                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionSavedValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricUserOptionSavedValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.ScreenMeshArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FScreenMeshArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<TWeakObjectPtr<UStaticMesh*>>)      ScreenMeshArrayByHeight                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.ScreenWidgetLayoutInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FScreenWidgetLayoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricScreenLayout
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricScreenLayout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector2D)                                 GridPosition                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     UserOptionName                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(class UClass*)                             FabricWidgetClass                                           OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValue
/// Size: 0x0008 (0x000000 - 0x000008)
class FFabricUserOptionValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueInt
/// Size: 0x0008 (0x000008 - 0x000010)
class FFabricUserOptionValueInt : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueFloat
/// Size: 0x0008 (0x000008 - 0x000010)
class FFabricUserOptionValueFloat : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueEnum
/// Size: 0x0010 (0x000008 - 0x000018)
class FFabricUserOptionValueEnum : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueBool
/// Size: 0x0008 (0x000008 - 0x000010)
class FFabricUserOptionValueBool : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueString
/// Size: 0x0010 (0x000008 - 0x000018)
class FFabricUserOptionValueString : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionPreset
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricUserOptionPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   UserOption                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FInstancedStruct)                          UserOptionValue                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionPresetCollection
/// Size: 0x0010 (0x000000 - 0x000010)
class FFabricUserOptionPresetCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFabricUserOptionPreset>)           UserOptionPresets                                           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FMOutgoingCableConnection
/// Size: 0x0030 (0x000000 - 0x000030)
class FFMOutgoingCableConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     OutputPortName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Device                                                      OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FName)                                     ComponentName                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.UserOptionDefinitionFMOutgoingConnectionMetaData
/// Size: 0x0030 (0x000008 - 0x000038)
class FUserOptionDefinitionFMOutgoingConnectionMetaData : public FUserOptionDefinitionMetaData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FFMOutgoingCableConnection)                DefaultValue                                                OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

