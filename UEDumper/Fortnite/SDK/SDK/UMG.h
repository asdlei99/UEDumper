
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InputCore
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: PropertyPath
/// dependency: Slate
/// dependency: SlateCore

/// Enum /Script/UMG.ESlateVisibility
/// Size: 0x06
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible                                                        = 0,
	ESlateVisibility__Collapsed                                                      = 1,
	ESlateVisibility__Hidden                                                         = 2,
	ESlateVisibility__HitTestInvisible                                               = 3,
	ESlateVisibility__SelfHitTestInvisible                                           = 4,
	ESlateVisibility__ESlateVisibility_MAX                                           = 5
};

/// Enum /Script/UMG.EVirtualKeyboardType
/// Size: 0x07
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default                                                    = 0,
	EVirtualKeyboardType__Number                                                     = 1,
	EVirtualKeyboardType__Web                                                        = 2,
	EVirtualKeyboardType__Email                                                      = 3,
	EVirtualKeyboardType__Password                                                   = 4,
	EVirtualKeyboardType__AlphaNumeric                                               = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX                                   = 6
};

/// Enum /Script/UMG.ESlateAccessibleBehavior
/// Size: 0x06
enum class ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible                                          = 0,
	ESlateAccessibleBehavior__Auto                                                   = 1,
	ESlateAccessibleBehavior__Summary                                                = 2,
	ESlateAccessibleBehavior__Custom                                                 = 3,
	ESlateAccessibleBehavior__ToolTip                                                = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX                           = 5
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x03
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic                                                        = 0,
	ESlateSizeRule__Fill                                                             = 1,
	ESlateSizeRule__ESlateSizeRule_MAX                                               = 2
};

/// Enum /Script/UMG.EDynamicBoxType
/// Size: 0x07
enum class EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal                                                      = 0,
	EDynamicBoxType__Vertical                                                        = 1,
	EDynamicBoxType__Wrap                                                            = 2,
	EDynamicBoxType__VerticalWrap                                                    = 3,
	EDynamicBoxType__Radial                                                          = 4,
	EDynamicBoxType__Overlay                                                         = 5,
	EDynamicBoxType__EDynamicBoxType_MAX                                             = 6
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x06
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None                                                         = 0,
	EWidgetDesignFlags__Designing                                                    = 1,
	EWidgetDesignFlags__ShowOutline                                                  = 2,
	EWidgetDesignFlags__ExecutePreConstruct                                          = 4,
	EWidgetDesignFlags__Previewing                                                   = 8,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX                                       = 9
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x03
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World                                                              = 0,
	EWidgetSpace__Screen                                                             = 1,
	EWidgetSpace__EWidgetSpace_MAX                                                   = 2
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x03
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime                                                    = 0,
	EWidgetTimingPolicy__GameTime                                                    = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX                                     = 2
};

/// Enum /Script/UMG.EWidgetBlendMode
/// Size: 0x04
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque                                                         = 0,
	EWidgetBlendMode__Masked                                                         = 1,
	EWidgetBlendMode__Transparent                                                    = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX                                           = 3
};

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x03
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane                                                       = 0,
	EWidgetGeometryMode__Cylinder                                                    = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX                                     = 2
};

/// Enum /Script/UMG.EWindowVisibility
/// Size: 0x03
enum class EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible                                                       = 0,
	EWindowVisibility__SelfHitTestInvisible                                          = 1,
	EWindowVisibility__EWindowVisibility_MAX                                         = 2
};

/// Enum /Script/UMG.ETickMode
/// Size: 0x04
enum class ETickMode : uint8_t
{
	ETickMode__Disabled                                                              = 0,
	ETickMode__Enabled                                                               = 1,
	ETickMode__Automatic                                                             = 2,
	ETickMode__ETickMode_MAX                                                         = 3
};

/// Enum /Script/UMG.EWidgetInteractionSource
/// Size: 0x05
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World                                                  = 0,
	EWidgetInteractionSource__Mouse                                                  = 1,
	EWidgetInteractionSource__CenterScreen                                           = 2,
	EWidgetInteractionSource__Custom                                                 = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX                           = 4
};

/// Enum /Script/UMG.EDragPivot
/// Size: 0x11
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown                                                            = 0,
	EDragPivot__TopLeft                                                              = 1,
	EDragPivot__TopCenter                                                            = 2,
	EDragPivot__TopRight                                                             = 3,
	EDragPivot__CenterLeft                                                           = 4,
	EDragPivot__CenterCenter                                                         = 5,
	EDragPivot__CenterRight                                                          = 6,
	EDragPivot__BottomLeft                                                           = 7,
	EDragPivot__BottomCenter                                                         = 8,
	EDragPivot__BottomRight                                                          = 9,
	EDragPivot__EDragPivot_MAX                                                       = 10
};

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x03
enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never                                                      = 0,
	EWidgetTickFrequency__Auto                                                       = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX                                   = 2
};

/// Enum /Script/UMG.EWidgetAnimationEvent
/// Size: 0x03
enum class EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started                                                   = 0,
	EWidgetAnimationEvent__Finished                                                  = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX                                 = 2
};

/// Enum /Script/UMG.EUMGSequencePlayMode
/// Size: 0x04
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward                                                    = 0,
	EUMGSequencePlayMode__Reverse                                                    = 1,
	EUMGSequencePlayMode__PingPong                                                   = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX                                   = 3
};

/// Enum /Script/UMG.EBindingKind
/// Size: 0x03
enum class EBindingKind : uint8_t
{
	EBindingKind__Function                                                           = 0,
	EBindingKind__Property                                                           = 1,
	EBindingKind__EBindingKind_MAX                                                   = 2
};

/// Class /Script/UMG.Visual
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisual : public UObject
{ 
public:
};

/// Struct /Script/UMG.WidgetTransform
/// Size: 0x0038 (0x000000 - 0x000038)
struct FWidgetTransform
{ 
	FVector2D                                          Translation;                                                // 0x0000   (0x0010)  
	FVector2D                                          Scale;                                                      // 0x0010   (0x0010)  
	FVector2D                                          Shear;                                                      // 0x0020   (0x0010)  
	float                                              Angle;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/UMG.Widget
/// Size: 0x0150 (0x000028 - 0x000178)
class UWidget : public UVisual
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UPanelSlot*                                  Slot;                                                       // 0x0030   (0x0008)  
	SDK_UNDEFINED(12,1389) /* FDelegateProperty */     __um(bIsEnabledDelegate);                                   // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(24,1390) /* FText */                 __um(ToolTipText);                                          // 0x0048   (0x0018)  
	SDK_UNDEFINED(12,1391) /* FDelegateProperty */     __um(ToolTipTextDelegate);                                  // 0x0060   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	class UWidget*                                     ToolTipWidget;                                              // 0x0070   (0x0008)  
	SDK_UNDEFINED(12,1392) /* FDelegateProperty */     __um(ToolTipWidgetDelegate);                                // 0x0078   (0x000C)  
	SDK_UNDEFINED(12,1393) /* FDelegateProperty */     __um(VisibilityDelegate);                                   // 0x0084   (0x000C)  
	FWidgetTransform                                   RenderTransform;                                            // 0x0090   (0x0038)  
	FVector2D                                          RenderTransformPivot;                                       // 0x00C8   (0x0010)  
	EFlowDirectionPreference                           FlowDirectionPreference;                                    // 0x00D8   (0x0001)  
	bool                                               bIsVariable : 1;                                            // 0x00D9:0 (0x0001)  
	bool                                               bCreatedByConstructionScript : 1;                           // 0x00D9:1 (0x0001)  
	bool                                               bIsEnabled : 1;                                             // 0x00D9:2 (0x0001)  
	bool                                               bOverride_Cursor : 1;                                       // 0x00D9:3 (0x0001)  
	bool                                               bIsVolatile : 1;                                            // 0x00D9:4 (0x0001)  
	SDK_UNDEFINED(1,1394) /* TEnumAsByte<EMouseCursor> */ __um(Cursor);                                            // 0x00DA   (0x0001)  
	EWidgetClipping                                    Clipping;                                                   // 0x00DB   (0x0001)  
	ESlateVisibility                                   Visibility;                                                 // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	float                                              RenderOpacity;                                              // 0x00E0   (0x0004)  
	EWidgetPixelSnapping                               PixelSnapping;                                              // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	class USlateAccessibleWidgetData*                  AccessibleWidgetData;                                       // 0x00E8   (0x0008)  
	class UWidgetNavigation*                           Navigation;                                                 // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData05_5[0x50];                                      // 0x00F8   (0x0050)  MISSED
	TArray<class UPropertyBinding*>                    NativeBindings;                                             // 0x0148   (0x0010)  
	unsigned char                                      UnknownData06_6[0x20];                                      // 0x0158   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.Widget.SetVisibility
	// void SetVisibility(ESlateVisibility InVisibility);                                                                    // [0x11be880] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetUserFocus
	// void SetUserFocus(class APlayerController* PlayerController);                                                         // [0x62b8cf8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTipText
	// void SetToolTipText(FText& InToolTipText);                                                                            // [0x62b8bc4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTip
	// void SetToolTip(class UWidget* Widget);                                                                               // [0x62b8b44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTranslation
	// void SetRenderTranslation(FVector2D Translation);                                                                     // [0x1b47ad8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformPivot
	// void SetRenderTransformPivot(FVector2D Pivot);                                                                        // [0x3302b24] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformAngle
	// void SetRenderTransformAngle(float Angle);                                                                            // [0x345a648] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransform
	// void SetRenderTransform(FWidgetTransform InTransform);                                                                // [0x22f60b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderShear
	// void SetRenderShear(FVector2D Shear);                                                                                 // [0x3262670] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderScale
	// void SetRenderScale(FVector2D Scale);                                                                                 // [0x30fbeb4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderOpacity
	// void SetRenderOpacity(float InOpacity);                                                                               // [0x22f5c58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleExplicit
	// void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);                                     // [0x62b6c04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustomBoundary
	// void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate);                    // [0x62b6b2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustom
	// void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate);                            // [0x62b6a54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleBase
	// void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);                                          // [0x62b6990] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRule
	// void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);                         // [0x62b686c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetKeyboardFocus
	// void SetKeyboardFocus();                                                                                              // [0x62b5f58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetIsEnabled
	// void SetIsEnabled(bool bInIsEnabled);                                                                                 // [0x1939054] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetFocus
	// void SetFocus();                                                                                                      // [0x20ba964] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetCursor
	// void SetCursor(TEnumAsByte<EMouseCursor> InCursor);                                                                   // [0x62b4088] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetClipping
	// void SetClipping(EWidgetClipping InClipping);                                                                         // [0x3b162e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetAllNavigationRules
	// void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);                                              // [0x62b373c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ResetCursor
	// void ResetCursor();                                                                                                   // [0x62b3494] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.RemoveFromParent
	// void RemoveFromParent();                                                                                              // [0x2264518] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.OnReply__DelegateSignature
	// FEventReply OnReply__DelegateSignature();                                                                             // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.OnPointerEvent__DelegateSignature
	// FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);                       // [0x211c0a0] Public|Delegate|HasOutParms 
	// Function /Script/UMG.Widget.K2_RemoveFieldValueChangedDelegate
	// void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                    // [0x62b298c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.K2_BroadcastFieldValueChanged
	// void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                     // [0x62b285c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.Widget.K2_AddFieldValueChangedDelegate
	// void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x62b263c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.IsVisible
	// bool IsVisible();                                                                                                     // [0x3302aa0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsRendered
	// bool IsRendered();                                                                                                    // [0x62b25b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsInViewport
	// bool IsInViewport();                                                                                                  // [0x62b2560] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsHovered
	// bool IsHovered();                                                                                                     // [0x34b6d90] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility
	// void InvalidateLayoutAndVolatility();                                                                                 // [0x3680674] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.HasUserFocusedDescendants
	// bool HasUserFocusedDescendants(class APlayerController* PlayerController);                                            // [0x62b24b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasUserFocus
	// bool HasUserFocus(class APlayerController* PlayerController);                                                         // [0x62b2420] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCaptureByUser
	// bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);                                                  // [0x62b2328] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCapture
	// bool HasMouseCapture();                                                                                               // [0x2a5d0f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasKeyboardFocus
	// bool HasKeyboardFocus();                                                                                              // [0x62b2304] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasFocusedDescendants
	// bool HasFocusedDescendants();                                                                                         // [0x62b22e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasAnyUserFocus
	// bool HasAnyUserFocus();                                                                                               // [0x35ee028] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetWidget__DelegateSignature
	// class UWidget* GetWidget__DelegateSignature();                                                                        // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetVisibility
	// ESlateVisibility GetVisibility();                                                                                     // [0x348f684] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetTickSpaceGeometry
	// FGeometry GetTickSpaceGeometry();                                                                                     // [0x62b176c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                   // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateVisibility__DelegateSignature
	// ESlateVisibility GetSlateVisibility__DelegateSignature();                                                             // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateColor__DelegateSignature
	// FSlateColor GetSlateColor__DelegateSignature();                                                                       // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateBrush__DelegateSignature
	// FSlateBrush GetSlateBrush__DelegateSignature();                                                                       // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetRenderTransformAngle
	// float GetRenderTransformAngle();                                                                                      // [0x62b1e44] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetRenderOpacity
	// float GetRenderOpacity();                                                                                             // [0x62b1e04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetParent
	// class UPanelWidget* GetParent();                                                                                      // [0x36e86e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetPaintSpaceGeometry
	// FGeometry GetPaintSpaceGeometry();                                                                                    // [0x348494c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningPlayer
	// class APlayerController* GetOwningPlayer();                                                                           // [0x2eab79c] RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningLocalPlayer
	// class ULocalPlayer* GetOwningLocalPlayer();                                                                           // [0x39cfe38] RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetMouseCursor__DelegateSignature
	// TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();                                                        // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetLinearColor__DelegateSignature
	// FLinearColor GetLinearColor__DelegateSignature();                                                                     // [0x211c0a0] Public|Delegate|HasDefaults 
	// Function /Script/UMG.Widget.GetIsEnabled
	// bool GetIsEnabled();                                                                                                  // [0x2e11c08] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetInt32__DelegateSignature
	// int32_t GetInt32__DelegateSignature();                                                                                // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetGameInstance
	// class UGameInstance* GetGameInstance();                                                                               // [0x62b1a7c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetFloat__DelegateSignature
	// float GetFloat__DelegateSignature();                                                                                  // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetDesiredSize
	// FVector2D GetDesiredSize();                                                                                           // [0x2b4c068] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetClipping
	// EWidgetClipping GetClipping();                                                                                        // [0x62b186c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetCheckBoxState__DelegateSignature
	// ECheckBoxState GetCheckBoxState__DelegateSignature();                                                                 // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetCachedGeometry
	// FGeometry GetCachedGeometry();                                                                                        // [0x62b176c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetBool__DelegateSignature
	// bool GetBool__DelegateSignature();                                                                                    // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GetAccessibleText
	// FText GetAccessibleText();                                                                                            // [0x62b16c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetAccessibleSummaryText
	// FText GetAccessibleSummaryText();                                                                                     // [0x62b1644] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature
	// class UWidget* GenerateWidgetForString__DelegateSignature(FString Item);                                              // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);                                       // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.Widget.ForceVolatile
	// void ForceVolatile(bool bForce);                                                                                      // [0x62b15c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ForceLayoutPrepass
	// void ForceLayoutPrepass();                                                                                            // [0x2c3e8ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.UserWidgetPool
/// Size: 0x0088 (0x000000 - 0x000088)
struct FUserWidgetPool
{ 
	TArray<class UUserWidget*>                         ActiveWidgets;                                              // 0x0000   (0x0010)  
	TArray<class UUserWidget*>                         InactiveWidgets;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0020   (0x0068)  MISSED
};

/// Class /Script/UMG.ListViewBase
/// Size: 0x0120 (0x000178 - 0x000298)
class UListViewBase : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1395) /* FMulticastInlineDelegate */ __um(BP_OnEntryGenerated);                               // 0x0178   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0188   (0x0010)  MISSED
	class UClass*                                      EntryWidgetClass;                                           // 0x0198   (0x0008)  
	float                                              WheelScrollMultiplier;                                      // 0x01A0   (0x0004)  
	bool                                               bEnableScrollAnimation;                                     // 0x01A4   (0x0001)  
	bool                                               bInEnableTouchAnimatedScrolling;                            // 0x01A5   (0x0001)  
	bool                                               AllowOverscroll;                                            // 0x01A6   (0x0001)  
	bool                                               bEnableRightClickScrolling;                                 // 0x01A7   (0x0001)  
	bool                                               bEnableTouchScrolling;                                      // 0x01A8   (0x0001)  
	bool                                               bEnableFixedLineOffset;                                     // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01AA   (0x0002)  MISSED
	float                                              FixedLineScrollOffset;                                      // 0x01AC   (0x0004)  
	bool                                               bAllowDragging;                                             // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x01B1   (0x0007)  MISSED
	SDK_UNDEFINED(16,1396) /* FMulticastInlineDelegate */ __um(BP_OnEntryReleased);                                // 0x01B8   (0x0010)  
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x01C8   (0x0088)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x0250   (0x0048)  MISSED


	/// Functions
	// Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                        // [0x39db078] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollOffset
	// void SetScrollOffset(float InScrollOffset);                                                                           // [0x62b73e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollbarVisibility
	// void SetScrollbarVisibility(ESlateVisibility InVisibility);                                                           // [0x23a0430] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToTop
	// void ScrollToTop();                                                                                                   // [0x62b35d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToBottom
	// void ScrollToBottom();                                                                                                // [0x62b359c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RequestRefresh
	// void RequestRefresh();                                                                                                // [0x62b3440] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RegenerateAllEntries
	// void RegenerateAllEntries();                                                                                          // [0x62b2e44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.GetScrollOffset
	// float GetScrollOffset();                                                                                              // [0x62b1e5c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets
	// TArray<UUserWidget*> GetDisplayedEntryWidgets();                                                                      // [0x2a31fec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ListView
