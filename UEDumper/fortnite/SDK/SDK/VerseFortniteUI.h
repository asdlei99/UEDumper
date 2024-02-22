
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
/// dependency: GameplayTags
/// dependency: LocalizableMessage
/// dependency: ModelViewViewModel
/// dependency: UIFramework
/// dependency: UMG
/// dependency: VerseFortnite

/// Class /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteUIAllowedConversionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyIntegers
	// int64_t MultiplyIntegers(int64_t A, int64_t B, bool bInvertB);                                                        // [0xc6966d4] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyIntDouble
	// double MultiplyIntDouble(int64_t A, bool bInvertA, double B, bool bInvertB);                                          // [0xc69654c] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyDoubles
	// double MultiplyDoubles(double A, bool bInvertA, double B, bool bInvertB);                                             // [0xc6963fc] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeTransform
	// FWidgetTransform MakeTransform(FVector2D Translation, FVector2D Scale, FVector2D Shear, double Angle);                // [0xc695fe4] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeImageBrushFromTexture
	// FSlateBrush MakeImageBrushFromTexture(class UTexture2D* Image, FVector2D ImageSize, FLinearColor LinearColor, TEnumAsByte<ESlateBrushTileType> TileType); // [0xc695c5c] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeImageBrushFromMaterial
	// FSlateBrush MakeImageBrushFromMaterial(class UMaterialInterface* Material, FVector2D ImageSize, FLinearColor TintColor); // [0xc6959b4] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.InvertBool
	// bool InvertBool(bool bValue);                                                                                         // [0xc695938] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_SlateColorToLinearColor
	// FLinearColor Conv_SlateColorToLinearColor(FSlateColor& Value);                                                        // [0xc6955e8] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_LinearColorToSlateColor
	// FSlateColor Conv_LinearColorToSlateColor(FLinearColor Value);                                                         // [0xc6954ac] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntToText
	// FText Conv_IntToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int64_t MinimumIntegralDigits, int64_t MaximumIntegralDigits); // [0xc695184] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntegerToBoolSimple
	// bool Conv_IntegerToBoolSimple(int64_t Value);                                                                         // [0xc695438] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntegerToBoolInterval
	// bool Conv_IntegerToBoolInterval(int64_t Value, int64_t InclusiveLowerBound, int64_t InclusiveUpperBound);             // [0xc69533c] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToText
	// FText Conv_DoubleToText(double Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // [0xc694efc] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToBoolSimple
	// bool Conv_DoubleToBoolSimple(double Value);                                                                           // [0xc694e68] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToBoolInterval
	// bool Conv_DoubleToBoolInterval(double Value, double InclusiveLowerBound, double InclusiveUpperBound);                 // [0xc694d54] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_BoolToSlateVisibility
	// ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // [0x338f56c] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddIntegers
	// int64_t AddIntegers(int64_t A, bool bNegateA, int64_t B, bool bNegateB);                                              // [0xc694c0c] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddIntDouble
	// double AddIntDouble(int64_t A, bool bNegateA, double B, bool bNegateB);                                               // [0xc694ab4] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddDoubles
	// double AddDoubles(double A, bool bNegateA, double B, bool bNegateB);                                                  // [0xc694948] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteUIConversionLibrary : public UVerseFortniteUIAllowedConversionLibrary
{ 
public:
};

/// Class /Script/VerseFortniteUI.VerseFortnitePlayspaceHUDController
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0028   (0x0010)  MISSED
	FHUDElementVisibilityRepData                       VisibilityData;                                             // 0x0038   (0x0078)  
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIOverlaySlot
/// Size: 0x0018 (0x000058 - 0x000070)
class UVerseFortniteUIOverlaySlot : public UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0058   (0x0018)  MISSED
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIOverlay
/// Size: 0x0018 (0x0001A0 - 0x0001B8)
class UVerseFortniteUIOverlay : public UOverlay
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x01A0   (0x0018)  MISSED
};

/// Class /Script/VerseFortniteUI.VerseFortniteUINamedSlot
/// Size: 0x0010 (0x0001A0 - 0x0001B0)
class UVerseFortniteUINamedSlot : public UNamedSlot
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x01A0   (0x0010)  MISSED
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIActivableWidgetBase
/// Size: 0x0030 (0x000400 - 0x000430)
class UVerseFortniteUIActivableWidgetBase : public UCommonActivatableWidget
{ 
public:
	class UVerseFortniteUINamedSlot*                   MainSlot;                                                   // 0x0400   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0408   (0x0008)  MISSED
	FDataTableRowHandle                                MainMenuInputRowHandle;                                     // 0x0410   (0x0010)  
	TArray<FGameplayTagContainer>                      HudToDeactivateOnInitialization;                            // 0x0420   (0x0010)  
};