/// Size: 0x0938 (0x000298 - 0x000BD0)
class UListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	FTableViewStyle                                    WidgetStyle;                                                // 0x0380   (0x00D0)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0450   (0x06E0)  
	SDK_UNDEFINED(1,1397) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0B30   (0x0001)  
	SDK_UNDEFINED(1,1398) /* TEnumAsByte<ESelectionMode> */ __um(SelectionMode);                                   // 0x0B31   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x0B32   (0x0001)  
	bool                                               bClearSelectionOnClick;                                     // 0x0B33   (0x0001)  
	bool                                               bIsFocusable;                                               // 0x0B34   (0x0001)  
	bool                                               bReturnFocusToSelection;                                    // 0x0B35   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0B36   (0x0002)  MISSED
	TArray<class UObject*>                             ListItems;                                                  // 0x0B38   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0B48   (0x0010)  MISSED
	float                                              HorizontalEntrySpacing;                                     // 0x0B58   (0x0004)  
	float                                              VerticalEntrySpacing;                                       // 0x0B5C   (0x0004)  
	SDK_UNDEFINED(16,1399) /* FMulticastInlineDelegate */ __um(BP_OnEntryInitialized);                             // 0x0B60   (0x0010)  
	SDK_UNDEFINED(16,1400) /* FMulticastInlineDelegate */ __um(BP_OnItemClicked);                                  // 0x0B70   (0x0010)  
	SDK_UNDEFINED(16,1401) /* FMulticastInlineDelegate */ __um(BP_OnItemDoubleClicked);                            // 0x0B80   (0x0010)  
	SDK_UNDEFINED(16,1402) /* FMulticastInlineDelegate */ __um(BP_OnItemIsHoveredChanged);                         // 0x0B90   (0x0010)  
	SDK_UNDEFINED(16,1403) /* FMulticastInlineDelegate */ __um(BP_OnItemSelectionChanged);                         // 0x0BA0   (0x0010)  
	SDK_UNDEFINED(16,1404) /* FMulticastInlineDelegate */ __um(BP_OnItemScrolledIntoView);                         // 0x0BB0   (0x0010)  
	SDK_UNDEFINED(16,1405) /* FMulticastInlineDelegate */ __um(BP_OnListViewScrolled);                             // 0x0BC0   (0x0010)  


	/// Functions
	// Function /Script/UMG.ListView.SetSelectionMode
	// void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);                                                     // [0x62b771c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                 // [0x370916c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.ScrollIndexIntoView
	// void ScrollIndexIntoView(int32_t Index);                                                                              // [0x62b351c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.RemoveItem
	// void RemoveItem(class UObject* Item);                                                                                 // [0x62b31e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.OnListItemOuterEndPlayed
	// void OnListItemOuterEndPlayed(class AActor* ItemOuter, TEnumAsByte<EEndPlayReason> EndPlayReason);                    // [0x62b2cec] Final|RequiredAPI|Native|Protected 
	// Function /Script/UMG.ListView.OnListItemEndPlayed
	// void OnListItemEndPlayed(class AActor* Item, TEnumAsByte<EEndPlayReason> EndPlayReason);                              // [0x62b2c2c] Final|RequiredAPI|Native|Protected 
	// Function /Script/UMG.ListView.NavigateToIndex
	// void NavigateToIndex(int32_t Index);                                                                                  // [0x62b2bac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.IsRefreshPending
	// bool IsRefreshPending();                                                                                              // [0x62b2584] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetVerticalEntrySpacing
	// float GetVerticalEntrySpacing();                                                                                      // [0x62b2078] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetNumItems
	// int32_t GetNumItems();                                                                                                // [0x366d0b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetListItems
	// TArray<UObject*> GetListItems();                                                                                      // [0x62b1c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetItemAt
	// class UObject* GetItemAt(int32_t Index);                                                                              // [0x62b1bdc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetIndexForItem
	// int32_t GetIndexForItem(class UObject* Item);                                                                         // [0x3ad1cc0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetHorizontalEntrySpacing
	// float GetHorizontalEntrySpacing();                                                                                    // [0x62b1b84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.ClearListItems
	// void ClearListItems();                                                                                                // [0x3993cc8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetSelectedItem
	// void BP_SetSelectedItem(class UObject* Item);                                                                         // [0x62b12ac] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetListItems
	// void BP_SetListItems(TArray<UObject*>& InListItems);                                                                  // [0x35bc174] Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetItemSelection
	// void BP_SetItemSelection(class UObject* Item, bool bSelected);                                                        // [0x62b11e8] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_ScrollItemIntoView
	// void BP_ScrollItemIntoView(class UObject* Item);                                                                      // [0x62b115c] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_NavigateToItem
	// void BP_NavigateToItem(class UObject* Item);                                                                          // [0x62b10d0] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_IsItemVisible
	// bool BP_IsItemVisible(class UObject* Item);                                                                           // [0x62b1044] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItems
	// bool BP_GetSelectedItems(TArray<UObject*>& Items);                                                                    // [0x62b0f90] Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItem
	// class UObject* BP_GetSelectedItem();                                                                                  // [0x3c32fb4] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetNumItemsSelected
	// int32_t BP_GetNumItemsSelected();                                                                                     // [0x62b0f64] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_ClearSelection
	// void BP_ClearSelection();                                                                                             // [0x62b0f48] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_CancelScrollIntoView
	// void BP_CancelScrollIntoView();                                                                                       // [0x62b0f14] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.AddItem
	// void AddItem(class UObject* Item);                                                                                    // [0x30529b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ListViewDesignerPreviewItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UListViewDesignerPreviewItem : public UObject
{ 
public:
};

/// Class /Script/UMG.SlateAccessibleWidgetData
/// Size: 0x0058 (0x000028 - 0x000080)
class USlateAccessibleWidgetData : public UObject
{ 
public:
	bool                                               bCanChildrenBeAccessible;                                   // 0x0028   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleBehavior;                                         // 0x0029   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                  // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	SDK_UNDEFINED(24,1406) /* FText */                 __um(AccessibleText);                                       // 0x0030   (0x0018)  
	SDK_UNDEFINED(12,1407) /* FDelegateProperty */     __um(AccessibleTextDelegate);                               // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(24,1408) /* FText */                 __um(AccessibleSummaryText);                                // 0x0058   (0x0018)  
	SDK_UNDEFINED(12,1409) /* FDelegateProperty */     __um(AccessibleSummaryTextDelegate);                        // 0x0070   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED


	/// Functions
	// Function /Script/UMG.SlateAccessibleWidgetData.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                   // [0x211c0a0] Public|Delegate      
};

/// Class /Script/UMG.UserWidgetBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UUserWidgetBlueprint : public UBlueprint
{ 
public:
};

/// Struct /Script/UMG.NamedSlotBinding
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNamedSlotBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UWidget*                                     Content;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/UMG.WidgetChild
/// Size: 0x000C (0x000000 - 0x00000C)
struct FWidgetChild
{ 
	FName                                              WidgetName;                                                 // 0x0000   (0x0004)  
	SDK_UNDEFINED(8,1410) /* TWeakObjectPtr<UWidget*> */ __um(WidgetPtr);                                          // 0x0004   (0x0008)  
};

/// Struct /Script/UMG.AnimationEventBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAnimationEventBinding
{ 
	class UWidgetAnimation*                            Animation;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(12,1411) /* FDelegateProperty */     __um(Delegate);                                             // 0x0008   (0x000C)  
	EWidgetAnimationEvent                              AnimationEvent;                                             // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              UserTag;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/UMG.UserWidget
/// Size: 0x0148 (0x000178 - 0x0002C0)
class UUserWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0178   (0x0008)  MISSED
	FLinearColor                                       ColorAndOpacity;                                            // 0x0180   (0x0010)  
	SDK_UNDEFINED(12,1412) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x0190   (0x000C)  
	FSlateColor                                        ForegroundColor;                                            // 0x019C   (0x0014)  
	SDK_UNDEFINED(12,1413) /* FDelegateProperty */     __um(ForegroundColorDelegate);                              // 0x01B0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,1414) /* FMulticastInlineDelegate */ __um(OnVisibilityChanged);                               // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x01D0   (0x0030)  MISSED
	FMargin                                            Padding;                                                    // 0x0200   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0210   (0x0004)  
	bool                                               bIsFocusable : 1;                                           // 0x0214:0 (0x0001)  
	bool                                               bStopAction : 1;                                            // 0x0214:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0215   (0x0003)  MISSED
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                      // 0x0218   (0x0010)  
	class UUMGSequenceTickManager*                     AnimationTickManager;                                       // 0x0228   (0x0008)  
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                     // 0x0230   (0x0010)  
	TArray<FNamedSlotBinding>                          NamedSlotBindings;                                          // 0x0240   (0x0010)  
	TArray<class UUserWidgetExtension*>                Extensions;                                                 // 0x0250   (0x0010)  
	class UWidgetTree*                                 WidgetTree;                                                 // 0x0260   (0x0008)  
	bool                                               bHasScriptImplementedTick : 1;                              // 0x0268:0 (0x0001)  
	bool                                               bHasScriptImplementedPaint : 1;                             // 0x0268:1 (0x0001)  
	unsigned char                                      UnknownData04_4[0x17];                                      // 0x0269   (0x0017)  MISSED
	EWidgetTickFrequency                               TickFrequency;                                              // 0x0280   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0281   (0x0003)  MISSED
	FWidgetChild                                       DesiredFocusWidget;                                         // 0x0284   (0x000C)  
	class UInputComponent*                             InputComponent;                                             // 0x0290   (0x0008)  
	TArray<FAnimationEventBinding>                     AnimationCallbacks;                                         // 0x0298   (0x0010)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x02A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.UserWidget.UnregisterInputComponent
	// void UnregisterInputComponent();                                                                                      // [0x62d2c10] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                       // [0x36f9274] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                      // [0x2f9239c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);                                                // [0x62d2a34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);                                               // [0x35f8570] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                   // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.StopListeningForInputAction
	// void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);                               // [0x62d2318] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions
	// void StopListeningForAllInputActions();                                                                               // [0x62d2304] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions
	// void StopAnimationsAndLatentActions();                                                                                // [0x349fa38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimation
	// void StopAnimation(class UWidgetAnimation* InAnimation);                                                              // [0x2ab8b14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAllAnimations
	// void StopAllAnimations();                                                                                             // [0x19b0858] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPositionInViewport
	// void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);                                                 // [0x62d1710] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPlaybackSpeed
	// void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);                                      // [0x62d163c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x28da7a8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningPlayer
	// void SetOwningPlayer(class APlayerController* LocalPlayerController);                                                 // [0x62d11dc] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay
	// void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);                                  // [0x62d1100] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionPriority
	// void SetInputActionPriority(int32_t NewPriority);                                                                     // [0x3547a5c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionBlocking
	// void SetInputActionBlocking(bool bShouldBlock);                                                                       // [0x62d0968] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                               // [0x62d0288] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport
	// void SetDesiredSizeInViewport(FVector2D Size);                                                                        // [0x62cff88] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x31f0dc0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnimationCurrentTime
	// void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);                                      // [0x2ab86b8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnchorsInViewport
	// void SetAnchorsInViewport(FAnchors Anchors);                                                                          // [0x62cfa7c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAlignmentInViewport
	// void SetAlignmentInViewport(FVector2D Alignment);                                                                     // [0x62cf944] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.ReverseAnimation
	// void ReverseAnimation(class UWidgetAnimation* InAnimation);                                                           // [0x62cea08] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveFromViewport
	// void RemoveFromViewport();                                                                                            // [0x2264518] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveExtensions
	// void RemoveExtensions(class UClass* InExtensionType);                                                                 // [0x62ce904] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveExtension
	// void RemoveExtension(class UUserWidgetExtension* InExtension);                                                        // [0x62ce7e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RegisterInputComponent
	// void RegisterInputComponent();                                                                                        // [0x62ce0c0] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.PlaySound
	// void PlaySound(class USoundBase* SoundToPlay);                                                                        // [0x62cd69c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationTimeRange
	// class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x62cd490] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationReverse
	// class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x2ab8934] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationForward
	// class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x2ab8bd8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimation
	// class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x19afa5c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PauseAnimation
	// float PauseAnimation(class UWidgetAnimation* InAnimation);                                                            // [0x62cd398] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.OnTouchStarted
	// FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                        // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchMoved
	// FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                          // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchGesture
	// FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);                                        // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchForceChanged
	// FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                   // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchEnded
	// FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                          // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewKeyDown
	// FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                             // [0x211c0a0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                 // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.OnMouseWheel
	// FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseMove
	// FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                             // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                         // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                   // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseCaptureLost
	// void OnMouseCaptureLost();                                                                                            // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                         // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                       // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick
	// FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                            // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMotionDetected
	// FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);                                       // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                      // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                    // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyChar
	// FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);                                        // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnInitialized
	// void OnInitialized();                                                                                                 // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusReceived
	// FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                          // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                           // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDrop
	// bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                   // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragOver
	// bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);               // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragLeave
	// void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);                                    // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragEnter
	// void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);              // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragDetected
	// void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);         // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragCancelled
	// void OnDragCancelled(FPointerEvent& PointerEvent, class UDragDropOperation* Operation);                               // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationStarted
	// void OnAnimationStarted(class UWidgetAnimation* Animation);                                                           // [0x2b0b23c] RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationFinished
	// void OnAnimationFinished(class UWidgetAnimation* Animation);                                                          // [0x2d7cbec] RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnalogValueChanged
	// FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                         // [0x211c0a0] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                    // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.ListenForInputAction
	// void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FDelegateProperty Callback); // [0x62ccb44] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsPlayingAnimation
	// bool IsPlayingAnimation();                                                                                            // [0x2bd518c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsListeningForInputAction
	// bool IsListeningForInputAction(FName ActionName);                                                                     // [0x62cc914] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInteractable
	// bool IsInteractable();                                                                                                // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying
	// bool IsAnyAnimationPlaying();                                                                                         // [0x2bd518c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward
	// bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);                                                  // [0x62cc7e0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsAnimationPlaying
	// bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);                                                         // [0x2ab8a3c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn
	// class APawn* GetOwningPlayerPawn();                                                                                   // [0x39e9228] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerCameraManager
	// class APlayerCameraManager* GetOwningPlayerCameraManager();                                                           // [0x62cc46c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetIsVisible
	// bool GetIsVisible();                                                                                                  // [0x62b2560] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetExtensions
	// TArray<UUserWidgetExtension*> GetExtensions(class UClass* ExtensionType);                                             // [0x62cbb3c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetExtension
	// class UUserWidgetExtension* GetExtension(class UClass* ExtensionType);                                                // [0x13f7a74] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime
	// float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);                                                   // [0x2ab8820] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnchorsInViewport
	// FAnchors GetAnchorsInViewport();                                                                                      // [0x62cba90] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAlignmentInViewport
	// FVector2D GetAlignmentInViewport();                                                                                   // [0x62cb748] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.FlushAnimations
	// void FlushAnimations();                                                                                               // [0x62cb5dc] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Destruct
	// void Destruct();                                                                                                      // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.Construct
	// void Construct();                                                                                                     // [0x211c0a0] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.CancelLatentActions
	// void CancelLatentActions();                                                                                           // [0x62c897c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationStarted
	// void BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                           // [0x339394c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationFinished
	// void BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                          // [0x3222710] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationEvent
	// void BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // [0x365c2ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToViewport
	// void AddToViewport(int32_t ZOrder);                                                                                   // [0x62c88e0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToPlayerScreen
	// bool AddToPlayerScreen(int32_t ZOrder);                                                                               // [0x62c8854] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddExtension
	// class UUserWidgetExtension* AddExtension(class UClass* InExtensionType);                                              // [0x62c87b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UserWidgetExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserWidgetExtension : public UObject
{ 
public:
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClassExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintGeneratedClassExtension : public UObject
{ 
public:
};

/// Class /Script/UMG.WidgetFieldNotificationExtension
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetFieldNotificationExtension : public UUserWidgetExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/UMG.WidgetNavigationData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FWidgetNavigationData
{ 
	EUINavigationRule                                  Rule;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              WidgetToFocus;                                              // 0x0004   (0x0004)  
	SDK_UNDEFINED(8,1415) /* TWeakObjectPtr<UWidget*> */ __um(Widget);                                             // 0x0008   (0x0008)  
	SDK_UNDEFINED(12,1416) /* FDelegateProperty */     __um(CustomDelegate);                                       // 0x0010   (0x000C)  
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UWidgetNavigation : public UObject
{ 
public:
	FWidgetNavigationData                              Up;                                                         // 0x0028   (0x001C)  
	FWidgetNavigationData                              Down;                                                       // 0x0044   (0x001C)  
	FWidgetNavigationData                              Left;                                                       // 0x0060   (0x001C)  
	FWidgetNavigationData                              Right;                                                      // 0x007C   (0x001C)  
	FWidgetNavigationData                              Next;                                                       // 0x0098   (0x001C)  
	FWidgetNavigationData                              Previous;                                                   // 0x00B4   (0x001C)  
};

/// Class /Script/UMG.MovieScene2DTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Struct /Script/UMG.MovieScene2DTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieScene2DTransformMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Class /Script/UMG.MovieScene2DTransformSection
/// Size: 0x0780 (0x0000F0 - 0x000870)
class UMovieScene2DTransformSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieScene2DTransformMask                         TransformMask;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Translation;                                                // 0x0100   (0x0220)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x0320   (0x0110)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x0430   (0x0220)  
	FMovieSceneFloatChannel                            Shear;                                                      // 0x0650   (0x0220)  
};

/// Class /Script/UMG.MovieScene2DTransformTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneMarginPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/UMG.MovieSceneMarginSection
/// Size: 0x0448 (0x0000F0 - 0x000538)
class UMovieSceneMarginSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            TopCurve;                                                   // 0x00F8   (0x0110)  
	FMovieSceneFloatChannel                            LeftCurve;                                                  // 0x0208   (0x0110)  
	FMovieSceneFloatChannel                            RightCurve;                                                 // 0x0318   (0x0110)  
	FMovieSceneFloatChannel                            BottomCurve;                                                // 0x0428   (0x0110)  
};

/// Class /Script/UMG.MovieSceneMarginTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialSystem
/// Size: 0x0168 (0x000040 - 0x0001A8)
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x168];                                     // 0x0040   (0x0168)  MISSED
};