/// Struct /Script/VerseFortniteUI.VerseFortniteUIPresenterElement
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVerseFortniteUIPresenterElement
{ 
	class UVerseFortniteUINamedSlot*                   SlotWidget;                                                 // 0x0000   (0x0008)  
	class UWidget*                                     UMGWidget;                                                  // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIPresenter
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter
{ 
public:
	TArray<FVerseFortniteUIPresenterElement>           Pending;                                                    // 0x0038   (0x0010)  
	TArray<FVerseFortniteUIPresenterElement>           Created;                                                    // 0x0048   (0x0010)  
	class UVerseFortniteUIOverlay*                     PlayerGameViewport;                                         // 0x0058   (0x0008)  
	class UVerseFortniteUIOverlay*                     ContentGameViewport;                                        // 0x0060   (0x0008)  
	class UVerseFortniteUIActivableWidgetBase*         PopupContainer;                                             // 0x0068   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0070   (0x0008)  MISSED
	SDK_UNDEFINED(32,9311) /* TWeakObjectPtr<UClass*> */ __um(WidgetForDynamicUI);                                 // 0x0078   (0x0020)  
	SDK_UNDEFINED(32,9312) /* TWeakObjectPtr<UCommonInputActionDomain*> */ __um(ActionDomainForDynamicUI);         // 0x0098   (0x0020)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/VerseFortniteUI.VerseFortniteWidgetViewmodel
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteWidgetViewmodel : public UObject
{ 
public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{ 
public:
	SDK_UNDEFINED(24,9313) /* FText */                 __um(Text);                                                 // 0x00C8   (0x0018)  
	FLocalizableMessage                                Message;                                                    // 0x00E0   (0x0030)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0110   (0x0018)  MISSED


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick
	// void ServerClick(class APlayerController* PlayerController);                                                          // [0xa874778] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Message
	// void OnRep_Message();                                                                                                 // [0xc696808] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText
	// FText GetText();                                                                                                      // [0xa874110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Loud : public UVerseFortniteUIFrameworkButton_Base
{ 
public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Regular : public UVerseFortniteUIFrameworkButton_Base
{ 
public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Quiet : public UVerseFortniteUIFrameworkButton_Base
{ 
public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base
/// Size: 0x0018 (0x000128 - 0x000140)
class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0128   (0x0018)  MISSED


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted
	// void ServerTextCommitted(class APlayerController* PlayerController, FText NewText);                                   // [0xc696910] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted
	// void ExecuteServerTextCommitted(FText& InText, TEnumAsByte<ETextCommit> InCommitMethod);                              // [0xc695694] Final|Native|Public|HasOutParms 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkTextBlock : public UUIFrameworkTextBlock
{ 
public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableText
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkEditableText : public UVerseFortniteUIFrameworkText_Base
{ 
public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkEditableTextBox : public UVerseFortniteUIFrameworkText_Base
{ 
public:
};

/// Struct /Script/VerseFortniteUI.VerseFortniteUIFrameworkSliderValue
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVerseFortniteUIFrameworkSliderValue
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	int32_t                                            ClientId;                                                   // 0x0004   (0x0004)  
	int32_t                                            ServerID;                                                   // 0x0008   (0x0004)  
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider
/// Size: 0x0040 (0x0000C8 - 0x000108)
class UVerseFortniteUIFrameworkSlider : public UUIFrameworkWidget
{ 
public:
	FVerseFortniteUIFrameworkSliderValue               Value;                                                      // 0x00C8   (0x000C)  
	float                                              MinValue;                                                   // 0x00D4   (0x0004)  
	float                                              MaxValue;                                                   // 0x00D8   (0x0004)  
	float                                              StepSize;                                                   // 0x00DC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00E0   (0x0028)  MISSED


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetValue
	// bool SetValue(float InValue);                                                                                         // [0xc696cb0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetStepSize
	// void SetStepSize(float InMinValue);                                                                                   // [0xc696c28] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMinValue
	// void SetMinValue(float InMinValue);                                                                                   // [0xc696ba8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMaxValue
	// void SetMaxValue(float InMaxValue);                                                                                   // [0xc696b28] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.ServerValueChanged
	// void ServerValueChanged(class APlayerController* PlayerController, float InNewValue, int32_t InClientID, int32_t InServerID); // [0xc6969e8] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_Value
	// void OnRep_Value();                                                                                                   // [0xc696894] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_StepSize
	// void OnRep_StepSize();                                                                                                // [0xc69686c] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MinValue
	// void OnRep_MinValue();                                                                                                // [0xc696844] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MaxValue
	// void OnRep_MaxValue();                                                                                                // [0xc6967e0] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.HandleValueChanged
	// void HandleValueChanged(float NewValue);                                                                              // [0xc6958b8] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetValue
	// float GetValue();                                                                                                     // [0x6171360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetStepSize
	// float GetStepSize();                                                                                                  // [0x9d2857c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMinValue
	// float GetMinValue();                                                                                                  // [0x9ab1418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMaxValue
	// float GetMaxValue();                                                                                                  // [0x67ae6cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.ExecuteServerValueChanged
	// void ExecuteServerValueChanged(float InNewValue, int32_t InClientID, int32_t InServerID);                             // [0xc6957c0] Final|Native|Public  
};