/// Class /Script/UMG.MovieSceneWidgetMaterialTrack
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B0   (0x0010)  MISSED
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x00C0   (0x0010)  
	FName                                              TrackName;                                                  // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x0310 (0x000028 - 0x000338)
class UUMGSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1F8];                                     // 0x0028   (0x01F8)  MISSED
	class UWidgetAnimation*                            Animation;                                                  // 0x0220   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0228   (0x0008)  MISSED
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0230   (0x0088)  
	unsigned char                                      UnknownData02_6[0x80];                                      // 0x02B8   (0x0080)  MISSED


	/// Functions
	// Function /Script/UMG.UMGSequencePlayer.SetUserTag
	// void SetUserTag(FName InUserTag);                                                                                     // [0x628f04c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UMGSequencePlayer.GetUserTag
	// FName GetUserTag();                                                                                                   // [0x628bc88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UMGSequenceTickManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UUMGSequenceTickManager : public UObject
{ 
public:
	SDK_UNDEFINED(80,1417) /* TMap<TWeakObjectPtr<UUserWidget*>, FSequenceTickManagerWidgetData> */ __um(WeakUserWidgetData); // 0x0028   (0x0050)  
	class UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0080   (0x0040)  MISSED
};

/// Struct /Script/UMG.WidgetAnimationBinding
/// Size: 0x001C (0x000000 - 0x00001C)
struct FWidgetAnimationBinding
{ 
	FName                                              WidgetName;                                                 // 0x0000   (0x0004)  
	FName                                              SlotWidgetName;                                             // 0x0004   (0x0004)  
	FGuid                                              AnimationGuid;                                              // 0x0008   (0x0010)  
	bool                                               bIsRootWidget;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Class /Script/UMG.WidgetAnimation
/// Size: 0x0030 (0x000068 - 0x000098)
class UWidgetAnimation : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	TArray<FWidgetAnimationBinding>                    AnimationBindings;                                          // 0x0070   (0x0010)  
	bool                                               bLegacyFinishOnStop;                                        // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	SDK_UNDEFINED(16,1418) /* FString */               __um(DisplayLabel);                                         // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                               // [0x6290078] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                              // [0x2f92478] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UUserWidget* Widget);                                                        // [0x628fffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UUserWidget* Widget);                                                       // [0x628ff80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.GetStartTime
	// float GetStartTime();                                                                                                 // [0x2ab8698] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.GetEndTime
	// float GetEndTime();                                                                                                   // [0x2ab8914] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationStarted
	// void BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                                   // [0x6289d78] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationFinished
	// void BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                                  // [0x3138010] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.BlueprintWidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBlueprintWidgetAnimationDelegateBinding
{ 
	EWidgetAnimationEvent                              Action;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              AnimationToBind;                                            // 0x0004   (0x0004)  
	FName                                              FunctionNameToBind;                                         // 0x0008   (0x0004)  
	FName                                              UserTag;                                                    // 0x000C   (0x0004)  
};

/// Class /Script/UMG.WidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{ 
public:
	TArray<FBlueprintWidgetAnimationDelegateBinding>   WidgetAnimationDelegateBindings;                            // 0x0028   (0x0010)  
};

/// Class /Script/UMG.WidgetAnimationPlayCallbackProxy
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetAnimationPlayCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1419) /* FMulticastInlineDelegate */ __um(Finished);                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x6289eec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x33346dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/UMG.DynamicPropertyPath
/// Size: 0x0000 (0x000038 - 0x000038)
struct FDynamicPropertyPath : FCachedPropertyPath
{ 
};

/// Class /Script/UMG.PropertyBinding
/// Size: 0x0048 (0x000028 - 0x000070)
class UPropertyBinding : public UObject
{ 
public:
	SDK_UNDEFINED(8,1420) /* TWeakObjectPtr<UObject*> */ __um(SourceObject);                                       // 0x0028   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0030   (0x0038)  
	FName                                              DestinationProperty;                                        // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UBoolBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.BoolBinding.GetValue
	// bool GetValue();                                                                                                      // [0x628bca0] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UBrushBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.BrushBinding.GetValue
	// FSlateBrush GetValue();                                                                                               // [0x628bcfc] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UCheckedStateBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CheckedStateBinding.GetValue
	// ECheckBoxState GetValue();                                                                                            // [0x628bd40] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UColorBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.ColorBinding.GetSlateValue
	// FSlateColor GetSlateValue();                                                                                          // [0x628bbd0] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/UMG.ColorBinding.GetLinearValue
	// FLinearColor GetLinearValue();                                                                                        // [0x628b174] Final|RequiredAPI|Native|Public|HasDefaults|Const 
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.FloatBinding.GetValue
	// float GetValue();                                                                                                     // [0x628bd64] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt32Binding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.Int32Binding.GetValue
	// int32_t GetValue();                                                                                                   // [0x628bd8c] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UMouseCursorBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.MouseCursorBinding.GetValue
	// TEnumAsByte<EMouseCursor> GetValue();                                                                                 // [0x628bde8] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.WidgetBinaryStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBinaryStateRegistration : public UObject
{ 
public:
};

/// Class /Script/UMG.WidgetHoveredStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetHoveredStateRegistration : public UWidgetBinaryStateRegistration
{ 
public:
};

/// Class /Script/UMG.WidgetPressedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetPressedStateRegistration : public UWidgetBinaryStateRegistration
{ 
public:
};

/// Class /Script/UMG.WidgetDisabledStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetDisabledStateRegistration : public UWidgetBinaryStateRegistration
{ 
public:
};

/// Class /Script/UMG.WidgetSelectedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetSelectedStateRegistration : public UWidgetBinaryStateRegistration
{ 
public:
};

/// Class /Script/UMG.WidgetEnumStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetEnumStateRegistration : public UObject
{ 
public:
};

/// Class /Script/UMG.WidgetStateSettings
/// Size: 0x0570 (0x000030 - 0x0005A0)
class UWidgetStateSettings : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_1[0x570];                                     // 0x0030   (0x0570)  MISSED
};

/// Class /Script/UMG.TextBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UTextBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.TextBinding.GetTextValue
	// FText GetTextValue();                                                                                                 // [0x628bc44] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/UMG.TextBinding.GetStringValue
	// FString GetStringValue();                                                                                             // [0x628bc04] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UVisibilityBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.VisibilityBinding.GetValue
	// ESlateVisibility GetValue();                                                                                          // [0x628be40] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UWidgetBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetBinding.GetValue
	// class UWidget* GetValue();                                                                                            // [0x628be9c] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000030 - 0x000050)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1421) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1422) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage
	// class UAsyncTaskDownloadImage* DownloadImage(FString URL);                                                            // [0x628a318] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.GameViewportSubsystem
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UGameViewportSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0030   (0x0080)  MISSED


	/// Functions
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlotPosition
	// FGameViewportWidgetSlot SetWidgetSlotPosition(FGameViewportWidgetSlot Slot, class UWidget* Widget, FVector2D Position, bool bRemoveDPIScale); // [0x628faa0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
	// FGameViewportWidgetSlot SetWidgetSlotDesiredSize(FGameViewportWidgetSlot Slot, FVector2D Size);                       // [0x628f80c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlot
	// void SetWidgetSlot(class UWidget* Widget, FGameViewportWidgetSlot Slot);                                              // [0x628f2d0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.RemoveWidget
	// void RemoveWidget(class UWidget* Widget);                                                                             // [0x628cb4c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.IsWidgetAdded
	// bool IsWidgetAdded(class UWidget* Widget);                                                                            // [0x628c36c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.GameViewportSubsystem.GetWidgetSlot
	// FGameViewportWidgetSlot GetWidgetSlot(class UWidget* Widget);                                                         // [0x628bf10] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.GameViewportSubsystem.AddWidgetForPlayer
	// bool AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, FGameViewportWidgetSlot Slot);             // [0x6289b78] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.AddWidget
	// bool AddWidget(class UWidget* Widget, FGameViewportWidgetSlot Slot);                                                  // [0x62899cc] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UserListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/UMG.UserListEntry.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                     // [0x211c0a0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                     // [0x211c0a0] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                            // [0x211c0a0] RequiredAPI|Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.UserListEntryLibrary.IsListItemSelected
	// bool IsListItemSelected(TScriptInterface<Class> UserListEntry);                                                       // [0x628c15c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.IsListItemExpanded
	// bool IsListItemExpanded(TScriptInterface<Class> UserListEntry);                                                       // [0x628c018] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.GetOwningListView
	// class UListViewBase* GetOwningListView(TScriptInterface<Class> UserListEntry);                                        // [0x628b9f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.UserObjectListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntry : public UUserListEntry
{ 
public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntry.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                              // [0x211c0a0] RequiredAPI|Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserObjectListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntryLibrary.GetListItemObject
	// class UObject* GetListItemObject(TScriptInterface<Class> UserObjectListEntry);                                        // [0x628b1a4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.PanelWidget
/// Size: 0x0018 (0x000178 - 0x000190)
class UPanelWidget : public UWidget
{ 
public:
	TArray<class UPanelSlot*>                          Slots;                                                      // 0x0178   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0188   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.PanelWidget.RemoveChildAt
	// bool RemoveChildAt(int32_t Index);                                                                                    // [0x62b2e58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChild
	// bool RemoveChild(class UWidget* Content);                                                                             // [0x34d4448] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.HasChild
	// bool HasChild(class UWidget* Content);                                                                                // [0x62b21f8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.HasAnyChildren
	// bool HasAnyChildren();                                                                                                // [0x30b72c8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildrenCount
	// int32_t GetChildrenCount();                                                                                           // [0x2dc5670] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildIndex
	// int32_t GetChildIndex(class UWidget* Content);                                                                        // [0x62b17b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildAt
	// class UWidget* GetChildAt(int32_t Index);                                                                             // [0x30a5570] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetAllChildren
	// TArray<UWidget*> GetAllChildren();                                                                                    // [0x1fea46c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.ClearChildren
	// void ClearChildren();                                                                                                 // [0x1f80fe8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.AddChild
	// class UPanelSlot* AddChild(class UWidget* Content);                                                                   // [0x31eca68] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000190 - 0x000190)
class UContentWidget : public UPanelWidget
{ 
public:


	/// Functions
	// Function /Script/UMG.ContentWidget.SetContent
	// class UPanelSlot* SetContent(class UWidget* Content);                                                                 // [0x3462cb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ContentWidget.GetContentSlot
	// class UPanelSlot* GetContentSlot();                                                                                   // [0x304158c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ContentWidget.GetContent
	// class UWidget* GetContent();                                                                                          // [0x62b1890] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x0110 (0x000190 - 0x0002A0)
class UBackgroundBlur : public UContentWidget
{ 
public:
	FMargin                                            Padding;                                                    // 0x0190   (0x0010)  
	SDK_UNDEFINED(1,1423) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x01A0   (0x0001)  
	SDK_UNDEFINED(1,1424) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x01A1   (0x0001)  
	bool                                               bApplyAlphaToBlur;                                          // 0x01A2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x01A3   (0x0001)  MISSED
	float                                              BlurStrength;                                               // 0x01A4   (0x0004)  
	bool                                               bOverrideAutoRadiusCalculation;                             // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01A9   (0x0003)  MISSED
	int32_t                                            BlurRadius;                                                 // 0x01AC   (0x0004)  
	FVector4                                           CornerRadius;                                               // 0x01B0   (0x0020)  
	FSlateBrush                                        LowQualityFallbackBrush;                                    // 0x01D0   (0x00C0)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0290   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlur.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x628f0c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x628dea8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// void SetLowQualityFallbackBrush(FSlateBrush& InBrush);                                                                // [0x27f7838] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x628d768] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetCornerRadius
	// void SetCornerRadius(FVector4 InCornerRadius);                                                                        // [0x27f717c] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurStrength
	// void SetBlurStrength(float InStrength);                                                                               // [0x27f7340] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurRadius
	// void SetBlurRadius(int32_t InBlurRadius);                                                                             // [0x628d1c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur
	// void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);                                                                   // [0x628cf90] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelSlot
/// Size: 0x0010 (0x000028 - 0x000038)
class UPanelSlot : public UVisual
{ 
public:
	class UPanelWidget*                                Parent;                                                     // 0x0028   (0x0008)  
	class UWidget*                                     Content;                                                    // 0x0030   (0x0008)  
};

/// Class /Script/UMG.BackgroundBlurSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBackgroundBlurSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1425) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1426) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlurSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x628f148] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x628dfe4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x628d7e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Border
/// Size: 0x0170 (0x000190 - 0x000300)
class UBorder : public UContentWidget
{ 
public:
	SDK_UNDEFINED(1,1427) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0190   (0x0001)  
	SDK_UNDEFINED(1,1428) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0191   (0x0001)  
	bool                                               bShowEffectWhenDisabled : 1;                                // 0x0192:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x0193   (0x0001)  MISSED
	FLinearColor                                       ContentColorAndOpacity;                                     // 0x0194   (0x0010)  
	SDK_UNDEFINED(12,1429) /* FDelegateProperty */     __um(ContentColorAndOpacityDelegate);                       // 0x01A4   (0x000C)  
	FMargin                                            Padding;                                                    // 0x01B0   (0x0010)  
	FSlateBrush                                        Background;                                                 // 0x01C0   (0x00C0)  
	SDK_UNDEFINED(12,1430) /* FDelegateProperty */     __um(BackgroundDelegate);                                   // 0x0280   (0x000C)  
	FLinearColor                                       BrushColor;                                                 // 0x028C   (0x0010)  
	SDK_UNDEFINED(12,1431) /* FDelegateProperty */     __um(BrushColorDelegate);                                   // 0x029C   (0x000C)  
	FVector2D                                          DesiredSizeScale;                                           // 0x02A8   (0x0010)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	SDK_UNDEFINED(12,1432) /* FDelegateProperty */     __um(OnMouseButtonDownEvent);                               // 0x02BC   (0x000C)  
	SDK_UNDEFINED(12,1433) /* FDelegateProperty */     __um(OnMouseButtonUpEvent);                                 // 0x02C8   (0x000C)  
	SDK_UNDEFINED(12,1434) /* FDelegateProperty */     __um(OnMouseMoveEvent);                                     // 0x02D4   (0x000C)  
	SDK_UNDEFINED(12,1435) /* FDelegateProperty */     __um(OnMouseDoubleClickEvent);                              // 0x02E0   (0x000C)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x02EC   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.Border.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x37b15f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetShowEffectWhenDisabled
	// void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled);                                                       // [0x628ed94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2e3b258] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x628d86c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetDesiredSizeScale
	// void SetDesiredSizeScale(FVector2D InScale);                                                                          // [0x628d630] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetContentColorAndOpacity
	// void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);                                                // [0x3252600] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture);                                                                  // [0x628d2c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                        // [0x2ca7614] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                // [0x628d248] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushColor
	// void SetBrushColor(FLinearColor InBrushColor);                                                                        // [0x1b507b0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                  // [0x1b506cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Border.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                 // [0x2ca5cdc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBorderSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1436) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1437) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BorderSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x628f1cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x32ce5a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2dc579c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Button
/// Size: 0x0440 (0x000190 - 0x0005D0)
class UButton : public UContentWidget
{ 
public:
	FButtonStyle                                       WidgetStyle;                                                // 0x0190   (0x03B0)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x0540   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x0550   (0x0010)  
	SDK_UNDEFINED(1,1438) /* TEnumAsByte<EButtonClickMethod> */ __um(ClickMethod);                                 // 0x0560   (0x0001)  
	SDK_UNDEFINED(1,1439) /* TEnumAsByte<EButtonTouchMethod> */ __um(TouchMethod);                                 // 0x0561   (0x0001)  
	SDK_UNDEFINED(1,1440) /* TEnumAsByte<EButtonPressMethod> */ __um(PressMethod);                                 // 0x0562   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0563   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0564   (0x0004)  MISSED
	SDK_UNDEFINED(16,1441) /* FMulticastInlineDelegate */ __um(OnClicked);                                         // 0x0568   (0x0010)  
	SDK_UNDEFINED(16,1442) /* FMulticastInlineDelegate */ __um(OnPressed);                                         // 0x0578   (0x0010)  
	SDK_UNDEFINED(16,1443) /* FMulticastInlineDelegate */ __um(OnReleased);                                        // 0x0588   (0x0010)  
	SDK_UNDEFINED(16,1444) /* FMulticastInlineDelegate */ __um(OnHovered);                                         // 0x0598   (0x0010)  
	SDK_UNDEFINED(16,1445) /* FMulticastInlineDelegate */ __um(OnUnhovered);                                       // 0x05A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x05B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.Button.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                   // [0x628ef4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetStyle
	// void SetStyle(FButtonStyle& InStyle);                                                                                 // [0x36d78a4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Button.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                   // [0x628e414] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x628d4f8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                   // [0x628d3f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InBackgroundColor);                                                              // [0x628d090] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.IsPressed
	// bool IsPressed();                                                                                                     // [0x628c310] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UButtonSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1446) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1447) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ButtonSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x628f250] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x628e120] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x628d8ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UCanvasPanel : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanel.AddChildToCanvas
	// class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);                                                     // [0x6289208] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.AnchorData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAnchorData
{ 
	FMargin                                            Offsets;                                                    // 0x0000   (0x0010)  
	FAnchors                                           Anchors;                                                    // 0x0010   (0x0020)  
	FVector2D                                          Alignment;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/UMG.CanvasPanelSlot
/// Size: 0x0050 (0x000038 - 0x000088)
class UCanvasPanelSlot : public UPanelSlot
{ 
public:
	FAnchorData                                        LayoutData;                                                 // 0x0038   (0x0040)  
	bool                                               bAutoSize;                                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	int32_t                                            ZOrder;                                                     // 0x007C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0080   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanelSlot.SetZOrder
	// void SetZOrder(int32_t InZOrder);                                                                                     // [0x628ff00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetSize
	// void SetSize(FVector2D InSize);                                                                                       // [0x628ee14] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetPosition
	// void SetPosition(FVector2D InPosition);                                                                               // [0x628e2dc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetOffsets
	// void SetOffsets(FMargin InOffset);                                                                                    // [0x628dd6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetMinimum
	// void SetMinimum(FVector2D InMinimumAnchors);                                                                          // [0x628dbb4] Final|RequiredAPI|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetMaximum
	// void SetMaximum(FVector2D InMaximumAnchors);                                                                          // [0x628da7c] Final|RequiredAPI|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetLayout
	// void SetLayout(FAnchorData& InLayoutData);                                                                            // [0x628d9ec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize
	// void SetAutoSize(bool InbAutoSize);                                                                                   // [0x628d010] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAnchors
	// void SetAnchors(FAnchors InAnchors);                                                                                  // [0x628ce40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAlignment
	// void SetAlignment(FVector2D InAlignment);                                                                             // [0x628cd08] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.GetZOrder
	// int32_t GetZOrder();                                                                                                  // [0x628bfd4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetSize
	// FVector2D GetSize();                                                                                                  // [0x628bba0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetPosition
	// FVector2D GetPosition();                                                                                              // [0x628bb34] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetOffsets
	// FMargin GetOffsets();                                                                                                 // [0x628b2e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetLayout
	// FAnchorData GetLayout();                                                                                              // [0x628b140] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize
	// bool GetAutoSize();                                                                                                   // [0x628b0f8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAnchors
	// FAnchors GetAnchors();                                                                                                // [0x628b0c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAlignment
	// FVector2D GetAlignment();                                                                                             // [0x628b094] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckBox
/// Size: 0x0A50 (0x000190 - 0x000BE0)
class UCheckBox : public UContentWidget
{ 
public:
	ECheckBoxState                                     CheckedState;                                               // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0191   (0x0003)  MISSED
	SDK_UNDEFINED(12,1448) /* FDelegateProperty */     __um(CheckedStateDelegate);                                 // 0x0194   (0x000C)  
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x01A0   (0x0A10)  
	SDK_UNDEFINED(1,1449) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0BB0   (0x0001)  
	SDK_UNDEFINED(1,1450) /* TEnumAsByte<EButtonClickMethod> */ __um(ClickMethod);                                 // 0x0BB1   (0x0001)  
	SDK_UNDEFINED(1,1451) /* TEnumAsByte<EButtonTouchMethod> */ __um(TouchMethod);                                 // 0x0BB2   (0x0001)  
	SDK_UNDEFINED(1,1452) /* TEnumAsByte<EButtonPressMethod> */ __um(PressMethod);                                 // 0x0BB3   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0BB4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0BB5   (0x0003)  MISSED
	SDK_UNDEFINED(16,1453) /* FMulticastInlineDelegate */ __um(OnCheckStateChanged);                               // 0x0BB8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0BC8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.CheckBox.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                   // [0x628efcc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                   // [0x628e494] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                  // [0x628d96c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                   // [0x628d478] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                  // [0x628d378] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.IsPressed
	// bool IsPressed();                                                                                                     // [0x628c344] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.IsChecked
	// bool IsChecked();                                                                                                     // [0x628bff4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                     // [0x628b11c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetCheckedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetCheckedStateRegistration : public UWidgetEnumStateRegistration
{ 
public:
};

/// Class /Script/UMG.CircularThrobber
/// Size: 0x00F8 (0x000178 - 0x000270)
class UCircularThrobber : public UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0178   (0x0004)  
	float                                              Period;                                                     // 0x017C   (0x0004)  
	float                                              Radius;                                                     // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0184   (0x000C)  MISSED
	FSlateBrush                                        Image;                                                      // 0x0190   (0x00C0)  
	bool                                               bEnableRadius;                                              // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0251   (0x001F)  MISSED


	/// Functions
	// Function /Script/UMG.CircularThrobber.SetRadius
	// void SetRadius(float InRadius);                                                                                       // [0x628e514] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetPeriod
	// void SetPeriod(float InPeriod);                                                                                       // [0x628e25c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                     // [0x628dcec] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ComboBox
/// Size: 0x0718 (0x000178 - 0x000890)
class UComboBox : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0178   (0x0008)  MISSED
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0180   (0x06E0)  
	TArray<class UObject*>                             Items;                                                      // 0x0860   (0x0010)  
	SDK_UNDEFINED(12,1454) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x0870   (0x000C)  
	bool                                               bIsFocusable;                                               // 0x087C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x13];                                      // 0x087D   (0x0013)  MISSED
};

/// Class /Script/UMG.ComboBoxKey
/// Size: 0x19D8 (0x000178 - 0x001B50)
class UComboBoxKey : public UWidget
{ 
public:
	TArray<FName>                                      Options;                                                    // 0x0178   (0x0010)  
	FName                                              SelectedOption;                                             // 0x0188   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	FComboBoxStyle                                     WidgetStyle;                                                // 0x0190   (0x0600)  
	FTableRowStyle                                     ItemStyle;                                                  // 0x0790   (0x0C50)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x13E0   (0x06E0)  
	FSlateColor                                        ForegroundColor;                                            // 0x1AC0   (0x0014)  
	FMargin                                            ContentPadding;                                             // 0x1AD4   (0x0010)  
	float                                              MaxListHeight;                                              // 0x1AE4   (0x0004)  
	bool                                               bHasDownArrow;                                              // 0x1AE8   (0x0001)  
	bool                                               bEnableGamepadNavigationMode;                               // 0x1AE9   (0x0001)  
	bool                                               bIsFocusable;                                               // 0x1AEA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x1AEB   (0x0001)  MISSED
	SDK_UNDEFINED(12,1455) /* FDelegateProperty */     __um(OnGenerateContentWidget);                              // 0x1AEC   (0x000C)  
	SDK_UNDEFINED(12,1456) /* FDelegateProperty */     __um(OnGenerateItemWidget);                                 // 0x1AF8   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x1B04   (0x0004)  MISSED
	SDK_UNDEFINED(16,1457) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x1B08   (0x0010)  
	SDK_UNDEFINED(16,1458) /* FMulticastInlineDelegate */ __um(OnOpening);                                         // 0x1B18   (0x0010)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x1B28   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxKey.SetSelectedOption
	// void SetSelectedOption(FName Option);                                                                                 // [0x628e614] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.RemoveOption
	// bool RemoveOption(FName Option);                                                                                      // [0x628c410] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FName SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);          // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                             // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxKey.IsOpen
	// bool IsOpen();                                                                                                        // [0x628c2a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxKey.GetSelectedOption
	// FName GetSelectedOption();                                                                                            // [0x628bb88] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
	// class UWidget* GenerateWidgetEvent__DelegateSignature(FName Item);                                                    // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.ComboBoxKey.ClearSelection
	// void ClearSelection();                                                                                                // [0x6289ec4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.ClearOptions
	// void ClearOptions();                                                                                                  // [0x6289e54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.AddOption
	// void AddOption(FName Option);                                                                                         // [0x6289298] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x1A68 (0x000178 - 0x001BE0)
class UComboBoxString : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1459) /* TArray<FString> */       __um(DefaultOptions);                                       // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,1460) /* FString */               __um(SelectedOption);                                       // 0x0188   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0198   (0x0008)  MISSED
	FComboBoxStyle                                     WidgetStyle;                                                // 0x01A0   (0x0600)  
	FTableRowStyle                                     ItemStyle;                                                  // 0x07A0   (0x0C50)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x13F0   (0x06E0)  
	FMargin                                            ContentPadding;                                             // 0x1AD0   (0x0010)  
	float                                              MaxListHeight;                                              // 0x1AE0   (0x0004)  
	bool                                               HasDownArrow;                                               // 0x1AE4   (0x0001)  
	bool                                               EnableGamepadNavigationMode;                                // 0x1AE5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x1AE6   (0x0002)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x1AE8   (0x0058)  
	FSlateColor                                        ForegroundColor;                                            // 0x1B40   (0x0014)  
	bool                                               bIsFocusable;                                               // 0x1B54   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x1B55   (0x0003)  MISSED
	SDK_UNDEFINED(12,1461) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x1B58   (0x000C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x1B64   (0x0004)  MISSED
	SDK_UNDEFINED(16,1462) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x1B68   (0x0010)  
	SDK_UNDEFINED(16,1463) /* FMulticastInlineDelegate */ __um(OnOpening);                                         // 0x1B78   (0x0010)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x1B88   (0x0058)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxString.SetSelectedOption
	// void SetSelectedOption(FString Option);                                                                               // [0x628e6cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                 // [0x628e594] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RemoveOption
	// bool RemoveOption(FString Option);                                                                                    // [0x628c49c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RefreshOptions
	// void RefreshOptions();                                                                                                // [0x628c3fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);        // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                             // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.IsOpen
	// bool IsOpen();                                                                                                        // [0x628c2d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedOption
	// FString GetSelectedOption();                                                                                          // [0x27fd6b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                           // [0x628bb64] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionCount
	// int32_t GetOptionCount();                                                                                             // [0x628b9d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex
	// FString GetOptionAtIndex(int32_t Index);                                                                              // [0x628b318] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.FindOptionIndex
	// int32_t FindOptionIndex(FString Option);                                                                              // [0x628a9e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.ClearSelection
	// void ClearSelection();                                                                                                // [0x6289ed8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.ClearOptions
	// void ClearOptions();                                                                                                  // [0x6289eb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.AddOption
	// void AddOption(FString Option);                                                                                       // [0x6289318] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateChildSize
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1464) /* TEnumAsByte<ESlateSizeRule> */ __um(SizeRule);                                        // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/UMG.RadialBoxSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRadialBoxSettings
{ 
	float                                              StartingAngle;                                              // 0x0000   (0x0004)  
	bool                                               bDistributeItemsEvenly;                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              AngleBetweenItems;                                          // 0x0008   (0x0004)  
	float                                              SectorCentralAngle;                                         // 0x000C   (0x0004)  
};

/// Class /Script/UMG.DynamicEntryBoxBase
/// Size: 0x00E0 (0x000178 - 0x000258)
class UDynamicEntryBoxBase : public UWidget
{ 
public:
	FVector2D                                          EntrySpacing;                                               // 0x0178   (0x0010)  
	TArray<FVector2D>                                  SpacingPattern;                                             // 0x0188   (0x0010)  
	EDynamicBoxType                                    EntryBoxType;                                               // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0199   (0x0003)  MISSED
	FSlateChildSize                                    EntrySizeRule;                                              // 0x019C   (0x0008)  
	SDK_UNDEFINED(1,1465) /* TEnumAsByte<EHorizontalAlignment> */ __um(EntryHorizontalAlignment);                  // 0x01A4   (0x0001)  
	SDK_UNDEFINED(1,1466) /* TEnumAsByte<EVerticalAlignment> */ __um(EntryVerticalAlignment);                      // 0x01A5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01A6   (0x0002)  MISSED
	int32_t                                            MaxElementSize;                                             // 0x01A8   (0x0004)  
	FRadialBoxSettings                                 RadialBoxSettings;                                          // 0x01AC   (0x0010)  
	unsigned char                                      UnknownData02_5[0x14];                                      // 0x01BC   (0x0014)  MISSED
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x01D0   (0x0088)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBoxBase.SetRadialSettings
	// void SetRadialSettings(FRadialBoxSettings& InSettings);                                                               // [0x62b70e8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing
	// void SetEntrySpacing(FVector2D& InEntrySpacing);                                                                      // [0x2006678] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries
	// int32_t GetNumEntries();                                                                                              // [0x339e84c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries
	// TArray<UUserWidget*> GetAllEntries();                                                                                 // [0x2a31fd0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.DynamicEntryBox
/// Size: 0x0008 (0x000258 - 0x000260)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{ 
public:
	class UClass*                                      EntryWidgetClass;                                           // 0x0258   (0x0008)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBox.Reset
	// void Reset(bool bDeleteWidgets);                                                                                      // [0x1b4a85c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.RemoveEntry
	// void RemoveEntry(class UUserWidget* EntryWidget);                                                                     // [0x62b2ee4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass
	// class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);                                                   // [0x33bf7d8] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry
	// class UUserWidget* BP_CreateEntry();                                                                                  // [0x326a414] Final|RequiredAPI|Native|Private|BlueprintCallable 
};

/// Struct /Script/UMG.ShapedTextOptions
/// Size: 0x0003 (0x000000 - 0x000003)
struct FShapedTextOptions
{ 
	bool                                               bOverride_TextShapingMethod : 1;                            // 0x0000:0 (0x0001)  
	bool                                               bOverride_TextFlowDirection : 1;                            // 0x0000:1 (0x0001)  
	ETextShapingMethod                                 TextShapingMethod;                                          // 0x0001   (0x0001)  
	ETextFlowDirection                                 TextFlowDirection;                                          // 0x0002   (0x0001)  
};

/// Class /Script/UMG.EditableText
/// Size: 0x0368 (0x000178 - 0x0004E0)
class UEditableText : public UWidget
{ 
public:
	SDK_UNDEFINED(24,1467) /* FText */                 __um(Text);                                                 // 0x0178   (0x0018)  
	SDK_UNDEFINED(12,1468) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0190   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1469) /* FText */                 __um(HintText);                                             // 0x01A0   (0x0018)  
	SDK_UNDEFINED(12,1470) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x01B8   (0x000C)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x01C4   (0x000C)  MISSED
	FEditableTextStyle                                 WidgetStyle;                                                // 0x01D0   (0x02C0)  
	bool                                               IsReadOnly;                                                 // 0x0490   (0x0001)  
	bool                                               IsPassword;                                                 // 0x0491   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0492   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x0494   (0x0004)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x0498   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0499   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x049A   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x049B   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x049C   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x049D   (0x0001)  
	SDK_UNDEFINED(1,1471) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x049E   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x049F   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x04A0   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x04A1   (0x0001)  
	SDK_UNDEFINED(1,1472) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x04A2   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x04A3   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x04A4   (0x0003)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x04A7   (0x0001)  MISSED
	SDK_UNDEFINED(16,1473) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x04A8   (0x0010)  
	SDK_UNDEFINED(16,1474) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x04C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.EditableText.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                     // [0x62b854c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetText
	// void SetText(FText InText);                                                                                           // [0x30a5378] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetMinimumDesiredWidth
	// void SetMinimumDesiredWidth(float InMinDesiredWidth);                                                                 // [0x62b676c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x2cf92c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsReadOnly
	// void SetIsReadOnly(bool InbIsReadyOnly);                                                                              // [0x384d784] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsPassword
	// void SetIsPassword(bool InbIsPassword);                                                                               // [0x3709240] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x337d160] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                    // [0x62b4fec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                           // [0x62b4ea4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                              // [0x2412188] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);             // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// void OnEditableTextChangedEvent__DelegateSignature(FText& Text);                                                      // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.GetText
	// FText GetText();                                                                                                      // [0x62b1ec4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetJustification
	// TEnumAsByte<ETextJustify> GetJustification();                                                                         // [0x62b1c68] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetHintText
	// FText GetHintText();                                                                                                  // [0x62b1ab8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetFont
	// FSlateFontInfo GetFont();                                                                                             // [0x35361ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.EditableTextBox
/// Size: 0x0E18 (0x000178 - 0x000F90)
class UEditableTextBox : public UWidget
{ 
public:
	SDK_UNDEFINED(24,1475) /* FText */                 __um(Text);                                                 // 0x0178   (0x0018)  
	SDK_UNDEFINED(12,1476) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0190   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x01A0   (0x0D80)  
	SDK_UNDEFINED(24,1477) /* FText */                 __um(HintText);                                             // 0x0F20   (0x0018)  
	SDK_UNDEFINED(12,1478) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0F38   (0x000C)  
	bool                                               IsReadOnly;                                                 // 0x0F44   (0x0001)  
	bool                                               IsPassword;                                                 // 0x0F45   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0F46   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x0F48   (0x0004)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x0F4C   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0F4D   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x0F4E   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0F4F   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x0F50   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0F51   (0x0001)  
	SDK_UNDEFINED(1,1479) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x0F52   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0F53   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x0F54   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0F55   (0x0001)  
	SDK_UNDEFINED(1,1480) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x0F56   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x0F57   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0F58   (0x0003)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x0F5B   (0x0005)  MISSED
	SDK_UNDEFINED(16,1481) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0F60   (0x0010)  
	SDK_UNDEFINED(16,1482) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0F70   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0F80   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableTextBox.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                     // [0x62b85cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetText
	// void SetText(FText InText);                                                                                           // [0x62b82bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x62b5e3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x62b5bf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsPassword
	// void SetIsPassword(bool bIsPassword);                                                                                 // [0x62b5b74] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetHintText
	// void SetHintText(FText InText);                                                                                       // [0x62b556c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetForegroundColor
	// void SetForegroundColor(FLinearColor Color);                                                                          // [0x62b5134] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetError
	// void SetError(FText InError);                                                                                         // [0x62b4958] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);          // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                                   // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.HasError
	// bool HasError();                                                                                                      // [0x62b2290] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.GetText
	// FText GetText();                                                                                                      // [0x62b1f08] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.ClearError
	// void ClearError();                                                                                                    // [0x62b1368] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x02D8 (0x000178 - 0x000450)
class UExpandableArea : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0178   (0x0008)  MISSED
	FExpandableAreaStyle                               style;                                                      // 0x0180   (0x01A0)  
	FSlateBrush                                        BorderBrush;                                                // 0x0320   (0x00C0)  
	FSlateColor                                        BorderColor;                                                // 0x03E0   (0x0014)  
	bool                                               bIsExpanded;                                                // 0x03F4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03F5   (0x0003)  MISSED
	float                                              MaxHeight;                                                  // 0x03F8   (0x0004)  
	FMargin                                            HeaderPadding;                                              // 0x03FC   (0x0010)  
	FMargin                                            AreaPadding;                                                // 0x040C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x041C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1483) /* FMulticastInlineDelegate */ __um(OnExpansionChanged);                                // 0x0420   (0x0010)  
	class UWidget*                                     HeaderContent;                                              // 0x0430   (0x0008)  
	class UWidget*                                     BodyContent;                                                // 0x0438   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0440   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated
	// void SetIsExpanded_Animated(bool IsExpanded);                                                                         // [0x62b5a40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.SetIsExpanded
	// void SetIsExpanded(bool IsExpanded);                                                                                  // [0x62b59c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.GetIsExpanded
	// bool GetIsExpanded();                                                                                                 // [0x62b1b9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.GridPanel
/// Size: 0x0030 (0x000190 - 0x0001C0)
class UGridPanel : public UPanelWidget
{ 
public:
	TArray<float>                                      ColumnFill;                                                 // 0x0190   (0x0010)  
	TArray<float>                                      RowFill;                                                    // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.GridPanel.SetRowFill
	// void SetRowFill(int32_t RowIndex, float Coefficient);                                                                 // [0x32b7158] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.SetColumnFill
	// void SetColumnFill(int32_t ColumnIndex, float Coefficient);                                                           // [0x3321b3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.AddChildToGrid
	// class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);                             // [0x2a41714] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0040 (0x000038 - 0x000078)
class UGridSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1484) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1485) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x004C   (0x0004)  
	int32_t                                            RowSpan;                                                    // 0x0050   (0x0004)  
	int32_t                                            Column;                                                     // 0x0054   (0x0004)  
	int32_t                                            ColumnSpan;                                                 // 0x0058   (0x0004)  
	int32_t                                            Layer;                                                      // 0x005C   (0x0004)  
	FVector2D                                          Nudge;                                                      // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.GridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x193c364] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRowSpan
	// void SetRowSpan(int32_t InRowSpan);                                                                                   // [0x2d6e010] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                           // [0x2a4187c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2a19e04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetNudge
	// void SetNudge(FVector2D InNudge);                                                                                     // [0x2eba068] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetLayer
	// void SetLayer(int32_t InLayer);                                                                                       // [0x2a4161c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x193c4f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumnSpan
	// void SetColumnSpan(int32_t InColumnSpan);                                                                             // [0x2a41510] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                     // [0x2a4198c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UHorizontalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBox.AddChildToHorizontalBox
	// class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);                                            // [0x33cd848] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UHorizontalBoxSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSlateChildSize                                    Size;                                                       // 0x0040   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(1,1486) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1487) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x28fd5fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                 // [0x3677c50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x1ffb9b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x28fd560] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Image
/// Size: 0x0138 (0x000178 - 0x0002B0)
class UImage : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0178   (0x0008)  MISSED
	FSlateBrush                                        Brush;                                                      // 0x0180   (0x00C0)  
	SDK_UNDEFINED(12,1488) /* FDelegateProperty */     __um(BrushDelegate);                                        // 0x0240   (0x000C)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x024C   (0x0010)  
	SDK_UNDEFINED(12,1489) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x025C   (0x000C)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x0268   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0269   (0x0003)  MISSED
	SDK_UNDEFINED(12,1490) /* FDelegateProperty */     __um(OnMouseButtonDownEvent);                               // 0x026C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x0278   (0x0038)  MISSED


	/// Functions
	// Function /Script/UMG.Image.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                     // [0x3489778] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetDesiredSizeOverride
	// void SetDesiredSizeOverride(FVector2D DesiredSize);                                                                   // [0x1b4deec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x1b503ac] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushTintColor
	// void SetBrushTintColor(FSlateColor TintColor);                                                                        // [0x31b60c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushResourceObject
	// void SetBrushResourceObject(class UObject* ResourceObject);                                                           // [0x62b3f08] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTextureDynamic
	// void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);                                   // [0x62b3e3c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);                                                 // [0x1804b90] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftTexture
	// void SetBrushFromSoftTexture(TWeakObjectPtr<UTexture2D*> SoftTexture, bool bMatchSize);                               // [0x1806468] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftMaterial
	// void SetBrushFromSoftMaterial(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                      // [0x2f11dcc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                        // [0x1b4efe0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAtlasInterface
	// void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize);                                // [0x1e6ef78] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                // [0x62b3db8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                  // [0x1b50640] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Image.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                 // [0x1b4f0c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x0778 (0x000178 - 0x0008F0)
class UInputKeySelector : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0178   (0x0008)  MISSED
	FButtonStyle                                       WidgetStyle;                                                // 0x0180   (0x03B0)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0530   (0x0310)  
	FInputChord                                        SelectedKey;                                                // 0x0840   (0x0020)  
	FMargin                                            Margin;                                                     // 0x0860   (0x0010)  
	SDK_UNDEFINED(24,1491) /* FText */                 __um(KeySelectionText);                                     // 0x0870   (0x0018)  
	SDK_UNDEFINED(24,1492) /* FText */                 __um(NoKeySpecifiedText);                                   // 0x0888   (0x0018)  
	bool                                               bAllowModifierKeys;                                         // 0x08A0   (0x0001)  
	bool                                               bAllowGamepadKeys;                                          // 0x08A1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x08A2   (0x0006)  MISSED
	TArray<FKey>                                       EscapeKeys;                                                 // 0x08A8   (0x0010)  
	SDK_UNDEFINED(16,1493) /* FMulticastInlineDelegate */ __um(OnKeySelected);                                     // 0x08B8   (0x0010)  
	SDK_UNDEFINED(16,1494) /* FMulticastInlineDelegate */ __um(OnIsSelectingKeyChanged);                           // 0x08C8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x08D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility
	// void SetTextBlockVisibility(ESlateVisibility InVisibility);                                                           // [0x62b8490] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetSelectedKey
	// void SetSelectedKey(FInputChord& InSelectedKey);                                                                      // [0x62b7680] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText
	// void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);                                                               // [0x62b6cc8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetKeySelectionText
	// void SetKeySelectionText(FText InKeySelectionText);                                                                   // [0x62b5ebc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetEscapeKeys
	// void SetEscapeKeys(TArray<FKey>& InKeys);                                                                             // [0x62b4aa8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys
	// void SetAllowModifierKeys(bool bInAllowModifierKeys);                                                                 // [0x62b3880] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys
	// void SetAllowGamepadKeys(bool bInAllowGamepadKeys);                                                                   // [0x62b3800] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// void OnKeySelected__DelegateSignature(FInputChord SelectedKey);                                                       // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// void OnIsSelectingKeyChanged__DelegateSignature();                                                                    // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey
	// bool GetIsSelectingKey();                                                                                             // [0x62b1bb4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.InvalidationBox
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UInvalidationBox : public UContentWidget
{ 
public:
	bool                                               bCanCache;                                                  // 0x0190   (0x0001)  
	bool                                               b_CanAlwaysCache_HACK;                                      // 0x0191   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0192   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.InvalidationBox.SetCanCache
	// void SetCanCache(bool CanCache);                                                                                      // [0x62b3f88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.InvalidateCache
	// void InvalidateCache();                                                                                               // [0x32e4b44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.GetCanCache
	// bool GetCanCache();                                                                                                   // [0x62b1798] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UMenuAnchor : public UContentWidget
{ 
public:
	class UClass*                                      MenuClass;                                                  // 0x0190   (0x0008)  
	SDK_UNDEFINED(12,1495) /* FDelegateProperty */     __um(OnGetMenuContentEvent);                                // 0x0198   (0x000C)  
	SDK_UNDEFINED(12,1496) /* FDelegateProperty */     __um(OnGetUserMenuContentEvent);                            // 0x01A4   (0x000C)  
	SDK_UNDEFINED(1,1497) /* TEnumAsByte<EMenuPlacement> */ __um(Placement);                                       // 0x01B0   (0x0001)  
	bool                                               bFitInWindow;                                               // 0x01B1   (0x0001)  
	bool                                               ShouldDeferPaintingAfterWindowContent;                      // 0x01B2   (0x0001)  
	bool                                               UseApplicationMenuStack;                                    // 0x01B3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,1498) /* FMulticastInlineDelegate */ __um(OnMenuOpenChanged);                                 // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MenuAnchor.ToggleOpen
	// void ToggleOpen(bool bFocusOnOpen);                                                                                   // [0x62b95fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick
	// bool ShouldOpenDueToClick();                                                                                          // [0x62b9538] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.SetPlacement
	// void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);                                                           // [0x27fb368] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Open
	// void Open(bool bFocusMenu);                                                                                           // [0x62b2db0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.IsOpen
	// bool IsOpen();                                                                                                        // [0x2a56748] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus
	// bool HasOpenSubMenus();                                                                                               // [0x62b23e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.GetUserWidget__DelegateSignature
	// class UUserWidget* GetUserWidget__DelegateSignature();                                                                // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.MenuAnchor.GetMenuPosition
	// FVector2D GetMenuPosition();                                                                                          // [0x62b1d0c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.FitInWindow
	// void FitInWindow(bool bFit);                                                                                          // [0x62b1544] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Close
	// void Close();                                                                                                         // [0x27fadbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0020 (0x000178 - 0x000198)
class UTextLayoutWidget : public UWidget
{ 
public:
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0178   (0x0003)  
	SDK_UNDEFINED(1,1499) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x017B   (0x0001)  
	ETextWrappingPolicy                                WrappingPolicy;                                             // 0x017C   (0x0001)  
	bool                                               AutoWrapText : 1;                                           // 0x017D:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x017E   (0x0002)  MISSED
	float                                              WrapTextAt;                                                 // 0x0180   (0x0004)  
	FMargin                                            Margin;                                                     // 0x0184   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x0194   (0x0004)  


	/// Functions
	// Function /Script/UMG.TextLayoutWidget.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x2cf93e8] Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x0398 (0x000198 - 0x000530)
class UMultiLineEditableText : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1500) /* FText */                 __um(Text);                                                 // 0x0198   (0x0018)  
	SDK_UNDEFINED(24,1501) /* FText */                 __um(HintText);                                             // 0x01B0   (0x0018)  
	SDK_UNDEFINED(12,1502) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x01C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTextBlockStyle                                    WidgetStyle;                                                // 0x01E0   (0x0310)  
	bool                                               bIsReadOnly;                                                // 0x04F0   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x04F1   (0x0001)  
	bool                                               ClearTextSelectionOnFocusLoss;                              // 0x04F2   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x04F3   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x04F4   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x04F5   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x04F6   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x04F7   (0x0001)  
	SDK_UNDEFINED(16,1503) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x04F8   (0x0010)  
	SDK_UNDEFINED(16,1504) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0508   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0518   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableText.SetWidgetStyle
	// void SetWidgetStyle(FTextBlockStyle& InWidgetStyle);                                                                  // [0x62b9378] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetText
	// void SetText(FText InText);                                                                                           // [0x62b8358] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x62b5c74] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x62b5608] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                    // [0x62b5090] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                           // [0x62b4f48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                              // [0x62b4d4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);    // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text);                                             // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.GetText
	// FText GetText();                                                                                                      // [0x62b1f4c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetHintText
	// FText GetHintText();                                                                                                  // [0x62b1afc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetFont
	// FSlateFontInfo GetFont();                                                                                             // [0x62b1a60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0E08 (0x000198 - 0x000FA0)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1505) /* FText */                 __um(Text);                                                 // 0x0198   (0x0018)  
	SDK_UNDEFINED(24,1506) /* FText */                 __um(HintText);                                             // 0x01B0   (0x0018)  
	SDK_UNDEFINED(12,1507) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x01C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x01E0   (0x0D80)  
	bool                                               bIsReadOnly;                                                // 0x0F60   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0F61   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0F62   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0F63   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0F64   (0x0004)  MISSED
	SDK_UNDEFINED(16,1508) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0F68   (0x0010)  
	SDK_UNDEFINED(16,1509) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0F78   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0F88   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle
	// void SetTextStyle(FTextBlockStyle& InTextStyle);                                                                      // [0x62b86cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetText
	// void SetText(FText InText);                                                                                           // [0x62b83f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x62b5cf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x62b56a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetForegroundColor
	// void SetForegroundColor(FLinearColor Color);                                                                          // [0x62b526c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetError
	// void SetError(FText InError);                                                                                         // [0x62b4a00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                          // [0x211c0a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.GetText
	// FText GetText();                                                                                                      // [0x62b1f90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableTextBox.GetHintText
	// FText GetHintText();                                                                                                  // [0x62b1b40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NamedSlot
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UNamedSlot : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED
};

/// Class /Script/UMG.NamedSlotInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNamedSlotInterface : public UInterface
{ 
public:
};

/// Class /Script/UMG.NativeWidgetHost
/// Size: 0x0010 (0x000178 - 0x000188)
class UNativeWidgetHost : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0178   (0x0010)  MISSED
};

/// Class /Script/UMG.Overlay
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UOverlay : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Overlay.ReplaceOverlayChildAt
	// bool ReplaceOverlayChildAt(int32_t Index, class UWidget* Content);                                                    // [0x62b3268] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Overlay.AddChildToOverlay
	// class UOverlaySlot* AddChildToOverlay(class UWidget* Content);                                                        // [0x33e83f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UOverlaySlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1510) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1511) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x258dc68] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2cfa770] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x258dce8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PostBufferUpdate
/// Size: 0x0028 (0x000178 - 0x0001A0)
class UPostBufferUpdate : public UWidget
{ 
public:
	bool                                               bPerformDefaultPostBufferUpdate;                            // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0179   (0x0007)  MISSED
	TArray<ESlatePostRT>                               BuffersToUpdate;                                            // 0x0180   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0190   (0x0010)  MISSED
};

/// Class /Script/UMG.ProgressBar
/// Size: 0x02B8 (0x000178 - 0x000430)
class UProgressBar : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0178   (0x0008)  MISSED
	FProgressBarStyle                                  WidgetStyle;                                                // 0x0180   (0x0260)  
	float                                              Percent;                                                    // 0x03E0   (0x0004)  
	SDK_UNDEFINED(1,1512) /* TEnumAsByte<EProgressBarFillType> */ __um(BarFillType);                               // 0x03E4   (0x0001)  
	SDK_UNDEFINED(1,1513) /* TEnumAsByte<EProgressBarFillStyle> */ __um(BarFillStyle);                             // 0x03E5   (0x0001)  
	bool                                               bIsMarquee;                                                 // 0x03E6   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x03E7   (0x0001)  MISSED
	FVector2D                                          BorderPadding;                                              // 0x03E8   (0x0010)  
	SDK_UNDEFINED(12,1514) /* FDelegateProperty */     __um(PercentDelegate);                                      // 0x03F8   (0x000C)  
	FLinearColor                                       FillColorAndOpacity;                                        // 0x0404   (0x0010)  
	SDK_UNDEFINED(12,1515) /* FDelegateProperty */     __um(FillColorAndOpacityDelegate);                          // 0x0414   (0x000C)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0420   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ProgressBar.SetPercent
	// void SetPercent(float InPercent);                                                                                     // [0x39ccd8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetIsMarquee
	// void SetIsMarquee(bool InbIsMarquee);                                                                                 // [0x62b5af4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity
	// void SetFillColorAndOpacity(FLinearColor InColor);                                                                    // [0x62b4c14] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.RetainerBox
/// Size: 0x0030 (0x000190 - 0x0001C0)
class URetainerBox : public UContentWidget
{ 
public:
	bool                                               bRetainRender;                                              // 0x0190   (0x0001)  
	bool                                               RenderOnInvalidation;                                       // 0x0191   (0x0001)  
	bool                                               RenderOnPhase;                                              // 0x0192   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0193   (0x0001)  MISSED
	int32_t                                            Phase;                                                      // 0x0194   (0x0004)  
	int32_t                                            PhaseCount;                                                 // 0x0198   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	class UMaterialInterface*                          EffectMaterial;                                             // 0x01A0   (0x0008)  
	FName                                              TextureParameter;                                           // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x01AC   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.RetainerBox.SetTextureParameter
	// void SetTextureParameter(FName TextureParameter);                                                                     // [0x62b888c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRetainRendering
	// void SetRetainRendering(bool bInRetainRendering);                                                                     // [0x62b72e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRenderingPhase
	// void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);                                                     // [0x62b7204] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetEffectMaterial
	// void SetEffectMaterial(class UMaterialInterface* EffectMaterial);                                                     // [0x62b48d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.RequestRender
	// void RequestRender();                                                                                                 // [0x62b3454] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.GetEffectMaterial
	// class UMaterialInstanceDynamic* GetEffectMaterial();                                                                  // [0x62b1a1c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x0698 (0x000198 - 0x000830)
class URichTextBlock : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1516) /* FText */                 __um(Text);                                                 // 0x0198   (0x0018)  
	class UDataTable*                                  TextStyleSet;                                               // 0x01B0   (0x0008)  
	TArray<class UClass*>                              DecoratorClasses;                                           // 0x01B8   (0x0010)  
	bool                                               bOverrideDefaultStyle;                                      // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FTextBlockStyle                                    DefaultTextStyleOverride;                                   // 0x01D0   (0x0310)  
	float                                              MinDesiredWidth;                                            // 0x04E0   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x04E4   (0x0001)  
	ETextOverflowPolicy                                TextOverflowPolicy;                                         // 0x04E5   (0x0001)  
	unsigned char                                      UnknownData01_5[0xA];                                       // 0x04E6   (0x000A)  MISSED
	FTextBlockStyle                                    DefaultTextStyle;                                           // 0x04F0   (0x0310)  
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                         // 0x0800   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0810   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.RichTextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                  // [0x62b880c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextStyleSet
	// void SetTextStyleSet(class UDataTable* NewTextStyleSet);                                                              // [0x62b878c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                     // [0x62b864c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetText
	// void SetText(FText& InText);                                                                                          // [0x1b4d978] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x62b646c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultTextStyle
	// void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);                                                        // [0x62b45fc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush
	// void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);                                                               // [0x62b4534] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset
	// void SetDefaultShadowOffset(FVector2D InShadowOffset);                                                                // [0x62b43fc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	// void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                           // [0x62b42c4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultMaterial
	// void SetDefaultMaterial(class UMaterialInterface* InMaterial);                                                        // [0x62b4224] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultFont
	// void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                       // [0x36e60b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity
	// void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);                                                        // [0x34cf190] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDecorators
	// void SetDecorators(TArray<UClass*>& InDecoratorClasses);                                                              // [0x62b4188] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                            // [0x34750f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.RefreshTextLayout
	// void RefreshTextLayout();                                                                                             // [0x62b2e30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetTextStyleSet
	// class UDataTable* GetTextStyleSet();                                                                                  // [0x62b2018] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetText
	// FText GetText();                                                                                                      // [0x62b1fd4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetDefaultDynamicMaterial
	// class UMaterialInstanceDynamic* GetDefaultDynamicMaterial();                                                          // [0x62b19a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetDecoratorByClass
	// class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);                                     // [0x62b1904] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	// void ClearAllDefaultStyleOverrides();                                                                                 // [0x62b1334] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlockDecorator
/// Size: 0x0000 (0x000028 - 0x000028)
class URichTextBlockDecorator : public UObject
{ 
public:
};

/// Class /Script/UMG.RichTextBlockImageDecorator
/// Size: 0x0008 (0x000028 - 0x000030)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{ 
public:
	class UDataTable*                                  ImageSet;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/UMG.SafeZone
/// Size: 0x0018 (0x000190 - 0x0001A8)
class USafeZone : public UContentWidget
{ 
public:
	bool                                               PadLeft;                                                    // 0x0190   (0x0001)  
	bool                                               PadRight;                                                   // 0x0191   (0x0001)  
	bool                                               PadTop;                                                     // 0x0192   (0x0001)  
	bool                                               PadBottom;                                                  // 0x0193   (0x0001)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0194   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.SafeZone.SetSidesToPad
	// void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                 // [0x62b7a0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class USafeZoneSlot : public UPanelSlot
{ 
public:
	bool                                               bIsTitleSafe;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FMargin                                            SafeAreaScale;                                              // 0x003C   (0x0010)  
	SDK_UNDEFINED(1,1517) /* TEnumAsByte<EHorizontalAlignment> */ __um(HAlign);                                    // 0x004C   (0x0001)  
	SDK_UNDEFINED(1,1518) /* TEnumAsByte<EVerticalAlignment> */ __um(VAlign);                                      // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FMargin                                            Padding;                                                    // 0x0050   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000190 - 0x0001B0)
class UScaleBox : public UContentWidget
{ 
public:
	SDK_UNDEFINED(1,1519) /* TEnumAsByte<EStretch> */  __um(Stretch);                                              // 0x0190   (0x0001)  
	SDK_UNDEFINED(1,1520) /* TEnumAsByte<EStretchDirection> */ __um(StretchDirection);                             // 0x0191   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0192   (0x0002)  MISSED
	float                                              UserSpecifiedScale;                                         // 0x0194   (0x0004)  
	bool                                               IgnoreInheritedScale;                                       // 0x0198   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0199   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale
	// void SetUserSpecifiedScale(float InUserSpecifiedScale);                                                               // [0x21b0cb4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretchDirection
	// void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);                                          // [0x62b80e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretch
	// void SetStretch(TEnumAsByte<EStretch> InStretch);                                                                     // [0x62b8064] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale
	// void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);                                                           // [0x62b58c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UScaleBoxSlot : public UPanelSlot
{ 
public:
	SDK_UNDEFINED(1,1521) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,1522) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x003A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x62b8df8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x62b6f64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x62b5740] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x0728 (0x000178 - 0x0008A0)
class UScrollBar : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0178   (0x0008)  MISSED
	FScrollBarStyle                                    WidgetStyle;                                                // 0x0180   (0x06E0)  
	bool                                               bAlwaysShowScrollbar;                                       // 0x0860   (0x0001)  
	bool                                               bAlwaysShowScrollbarTrack;                                  // 0x0861   (0x0001)  
	SDK_UNDEFINED(1,1523) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0862   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0863   (0x0005)  MISSED
	FVector2D                                          Thickness;                                                  // 0x0868   (0x0010)  
	FMargin                                            Padding;                                                    // 0x0878   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0888   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBar.SetState
	// void SetState(float InOffsetFraction, float InThumbSizeFraction);                                                     // [0x62b7f1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x0A90 (0x000190 - 0x000C20)
class UScrollBox : public UPanelWidget
{ 
public:
	FScrollBoxStyle                                    WidgetStyle;                                                // 0x0190   (0x0330)  
	FScrollBarStyle                                    WidgetBarStyle;                                             // 0x04C0   (0x06E0)  
	SDK_UNDEFINED(1,1524) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0BA0   (0x0001)  
	ESlateVisibility                                   ScrollBarVisibility;                                        // 0x0BA1   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x0BA2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0BA3   (0x0005)  MISSED
	FVector2D                                          ScrollbarThickness;                                         // 0x0BA8   (0x0010)  
	FMargin                                            ScrollbarPadding;                                           // 0x0BB8   (0x0010)  
	bool                                               AlwaysShowScrollbar;                                        // 0x0BC8   (0x0001)  
	bool                                               AlwaysShowScrollbarTrack;                                   // 0x0BC9   (0x0001)  
	bool                                               AllowOverscroll;                                            // 0x0BCA   (0x0001)  
	bool                                               BackPadScrolling;                                           // 0x0BCB   (0x0001)  
	bool                                               FrontPadScrolling;                                          // 0x0BCC   (0x0001)  
	bool                                               bAnimateWheelScrolling;                                     // 0x0BCD   (0x0001)  
	EDescendantScrollDestination                       NavigationDestination;                                      // 0x0BCE   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0BCF   (0x0001)  MISSED
	float                                              NavigationScrollPadding;                                    // 0x0BD0   (0x0004)  
	EScrollWhenFocusChanges                            ScrollWhenFocusChanges;                                     // 0x0BD4   (0x0001)  
	bool                                               bAllowRightClickDragScrolling;                              // 0x0BD5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0BD6   (0x0002)  MISSED
	float                                              WheelScrollMultiplier;                                      // 0x0BD8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0BDC   (0x0004)  MISSED
	SDK_UNDEFINED(16,1525) /* FMulticastInlineDelegate */ __um(OnUserScrolled);                                    // 0x0BE0   (0x0010)  
	SDK_UNDEFINED(16,1526) /* FMulticastInlineDelegate */ __um(OnScrollBarVisibilityChanged);                      // 0x0BF0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0C00   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                        // [0x62b91f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollWhenFocusChanges
	// void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);                                    // [0x62b74e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollOffset
	// void SetScrollOffset(float NewScrollOffset);                                                                          // [0x62b7468] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarVisibility
	// void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);                                                 // [0x62b7368] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarThickness
	// void SetScrollbarThickness(FVector2D& NewScrollbarThickness);                                                         // [0x62b75f8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarPadding
	// void SetScrollbarPadding(FMargin& NewScrollbarPadding);                                                               // [0x62b7568] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetOrientation
	// void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);                                                        // [0x62b6e64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetNavigationDestination
	// void SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination);                                 // [0x62b67ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetConsumeMouseWheel
	// void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);                                                   // [0x62b4008] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling
	// void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);                                                     // [0x62b3c00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar
	// void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);                                                             // [0x62b3980] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAllowOverscroll
	// void SetAllowOverscroll(bool NewAllowOverscroll);                                                                     // [0x62b3900] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView
	// void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // [0x62b35ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToStart
	// void ScrollToStart();                                                                                                 // [0x62b35c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToEnd
	// void ScrollToEnd();                                                                                                   // [0x62b35b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.GetViewOffsetFraction
	// float GetViewOffsetFraction();                                                                                        // [0x62b2108] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetViewFraction
	// float GetViewFraction();                                                                                              // [0x62b2090] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd
	// float GetScrollOffsetOfEnd();                                                                                         // [0x62b1e9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffset
	// float GetScrollOffset();                                                                                              // [0x62b1e7c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.EndInertialScrolling
	// void EndInertialScrolling();                                                                                          // [0x62b14c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UScrollBoxSlot : public UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0038   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1527) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1528) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x62b8e78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x384c2c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x62b57c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0038 (0x000190 - 0x0001C8)
class USizeBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0190   (0x0010)  MISSED
	float                                              WidthOverride;                                              // 0x01A0   (0x0004)  
	float                                              HeightOverride;                                             // 0x01A4   (0x0004)  
	float                                              MinDesiredWidth;                                            // 0x01A8   (0x0004)  
	float                                              MinDesiredHeight;                                           // 0x01AC   (0x0004)  
	float                                              MaxDesiredWidth;                                            // 0x01B0   (0x0004)  
	float                                              MaxDesiredHeight;                                           // 0x01B4   (0x0004)  
	float                                              MinAspectRatio;                                             // 0x01B8   (0x0004)  
	float                                              MaxAspectRatio;                                             // 0x01BC   (0x0004)  
	bool                                               bOverride_WidthOverride : 1;                                // 0x01C0:0 (0x0001)  
	bool                                               bOverride_HeightOverride : 1;                               // 0x01C0:1 (0x0001)  
	bool                                               bOverride_MinDesiredWidth : 1;                              // 0x01C0:2 (0x0001)  
	bool                                               bOverride_MinDesiredHeight : 1;                             // 0x01C0:3 (0x0001)  
	bool                                               bOverride_MaxDesiredWidth : 1;                              // 0x01C0:4 (0x0001)  
	bool                                               bOverride_MaxDesiredHeight : 1;                             // 0x01C0:5 (0x0001)  
	bool                                               bOverride_MinAspectRatio : 1;                               // 0x01C0:6 (0x0001)  
	bool                                               bOverride_MaxAspectRatio : 1;                               // 0x01C0:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01C1   (0x0007)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBox.SetWidthOverride
	// void SetWidthOverride(float InWidthOverride);                                                                         // [0x2fcc1b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x2c215b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredHeight
	// void SetMinDesiredHeight(float InMinDesiredHeight);                                                                   // [0x2f6baa8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinAspectRatio
	// void SetMinAspectRatio(float InMinAspectRatio);                                                                       // [0x62b62ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredWidth
	// void SetMaxDesiredWidth(float InMaxDesiredWidth);                                                                     // [0x3098eb8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredHeight
	// void SetMaxDesiredHeight(float InMaxDesiredHeight);                                                                   // [0x327074c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxAspectRatio
	// void SetMaxAspectRatio(float InMaxAspectRatio);                                                                       // [0x62b606c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetHeightOverride
	// void SetHeightOverride(float InHeightOverride);                                                                       // [0x2e50924] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearWidthOverride
	// void ClearWidthOverride();                                                                                            // [0x345fd0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredWidth
	// void ClearMinDesiredWidth();                                                                                          // [0x62b1404] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredHeight
	// void ClearMinDesiredHeight();                                                                                         // [0x62b13f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinAspectRatio
	// void ClearMinAspectRatio();                                                                                           // [0x62b13dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredWidth
	// void ClearMaxDesiredWidth();                                                                                          // [0x340787c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredHeight
	// void ClearMaxDesiredHeight();                                                                                         // [0x35058c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxAspectRatio
	// void ClearMaxAspectRatio();                                                                                           // [0x62b13a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearHeightOverride
	// void ClearHeightOverride();                                                                                           // [0x3401250] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USizeBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	SDK_UNDEFINED(1,1529) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1530) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x62b8ef8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x337c8b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x62b5840] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Slider
/// Size: 0x0548 (0x000178 - 0x0006C0)
class USlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	SDK_UNDEFINED(12,1531) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x017C   (0x000C)  
	float                                              MinValue;                                                   // 0x0188   (0x0004)  
	float                                              MaxValue;                                                   // 0x018C   (0x0004)  
	FSliderStyle                                       WidgetStyle;                                                // 0x0190   (0x04A0)  
	SDK_UNDEFINED(1,1532) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0630   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0631   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x0634   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0644   (0x0010)  
	bool                                               IndentHandle;                                               // 0x0654   (0x0001)  
	bool                                               Locked;                                                     // 0x0655   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x0656   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x0657   (0x0001)  
	float                                              StepSize;                                                   // 0x0658   (0x0004)  
	bool                                               IsFocusable;                                                // 0x065C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x065D   (0x0003)  MISSED
	SDK_UNDEFINED(16,1533) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x0660   (0x0010)  
	SDK_UNDEFINED(16,1534) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0670   (0x0010)  
	SDK_UNDEFINED(16,1535) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0680   (0x0010)  
	SDK_UNDEFINED(16,1536) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0690   (0x0010)  
	SDK_UNDEFINED(16,1537) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x06A0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x06B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Slider.SetValue
	// void SetValue(float InValue);                                                                                         // [0x1ffa998] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0x62b7fe4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                      // [0x62b7ca8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0x62b7b70] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMinValue
	// void SetMinValue(float InValue);                                                                                      // [0x62b666c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMaxValue
	// void SetMaxValue(float InValue);                                                                                      // [0x62b61ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0x62b5f6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                   // [0x62b5940] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.GetValue
	// float GetValue();                                                                                                     // [0x1ffa958] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Slider.GetNormalizedValue
	// float GetNormalizedValue();                                                                                           // [0x62b1da4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Spacer
/// Size: 0x0020 (0x000178 - 0x000198)
class USpacer : public UWidget
{ 
public:
	FVector2D                                          Size;                                                       // 0x0178   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0188   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Spacer.SetSize
	// void SetSize(FVector2D InSize);                                                                                       // [0x1ffc634] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.SpinBox
/// Size: 0x06A8 (0x000178 - 0x000820)
class USpinBox : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	SDK_UNDEFINED(12,1538) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x017C   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	FSpinBoxStyle                                      WidgetStyle;                                                // 0x0190   (0x0590)  
	int32_t                                            MinFractionalDigits;                                        // 0x0720   (0x0004)  
	int32_t                                            MaxFractionalDigits;                                        // 0x0724   (0x0004)  
	bool                                               bAlwaysUsesDeltaSnap;                                       // 0x0728   (0x0001)  
	bool                                               bEnableSlider;                                              // 0x0729   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x072A   (0x0002)  MISSED
	float                                              Delta;                                                      // 0x072C   (0x0004)  
	float                                              SliderExponent;                                             // 0x0730   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0734   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0738   (0x0058)  
	SDK_UNDEFINED(1,1539) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x0790   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0791   (0x0003)  MISSED
	float                                              MinDesiredWidth;                                            // 0x0794   (0x0004)  
	SDK_UNDEFINED(1,1540) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x0798   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0799   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x079A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x079B   (0x0001)  MISSED
	FSlateColor                                        ForegroundColor;                                            // 0x079C   (0x0014)  
	SDK_UNDEFINED(16,1541) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x07B0   (0x0010)  
	SDK_UNDEFINED(16,1542) /* FMulticastInlineDelegate */ __um(OnValueCommitted);                                  // 0x07C0   (0x0010)  
	SDK_UNDEFINED(16,1543) /* FMulticastInlineDelegate */ __um(OnBeginSliderMovement);                             // 0x07D0   (0x0010)  
	SDK_UNDEFINED(16,1544) /* FMulticastInlineDelegate */ __um(OnEndSliderMovement);                               // 0x07E0   (0x0010)  
	bool                                               bOverride_MinValue : 1;                                     // 0x07F0:0 (0x0001)  
	bool                                               bOverride_MaxValue : 1;                                     // 0x07F0:1 (0x0001)  
	bool                                               bOverride_MinSliderValue : 1;                               // 0x07F0:2 (0x0001)  
	bool                                               bOverride_MaxSliderValue : 1;                               // 0x07F0:3 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x07F1   (0x0003)  MISSED
	float                                              MinValue;                                                   // 0x07F4   (0x0004)  
	float                                              MaxValue;                                                   // 0x07F8   (0x0004)  
	float                                              MinSliderValue;                                             // 0x07FC   (0x0004)  
	float                                              MaxSliderValue;                                             // 0x0800   (0x0004)  
	unsigned char                                      UnknownData06_6[0x1C];                                      // 0x0804   (0x001C)  MISSED


	/// Functions
	// Function /Script/UMG.SpinBox.SetValue
	// void SetValue(float NewValue);                                                                                        // [0x62b8d78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinValue
	// void SetMinValue(float NewValue);                                                                                     // [0x62b66ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinSliderValue
	// void SetMinSliderValue(float NewValue);                                                                               // [0x62b65ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinFractionalDigits
	// void SetMinFractionalDigits(int32_t NewValue);                                                                        // [0x62b656c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxValue
	// void SetMaxValue(float NewValue);                                                                                     // [0x62b626c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxSliderValue
	// void SetMaxSliderValue(float NewValue);                                                                               // [0x62b616c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxFractionalDigits
	// void SetMaxFractionalDigits(int32_t NewValue);                                                                        // [0x62b60ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                               // [0x62b53a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetDelta
	// void SetDelta(float NewValue);                                                                                        // [0x62b46a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap
	// void SetAlwaysUsesDeltaSnap(bool bNewValue);                                                                          // [0x62b3a00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);           // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);                                                    // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// void OnSpinBoxBeginSliderMovement__DelegateSignature();                                                               // [0x211c0a0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.GetValue
	// float GetValue();                                                                                                     // [0x62b2060] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinValue
	// float GetMinValue();                                                                                                  // [0x62b1d84] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinSliderValue
	// float GetMinSliderValue();                                                                                            // [0x62b1d64] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinFractionalDigits
	// int32_t GetMinFractionalDigits();                                                                                     // [0x62b1d4c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxValue
	// float GetMaxValue();                                                                                                  // [0x62b1cec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxSliderValue
	// float GetMaxSliderValue();                                                                                            // [0x62b1ccc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxFractionalDigits
	// int32_t GetMaxFractionalDigits();                                                                                     // [0x62b1cb4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetDelta
	// float GetDelta();                                                                                                     // [0x62b19cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap
	// bool GetAlwaysUsesDeltaSnap();                                                                                        // [0x62b1748] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.ClearMinValue
	// void ClearMinValue();                                                                                                 // [0x62b142c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMinSliderValue
	// void ClearMinSliderValue();                                                                                           // [0x62b1418] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxValue
	// void ClearMaxValue();                                                                                                 // [0x62b13c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxSliderValue
	// void ClearMaxSliderValue();                                                                                           // [0x62b13b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.StackBox
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UStackBox : public UPanelWidget
{ 
public:
	SDK_UNDEFINED(1,1545) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0191   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.StackBox.ReplaceStackBoxChildAt
	// bool ReplaceStackBoxChildAt(int32_t Index, class UWidget* Content);                                                   // [0x62b3348] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.StackBox.AddChildToStackBox
	// class UStackBoxSlot* AddChildToStackBox(class UWidget* Content);                                                      // [0x62b0d90] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.StackBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UStackBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	FSlateChildSize                                    Size;                                                       // 0x0048   (0x0008)  
	SDK_UNDEFINED(1,1546) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1547) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED
};

/// Class /Script/UMG.TextBlock
/// Size: 0x01B8 (0x000198 - 0x000350)
class UTextBlock : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1548) /* FText */                 __um(Text);                                                 // 0x0198   (0x0018)  
	SDK_UNDEFINED(12,1549) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x01B0   (0x000C)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x01BC   (0x0014)  
	SDK_UNDEFINED(12,1550) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x01D0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x01E0   (0x0058)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0238   (0x0008)  MISSED
	FSlateBrush                                        StrikeBrush;                                                // 0x0240   (0x00C0)  
	FVector2D                                          ShadowOffset;                                               // 0x0300   (0x0010)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0310   (0x0010)  
	SDK_UNDEFINED(12,1551) /* FDelegateProperty */     __um(ShadowColorAndOpacityDelegate);                        // 0x0320   (0x000C)  
	float                                              MinDesiredWidth;                                            // 0x032C   (0x0004)  
	bool                                               bWrapWithInvalidationPanel;                                 // 0x0330   (0x0001)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0331   (0x0001)  
	ETextOverflowPolicy                                TextOverflowPolicy;                                         // 0x0332   (0x0001)  
	bool                                               bSimpleTextMode;                                            // 0x0333   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1C];                                      // 0x0334   (0x001C)  MISSED


	/// Functions
	// Function /Script/UMG.TextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                  // [0x1b4c758] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                     // [0x32e6250] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetText
	// void SetText(FText InText);                                                                                           // [0x1b4ea04] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetStrikeBrush
	// void SetStrikeBrush(FSlateBrush InStrikeBrush);                                                                       // [0x62b8164] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2D InShadowOffset);                                                                       // [0x62b78d4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity
	// void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                  // [0x62b779c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                     // [0x62b6de4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x62b64ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                    // [0x3124020] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                           // [0x3123f6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                              // [0x2af2044] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetColorAndOpacity
	// void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                               // [0x1b4cdc8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                            // [0x3390c40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetText
	// FText GetText();                                                                                                      // [0x1b4d858] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial
	// class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                          // [0x2a89a38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial
	// class UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                             // [0x2a89aec] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Throbber
/// Size: 0x00D8 (0x000178 - 0x000250)
class UThrobber : public UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0178   (0x0004)  
	bool                                               bAnimateHorizontally;                                       // 0x017C   (0x0001)  
	bool                                               bAnimateVertically;                                         // 0x017D   (0x0001)  
	bool                                               bAnimateOpacity;                                            // 0x017E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x017F   (0x0001)  MISSED
	FSlateBrush                                        Image;                                                      // 0x0180   (0x00C0)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0240   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Throbber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                     // [0x62b6d64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateVertically
	// void SetAnimateVertically(bool bInAnimateVertically);                                                                 // [0x62b3b80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateOpacity
	// void SetAnimateOpacity(bool bInAnimateOpacity);                                                                       // [0x62b3b00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateHorizontally
	// void SetAnimateHorizontally(bool bInAnimateHorizontally);                                                             // [0x62b3a80] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TileView
/// Size: 0x0030 (0x000BD0 - 0x000C00)
class UTileView : public UListView
{ 
public:
	float                                              EntryHeight;                                                // 0x0BD0   (0x0004)  
	float                                              EntryWidth;                                                 // 0x0BD4   (0x0004)  
	EListItemAlignment                                 TileAlignment;                                              // 0x0BD8   (0x0001)  
	bool                                               bWrapHorizontalNavigation;                                  // 0x0BD9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x16];                                      // 0x0BDA   (0x0016)  MISSED
	bool                                               bEntrySizeIncludesEntrySpacing;                             // 0x0BF0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0BF1   (0x000F)  MISSED


	/// Functions
	// Function /Script/UMG.TileView.SetEntryWidth
	// void SetEntryWidth(float NewWidth);                                                                                   // [0x1bde470] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.SetEntryHeight
	// void SetEntryHeight(float NewHeight);                                                                                 // [0x1bde3f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.IsAligned
	// bool IsAligned();                                                                                                     // [0x62b2540] Final|RequiredAPI|Native|Private|Const 
	// Function /Script/UMG.TileView.GetEntryWidth
	// float GetEntryWidth();                                                                                                // [0x62b1a48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TileView.GetEntryHeight
	// float GetEntryHeight();                                                                                               // [0x3b25350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TreeView
/// Size: 0x0060 (0x000BD0 - 0x000C30)
class UTreeView : public UListView
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0BD0   (0x0010)  MISSED
	SDK_UNDEFINED(12,1552) /* FDelegateProperty */     __um(BP_OnGetItemChildren);                                 // 0x0BE0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0BEC   (0x0004)  MISSED
	SDK_UNDEFINED(16,1553) /* FMulticastInlineDelegate */ __um(BP_OnItemExpansionChanged);                         // 0x0BF0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0C00   (0x0030)  MISSED


	/// Functions
	// Function /Script/UMG.TreeView.SetItemExpansion
	// void SetItemExpansion(class UObject* Item, bool bExpandItem);                                                         // [0x62b5d74] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.ExpandAll
	// void ExpandAll();                                                                                                     // [0x62b14d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.CollapseAll
	// void CollapseAll();                                                                                                   // [0x62b1440] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridPanel
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UUniformGridPanel : public UPanelWidget
{ 
public:
	FMargin                                            SlotPadding;                                                // 0x0190   (0x0010)  
	float                                              MinDesiredSlotWidth;                                        // 0x01A0   (0x0004)  
	float                                              MinDesiredSlotHeight;                                       // 0x01A4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridPanel.SetSlotPadding
	// void SetSlotPadding(FMargin InSlotPadding);                                                                           // [0x62b7de0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);                                                             // [0x62b63ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);                                                           // [0x62b636c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid
	// class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);               // [0x1f81954] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UUniformGridSlot : public UPanelSlot
{ 
public:
	SDK_UNDEFINED(1,1554) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,1555) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x003C   (0x0004)  
	int32_t                                            Column;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2d6f1c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                           // [0x1f81b7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2d6f260] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                     // [0x1f81c18] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UVerticalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBox.AddChildToVerticalBox
	// class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);                                                // [0x3302390] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UVerticalBoxSlot : public UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0038   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1556) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1557) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x35dd3d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                 // [0x398ecac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2a96550] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x34f66dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Viewport
/// Size: 0x0050 (0x000190 - 0x0001E0)
class UViewport : public UContentWidget
{ 
public:
	FLinearColor                                       BackgroundColor;                                            // 0x0190   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x01A0   (0x0040)  MISSED


	/// Functions
	// Function /Script/UMG.Viewport.Spawn
	// class AActor* Spawn(class UClass* ActorClass);                                                                        // [0x62b9558] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewRotation
	// void SetViewRotation(FRotator Rotation);                                                                              // [0x62b90b8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewLocation
	// void SetViewLocation(FVector Location);                                                                               // [0x62b8f78] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.GetViewRotation
	// FRotator GetViewRotation();                                                                                           // [0x62b2140] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewportWorld
	// class UWorld* GetViewportWorld();                                                                                     // [0x62b2190] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewLocation
	// FVector GetViewLocation();                                                                                            // [0x62b20b8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0130 (0x0005B0 - 0x0006E0)
class UWidgetComponent : public UMeshComponent
{ 
public:
	EWidgetSpace                                       Space;                                                      // 0x05A8   (0x0001)  
	EWidgetTimingPolicy                                TimingPolicy;                                               // 0x05A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x05AA   (0x0006)  MISSED
	class UClass*                                      WidgetClass;                                                // 0x05B0   (0x0008)  
	FIntPoint                                          DrawSize;                                                   // 0x05B8   (0x0008)  
	bool                                               bManuallyRedraw;                                            // 0x05C0   (0x0001)  
	bool                                               bRedrawRequested;                                           // 0x05C1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x05C2   (0x0002)  MISSED
	float                                              RedrawTime;                                                 // 0x05C4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x05C8   (0x0008)  MISSED
	FIntPoint                                          CurrentDrawSize;                                            // 0x05D0   (0x0008)  
	bool                                               bUseInvalidationInWorldSpace;                               // 0x05D8   (0x0001)  
	bool                                               bDrawAtDesiredSize;                                         // 0x05D9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x05DA   (0x0006)  MISSED
	FVector2D                                          Pivot;                                                      // 0x05E0   (0x0010)  
	bool                                               bReceiveHardwareInput;                                      // 0x05F0   (0x0001)  
	bool                                               bWindowFocusable;                                           // 0x05F1   (0x0001)  
	EWindowVisibility                                  WindowVisibility;                                           // 0x05F2   (0x0001)  
	bool                                               bApplyGammaCorrection;                                      // 0x05F3   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x05F4   (0x0004)  MISSED
	class ULocalPlayer*                                OwnerPlayer;                                                // 0x05F8   (0x0008)  
	FLinearColor                                       BackgroundColor;                                            // 0x0600   (0x0010)  
	FLinearColor                                       TintColorAndOpacity;                                        // 0x0610   (0x0010)  
	float                                              OpacityFromTexture;                                         // 0x0620   (0x0004)  
	EWidgetBlendMode                                   BlendMode;                                                  // 0x0624   (0x0001)  
	bool                                               bIsTwoSided;                                                // 0x0625   (0x0001)  
	bool                                               TickWhenOffscreen;                                          // 0x0626   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0627   (0x0001)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x0628   (0x0008)  
	class UMaterialInterface*                          TranslucentMaterial;                                        // 0x0630   (0x0008)  
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                               // 0x0638   (0x0008)  
	class UMaterialInterface*                          OpaqueMaterial;                                             // 0x0640   (0x0008)  
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                    // 0x0648   (0x0008)  
	class UMaterialInterface*                          MaskedMaterial;                                             // 0x0650   (0x0008)  
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                    // 0x0658   (0x0008)  
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0660   (0x0008)  
	class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x0668   (0x0008)  
	bool                                               bAddedToScreen;                                             // 0x0670   (0x0001)  
	bool                                               bEditTimeUsable;                                            // 0x0671   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x0672   (0x0002)  MISSED
	FName                                              SharedLayerName;                                            // 0x0674   (0x0004)  
	int32_t                                            LayerZOrder;                                                // 0x0678   (0x0004)  
	EWidgetGeometryMode                                GeometryMode;                                               // 0x067C   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x067D   (0x0003)  MISSED
	float                                              CylinderArcAngle;                                           // 0x0680   (0x0004)  
	ETickMode                                          TickMode;                                                   // 0x0684   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2B];                                      // 0x0685   (0x002B)  MISSED
	class UUserWidget*                                 Widget;                                                     // 0x06B0   (0x0008)  
	unsigned char                                      UnknownData09_6[0x28];                                      // 0x06B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetComponent.SetWindowVisibility
	// void SetWindowVisibility(EWindowVisibility InVisibility);                                                             // [0x62b94b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWindowFocusable
	// void SetWindowFocusable(bool bInWindowFocusable);                                                                     // [0x62b9430] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidgetSpace
	// void SetWidgetSpace(EWidgetSpace NewSpace);                                                                           // [0x62b92fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidget
	// void SetWidget(class UUserWidget* Widget);                                                                            // [0x62b9278] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTwoSided
	// void SetTwoSided(bool bWantTwoSided);                                                                                 // [0x62b8c60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity
	// void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);                                                     // [0x62b8a0c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen
	// void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);                                                               // [0x62b898c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickMode
	// void SetTickMode(ETickMode InTickMode);                                                                               // [0x62b890c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetRedrawTime
	// void SetRedrawTime(float InRedrawTime);                                                                               // [0x62b7184] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetPivot
	// void SetPivot(FVector2D& InPivot);                                                                                    // [0x62b705c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer
	// void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);                                                                 // [0x62b6ee4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetManuallyRedraw
	// void SetManuallyRedraw(bool bUseManualRedraw);                                                                        // [0x62b5fec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetGeometryMode
	// void SetGeometryMode(EWidgetGeometryMode InGeometryMode);                                                             // [0x62b54f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawSize
	// void SetDrawSize(FVector2D Size);                                                                                     // [0x62b47a0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize
	// void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);                                                                 // [0x62b4720] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetCylinderArcAngle
	// void SetCylinderArcAngle(float InCylinderArcAngle);                                                                   // [0x62b4108] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor NewBackgroundColor);                                                             // [0x62b3c80] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRenderUpdate
	// void RequestRenderUpdate();                                                                                           // [0x62b347c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRedraw
	// void RequestRedraw();                                                                                                 // [0x62b3428] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.IsWidgetVisible
	// bool IsWidgetVisible();                                                                                               // [0x62b2618] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowVisiblility
	// EWindowVisibility GetWindowVisiblility();                                                                             // [0x62b21e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowFocusable
	// bool GetWindowFocusable();                                                                                            // [0x62b21c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidgetSpace
	// EWidgetSpace GetWidgetSpace();                                                                                        // [0x62b21b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidget
	// class UUserWidget* GetWidget();                                                                                       // [0x332914c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject
	// class UUserWidget* GetUserWidgetObject();                                                                             // [0x2acc8d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTwoSided
	// bool GetTwoSided();                                                                                                   // [0x62b2048] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen
	// bool GetTickWhenOffscreen();                                                                                          // [0x62b2030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRenderTarget
	// class UTextureRenderTarget2D* GetRenderTarget();                                                                      // [0x62b1e2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRedrawTime
	// float GetRedrawTime();                                                                                                // [0x3b24e88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetPivot
	// FVector2D GetPivot();                                                                                                 // [0x62b1de8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer
	// class ULocalPlayer* GetOwnerPlayer();                                                                                 // [0x62b1dc4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetMaterialInstance
	// class UMaterialInstanceDynamic* GetMaterialInstance();                                                                // [0x34a4674] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetManuallyRedraw
	// bool GetManuallyRedraw();                                                                                             // [0x62b1c9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetGeometryMode
	// EWidgetGeometryMode GetGeometryMode();                                                                                // [0x62b1aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawSize
	// FVector2D GetDrawSize();                                                                                              // [0x62b19e4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize
	// bool GetDrawAtDesiredSize();                                                                                          // [0x3b252f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCylinderArcAngle
	// float GetCylinderArcAngle();                                                                                          // [0x62b18ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCurrentDrawSize
	// FVector2D GetCurrentDrawSize();                                                                                       // [0x62b18b4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x02D0 (0x000290 - 0x000560)
class UWidgetInteractionComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,1558) /* FMulticastInlineDelegate */ __um(OnHoveredWidgetChanged);                            // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x02A0   (0x0010)  MISSED
	int32_t                                            VirtualUserIndex;                                           // 0x02B0   (0x0004)  
	int32_t                                            PointerIndex;                                               // 0x02B4   (0x0004)  
	SDK_UNDEFINED(1,1559) /* TEnumAsByte<ECollisionChannel> */ __um(TraceChannel);                                 // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	float                                              InteractionDistance;                                        // 0x02BC   (0x0004)  
	EWidgetInteractionSource                           InteractionSource;                                          // 0x02C0   (0x0001)  
	bool                                               bEnableHitTesting;                                          // 0x02C1   (0x0001)  
	bool                                               bShowDebug;                                                 // 0x02C2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x02C3   (0x0001)  MISSED
	float                                              DebugSphereLineThickness;                                   // 0x02C4   (0x0004)  
	float                                              DebugLineThickness;                                         // 0x02C8   (0x0004)  
	FLinearColor                                       DebugColor;                                                 // 0x02CC   (0x0010)  
	unsigned char                                      UnknownData03_5[0x7C];                                      // 0x02DC   (0x007C)  MISSED
	FHitResult                                         CustomHitResult;                                            // 0x0358   (0x00E8)  
	FVector2D                                          LocalHitLocation;                                           // 0x0440   (0x0010)  
	FVector2D                                          LastLocalHitLocation;                                       // 0x0450   (0x0010)  
	class UWidgetComponent*                            HoveredWidgetComponent;                                     // 0x0460   (0x0008)  
	FHitResult                                         LastHitResult;                                              // 0x0468   (0x00E8)  
	bool                                               bIsHoveredWidgetInteractable;                               // 0x0550   (0x0001)  
	bool                                               bIsHoveredWidgetFocusable;                                  // 0x0551   (0x0001)  
	bool                                               bIsHoveredWidgetHitTestVisible;                             // 0x0552   (0x0001)  
	unsigned char                                      UnknownData04_6[0xD];                                       // 0x0553   (0x000D)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetInteractionComponent.SetFocus
	// void SetFocus(class UWidget* FocusWidget);                                                                            // [0x62d01c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult
	// void SetCustomHitResult(FHitResult& HitResult);                                                                       // [0x62cfe34] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar
	// bool SendKeyChar(FString Characters, bool bRepeat);                                                                   // [0x62cf254] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel
	// void ScrollWheel(float ScrollDelta);                                                                                  // [0x62cf1d0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey
	// void ReleasePointerKey(FKey Key);                                                                                     // [0x62ce598] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey
	// bool ReleaseKey(FKey Key);                                                                                            // [0x62ce2d8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey
	// void PressPointerKey(FKey Key);                                                                                       // [0x62cdbb0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressKey
	// bool PressKey(FKey Key, bool bRepeat);                                                                                // [0x62cd904] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey
	// bool PressAndReleaseKey(FKey Key);                                                                                    // [0x62cd73c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// bool IsOverInteractableWidget();                                                                                      // [0x62cca08] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// bool IsOverHitTestVisibleWidget();                                                                                    // [0x62cc9f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// bool IsOverFocusableWidget();                                                                                         // [0x62cc9d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult
	// FHitResult GetLastHitResult();                                                                                        // [0x62cc0b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// class UWidgetComponent* GetHoveredWidgetComponent();                                                                  // [0x62cbc20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation
	// FVector2D Get2DHitLocation();                                                                                         // [0x62cb600] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcher
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UWidgetSwitcher : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0194   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                             // [0x1fe65f8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                          // [0x1b4efe0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                       // [0x62cc6f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets
	// int32_t GetNumWidgets();                                                                                              // [0x62cc448] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                       // [0x62cb724] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                     // [0x62cb700] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWidgetSwitcherSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1560) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1561) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x62d1be4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2cfa770] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x62d05ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarArea
/// Size: 0x0020 (0x000190 - 0x0001B0)
class UWindowTitleBarArea : public UContentWidget
{ 
public:
	bool                                               bWindowButtonsEnabled;                                      // 0x0190   (0x0001)  
	bool                                               bDoubleClickTogglesFullscreen;                              // 0x0191   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1E];                                      // 0x0192   (0x001E)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarArea.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x62d1c64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x62d1288] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x62d062c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWindowTitleBarAreaSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1562) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1563) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x62d1ce4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x62d13c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x62d06ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UWrapBox : public UPanelWidget
{ 
public:
	FVector2D                                          InnerSlotPadding;                                           // 0x0190   (0x0010)  
	float                                              WrapSize;                                                   // 0x01A0   (0x0004)  
	bool                                               bExplicitWrapSize;                                          // 0x01A4   (0x0001)  
	SDK_UNDEFINED(1,1564) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x01A5   (0x0001)  
	SDK_UNDEFINED(1,1565) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x01A6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x11];                                      // 0x01A7   (0x0011)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBox.SetInnerSlotPadding
	// void SetInnerSlotPadding(FVector2D InPadding);                                                                        // [0x62d0830] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WrapBox.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x62d0730] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBox.AddChildToWrapBox
	// class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);                                                        // [0x62c8720] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWrapBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	float                                              FillSpanWhenLessThan;                                       // 0x0048   (0x0004)  
	SDK_UNDEFINED(1,1566) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x004C   (0x0001)  
	SDK_UNDEFINED(1,1567) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x004D   (0x0001)  
	bool                                               bFillEmptySpace;                                            // 0x004E   (0x0001)  
	bool                                               bForceNewLine;                                              // 0x004F   (0x0001)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x62d1d68] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x62d1500] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetNewLine
	// void SetNewLine(bool InForceNewLine);                                                                                 // [0x62d1080] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x62d07b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                           // [0x62d0140] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace
	// void SetFillEmptySpace(bool InbFillEmptySpace);                                                                       // [0x62d00c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0068 (0x000028 - 0x000090)
class UDragDropOperation : public UObject
{ 
public:
	SDK_UNDEFINED(16,1568) /* FString */               __um(tag);                                                  // 0x0028   (0x0010)  
	class UObject*                                     Payload;                                                    // 0x0038   (0x0008)  
	class UWidget*                                     DefaultDragVisual;                                          // 0x0040   (0x0008)  
	EDragPivot                                         Pivot;                                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FVector2D                                          Offset;                                                     // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1569) /* FMulticastInlineDelegate */ __um(OnDrop);                                            // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,1570) /* FMulticastInlineDelegate */ __um(OnDragCancelled);                                   // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1571) /* FMulticastInlineDelegate */ __um(OnDragged);                                         // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/UMG.DragDropOperation.Drop
	// void Drop(FPointerEvent& PointerEvent);                                                                               // [0x62cb43c] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.Dragged
	// void Dragged(FPointerEvent& PointerEvent);                                                                            // [0x62c9828] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DragCancelled
	// void DragCancelled(FPointerEvent& PointerEvent);                                                                      // [0x62c9780] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	// FVector2D TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector);                                 // [0x62d2864] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	// FVector2D TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector);                              // [0x62d2694] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	// float TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar);                                         // [0x62d2538] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	// float TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar);                                      // [0x62d23dc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// void ScreenToWidgetLocal(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // [0x62ceecc] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// void ScreenToWidgetAbsolute(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // [0x62cec3c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToViewport
	// void ScreenToViewport(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);      // [0x62cea8c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToViewport
	// void LocalToViewport(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x62cce74] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToAbsolute
	// FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate);                                            // [0x62ccca4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.IsUnderLocation
	// bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate);                                             // [0x62cca20] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalTopLeft
	// FVector2D GetLocalTopLeft(FGeometry& Geometry);                                                                       // [0x62cc154] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalSize
	// FVector2D GetLocalSize(FGeometry& Geometry);                                                                          // [0x339e290] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// FVector2D GetAbsoluteSize(FGeometry& Geometry);                                                                       // [0x62cb61c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B);                                                           // [0x1b50510] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// void AbsoluteToViewport(class UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x62c8518] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate);                                         // [0x62c8348] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/UMG.SlateMeshVertex
/// Size: 0x003C (0x000000 - 0x00003C)
struct FSlateMeshVertex
{ 
	FVector2f                                          Position;                                                   // 0x0000   (0x0008)  
	FColor                                             Color;                                                      // 0x0008   (0x0004)  
	FVector2f                                          UV0;                                                        // 0x000C   (0x0008)  
	FVector2f                                          UV1;                                                        // 0x0014   (0x0008)  
	FVector2f                                          UV2;                                                        // 0x001C   (0x0008)  
	FVector2f                                          UV3;                                                        // 0x0024   (0x0008)  
	FVector2f                                          UV4;                                                        // 0x002C   (0x0008)  
	FVector2f                                          UV5;                                                        // 0x0034   (0x0008)  
};

/// Class /Script/UMG.SlateVectorArtData
/// Size: 0x0048 (0x000028 - 0x000070)
class USlateVectorArtData : public UObject
{ 
public:
	TArray<FSlateMeshVertex>                           VertexData;                                                 // 0x0028   (0x0010)  
	TArray<uint32_t>                                   IndexData;                                                  // 0x0038   (0x0010)  
	class UMaterialInterface*                          Material;                                                   // 0x0048   (0x0008)  
	FVector2D                                          ExtentMin;                                                  // 0x0050   (0x0010)  
	FVector2D                                          ExtentMax;                                                  // 0x0060   (0x0010)  
};

/// Struct /Script/UMG.DelegateRuntimeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
struct FDelegateRuntimeBinding
{ 
	SDK_UNDEFINED(16,1572) /* FString */               __um(ObjectName);                                           // 0x0000   (0x0010)  
	FName                                              PropertyName;                                               // 0x0010   (0x0004)  
	FName                                              FunctionName;                                               // 0x0014   (0x0004)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0018   (0x0038)  
	EBindingKind                                       Kind;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClass
/// Size: 0x0070 (0x000368 - 0x0003D8)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	class UWidgetTree*                                 WidgetTree;                                                 // 0x0368   (0x0008)  
	TArray<class UWidgetBlueprintGeneratedClassExtension*> Extensions;                                             // 0x0370   (0x0010)  
	bool                                               bClassRequiresNativeTick : 1;                               // 0x0380:0 (0x0001)  
	bool                                               bCanCallInitializedWithoutPlayerContext : 1;                // 0x0380:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0381   (0x0007)  MISSED
	TArray<FDelegateRuntimeBinding>                    Bindings;                                                   // 0x0388   (0x0010)  
	TArray<class UWidgetAnimation*>                    Animations;                                                 // 0x0398   (0x0010)  
	TArray<FName>                                      NamedSlots;                                                 // 0x03A8   (0x0010)  
	TArray<FName>                                      AvailableNamedSlots;                                        // 0x03B8   (0x0010)  
	TArray<FName>                                      InstanceNamedSlots;                                         // 0x03C8   (0x0010)  
};

/// Class /Script/UMG.WidgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetBlueprintLibrary.UnlockMouse
	// FEventReply UnlockMouse(FEventReply& Reply);                                                                          // [0x62d2b18] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Unhandled
	// FEventReply Unhandled();                                                                                              // [0x62d2ab4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // [0x62d1e58] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty Delegate);                                             // [0x2bbb138] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// void SetWindowTitleBarCloseButtonActive(bool bActive);                                                                // [0x62d1de8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetUserFocus
	// FEventReply SetUserFocus(FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);                           // [0x62d1928] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetMousePosition
	// FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);                                         // [0x62d0eac] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bFlushInput); // [0x62d0ce8] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// void SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput);                              // [0x62d0bfc] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput); // [0x62d09e8] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot); // [0x62d03d4] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// void SetFocusToGameViewport();                                                                                        // [0x62d026c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	// void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // [0x62cfcfc] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// void SetBrushResourceToTexture(FSlateBrush& Brush, class UTexture2D* Texture);                                        // [0x62cfbcc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// void SetBrushResourceToMaterial(FSlateBrush& Brush, class UMaterialInterface* Material);                              // [0x32c79b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// void RestorePreviousWindowTitleBarState();                                                                            // [0x62ce998] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// FEventReply ReleaseMouseCapture(FEventReply& Reply);                                                                  // [0x62ce4a0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);                                         // [0x62ce108] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();                                                     // [0x211c0a0] Public|Delegate      
	// Function /Script/UMG.WidgetBlueprintLibrary.NoResourceBrush
	// FSlateBrush NoResourceBrush();                                                                                        // [0x39ebca0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);                           // [0x333e188] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);                 // [0x2ea2a24] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);                                                   // [0x62cd2a8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.LockMouse
	// FEventReply LockMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                            // [0x62cd0d8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.IsDragDropping
	// bool IsDragDropping();                                                                                                // [0x62cc89c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Handled
	// FEventReply Handled();                                                                                                // [0x62cc77c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// void GetSafeZonePadding(class UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding); // [0x2005ee0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event);                                                  // [0x62cbfbc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event);                                                      // [0x62cbef0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event);                                                // [0x62cbe10] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event);                                                              // [0x62cbd18] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event);                                                  // [0x62cbc38] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);                                               // [0x2cf7e30] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// class UDragDropOperation* GetDragDroppingContent();                                                                   // [0x62cbb18] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// class UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush& Brush);                                                    // [0x35be8f8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// class UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush& Brush);                                             // [0x3321d40] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResource
	// class UObject* GetBrushResource(FSlateBrush& Brush);                                                                  // [0x2ebbccc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* Interface, bool TopLevelOnly); // [0x62cb7cc] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly); // [0x30dbc60] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.EndDragDrop
	// FEventReply EndDragDrop(FEventReply& Reply);                                                                          // [0x62cb4e4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// void DrawTextFormatted(FPaintContext& Context, FText& Text, FVector2D Position, class UFont* Font, float FontSize, FName FontTypeFace, FLinearColor Tint); // [0x62caee4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawText
	// void DrawText(FPaintContext& Context, FString InString, FVector2D Position, FLinearColor Tint);                       // [0x62cab84] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawSpline
	// void DrawSpline(FPaintContext& Context, FVector2D Start, FVector2D StartDir, FVector2D End, FVector2D EndDir, FLinearColor Tint, float Thickness); // [0x62ca594] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLines
	// void DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x62ca1e4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLine
	// void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x62c9cf0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawBox
	// void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, class USlateBrushAsset* Brush, FLinearColor Tint); // [0x62c98d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DismissAllMenus
	// void DismissAllMenus();                                                                                               // [0x62c9764] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, FKey DragKey);       // [0x62c941c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDrag
	// FEventReply DetectDrag(FEventReply& Reply, class UWidget* WidgetDetectingDrag, FKey DragKey);                         // [0x62c90d4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);                                      // [0x62c8ff0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.Create
	// class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer); // [0xf49bd8] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ClearUserFocus
	// FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);                                                     // [0x62c8e20] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureMouse
	// FEventReply CaptureMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                         // [0x62c8c50] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureJoystick
	// FEventReply CaptureJoystick(FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);                // [0x62c8990] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CancelDragDrop
	// void CancelDragDrop();                                                                                                // [0x62c8960] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	// class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget);                                                         // [0x62d2264] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	// class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget);                                           // [0x16b6564] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);                                                 // [0x2aef4d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);                                                 // [0x62d21c4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	// class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget);                                                         // [0x32e6d14] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	// class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget);                                                     // [0x62d2124] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	// class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget);                                                       // [0x62d2084] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	// class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget);                                                        // [0x62d1fe4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);                                                         // [0x2e487b4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);                                             // [0x1ffb8d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// class UGridSlot* SlotAsGridSlot(class UWidget* Widget);                                                               // [0x2a83128] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);                                                      // [0x3983594] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);                                                           // [0x32aeb60] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// void RemoveAllWidgets(class UObject* WorldContextObject);                                                             // [0x62ce750] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative); // [0x62cdd68] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);                                               // [0x62cc644] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportSize
	// FVector2D GetViewportSize(class UObject* WorldContextObject);                                                         // [0x62cc5bc] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportScale
	// float GetViewportScale(class UObject* WorldContextObject);                                                            // [0x62cc53c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);                                   // [0x62cc490] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// bool GetMousePositionScaledByDPI(class APlayerController* Player, float& LocationX, float& LocationY);                // [0x62cc2f0] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);                                              // [0x62cc268] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// FVector2D GetMousePositionOnPlatform();                                                                               // [0x62cc238] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0060 (0x000028 - 0x000088)
class UWidgetTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UWidget*                                     RootWidget;                                                 // 0x0030   (0x0008)  
	SDK_UNDEFINED(80,1573) /* TMap<FName, UWidget*> */ __um(NamedSlotBindings);                                    // 0x0038   (0x0050)  
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FEventReply
{ 
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPaintContext
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/UMG.WidgetEventField
/// Size: 0x0001 (0x000000 - 0x000001)
struct FWidgetEventField
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UMG.SequenceTickManagerWidgetData
/// Size: 0x0002 (0x000000 - 0x000002)
struct FSequenceTickManagerWidgetData
{ 
	unsigned char                                      UnknownData00_1[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/UMG.WidgetStateBitfield
/// Size: 0x0590 (0x000000 - 0x000590)
struct FWidgetStateBitfield
{ 
	unsigned char                                      UnknownData00_1[0x590];                                     // 0x0000   (0x0590)  MISSED
};

/// Struct /Script/UMG.GameViewportWidgetSlot
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameViewportWidgetSlot
{ 
	FAnchors                                           Anchors;                                                    // 0x0000   (0x0020)  
	FMargin                                            Offsets;                                                    // 0x0020   (0x0010)  
	FVector2D                                          Alignment;                                                  // 0x0030   (0x0010)  
	int32_t                                            ZOrder;                                                     // 0x0040   (0x0004)  
	bool                                               bAutoRemoveOnWorldRemoved;                                  // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/UMG.RichTextStyleRow
/// Size: 0x0318 (0x000008 - 0x000320)
struct FRichTextStyleRow : FTableRowBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTextBlockStyle                                    TextStyle;                                                  // 0x0010   (0x0310)  
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRichImageRow : FTableRowBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Brush;                                                      // 0x0010   (0x00C0)  
};

/// Struct /Script/UMG.WidgetComponentInstanceData
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

