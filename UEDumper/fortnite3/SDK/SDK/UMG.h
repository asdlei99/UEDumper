
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
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UPanelSlot*                                  Slot;                                                       // 0x0030   (0x0008)  
	SDK_UNDEFINED(12,1391) /* FDelegateProperty */     __um(bIsEnabledDelegate);                                   // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(24,1392) /* FText */                 __um(ToolTipText);                                          // 0x0048   (0x0018)  
	SDK_UNDEFINED(12,1393) /* FDelegateProperty */     __um(ToolTipTextDelegate);                                  // 0x0060   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	class UWidget*                                     ToolTipWidget;                                              // 0x0070   (0x0008)  
	SDK_UNDEFINED(12,1394) /* FDelegateProperty */     __um(ToolTipWidgetDelegate);                                // 0x0078   (0x000C)  
	SDK_UNDEFINED(12,1395) /* FDelegateProperty */     __um(VisibilityDelegate);                                   // 0x0084   (0x000C)  
	FWidgetTransform                                   RenderTransform;                                            // 0x0090   (0x0038)  
	FVector2D                                          RenderTransformPivot;                                       // 0x00C8   (0x0010)  
	EFlowDirectionPreference                           FlowDirectionPreference;                                    // 0x00D8   (0x0001)  
	bool                                               bIsVariable : 1;                                            // 0x00D9:0 (0x0001)  
	bool                                               bCreatedByConstructionScript : 1;                           // 0x00D9:1 (0x0001)  
	bool                                               bIsEnabled : 1;                                             // 0x00D9:2 (0x0001)  
	bool                                               bOverride_Cursor : 1;                                       // 0x00D9:3 (0x0001)  
	bool                                               bIsVolatile : 1;                                            // 0x00D9:4 (0x0001)  
	SDK_UNDEFINED(1,1396) /* TEnumAsByte<EMouseCursor> */ __um(Cursor);                                            // 0x00DA   (0x0001)  
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
	// void SetVisibility(ESlateVisibility InVisibility);                                                                    // [0x16fd034] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetUserFocus
	// void SetUserFocus(class APlayerController* PlayerController);                                                         // [0x5fcd10c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTipText
	// void SetToolTipText(FText& InToolTipText);                                                                            // [0x5fccf98] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTip
	// void SetToolTip(class UWidget* Widget);                                                                               // [0x5fcced8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTranslation
	// void SetRenderTranslation(FVector2D Translation);                                                                     // [0x1ff673c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformPivot
	// void SetRenderTransformPivot(FVector2D Pivot);                                                                        // [0x34ca994] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformAngle
	// void SetRenderTransformAngle(float Angle);                                                                            // [0x5fcad40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransform
	// void SetRenderTransform(FWidgetTransform InTransform);                                                                // [0x2fc7970] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderShear
	// void SetRenderShear(FVector2D Shear);                                                                                 // [0x31a1f58] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderScale
	// void SetRenderScale(FVector2D Scale);                                                                                 // [0x30d0194] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderOpacity
	// void SetRenderOpacity(float InOpacity);                                                                               // [0x140b0d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleExplicit
	// void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);                                     // [0x5fca4cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustomBoundary
	// void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate);                    // [0x5fca378] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustom
	// void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate);                            // [0x5fca224] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleBase
	// void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);                                          // [0x5fca0e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRule
	// void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);                         // [0x5fc9f0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetKeyboardFocus
	// void SetKeyboardFocus();                                                                                              // [0x5fc907c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetIsEnabled
	// void SetIsEnabled(bool bInIsEnabled);                                                                                 // [0x19e939c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetFocus
	// void SetFocus();                                                                                                      // [0x1febdf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetCursor
	// void SetCursor(TEnumAsByte<EMouseCursor> InCursor);                                                                   // [0x5fc60fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetClipping
	// void SetClipping(EWidgetClipping InClipping);                                                                         // [0x38a9e24] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetAllNavigationRules
	// void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);                                              // [0x5fc51b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ResetCursor
	// void ResetCursor();                                                                                                   // [0x5fc4dd4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.RemoveFromParent
	// void RemoveFromParent();                                                                                              // [0x20a0030] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.OnReply__DelegateSignature
	// FEventReply OnReply__DelegateSignature();                                                                             // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.OnPointerEvent__DelegateSignature
	// FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);                       // [0x2047e54] Public|Delegate|HasOutParms 
	// Function /Script/UMG.Widget.K2_RemoveFieldValueChangedDelegate
	// void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                    // [0x5fc4050] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.K2_BroadcastFieldValueChanged
	// void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                     // [0x5fc3f60] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.Widget.K2_AddFieldValueChangedDelegate
	// void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x5fc3e0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.IsVisible
	// bool IsVisible();                                                                                                     // [0x2e872fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsRendered
	// bool IsRendered();                                                                                                    // [0x5fc3d88] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsInViewport
	// bool IsInViewport();                                                                                                  // [0x5fc3d10] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsHovered
	// bool IsHovered();                                                                                                     // [0x349af2c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility
	// void InvalidateLayoutAndVolatility();                                                                                 // [0x3417880] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.HasUserFocusedDescendants
	// bool HasUserFocusedDescendants(class APlayerController* PlayerController);                                            // [0x5fc3c20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasUserFocus
	// bool HasUserFocus(class APlayerController* PlayerController);                                                         // [0x5fc3b50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCaptureByUser
	// bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);                                                  // [0x5fc39cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCapture
	// bool HasMouseCapture();                                                                                               // [0x27c7fd4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasKeyboardFocus
	// bool HasKeyboardFocus();                                                                                              // [0x5fc39a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasFocusedDescendants
	// bool HasFocusedDescendants();                                                                                         // [0x5fc3984] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasAnyUserFocus
	// bool HasAnyUserFocus();                                                                                               // [0x1fef4fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetWidget__DelegateSignature
	// class UWidget* GetWidget__DelegateSignature();                                                                        // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetVisibility
	// ESlateVisibility GetVisibility();                                                                                     // [0x322e014] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetTickSpaceGeometry
	// FGeometry GetTickSpaceGeometry();                                                                                     // [0x5fc2bac] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                   // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateVisibility__DelegateSignature
	// ESlateVisibility GetSlateVisibility__DelegateSignature();                                                             // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateColor__DelegateSignature
	// FSlateColor GetSlateColor__DelegateSignature();                                                                       // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateBrush__DelegateSignature
	// FSlateBrush GetSlateBrush__DelegateSignature();                                                                       // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetRenderTransformAngle
	// float GetRenderTransformAngle();                                                                                      // [0x5fc34bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetRenderOpacity
	// float GetRenderOpacity();                                                                                             // [0x5fc347c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetParent
	// class UPanelWidget* GetParent();                                                                                      // [0x347c0ac] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetPaintSpaceGeometry
	// FGeometry GetPaintSpaceGeometry();                                                                                    // [0x5fc3434] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningPlayer
	// class APlayerController* GetOwningPlayer();                                                                           // [0x297e7d4] RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningLocalPlayer
	// class ULocalPlayer* GetOwningLocalPlayer();                                                                           // [0x5fc340c] RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetMouseCursor__DelegateSignature
	// TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();                                                        // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetLinearColor__DelegateSignature
	// FLinearColor GetLinearColor__DelegateSignature();                                                                     // [0x2047e54] Public|Delegate|HasDefaults 
	// Function /Script/UMG.Widget.GetIsEnabled
	// bool GetIsEnabled();                                                                                                  // [0x113cc9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetInt32__DelegateSignature
	// int32_t GetInt32__DelegateSignature();                                                                                // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetGameInstance
	// class UGameInstance* GetGameInstance();                                                                               // [0x5fc2f74] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetFloat__DelegateSignature
	// float GetFloat__DelegateSignature();                                                                                  // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetDesiredSize
	// FVector2D GetDesiredSize();                                                                                           // [0x2ac27d4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetClipping
	// EWidgetClipping GetClipping();                                                                                        // [0x5fc2cec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetCheckBoxState__DelegateSignature
	// ECheckBoxState GetCheckBoxState__DelegateSignature();                                                                 // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetCachedGeometry
	// FGeometry GetCachedGeometry();                                                                                        // [0x5fc2bac] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetBool__DelegateSignature
	// bool GetBool__DelegateSignature();                                                                                    // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GetAccessibleText
	// FText GetAccessibleText();                                                                                            // [0x5fc2b04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetAccessibleSummaryText
	// FText GetAccessibleSummaryText();                                                                                     // [0x5fc2a84] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature
	// class UWidget* GenerateWidgetForString__DelegateSignature(FString Item);                                              // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);                                       // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.Widget.ForceVolatile
	// void ForceVolatile(bool bForce);                                                                                      // [0x5fc29c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ForceLayoutPrepass
	// void ForceLayoutPrepass();                                                                                            // [0x2c1e410] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	SDK_UNDEFINED(16,1397) /* FMulticastInlineDelegate */ __um(BP_OnEntryGenerated);                               // 0x0178   (0x0010)  
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
	SDK_UNDEFINED(16,1398) /* FMulticastInlineDelegate */ __um(BP_OnEntryReleased);                                // 0x01B8   (0x0010)  
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x01C8   (0x0088)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x0250   (0x0048)  MISSED


	/// Functions
	// Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                        // [0x5fcd68c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollOffset
	// void SetScrollOffset(float InScrollOffset);                                                                           // [0x5fcb0fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollbarVisibility
	// void SetScrollbarVisibility(ESlateVisibility InVisibility);                                                           // [0x239fa68] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToTop
	// void ScrollToTop();                                                                                                   // [0x5fc4f58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToBottom
	// void ScrollToBottom();                                                                                                // [0x5fc4f1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RequestRefresh
	// void RequestRefresh();                                                                                                // [0x5fc4d80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RegenerateAllEntries
	// void RegenerateAllEntries();                                                                                          // [0x5fc45b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.GetScrollOffset
	// float GetScrollOffset();                                                                                              // [0x5fc34d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets
	// TArray<UUserWidget*> GetDisplayedEntryWidgets();                                                                      // [0x5fc2ea8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ListView
/// Size: 0x0938 (0x000298 - 0x000BD0)
class UListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	FTableViewStyle                                    WidgetStyle;                                                // 0x0380   (0x00D0)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0450   (0x06E0)  
	SDK_UNDEFINED(1,1399) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0B30   (0x0001)  
	SDK_UNDEFINED(1,1400) /* TEnumAsByte<ESelectionMode> */ __um(SelectionMode);                                   // 0x0B31   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x0B32   (0x0001)  
	bool                                               bClearSelectionOnClick;                                     // 0x0B33   (0x0001)  
	bool                                               bIsFocusable;                                               // 0x0B34   (0x0001)  
	bool                                               bReturnFocusToSelection;                                    // 0x0B35   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0B36   (0x0002)  MISSED
	TArray<class UObject*>                             ListItems;                                                  // 0x0B38   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0B48   (0x0010)  MISSED
	float                                              HorizontalEntrySpacing;                                     // 0x0B58   (0x0004)  
	float                                              VerticalEntrySpacing;                                       // 0x0B5C   (0x0004)  
	SDK_UNDEFINED(16,1401) /* FMulticastInlineDelegate */ __um(BP_OnEntryInitialized);                             // 0x0B60   (0x0010)  
	SDK_UNDEFINED(16,1402) /* FMulticastInlineDelegate */ __um(BP_OnItemClicked);                                  // 0x0B70   (0x0010)  
	SDK_UNDEFINED(16,1403) /* FMulticastInlineDelegate */ __um(BP_OnItemDoubleClicked);                            // 0x0B80   (0x0010)  
	SDK_UNDEFINED(16,1404) /* FMulticastInlineDelegate */ __um(BP_OnItemIsHoveredChanged);                         // 0x0B90   (0x0010)  
	SDK_UNDEFINED(16,1405) /* FMulticastInlineDelegate */ __um(BP_OnItemSelectionChanged);                         // 0x0BA0   (0x0010)  
	SDK_UNDEFINED(16,1406) /* FMulticastInlineDelegate */ __um(BP_OnItemScrolledIntoView);                         // 0x0BB0   (0x0010)  
	SDK_UNDEFINED(16,1407) /* FMulticastInlineDelegate */ __um(BP_OnListViewScrolled);                             // 0x0BC0   (0x0010)  


	/// Functions
	// Function /Script/UMG.ListView.SetSelectionMode
	// void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);                                                     // [0x5fcb5b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                 // [0x5fcb45c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.ScrollIndexIntoView
	// void ScrollIndexIntoView(int32_t Index);                                                                              // [0x5fc4e5c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.RemoveItem
	// void RemoveItem(class UObject* Item);                                                                                 // [0x5fc49d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.OnListItemOuterEndPlayed
	// void OnListItemOuterEndPlayed(class AActor* ItemOuter, TEnumAsByte<EEndPlayReason> EndPlayReason);                    // [0x5fc439c] Final|RequiredAPI|Native|Protected 
	// Function /Script/UMG.ListView.OnListItemEndPlayed
	// void OnListItemEndPlayed(class AActor* Item, TEnumAsByte<EEndPlayReason> EndPlayReason);                              // [0x5fc4264] Final|RequiredAPI|Native|Protected 
	// Function /Script/UMG.ListView.NavigateToIndex
	// void NavigateToIndex(int32_t Index);                                                                                  // [0x5fc41a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.IsRefreshPending
	// bool IsRefreshPending();                                                                                              // [0x5fc3d54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetVerticalEntrySpacing
	// float GetVerticalEntrySpacing();                                                                                      // [0x5fc36f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetNumItems
	// int32_t GetNumItems();                                                                                                // [0x3465e18] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetListItems
	// TArray<UObject*> GetListItems();                                                                                      // [0x5fc328c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetItemAt
	// class UObject* GetItemAt(int32_t Index);                                                                              // [0x5fc31a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetIndexForItem
	// int32_t GetIndexForItem(class UObject* Item);                                                                         // [0x5fc3094] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetHorizontalEntrySpacing
	// float GetHorizontalEntrySpacing();                                                                                    // [0x5fc307c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.ClearListItems
	// void ClearListItems();                                                                                                // [0x5fc271c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetSelectedItem
	// void BP_SetSelectedItem(class UObject* Item);                                                                         // [0x5fc25e8] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetListItems
	// void BP_SetListItems(TArray<UObject*>& InListItems);                                                                  // [0x5fc254c] Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetItemSelection
	// void BP_SetItemSelection(class UObject* Item, bool bSelected);                                                        // [0x5fc23fc] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_ScrollItemIntoView
	// void BP_ScrollItemIntoView(class UObject* Item);                                                                      // [0x5fc2330] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_NavigateToItem
	// void BP_NavigateToItem(class UObject* Item);                                                                          // [0x5fc2264] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_IsItemVisible
	// bool BP_IsItemVisible(class UObject* Item);                                                                           // [0x5fc2194] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItems
	// bool BP_GetSelectedItems(TArray<UObject*>& Items);                                                                    // [0x5fc20e0] Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItem
	// class UObject* BP_GetSelectedItem();                                                                                  // [0x5fc20b4] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetNumItemsSelected
	// int32_t BP_GetNumItemsSelected();                                                                                     // [0x5fc2088] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_ClearSelection
	// void BP_ClearSelection();                                                                                             // [0x5fc1f3c] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_CancelScrollIntoView
	// void BP_CancelScrollIntoView();                                                                                       // [0x5fc1f08] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.AddItem
	// void AddItem(class UObject* Item);                                                                                    // [0x5fc1e48] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bCanChildrenBeAccessible;                                   // 0x0028   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleBehavior;                                         // 0x0029   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                  // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	SDK_UNDEFINED(24,1408) /* FText */                 __um(AccessibleText);                                       // 0x0030   (0x0018)  
	SDK_UNDEFINED(12,1409) /* FDelegateProperty */     __um(AccessibleTextDelegate);                               // 0x0048   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(24,1410) /* FText */                 __um(AccessibleSummaryText);                                // 0x0058   (0x0018)  
	SDK_UNDEFINED(12,1411) /* FDelegateProperty */     __um(AccessibleSummaryTextDelegate);                        // 0x0070   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x007C   (0x0004)  MISSED


	/// Functions
	// Function /Script/UMG.SlateAccessibleWidgetData.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                   // [0x2047e54] Public|Delegate      
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
	SDK_UNDEFINED(8,1412) /* TWeakObjectPtr<UWidget*> */ __um(WidgetPtr);                                          // 0x0004   (0x0008)  
};

/// Struct /Script/UMG.AnimationEventBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAnimationEventBinding
{ 
	class UWidgetAnimation*                            Animation;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(12,1413) /* FDelegateProperty */     __um(Delegate);                                             // 0x0008   (0x000C)  
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
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FLinearColor                                       ColorAndOpacity;                                            // 0x0180   (0x0010)  
	SDK_UNDEFINED(12,1414) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x0190   (0x000C)  
	FSlateColor                                        ForegroundColor;                                            // 0x019C   (0x0014)  
	SDK_UNDEFINED(12,1415) /* FDelegateProperty */     __um(ForegroundColorDelegate);                              // 0x01B0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,1416) /* FMulticastInlineDelegate */ __um(OnVisibilityChanged);                               // 0x01C0   (0x0010)  
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
	// void UnregisterInputComponent();                                                                                      // [0x5feb458] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                       // [0x5feb1a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                      // [0x2d1c398] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);                                                // [0x5feb0e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);                                               // [0x5feb024] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                   // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.StopListeningForInputAction
	// void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);                               // [0x5fea754] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions
	// void StopListeningForAllInputActions();                                                                               // [0x5fea740] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions
	// void StopAnimationsAndLatentActions();                                                                                // [0x2225cc4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimation
	// void StopAnimation(class UWidgetAnimation* InAnimation);                                                              // [0x25b3588] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAllAnimations
	// void StopAllAnimations();                                                                                             // [0x1d975c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPositionInViewport
	// void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);                                                 // [0x5fe9810] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPlaybackSpeed
	// void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);                                      // [0x5fe96b0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x28e37f0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningPlayer
	// void SetOwningPlayer(class APlayerController* LocalPlayerController);                                                 // [0x5fe9354] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay
	// void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);                                  // [0x5fe91ec] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionPriority
	// void SetInputActionPriority(int32_t NewPriority);                                                                     // [0x33ae11c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionBlocking
	// void SetInputActionBlocking(bool bShouldBlock);                                                                       // [0x5fe8708] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                               // [0x5fe7f20] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport
	// void SetDesiredSizeInViewport(FVector2D Size);                                                                        // [0x5fe7bc4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x2d465d0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnimationCurrentTime
	// void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);                                      // [0x5fe7590] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnchorsInViewport
	// void SetAnchorsInViewport(FAnchors Anchors);                                                                          // [0x5fe74b0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAlignmentInViewport
	// void SetAlignmentInViewport(FVector2D Alignment);                                                                     // [0x5fe73e8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.ReverseAnimation
	// void ReverseAnimation(class UWidgetAnimation* InAnimation);                                                           // [0x5fe63c8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveFromViewport
	// void RemoveFromViewport();                                                                                            // [0x20a0030] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveExtensions
	// void RemoveExtensions(class UClass* InExtensionType);                                                                 // [0x5fe6280] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveExtension
	// void RemoveExtension(class UUserWidgetExtension* InExtension);                                                        // [0x5fe6124] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RegisterInputComponent
	// void RegisterInputComponent();                                                                                        // [0x5fe5a30] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.PlaySound
	// void PlaySound(class USoundBase* SoundToPlay);                                                                        // [0x5fe5198] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationTimeRange
	// class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x5fe4de4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationReverse
	// class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x25b3d20] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationForward
	// class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x25b3678] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimation
	// class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x1d97918] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PauseAnimation
	// float PauseAnimation(class UWidgetAnimation* InAnimation);                                                            // [0x5fe4ca8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.OnTouchStarted
	// FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                        // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchMoved
	// FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                          // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchGesture
	// FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);                                        // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchForceChanged
	// FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                   // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchEnded
	// FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                          // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewKeyDown
	// FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                             // [0x2047e54] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                 // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.OnMouseWheel
	// FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseMove
	// FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                             // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                         // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                   // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseCaptureLost
	// void OnMouseCaptureLost();                                                                                            // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                         // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                       // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick
	// FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                            // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMotionDetected
	// FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);                                       // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                      // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                    // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyChar
	// FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);                                        // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnInitialized
	// void OnInitialized();                                                                                                 // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusReceived
	// FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                          // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                           // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDrop
	// bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                   // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragOver
	// bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);               // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragLeave
	// void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);                                    // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragEnter
	// void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);              // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragDetected
	// void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);         // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragCancelled
	// void OnDragCancelled(FPointerEvent& PointerEvent, class UDragDropOperation* Operation);                               // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationStarted
	// void OnAnimationStarted(class UWidgetAnimation* Animation);                                                           // [0x2a25cf4] RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationFinished
	// void OnAnimationFinished(class UWidgetAnimation* Animation);                                                          // [0x2aad840] RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnalogValueChanged
	// FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                         // [0x2047e54] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                    // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.ListenForInputAction
	// void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FDelegateProperty Callback); // [0x5fe3db4] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsPlayingAnimation
	// bool IsPlayingAnimation();                                                                                            // [0x2a73a98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsListeningForInputAction
	// bool IsListeningForInputAction(FName ActionName);                                                                     // [0x5fe3b40] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInteractable
	// bool IsInteractable();                                                                                                // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying
	// bool IsAnyAnimationPlaying();                                                                                         // [0x2a73a98] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward
	// bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);                                                  // [0x5fe39cc] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsAnimationPlaying
	// bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);                                                         // [0x25b3bd4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn
	// class APawn* GetOwningPlayerPawn();                                                                                   // [0x3ca2f18] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerCameraManager
	// class APlayerCameraManager* GetOwningPlayerCameraManager();                                                           // [0x5fe350c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetIsVisible
	// bool GetIsVisible();                                                                                                  // [0x5fc3d10] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetExtensions
	// TArray<UUserWidgetExtension*> GetExtensions(class UClass* ExtensionType);                                             // [0x5fe2a2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetExtension
	// class UUserWidgetExtension* GetExtension(class UClass* ExtensionType);                                                // [0x320c2e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime
	// float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);                                                   // [0x25b3ec4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnchorsInViewport
	// FAnchors GetAnchorsInViewport();                                                                                      // [0x5fe28dc] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAlignmentInViewport
	// FVector2D GetAlignmentInViewport();                                                                                   // [0x5fe1fb4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.FlushAnimations
	// void FlushAnimations();                                                                                               // [0x5fe1e6c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Destruct
	// void Destruct();                                                                                                      // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.Construct
	// void Construct();                                                                                                     // [0x2047e54] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.CancelLatentActions
	// void CancelLatentActions();                                                                                           // [0x5fde514] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationStarted
	// void BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                           // [0x3172da8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationFinished
	// void BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                          // [0x3009278] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationEvent
	// void BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // [0x5fde2b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToViewport
	// void AddToViewport(int32_t ZOrder);                                                                                   // [0x5fde1f0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToPlayerScreen
	// bool AddToPlayerScreen(int32_t ZOrder);                                                                               // [0x5fde124] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddExtension
	// class UUserWidgetExtension* AddExtension(class UClass* InExtensionType);                                              // [0x5fde03c] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	SDK_UNDEFINED(8,1417) /* TWeakObjectPtr<UWidget*> */ __um(Widget);                                             // 0x0008   (0x0008)  
	SDK_UNDEFINED(12,1418) /* FDelegateProperty */     __um(CustomDelegate);                                       // 0x0010   (0x000C)  
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UWidgetNavigation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
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
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F0   (0x0008)  MISSED
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
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F0   (0x0008)  MISSED
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
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00B0   (0x0010)  MISSED
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x00C0   (0x0010)  
	FName                                              TrackName;                                                  // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x0310 (0x000028 - 0x000338)
class UUMGSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x238];                                     // 0x0000   (0x0238)  MISSED
	class UWidgetAnimation*                            Animation;                                                  // 0x0238   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0240   (0x0008)  MISSED
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0248   (0x0070)  
	unsigned char                                      UnknownData02_6[0x80];                                      // 0x02B8   (0x0080)  MISSED


	/// Functions
	// Function /Script/UMG.UMGSequencePlayer.SetUserTag
	// void SetUserTag(FName InUserTag);                                                                                     // [0x5f9e1e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UMGSequencePlayer.GetUserTag
	// FName GetUserTag();                                                                                                   // [0x5f9abec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UMGSequenceTickManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UUMGSequenceTickManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,1419) /* TMap<TWeakObjectPtr<UUserWidget*>, FSequenceTickManagerWidgetData> */ __um(WeakUserWidgetData); // 0x0028   (0x0050)  
	class UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0080   (0x0040)  MISSED
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
	SDK_UNDEFINED(16,1420) /* FString */               __um(DisplayLabel);                                         // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                               // [0x5f9f240] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                              // [0x2d1c500] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UUserWidget* Widget);                                                        // [0x5f9f180] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UUserWidget* Widget);                                                       // [0x5f9f0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.GetStartTime
	// float GetStartTime();                                                                                                 // [0x5f9ab48] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.GetEndTime
	// float GetEndTime();                                                                                                   // [0x25b2fa4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationStarted
	// void BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                                   // [0x5f97c2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationFinished
	// void BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                                  // [0x1d999a0] Final|Native|Public|BlueprintCallable 
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
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,1421) /* FMulticastInlineDelegate */ __um(Finished);                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x5f9848c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x5f97e2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
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
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(8,1422) /* TWeakObjectPtr<UObject*> */ __um(SourceObject);                                       // 0x0028   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0030   (0x0038)  
	FName                                              DestinationProperty;                                        // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UBoolBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.BoolBinding.GetValue
	// bool GetValue();                                                                                                      // [0x5f9ac04] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UBrushBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.BrushBinding.GetValue
	// FSlateBrush GetValue();                                                                                               // [0x5f9ac60] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UCheckedStateBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CheckedStateBinding.GetValue
	// ECheckBoxState GetValue();                                                                                            // [0x5f9aca4] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UColorBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.ColorBinding.GetSlateValue
	// FSlateColor GetSlateValue();                                                                                          // [0x5f9ab14] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/UMG.ColorBinding.GetLinearValue
	// FLinearColor GetLinearValue();                                                                                        // [0x5f99ac8] Final|RequiredAPI|Native|Public|HasDefaults|Const 
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.FloatBinding.GetValue
	// float GetValue();                                                                                                     // [0x5f9acc8] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt32Binding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.Int32Binding.GetValue
	// int32_t GetValue();                                                                                                   // [0x5f9acf0] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UMouseCursorBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.MouseCursorBinding.GetValue
	// TEnumAsByte<EMouseCursor> GetValue();                                                                                 // [0x5f9ad4c] Final|RequiredAPI|Native|Public|Const 
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
	// FText GetTextValue();                                                                                                 // [0x5f9aba8] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/UMG.TextBinding.GetStringValue
	// FString GetStringValue();                                                                                             // [0x5f9ab68] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UVisibilityBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.VisibilityBinding.GetValue
	// ESlateVisibility GetValue();                                                                                          // [0x5f9ada4] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UWidgetBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetBinding.GetValue
	// class UWidget* GetValue();                                                                                            // [0x5f9ae00] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000030 - 0x000050)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1423) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1424) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage
	// class UAsyncTaskDownloadImage* DownloadImage(FString URL);                                                            // [0x5f98be8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.GameViewportSubsystem
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UGameViewportSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0030   (0x0080)  MISSED


	/// Functions
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlotPosition
	// FGameViewportWidgetSlot SetWidgetSlotPosition(FGameViewportWidgetSlot Slot, class UWidget* Widget, FVector2D Position, bool bRemoveDPIScale); // [0x5f9ed44] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
	// FGameViewportWidgetSlot SetWidgetSlotDesiredSize(FGameViewportWidgetSlot Slot, FVector2D Size);                       // [0x5f9eb7c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlot
	// void SetWidgetSlot(class UWidget* Widget, FGameViewportWidgetSlot Slot);                                              // [0x5f9e668] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.RemoveWidget
	// void RemoveWidget(class UWidget* Widget);                                                                             // [0x5f9bb10] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.IsWidgetAdded
	// bool IsWidgetAdded(class UWidget* Widget);                                                                            // [0x5f9b26c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.GameViewportSubsystem.GetWidgetSlot
	// FGameViewportWidgetSlot GetWidgetSlot(class UWidget* Widget);                                                         // [0x5f9ae74] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.GameViewportSubsystem.AddWidgetForPlayer
	// bool AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, FGameViewportWidgetSlot Slot);             // [0x5f97a0c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.AddWidget
	// bool AddWidget(class UWidget* Widget, FGameViewportWidgetSlot Slot);                                                  // [0x5f9787c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UserListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/UMG.UserListEntry.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                     // [0x2047e54] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                     // [0x2047e54] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                            // [0x2047e54] RequiredAPI|Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.UserListEntryLibrary.IsListItemSelected
	// bool IsListItemSelected(TScriptInterface<Class> UserListEntry);                                                       // [0x5f9b0cc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.IsListItemExpanded
	// bool IsListItemExpanded(TScriptInterface<Class> UserListEntry);                                                       // [0x5f9afbc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.GetOwningListView
	// class UListViewBase* GetOwningListView(TScriptInterface<Class> UserListEntry);                                        // [0x5f9a318] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.UserObjectListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntry : public UUserListEntry
{ 
public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntry.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                              // [0x2047e54] RequiredAPI|Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserObjectListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntryLibrary.GetListItemObject
	// class UObject* GetListItemObject(TScriptInterface<Class> UserObjectListEntry);                                        // [0x5f99af8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
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
	// bool RemoveChildAt(int32_t Index);                                                                                    // [0x5fc45c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChild
	// bool RemoveChild(class UWidget* Content);                                                                             // [0x3275920] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.HasChild
	// bool HasChild(class UWidget* Content);                                                                                // [0x5fc3858] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.HasAnyChildren
	// bool HasAnyChildren();                                                                                                // [0x32e6f40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildrenCount
	// int32_t GetChildrenCount();                                                                                           // [0x2b1eda0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildIndex
	// int32_t GetChildIndex(class UWidget* Content);                                                                        // [0x5fc2bf8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildAt
	// class UWidget* GetChildAt(int32_t Index);                                                                             // [0x32423fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetAllChildren
	// TArray<UWidget*> GetAllChildren();                                                                                    // [0x225ee18] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.ClearChildren
	// void ClearChildren();                                                                                                 // [0x1a4af80] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.AddChild
	// class UPanelSlot* AddChild(class UWidget* Content);                                                                   // [0x301f18c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000190 - 0x000190)
class UContentWidget : public UPanelWidget
{ 
public:


	/// Functions
	// Function /Script/UMG.ContentWidget.SetContent
	// class UPanelSlot* SetContent(class UWidget* Content);                                                                 // [0x5fc602c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ContentWidget.GetContentSlot
	// class UPanelSlot* GetContentSlot();                                                                                   // [0x2e2a938] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ContentWidget.GetContent
	// class UWidget* GetContent();                                                                                          // [0x5fc2d10] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x0110 (0x000190 - 0x0002A0)
class UBackgroundBlur : public UContentWidget
{ 
public:
	FMargin                                            Padding;                                                    // 0x0190   (0x0010)  
	SDK_UNDEFINED(1,1425) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x01A0   (0x0001)  
	SDK_UNDEFINED(1,1426) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x01A1   (0x0001)  
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
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5f9e2a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x5f9cf2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// void SetLowQualityFallbackBrush(FSlateBrush& InBrush);                                                                // [0x23fbdec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5f9c7b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetCornerRadius
	// void SetCornerRadius(FVector4 InCornerRadius);                                                                        // [0x23fb46c] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurStrength
	// void SetBlurStrength(float InStrength);                                                                               // [0x23fb70c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurRadius
	// void SetBlurRadius(int32_t InBlurRadius);                                                                             // [0x5f9c170] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur
	// void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);                                                                   // [0x5f9bf20] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	SDK_UNDEFINED(1,1427) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1428) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlurSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5f9e360] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x5f9cffc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5f9c874] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Border
/// Size: 0x0170 (0x000190 - 0x000300)
class UBorder : public UContentWidget
{ 
public:
	SDK_UNDEFINED(1,1429) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0190   (0x0001)  
	SDK_UNDEFINED(1,1430) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0191   (0x0001)  
	bool                                               bShowEffectWhenDisabled : 1;                                // 0x0192:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x0193   (0x0001)  MISSED
	FLinearColor                                       ContentColorAndOpacity;                                     // 0x0194   (0x0010)  
	SDK_UNDEFINED(12,1431) /* FDelegateProperty */     __um(ContentColorAndOpacityDelegate);                       // 0x01A4   (0x000C)  
	FMargin                                            Padding;                                                    // 0x01B0   (0x0010)  
	FSlateBrush                                        Background;                                                 // 0x01C0   (0x00C0)  
	SDK_UNDEFINED(12,1432) /* FDelegateProperty */     __um(BackgroundDelegate);                                   // 0x0280   (0x000C)  
	FLinearColor                                       BrushColor;                                                 // 0x028C   (0x0010)  
	SDK_UNDEFINED(12,1433) /* FDelegateProperty */     __um(BrushColorDelegate);                                   // 0x029C   (0x000C)  
	FVector2D                                          DesiredSizeScale;                                           // 0x02A8   (0x0010)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	SDK_UNDEFINED(12,1434) /* FDelegateProperty */     __um(OnMouseButtonDownEvent);                               // 0x02BC   (0x000C)  
	SDK_UNDEFINED(12,1435) /* FDelegateProperty */     __um(OnMouseButtonUpEvent);                                 // 0x02C8   (0x000C)  
	SDK_UNDEFINED(12,1436) /* FDelegateProperty */     __um(OnMouseMoveEvent);                                     // 0x02D4   (0x000C)  
	SDK_UNDEFINED(12,1437) /* FDelegateProperty */     __um(OnMouseDoubleClickEvent);                              // 0x02E0   (0x000C)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x02EC   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.Border.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5f9e424] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetShowEffectWhenDisabled
	// void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled);                                                       // [0x5f9de34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x23fcaa8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5f9c938] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetDesiredSizeScale
	// void SetDesiredSizeScale(FVector2D InScale);                                                                          // [0x5f9c6ec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetContentColorAndOpacity
	// void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);                                                // [0x3419158] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture);                                                                  // [0x5f9c2f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                        // [0x23fc65c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                // [0x5f9c230] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushColor
	// void SetBrushColor(FLinearColor InBrushColor);                                                                        // [0x23fd05c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                  // [0x23fcf68] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Border.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                 // [0x23fc1d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBorderSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1438) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1439) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BorderSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5f9e4e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x3382b7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x23fc924] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Button
/// Size: 0x0440 (0x000190 - 0x0005D0)
#pragma pack(push, 0x1)
class alignas(0x10) 
UButton : public UContentWidget
{ 
public:
	FButtonStyle                                       WidgetStyle;                                                // 0x0190   (0x03B0)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x0540   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x0550   (0x0010)  
	SDK_UNDEFINED(1,1440) /* TEnumAsByte<EButtonClickMethod> */ __um(ClickMethod);                                 // 0x0560   (0x0001)  
	SDK_UNDEFINED(1,1441) /* TEnumAsByte<EButtonTouchMethod> */ __um(TouchMethod);                                 // 0x0561   (0x0001)  
	SDK_UNDEFINED(1,1442) /* TEnumAsByte<EButtonPressMethod> */ __um(PressMethod);                                 // 0x0562   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0563   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0564   (0x0004)  MISSED
	SDK_UNDEFINED(16,1443) /* FMulticastInlineDelegate */ __um(OnClicked);                                         // 0x0568   (0x0010)  
	SDK_UNDEFINED(16,1444) /* FMulticastInlineDelegate */ __um(OnPressed);                                         // 0x0578   (0x0010)  
	SDK_UNDEFINED(16,1445) /* FMulticastInlineDelegate */ __um(OnReleased);                                        // 0x0588   (0x0010)  
	SDK_UNDEFINED(16,1446) /* FMulticastInlineDelegate */ __um(OnHovered);                                         // 0x0598   (0x0010)  
	SDK_UNDEFINED(16,1447) /* FMulticastInlineDelegate */ __um(OnUnhovered);                                       // 0x05A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x05B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Button.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                   // [0x5f9e064] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetStyle
	// void SetStyle(FButtonStyle& InStyle);                                                                                 // [0x5f9dfc0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Button.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                   // [0x5f9d328] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x5f9c624] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                   // [0x5f9c4a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InBackgroundColor);                                                              // [0x5f9c0a8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.IsPressed
	// bool IsPressed();                                                                                                     // [0x5f9b210] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UButtonSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1448) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1449) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ButtonSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5f9e5a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x5f9d0cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5f9c9f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UCanvasPanel : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanel.AddChildToCanvas
	// class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);                                                     // [0x5f96ff4] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	// void SetZOrder(int32_t InZOrder);                                                                                     // [0x5f9f000] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetSize
	// void SetSize(FVector2D InSize);                                                                                       // [0x5f9def8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetPosition
	// void SetPosition(FVector2D InPosition);                                                                               // [0x5f9d260] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetOffsets
	// void SetOffsets(FMargin InOffset);                                                                                    // [0x5f9ce5c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetMinimum
	// void SetMinimum(FVector2D InMinimumAnchors);                                                                          // [0x5f9ccd4] Final|RequiredAPI|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetMaximum
	// void SetMaximum(FVector2D InMaximumAnchors);                                                                          // [0x5f9cc0c] Final|RequiredAPI|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetLayout
	// void SetLayout(FAnchorData& InLayoutData);                                                                            // [0x5f9cb7c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize
	// void SetAutoSize(bool InbAutoSize);                                                                                   // [0x5f9bfe4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAnchors
	// void SetAnchors(FAnchors InAnchors);                                                                                  // [0x5f9be40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAlignment
	// void SetAlignment(FVector2D InAlignment);                                                                             // [0x5f9bd78] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.GetZOrder
	// int32_t GetZOrder();                                                                                                  // [0x5f9af78] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetSize
	// FVector2D GetSize();                                                                                                  // [0x5f9aae4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetPosition
	// FVector2D GetPosition();                                                                                              // [0x5f9a3ec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetOffsets
	// FMargin GetOffsets();                                                                                                 // [0x5f99bcc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetLayout
	// FAnchorData GetLayout();                                                                                              // [0x5f99a94] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize
	// bool GetAutoSize();                                                                                                   // [0x5f99a4c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAnchors
	// FAnchors GetAnchors();                                                                                                // [0x5f99a18] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAlignment
	// FVector2D GetAlignment();                                                                                             // [0x5f999e8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckBox
/// Size: 0x0A50 (0x000190 - 0x000BE0)
class UCheckBox : public UContentWidget
{ 
public:
	ECheckBoxState                                     CheckedState;                                               // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0191   (0x0003)  MISSED
	SDK_UNDEFINED(12,1450) /* FDelegateProperty */     __um(CheckedStateDelegate);                                 // 0x0194   (0x000C)  
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x01A0   (0x0A10)  
	SDK_UNDEFINED(1,1451) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0BB0   (0x0001)  
	SDK_UNDEFINED(1,1452) /* TEnumAsByte<EButtonClickMethod> */ __um(ClickMethod);                                 // 0x0BB1   (0x0001)  
	SDK_UNDEFINED(1,1453) /* TEnumAsByte<EButtonTouchMethod> */ __um(TouchMethod);                                 // 0x0BB2   (0x0001)  
	SDK_UNDEFINED(1,1454) /* TEnumAsByte<EButtonPressMethod> */ __um(PressMethod);                                 // 0x0BB3   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0BB4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0BB5   (0x0003)  MISSED
	SDK_UNDEFINED(16,1455) /* FMulticastInlineDelegate */ __um(OnCheckStateChanged);                               // 0x0BB8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0BC8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.CheckBox.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                   // [0x5f9e124] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                   // [0x5f9d3e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                  // [0x5f9cab8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                   // [0x5f9c564] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                  // [0x5f9c3e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.IsPressed
	// bool IsPressed();                                                                                                     // [0x5f9b244] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.IsChecked
	// bool IsChecked();                                                                                                     // [0x5f9af98] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                     // [0x5f99a70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetRadius(float InRadius);                                                                                       // [0x5f9d4a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetPeriod
	// void SetPeriod(float InPeriod);                                                                                       // [0x5f9d19c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                     // [0x5f9cd9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ComboBox
/// Size: 0x0718 (0x000178 - 0x000890)
class UComboBox : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0180   (0x06E0)  
	TArray<class UObject*>                             Items;                                                      // 0x0860   (0x0010)  
	SDK_UNDEFINED(12,1456) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x0870   (0x000C)  
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
	SDK_UNDEFINED(12,1457) /* FDelegateProperty */     __um(OnGenerateContentWidget);                              // 0x1AEC   (0x000C)  
	SDK_UNDEFINED(12,1458) /* FDelegateProperty */     __um(OnGenerateItemWidget);                                 // 0x1AF8   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x1B04   (0x0004)  MISSED
	SDK_UNDEFINED(16,1459) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x1B08   (0x0010)  
	SDK_UNDEFINED(16,1460) /* FMulticastInlineDelegate */ __um(OnOpening);                                         // 0x1B18   (0x0010)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x1B28   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxKey.SetSelectedOption
	// void SetSelectedOption(FName Option);                                                                                 // [0x5f9d62c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.RemoveOption
	// bool RemoveOption(FName Option);                                                                                      // [0x5f9b350] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FName SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);          // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                             // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxKey.IsOpen
	// bool IsOpen();                                                                                                        // [0x5f9b1a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxKey.GetSelectedOption
	// FName GetSelectedOption();                                                                                            // [0x5f9a440] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
	// class UWidget* GenerateWidgetEvent__DelegateSignature(FName Item);                                                    // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.ComboBoxKey.ClearSelection
	// void ClearSelection();                                                                                                // [0x5f97e04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.ClearOptions
	// void ClearOptions();                                                                                                  // [0x5f97d94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.AddOption
	// void AddOption(FName Option);                                                                                         // [0x5f970c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x1A68 (0x000178 - 0x001BE0)
class UComboBoxString : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1461) /* TArray<FString> */       __um(DefaultOptions);                                       // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,1462) /* FString */               __um(SelectedOption);                                       // 0x0188   (0x0010)  
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
	SDK_UNDEFINED(12,1463) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x1B58   (0x000C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x1B64   (0x0004)  MISSED
	SDK_UNDEFINED(16,1464) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x1B68   (0x0010)  
	SDK_UNDEFINED(16,1465) /* FMulticastInlineDelegate */ __um(OnOpening);                                         // 0x1B78   (0x0010)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x1B88   (0x0058)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxString.SetSelectedOption
	// void SetSelectedOption(FString Option);                                                                               // [0x5f9d728] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                 // [0x5f9d56c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RemoveOption
	// bool RemoveOption(FString Option);                                                                                    // [0x5f9b41c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RefreshOptions
	// void RefreshOptions();                                                                                                // [0x5f9b33c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);        // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                             // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.IsOpen
	// bool IsOpen();                                                                                                        // [0x5f9b1d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedOption
	// FString GetSelectedOption();                                                                                          // [0x5f9a458] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                           // [0x5f9a41c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionCount
	// int32_t GetOptionCount();                                                                                             // [0x5f9a300] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex
	// FString GetOptionAtIndex(int32_t Index);                                                                              // [0x5f99bfc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.FindOptionIndex
	// int32_t FindOptionIndex(FString Option);                                                                              // [0x5f992f4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.ClearSelection
	// void ClearSelection();                                                                                                // [0x5f97e18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.ClearOptions
	// void ClearOptions();                                                                                                  // [0x5f97df0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.AddOption
	// void AddOption(FString Option);                                                                                       // [0x5f97184] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateChildSize
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1466) /* TEnumAsByte<ESlateSizeRule> */ __um(SizeRule);                                        // 0x0004   (0x0001)  
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
	SDK_UNDEFINED(1,1467) /* TEnumAsByte<EHorizontalAlignment> */ __um(EntryHorizontalAlignment);                  // 0x01A4   (0x0001)  
	SDK_UNDEFINED(1,1468) /* TEnumAsByte<EVerticalAlignment> */ __um(EntryVerticalAlignment);                      // 0x01A5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01A6   (0x0002)  MISSED
	int32_t                                            MaxElementSize;                                             // 0x01A8   (0x0004)  
	FRadialBoxSettings                                 RadialBoxSettings;                                          // 0x01AC   (0x0010)  
	unsigned char                                      UnknownData02_5[0x14];                                      // 0x01BC   (0x0014)  MISSED
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x01D0   (0x0088)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBoxBase.SetRadialSettings
	// void SetRadialSettings(FRadialBoxSettings& InSettings);                                                               // [0x5fcabe0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing
	// void SetEntrySpacing(FVector2D& InEntrySpacing);                                                                      // [0x2489744] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries
	// int32_t GetNumEntries();                                                                                              // [0x3053910] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries
	// TArray<UUserWidget*> GetAllEntries();                                                                                 // [0x2747944] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.DynamicEntryBox
/// Size: 0x0008 (0x000258 - 0x000260)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{ 
public:
	class UClass*                                      EntryWidgetClass;                                           // 0x0258   (0x0008)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBox.Reset
	// void Reset(bool bDeleteWidgets);                                                                                      // [0x23fe0b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.RemoveEntry
	// void RemoveEntry(class UUserWidget* EntryWidget);                                                                     // [0x5fc4694] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass
	// class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);                                                   // [0x5fc1f58] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry
	// class UUserWidget* BP_CreateEntry();                                                                                  // [0x2e0bf2c] Final|RequiredAPI|Native|Private|BlueprintCallable 
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
#pragma pack(push, 0x1)
class alignas(0x10) 
UEditableText : public UWidget
{ 
public:
	SDK_UNDEFINED(24,1469) /* FText */                 __um(Text);                                                 // 0x0178   (0x0018)  
	SDK_UNDEFINED(12,1470) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0190   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1471) /* FText */                 __um(HintText);                                             // 0x01A0   (0x0018)  
	SDK_UNDEFINED(12,1472) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x01B8   (0x000C)  
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
	SDK_UNDEFINED(1,1473) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x049E   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x049F   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x04A0   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x04A1   (0x0001)  
	SDK_UNDEFINED(1,1474) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x04A2   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x04A3   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x04A4   (0x0003)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x04A7   (0x0001)  MISSED
	SDK_UNDEFINED(16,1475) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x04A8   (0x0010)  
	SDK_UNDEFINED(16,1476) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x04C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableText.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                     // [0x5fcc65c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetText
	// void SetText(FText InText);                                                                                           // [0x3221810] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetMinimumDesiredWidth
	// void SetMinimumDesiredWidth(float InMinDesiredWidth);                                                                 // [0x5fc9d88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x2af3430] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsReadOnly
	// void SetIsReadOnly(bool InbIsReadyOnly);                                                                              // [0x5fc8a90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsPassword
	// void SetIsPassword(bool InbIsPassword);                                                                               // [0x5fc8908] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x3245ee4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                    // [0x5fc7adc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                           // [0x5fc790c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                              // [0x217f3f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);             // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// void OnEditableTextChangedEvent__DelegateSignature(FText& Text);                                                      // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.GetText
	// FText GetText();                                                                                                      // [0x5fc353c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetJustification
	// TEnumAsByte<ETextJustify> GetJustification();                                                                         // [0x5fc3274] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetHintText
	// FText GetHintText();                                                                                                  // [0x5fc2fb0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetFont
	// FSlateFontInfo GetFont();                                                                                             // [0x3404878] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/UMG.EditableTextBox
/// Size: 0x0E18 (0x000178 - 0x000F90)
class UEditableTextBox : public UWidget
{ 
public:
	SDK_UNDEFINED(24,1477) /* FText */                 __um(Text);                                                 // 0x0178   (0x0018)  
	SDK_UNDEFINED(12,1478) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0190   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x01A0   (0x0D80)  
	SDK_UNDEFINED(24,1479) /* FText */                 __um(HintText);                                             // 0x0F20   (0x0018)  
	SDK_UNDEFINED(12,1480) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0F38   (0x000C)  
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
	SDK_UNDEFINED(1,1481) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x0F52   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0F53   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x0F54   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0F55   (0x0001)  
	SDK_UNDEFINED(1,1482) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x0F56   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x0F57   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0F58   (0x0003)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x0F5B   (0x0005)  MISSED
	SDK_UNDEFINED(16,1483) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0F60   (0x0010)  
	SDK_UNDEFINED(16,1484) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0F70   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0F80   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableTextBox.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                     // [0x5fcc71c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetText
	// void SetText(FText InText);                                                                                           // [0x5fcc2cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x5fc8ee0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x5fc8b54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsPassword
	// void SetIsPassword(bool bIsPassword);                                                                                 // [0x5fc89cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetHintText
	// void SetHintText(FText InText);                                                                                       // [0x5fc802c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetForegroundColor
	// void SetForegroundColor(FLinearColor Color);                                                                          // [0x5fc7cac] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetError
	// void SetError(FText InError);                                                                                         // [0x5fc73e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);          // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                                   // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.HasError
	// bool HasError();                                                                                                      // [0x5fc3934] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.GetText
	// FText GetText();                                                                                                      // [0x5fc3580] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.ClearError
	// void ClearError();                                                                                                    // [0x5fc26e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x02D8 (0x000178 - 0x000450)
class UExpandableArea : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FExpandableAreaStyle                               style;                                                      // 0x0180   (0x01A0)  
	FSlateBrush                                        BorderBrush;                                                // 0x0320   (0x00C0)  
	FSlateColor                                        BorderColor;                                                // 0x03E0   (0x0014)  
	bool                                               bIsExpanded;                                                // 0x03F4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03F5   (0x0003)  MISSED
	float                                              MaxHeight;                                                  // 0x03F8   (0x0004)  
	FMargin                                            HeaderPadding;                                              // 0x03FC   (0x0010)  
	FMargin                                            AreaPadding;                                                // 0x040C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x041C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1485) /* FMulticastInlineDelegate */ __um(OnExpansionChanged);                                // 0x0420   (0x0010)  
	class UWidget*                                     HeaderContent;                                              // 0x0430   (0x0008)  
	class UWidget*                                     BodyContent;                                                // 0x0438   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0440   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated
	// void SetIsExpanded_Animated(bool IsExpanded);                                                                         // [0x5fc874c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.SetIsExpanded
	// void SetIsExpanded(bool IsExpanded);                                                                                  // [0x5fc8688] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.GetIsExpanded
	// bool GetIsExpanded();                                                                                                 // [0x5fc3164] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetRowFill(int32_t RowIndex, float Coefficient);                                                                 // [0x313f40c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.SetColumnFill
	// void SetColumnFill(int32_t ColumnIndex, float Coefficient);                                                           // [0x313f5ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.AddChildToGrid
	// class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);                             // [0x2948234] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0040 (0x000038 - 0x000078)
class UGridSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1486) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1487) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
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
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2180404] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRowSpan
	// void SetRowSpan(int32_t InRowSpan);                                                                                   // [0x2d63c88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                           // [0x2948170] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x29c73f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetNudge
	// void SetNudge(FVector2D InNudge);                                                                                     // [0x2f4c448] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetLayer
	// void SetLayer(int32_t InLayer);                                                                                       // [0x2948034] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x218031c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumnSpan
	// void SetColumnSpan(int32_t InColumnSpan);                                                                             // [0x2d63dd8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                     // [0x294851c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UHorizontalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBox.AddChildToHorizontalBox
	// class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);                                            // [0x31979b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UHorizontalBoxSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSlateChildSize                                    Size;                                                       // 0x0040   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(1,1488) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1489) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x1454bb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                 // [0x5fcba5c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x23fc064] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x1454c90] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Image
/// Size: 0x0138 (0x000178 - 0x0002B0)
class UImage : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FSlateBrush                                        Brush;                                                      // 0x0180   (0x00C0)  
	SDK_UNDEFINED(12,1490) /* FDelegateProperty */     __um(BrushDelegate);                                        // 0x0240   (0x000C)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x024C   (0x0010)  
	SDK_UNDEFINED(12,1491) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x025C   (0x000C)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x0268   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0269   (0x0003)  MISSED
	SDK_UNDEFINED(12,1492) /* FDelegateProperty */     __um(OnMouseButtonDownEvent);                               // 0x026C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x0278   (0x0038)  MISSED


	/// Functions
	// Function /Script/UMG.Image.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                     // [0x26b160c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetDesiredSizeOverride
	// void SetDesiredSizeOverride(FVector2D DesiredSize);                                                                   // [0x25d1150] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x26b2394] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushTintColor
	// void SetBrushTintColor(FSlateColor TintColor);                                                                        // [0x2d71a08] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushResourceObject
	// void SetBrushResourceObject(class UObject* ResourceObject);                                                           // [0x5fc5de8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTextureDynamic
	// void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);                                   // [0x5fc5ca0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);                                                 // [0x1bf0094] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftTexture
	// void SetBrushFromSoftTexture(TWeakObjectPtr<UTexture2D*> SoftTexture, bool bMatchSize);                               // [0x1bef918] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftMaterial
	// void SetBrushFromSoftMaterial(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                      // [0x1ddbcb4] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                        // [0x1343840] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAtlasInterface
	// void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize);                                // [0x1fdb0e4] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                // [0x5fc5bdc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                  // [0x23fcd8c] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Image.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                 // [0x2a20490] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x0778 (0x000178 - 0x0008F0)
class UInputKeySelector : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FButtonStyle                                       WidgetStyle;                                                // 0x0180   (0x03B0)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0530   (0x0310)  
	FInputChord                                        SelectedKey;                                                // 0x0840   (0x0020)  
	FMargin                                            Margin;                                                     // 0x0860   (0x0010)  
	SDK_UNDEFINED(24,1493) /* FText */                 __um(KeySelectionText);                                     // 0x0870   (0x0018)  
	SDK_UNDEFINED(24,1494) /* FText */                 __um(NoKeySpecifiedText);                                   // 0x0888   (0x0018)  
	bool                                               bAllowModifierKeys;                                         // 0x08A0   (0x0001)  
	bool                                               bAllowGamepadKeys;                                          // 0x08A1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x08A2   (0x0006)  MISSED
	TArray<FKey>                                       EscapeKeys;                                                 // 0x08A8   (0x0010)  
	SDK_UNDEFINED(16,1495) /* FMulticastInlineDelegate */ __um(OnKeySelected);                                     // 0x08B8   (0x0010)  
	SDK_UNDEFINED(16,1496) /* FMulticastInlineDelegate */ __um(OnIsSelectingKeyChanged);                           // 0x08C8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x08D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility
	// void SetTextBlockVisibility(ESlateVisibility InVisibility);                                                           // [0x5fcc560] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetSelectedKey
	// void SetSelectedKey(FInputChord& InSelectedKey);                                                                      // [0x5fcb51c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText
	// void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);                                                               // [0x5fca608] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetKeySelectionText
	// void SetKeySelectionText(FText InKeySelectionText);                                                                   // [0x5fc8fa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetEscapeKeys
	// void SetEscapeKeys(TArray<FKey>& InKeys);                                                                             // [0x5fc75b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys
	// void SetAllowModifierKeys(bool bInAllowModifierKeys);                                                                 // [0x5fc53b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys
	// void SetAllowGamepadKeys(bool bInAllowGamepadKeys);                                                                   // [0x5fc52f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// void OnKeySelected__DelegateSignature(FInputChord SelectedKey);                                                       // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// void OnIsSelectingKeyChanged__DelegateSignature();                                                                    // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey
	// bool GetIsSelectingKey();                                                                                             // [0x5fc317c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetCanCache(bool CanCache);                                                                                      // [0x5fc5ea8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.InvalidateCache
	// void InvalidateCache();                                                                                               // [0x307d48c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.GetCanCache
	// bool GetCanCache();                                                                                                   // [0x5fc2bd8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UMenuAnchor : public UContentWidget
{ 
public:
	class UClass*                                      MenuClass;                                                  // 0x0190   (0x0008)  
	SDK_UNDEFINED(12,1497) /* FDelegateProperty */     __um(OnGetMenuContentEvent);                                // 0x0198   (0x000C)  
	SDK_UNDEFINED(12,1498) /* FDelegateProperty */     __um(OnGetUserMenuContentEvent);                            // 0x01A4   (0x000C)  
	SDK_UNDEFINED(1,1499) /* TEnumAsByte<EMenuPlacement> */ __um(Placement);                                       // 0x01B0   (0x0001)  
	bool                                               bFitInWindow;                                               // 0x01B1   (0x0001)  
	bool                                               ShouldDeferPaintingAfterWindowContent;                      // 0x01B2   (0x0001)  
	bool                                               UseApplicationMenuStack;                                    // 0x01B3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,1500) /* FMulticastInlineDelegate */ __um(OnMenuOpenChanged);                                 // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MenuAnchor.ToggleOpen
	// void ToggleOpen(bool bFocusOnOpen);                                                                                   // [0x5fcdce4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick
	// bool ShouldOpenDueToClick();                                                                                          // [0x5fcdbdc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.SetPlacement
	// void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);                                                           // [0x5fcab20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Open
	// void Open(bool bFocusMenu);                                                                                           // [0x5fc44dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.IsOpen
	// bool IsOpen();                                                                                                        // [0x5fc3d34] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus
	// bool HasOpenSubMenus();                                                                                               // [0x5fc3b18] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.GetUserWidget__DelegateSignature
	// class UUserWidget* GetUserWidget__DelegateSignature();                                                                // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.MenuAnchor.GetMenuPosition
	// FVector2D GetMenuPosition();                                                                                          // [0x5fc3330] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.FitInWindow
	// void FitInWindow(bool bFit);                                                                                          // [0x5fc28fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Close
	// void Close();                                                                                                         // [0x1cffcdc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0020 (0x000178 - 0x000198)
class UTextLayoutWidget : public UWidget
{ 
public:
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0178   (0x0003)  
	SDK_UNDEFINED(1,1501) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x017B   (0x0001)  
	ETextWrappingPolicy                                WrappingPolicy;                                             // 0x017C   (0x0001)  
	bool                                               AutoWrapText : 1;                                           // 0x017D:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x017E   (0x0002)  MISSED
	float                                              WrapTextAt;                                                 // 0x0180   (0x0004)  
	FMargin                                            Margin;                                                     // 0x0184   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x0194   (0x0004)  


	/// Functions
	// Function /Script/UMG.TextLayoutWidget.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x2af3544] Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x0398 (0x000198 - 0x000530)
class UMultiLineEditableText : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1502) /* FText */                 __um(Text);                                                 // 0x0198   (0x0018)  
	SDK_UNDEFINED(24,1503) /* FText */                 __um(HintText);                                             // 0x01B0   (0x0018)  
	SDK_UNDEFINED(12,1504) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x01C8   (0x000C)  
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
	SDK_UNDEFINED(16,1505) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x04F8   (0x0010)  
	SDK_UNDEFINED(16,1506) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0508   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0518   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableText.SetWidgetStyle
	// void SetWidgetStyle(FTextBlockStyle& InWidgetStyle);                                                                  // [0x5fcd998] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetText
	// void SetText(FText InText);                                                                                           // [0x5fcc3a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x5fc8c18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x5fc8108] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                    // [0x5fc7bc4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                           // [0x5fc79f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                              // [0x5fc7804] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);    // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text);                                             // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.GetText
	// FText GetText();                                                                                                      // [0x5fc35c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetHintText
	// FText GetHintText();                                                                                                  // [0x5fc2ff4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetFont
	// FSlateFontInfo GetFont();                                                                                             // [0x5fc2f58] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0E08 (0x000198 - 0x000FA0)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1507) /* FText */                 __um(Text);                                                 // 0x0198   (0x0018)  
	SDK_UNDEFINED(24,1508) /* FText */                 __um(HintText);                                             // 0x01B0   (0x0018)  
	SDK_UNDEFINED(12,1509) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x01C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x01E0   (0x0D80)  
	bool                                               bIsReadOnly;                                                // 0x0F60   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0F61   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0F62   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0F63   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0F64   (0x0004)  MISSED
	SDK_UNDEFINED(16,1510) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0F68   (0x0010)  
	SDK_UNDEFINED(16,1511) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0F78   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0F88   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle
	// void SetTextStyle(FTextBlockStyle& InTextStyle);                                                                      // [0x5fcc95c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetText
	// void SetText(FText InText);                                                                                           // [0x5fcc484] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x5fc8cdc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x5fc81e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetForegroundColor
	// void SetForegroundColor(FLinearColor Color);                                                                          // [0x5fc7da8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetError
	// void SetError(FText InError);                                                                                         // [0x5fc74c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                          // [0x2047e54] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.GetText
	// FText GetText();                                                                                                      // [0x5fc3608] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableTextBox.GetHintText
	// FText GetHintText();                                                                                                  // [0x5fc3038] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// bool ReplaceOverlayChildAt(int32_t Index, class UWidget* Content);                                                    // [0x5fc4a98] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Overlay.AddChildToOverlay
	// class UOverlaySlot* AddChildToOverlay(class UWidget* Content);                                                        // [0x321fa3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UOverlaySlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1512) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1513) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x217fde4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2e84104] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x217fea8] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FProgressBarStyle                                  WidgetStyle;                                                // 0x0180   (0x0260)  
	float                                              Percent;                                                    // 0x03E0   (0x0004)  
	SDK_UNDEFINED(1,1514) /* TEnumAsByte<EProgressBarFillType> */ __um(BarFillType);                               // 0x03E4   (0x0001)  
	SDK_UNDEFINED(1,1515) /* TEnumAsByte<EProgressBarFillStyle> */ __um(BarFillStyle);                             // 0x03E5   (0x0001)  
	bool                                               bIsMarquee;                                                 // 0x03E6   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x03E7   (0x0001)  MISSED
	FVector2D                                          BorderPadding;                                              // 0x03E8   (0x0010)  
	SDK_UNDEFINED(12,1516) /* FDelegateProperty */     __um(PercentDelegate);                                      // 0x03F8   (0x000C)  
	FLinearColor                                       FillColorAndOpacity;                                        // 0x0404   (0x0010)  
	SDK_UNDEFINED(12,1517) /* FDelegateProperty */     __um(FillColorAndOpacityDelegate);                          // 0x0414   (0x000C)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0420   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ProgressBar.SetPercent
	// void SetPercent(float InPercent);                                                                                     // [0x38a9c9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetIsMarquee
	// void SetIsMarquee(bool InbIsMarquee);                                                                                 // [0x5fc8844] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity
	// void SetFillColorAndOpacity(FLinearColor InColor);                                                                    // [0x5fc773c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
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
	// void SetTextureParameter(FName TextureParameter);                                                                     // [0x5fccb9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRetainRendering
	// void SetRetainRendering(bool bInRetainRendering);                                                                     // [0x5fcaf78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRenderingPhase
	// void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);                                                     // [0x5fcae0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetEffectMaterial
	// void SetEffectMaterial(class UMaterialInterface* EffectMaterial);                                                     // [0x5fc7198] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.RequestRender
	// void RequestRender();                                                                                                 // [0x5fc4d94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.GetEffectMaterial
	// class UMaterialInstanceDynamic* GetEffectMaterial();                                                                  // [0x5fc2f14] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x0698 (0x000198 - 0x000830)
class URichTextBlock : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1518) /* FText */                 __um(Text);                                                 // 0x0198   (0x0018)  
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
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                  // [0x5fccadc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextStyleSet
	// void SetTextStyleSet(class UDataTable* NewTextStyleSet);                                                              // [0x5fcca1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                     // [0x5fcc7dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetText
	// void SetText(FText& InText);                                                                                          // [0x2345320] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x5fc98f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultTextStyle
	// void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);                                                        // [0x5fc6ea8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush
	// void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);                                                               // [0x5fc6de0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset
	// void SetDefaultShadowOffset(FVector2D InShadowOffset);                                                                // [0x5fc6cec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	// void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                           // [0x5fc6c10] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultMaterial
	// void SetDefaultMaterial(class UMaterialInterface* InMaterial);                                                        // [0x5fc6b2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultFont
	// void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                       // [0x5fc6a20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity
	// void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);                                                        // [0x5fc6940] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDecorators
	// void SetDecorators(TArray<UClass*>& InDecoratorClasses);                                                              // [0x5fc6280] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                            // [0x5fc59d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.RefreshTextLayout
	// void RefreshTextLayout();                                                                                             // [0x5fc45a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetTextStyleSet
	// class UDataTable* GetTextStyleSet();                                                                                  // [0x5fc3690] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetText
	// FText GetText();                                                                                                      // [0x5fc364c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetDefaultDynamicMaterial
	// class UMaterialInstanceDynamic* GetDefaultDynamicMaterial();                                                          // [0x5fc2e6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetDecoratorByClass
	// class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);                                     // [0x5fc2d84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	// void ClearAllDefaultStyleOverrides();                                                                                 // [0x5fc26b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	// void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                 // [0x5fcb808] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class USafeZoneSlot : public UPanelSlot
{ 
public:
	bool                                               bIsTitleSafe;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FMargin                                            SafeAreaScale;                                              // 0x003C   (0x0010)  
	SDK_UNDEFINED(1,1519) /* TEnumAsByte<EHorizontalAlignment> */ __um(HAlign);                                    // 0x004C   (0x0001)  
	SDK_UNDEFINED(1,1520) /* TEnumAsByte<EVerticalAlignment> */ __um(VAlign);                                      // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FMargin                                            Padding;                                                    // 0x0050   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000190 - 0x0001B0)
class UScaleBox : public UContentWidget
{ 
public:
	SDK_UNDEFINED(1,1521) /* TEnumAsByte<EStretch> */  __um(Stretch);                                              // 0x0190   (0x0001)  
	SDK_UNDEFINED(1,1522) /* TEnumAsByte<EStretchDirection> */ __um(StretchDirection);                             // 0x0191   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0192   (0x0002)  MISSED
	float                                              UserSpecifiedScale;                                         // 0x0194   (0x0004)  
	bool                                               IgnoreInheritedScale;                                       // 0x0198   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0199   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale
	// void SetUserSpecifiedScale(float InUserSpecifiedScale);                                                               // [0x26fb950] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretchDirection
	// void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);                                          // [0x5fcc124] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretch
	// void SetStretch(TEnumAsByte<EStretch> InStretch);                                                                     // [0x5fcc064] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale
	// void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);                                                           // [0x5fc8500] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UScaleBoxSlot : public UPanelSlot
{ 
public:
	SDK_UNDEFINED(1,1523) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,1524) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x003A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5fcd290] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x5fca9e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5fc82c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x0728 (0x000178 - 0x0008A0)
class UScrollBar : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0178   (0x0008)  MISSED
	FScrollBarStyle                                    WidgetStyle;                                                // 0x0180   (0x06E0)  
	bool                                               bAlwaysShowScrollbar;                                       // 0x0860   (0x0001)  
	bool                                               bAlwaysShowScrollbarTrack;                                  // 0x0861   (0x0001)  
	SDK_UNDEFINED(1,1525) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0862   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0863   (0x0005)  MISSED
	FVector2D                                          Thickness;                                                  // 0x0868   (0x0010)  
	FMargin                                            Padding;                                                    // 0x0878   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0888   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBar.SetState
	// void SetState(float InOffsetFraction, float InThumbSizeFraction);                                                     // [0x5fcbe4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x0A90 (0x000190 - 0x000C20)
#pragma pack(push, 0x1)
class alignas(0x10) 
UScrollBox : public UPanelWidget
{ 
public:
	FScrollBoxStyle                                    WidgetStyle;                                                // 0x0190   (0x0330)  
	FScrollBarStyle                                    WidgetBarStyle;                                             // 0x04C0   (0x06E0)  
	SDK_UNDEFINED(1,1526) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0BA0   (0x0001)  
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
	SDK_UNDEFINED(16,1527) /* FMulticastInlineDelegate */ __um(OnUserScrolled);                                    // 0x0BE0   (0x0010)  
	SDK_UNDEFINED(16,1528) /* FMulticastInlineDelegate */ __um(OnScrollBarVisibilityChanged);                      // 0x0BF0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0C00   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                        // [0x5fcd750] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollWhenFocusChanges
	// void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);                                    // [0x5fcb284] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollOffset
	// void SetScrollOffset(float NewScrollOffset);                                                                          // [0x5fcb1c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarVisibility
	// void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);                                                 // [0x5fcb03c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarThickness
	// void SetScrollbarThickness(FVector2D& NewScrollbarThickness);                                                         // [0x5fcb3d4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarPadding
	// void SetScrollbarPadding(FMargin& NewScrollbarPadding);                                                               // [0x5fcb344] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetOrientation
	// void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);                                                        // [0x5fca868] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetNavigationDestination
	// void SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination);                                 // [0x5fc9e4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetConsumeMouseWheel
	// void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);                                                   // [0x5fc5f6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling
	// void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);                                                     // [0x5fc5914] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar
	// void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);                                                             // [0x5fc5540] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAllowOverscroll
	// void SetAllowOverscroll(bool NewAllowOverscroll);                                                                     // [0x5fc547c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView
	// void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // [0x5fc4f6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToStart
	// void ScrollToStart();                                                                                                 // [0x5fc4f44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToEnd
	// void ScrollToEnd();                                                                                                   // [0x5fc4f30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.GetViewOffsetFraction
	// float GetViewOffsetFraction();                                                                                        // [0x5fc3780] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetViewFraction
	// float GetViewFraction();                                                                                              // [0x5fc3708] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd
	// float GetScrollOffsetOfEnd();                                                                                         // [0x5fc3514] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffset
	// float GetScrollOffset();                                                                                              // [0x5fc34f4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.EndInertialScrolling
	// void EndInertialScrolling();                                                                                          // [0x5fc2878] Final|RequiredAPI|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UScrollBoxSlot : public UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0038   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1529) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1530) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5fcd350] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x35dcea0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5fc8380] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0038 (0x000190 - 0x0001C8)
class USizeBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0190   (0x0010)  MISSED
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
	// void SetWidthOverride(float InWidthOverride);                                                                         // [0x278eefc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x29e081c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredHeight
	// void SetMinDesiredHeight(float InMinDesiredHeight);                                                                   // [0x2d5e9a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinAspectRatio
	// void SetMinAspectRatio(float InMinAspectRatio);                                                                       // [0x5fc96a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredWidth
	// void SetMaxDesiredWidth(float InMaxDesiredWidth);                                                                     // [0x2eb11a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredHeight
	// void SetMaxDesiredHeight(float InMaxDesiredHeight);                                                                   // [0x5fc92d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxAspectRatio
	// void SetMaxAspectRatio(float InMaxAspectRatio);                                                                       // [0x5fc9214] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetHeightOverride
	// void SetHeightOverride(float InHeightOverride);                                                                       // [0x278edec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearWidthOverride
	// void ClearWidthOverride();                                                                                            // [0x5fc27e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredWidth
	// void ClearMinDesiredWidth();                                                                                          // [0x5fc27a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredHeight
	// void ClearMinDesiredHeight();                                                                                         // [0x5fc2794] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinAspectRatio
	// void ClearMinAspectRatio();                                                                                           // [0x5fc2780] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredWidth
	// void ClearMaxDesiredWidth();                                                                                          // [0x33684e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredHeight
	// void ClearMaxDesiredHeight();                                                                                         // [0x5fc2744] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxAspectRatio
	// void ClearMaxAspectRatio();                                                                                           // [0x5fc2730] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearHeightOverride
	// void ClearHeightOverride();                                                                                           // [0x294173c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USizeBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	SDK_UNDEFINED(1,1531) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1532) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5fcd410] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x315a4dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5fc8440] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Slider
/// Size: 0x0548 (0x000178 - 0x0006C0)
class USlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	SDK_UNDEFINED(12,1533) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x017C   (0x000C)  
	float                                              MinValue;                                                   // 0x0188   (0x0004)  
	float                                              MaxValue;                                                   // 0x018C   (0x0004)  
	FSliderStyle                                       WidgetStyle;                                                // 0x0190   (0x04A0)  
	SDK_UNDEFINED(1,1534) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0630   (0x0001)  
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
	SDK_UNDEFINED(16,1535) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x0660   (0x0010)  
	SDK_UNDEFINED(16,1536) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0670   (0x0010)  
	SDK_UNDEFINED(16,1537) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0680   (0x0010)  
	SDK_UNDEFINED(16,1538) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0690   (0x0010)  
	SDK_UNDEFINED(16,1539) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x06A0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x06B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Slider.SetValue
	// void SetValue(float InValue);                                                                                         // [0x234122c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0x5fcbfa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                      // [0x5fcbcb4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0x5fcbbec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMinValue
	// void SetMinValue(float InValue);                                                                                      // [0x5fc9c00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMaxValue
	// void SetMaxValue(float InValue);                                                                                      // [0x5fc9520] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0x5fc9090] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                   // [0x5fc85c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.GetValue
	// float GetValue();                                                                                                     // [0x23411ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Slider.GetNormalizedValue
	// float GetNormalizedValue();                                                                                           // [0x5fc33c8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetSize(FVector2D InSize);                                                                                       // [0x23fdc4c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.SpinBox
/// Size: 0x06A8 (0x000178 - 0x000820)
class USpinBox : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	SDK_UNDEFINED(12,1540) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x017C   (0x000C)  
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
	SDK_UNDEFINED(1,1541) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x0790   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0791   (0x0003)  MISSED
	float                                              MinDesiredWidth;                                            // 0x0794   (0x0004)  
	SDK_UNDEFINED(1,1542) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x0798   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0799   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x079A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x079B   (0x0001)  MISSED
	FSlateColor                                        ForegroundColor;                                            // 0x079C   (0x0014)  
	SDK_UNDEFINED(16,1543) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x07B0   (0x0010)  
	SDK_UNDEFINED(16,1544) /* FMulticastInlineDelegate */ __um(OnValueCommitted);                                  // 0x07C0   (0x0010)  
	SDK_UNDEFINED(16,1545) /* FMulticastInlineDelegate */ __um(OnBeginSliderMovement);                             // 0x07D0   (0x0010)  
	SDK_UNDEFINED(16,1546) /* FMulticastInlineDelegate */ __um(OnEndSliderMovement);                               // 0x07E0   (0x0010)  
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
	// void SetValue(float NewValue);                                                                                        // [0x5fcd1cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinValue
	// void SetMinValue(float NewValue);                                                                                     // [0x5fc9cc4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinSliderValue
	// void SetMinSliderValue(float NewValue);                                                                               // [0x5fc9b3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinFractionalDigits
	// void SetMinFractionalDigits(int32_t NewValue);                                                                        // [0x5fc9a7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxValue
	// void SetMaxValue(float NewValue);                                                                                     // [0x5fc95e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxSliderValue
	// void SetMaxSliderValue(float NewValue);                                                                               // [0x5fc945c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxFractionalDigits
	// void SetMaxFractionalDigits(int32_t NewValue);                                                                        // [0x5fc939c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                               // [0x5fc7e8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetDelta
	// void SetDelta(float NewValue);                                                                                        // [0x5fc6f4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap
	// void SetAlwaysUsesDeltaSnap(bool bNewValue);                                                                          // [0x5fc5604] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);           // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);                                                    // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// void OnSpinBoxBeginSliderMovement__DelegateSignature();                                                               // [0x2047e54] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.GetValue
	// float GetValue();                                                                                                     // [0x5fc36d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinValue
	// float GetMinValue();                                                                                                  // [0x5fc33a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinSliderValue
	// float GetMinSliderValue();                                                                                            // [0x5fc3388] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinFractionalDigits
	// int32_t GetMinFractionalDigits();                                                                                     // [0x5fc3370] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxValue
	// float GetMaxValue();                                                                                                  // [0x5fc3310] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxSliderValue
	// float GetMaxSliderValue();                                                                                            // [0x5fc32f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxFractionalDigits
	// int32_t GetMaxFractionalDigits();                                                                                     // [0x5fc32d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetDelta
	// float GetDelta();                                                                                                     // [0x5fc2e90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap
	// bool GetAlwaysUsesDeltaSnap();                                                                                        // [0x5fc2b88] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.ClearMinValue
	// void ClearMinValue();                                                                                                 // [0x5fc27d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMinSliderValue
	// void ClearMinSliderValue();                                                                                           // [0x5fc27bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxValue
	// void ClearMaxValue();                                                                                                 // [0x5fc276c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxSliderValue
	// void ClearMaxSliderValue();                                                                                           // [0x5fc2758] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.StackBox
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UStackBox : public UPanelWidget
{ 
public:
	SDK_UNDEFINED(1,1547) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0191   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.StackBox.ReplaceStackBoxChildAt
	// bool ReplaceStackBoxChildAt(int32_t Index, class UWidget* Content);                                                   // [0x5fc4c00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.StackBox.AddChildToStackBox
	// class UStackBoxSlot* AddChildToStackBox(class UWidget* Content);                                                      // [0x233cb6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.StackBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UStackBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	FSlateChildSize                                    Size;                                                       // 0x0048   (0x0008)  
	SDK_UNDEFINED(1,1548) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1549) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED
};

/// Class /Script/UMG.TextBlock
/// Size: 0x01B8 (0x000198 - 0x000350)
#pragma pack(push, 0x1)
class alignas(0x10) 
UTextBlock : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1550) /* FText */                 __um(Text);                                                 // 0x0198   (0x0018)  
	SDK_UNDEFINED(12,1551) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x01B0   (0x000C)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x01BC   (0x0014)  
	SDK_UNDEFINED(12,1552) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x01D0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x01E0   (0x0058)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0238   (0x0008)  MISSED
	FSlateBrush                                        StrikeBrush;                                                // 0x0240   (0x00C0)  
	FVector2D                                          ShadowOffset;                                               // 0x0300   (0x0010)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0310   (0x0010)  
	SDK_UNDEFINED(12,1553) /* FDelegateProperty */     __um(ShadowColorAndOpacityDelegate);                        // 0x0320   (0x000C)  
	float                                              MinDesiredWidth;                                            // 0x032C   (0x0004)  
	bool                                               bWrapWithInvalidationPanel;                                 // 0x0330   (0x0001)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0331   (0x0001)  
	ETextOverflowPolicy                                TextOverflowPolicy;                                         // 0x0332   (0x0001)  
	bool                                               bSimpleTextMode;                                            // 0x0333   (0x0001)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x0334   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.TextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                  // [0x2d9cc88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                     // [0x5fcc89c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetText
	// void SetText(FText InText);                                                                                           // [0x1a71288] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetStrikeBrush
	// void SetStrikeBrush(FSlateBrush InStrikeBrush);                                                                       // [0x5fcc1e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2D InShadowOffset);                                                                       // [0x5fcb740] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity
	// void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                  // [0x5fcb678] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                     // [0x5fca7a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x5fc99b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                    // [0x2ed435c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                           // [0x2ed4260] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                              // [0x28e1514] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetColorAndOpacity
	// void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                               // [0x2ba060c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                            // [0x316a034] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetText
	// FText GetText();                                                                                                      // [0x295414c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial
	// class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                          // [0x2902e1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial
	// class UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                             // [0x2902ed0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

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
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                     // [0x5fca6e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateVertically
	// void SetAnimateVertically(bool bInAnimateVertically);                                                                 // [0x5fc5850] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateOpacity
	// void SetAnimateOpacity(bool bInAnimateOpacity);                                                                       // [0x5fc578c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateHorizontally
	// void SetAnimateHorizontally(bool bInAnimateHorizontally);                                                             // [0x5fc56c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TileView
/// Size: 0x0030 (0x000BD0 - 0x000C00)
#pragma pack(push, 0x1)
class alignas(0x10) 
UTileView : public UListView
{ 
public:
	float                                              EntryHeight;                                                // 0x0BD0   (0x0004)  
	float                                              EntryWidth;                                                 // 0x0BD4   (0x0004)  
	EListItemAlignment                                 TileAlignment;                                              // 0x0BD8   (0x0001)  
	bool                                               bWrapHorizontalNavigation;                                  // 0x0BD9   (0x0001)  
	ESlateVisibility                                   ScrollbarDisabledVisibility;                                // 0x0BDA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x15];                                      // 0x0BDB   (0x0015)  MISSED
	bool                                               bEntrySizeIncludesEntrySpacing;                             // 0x0BF0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0BF1   (0x0007)  MISSED


	/// Functions
	// Function /Script/UMG.TileView.SetEntryWidth
	// void SetEntryWidth(float NewWidth);                                                                                   // [0x5fc731c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.SetEntryHeight
	// void SetEntryHeight(float NewHeight);                                                                                 // [0x5fc7258] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.IsAligned
	// bool IsAligned();                                                                                                     // [0x5fc3cf0] Final|RequiredAPI|Native|Private|Const 
	// Function /Script/UMG.TileView.GetEntryWidth
	// float GetEntryWidth();                                                                                                // [0x5fc2f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TileView.GetEntryHeight
	// float GetEntryHeight();                                                                                               // [0x38b8c48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/UMG.TreeView
/// Size: 0x0060 (0x000BD0 - 0x000C30)
#pragma pack(push, 0x1)
class alignas(0x10) 
UTreeView : public UListView
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0BD0   (0x0010)  MISSED
	SDK_UNDEFINED(12,1554) /* FDelegateProperty */     __um(BP_OnGetItemChildren);                                 // 0x0BE0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0BEC   (0x0004)  MISSED
	SDK_UNDEFINED(16,1555) /* FMulticastInlineDelegate */ __um(BP_OnItemExpansionChanged);                         // 0x0BF0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0C00   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.TreeView.SetItemExpansion
	// void SetItemExpansion(class UObject* Item, bool bExpandItem);                                                         // [0x5fc8da0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.ExpandAll
	// void ExpandAll();                                                                                                     // [0x5fc288c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.CollapseAll
	// void CollapseAll();                                                                                                   // [0x5fc27f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

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
	// void SetSlotPadding(FMargin InSlotPadding);                                                                           // [0x5fcbd7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);                                                             // [0x5fc9830] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);                                                           // [0x5fc976c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid
	// class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);               // [0x1a4c068] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UUniformGridSlot : public UPanelSlot
{ 
public:
	SDK_UNDEFINED(1,1556) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,1557) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x003C   (0x0004)  
	int32_t                                            Column;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x218015c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                           // [0x1a4c380] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x218023c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                     // [0x1a4c460] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UVerticalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBox.AddChildToVerticalBox
	// class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);                                                // [0x325a228] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UVerticalBoxSlot : public UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0038   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1558) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1559) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x348ac30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                 // [0x5fcbb24] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2a21348] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x32fb2c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	// class AActor* Spawn(class UClass* ActorClass);                                                                        // [0x5fcdbfc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewRotation
	// void SetViewRotation(FRotator Rotation);                                                                              // [0x5fcd5b8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewLocation
	// void SetViewLocation(FVector Location);                                                                               // [0x5fcd4d0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.GetViewRotation
	// FRotator GetViewRotation();                                                                                           // [0x5fc37b8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewportWorld
	// class UWorld* GetViewportWorld();                                                                                     // [0x5fc3808] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewLocation
	// FVector GetViewLocation();                                                                                            // [0x5fc3730] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0130 (0x000540 - 0x000670)
class UWidgetComponent : public UMeshComponent
{ 
public:
	EWidgetSpace                                       Space;                                                      // 0x0538   (0x0001)  
	EWidgetTimingPolicy                                TimingPolicy;                                               // 0x0539   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x053A   (0x0006)  MISSED
	class UClass*                                      WidgetClass;                                                // 0x0540   (0x0008)  
	FIntPoint                                          DrawSize;                                                   // 0x0548   (0x0008)  
	bool                                               bManuallyRedraw;                                            // 0x0550   (0x0001)  
	bool                                               bRedrawRequested;                                           // 0x0551   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0552   (0x0002)  MISSED
	float                                              RedrawTime;                                                 // 0x0554   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0558   (0x0008)  MISSED
	FIntPoint                                          CurrentDrawSize;                                            // 0x0560   (0x0008)  
	bool                                               bUseInvalidationInWorldSpace;                               // 0x0568   (0x0001)  
	bool                                               bDrawAtDesiredSize;                                         // 0x0569   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x056A   (0x0006)  MISSED
	FVector2D                                          Pivot;                                                      // 0x0570   (0x0010)  
	bool                                               bReceiveHardwareInput;                                      // 0x0580   (0x0001)  
	bool                                               bWindowFocusable;                                           // 0x0581   (0x0001)  
	EWindowVisibility                                  WindowVisibility;                                           // 0x0582   (0x0001)  
	bool                                               bApplyGammaCorrection;                                      // 0x0583   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0584   (0x0004)  MISSED
	class ULocalPlayer*                                OwnerPlayer;                                                // 0x0588   (0x0008)  
	FLinearColor                                       BackgroundColor;                                            // 0x0590   (0x0010)  
	FLinearColor                                       TintColorAndOpacity;                                        // 0x05A0   (0x0010)  
	float                                              OpacityFromTexture;                                         // 0x05B0   (0x0004)  
	EWidgetBlendMode                                   BlendMode;                                                  // 0x05B4   (0x0001)  
	bool                                               bIsTwoSided;                                                // 0x05B5   (0x0001)  
	bool                                               TickWhenOffscreen;                                          // 0x05B6   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x05B7   (0x0001)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x05B8   (0x0008)  
	class UMaterialInterface*                          TranslucentMaterial;                                        // 0x05C0   (0x0008)  
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                               // 0x05C8   (0x0008)  
	class UMaterialInterface*                          OpaqueMaterial;                                             // 0x05D0   (0x0008)  
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                    // 0x05D8   (0x0008)  
	class UMaterialInterface*                          MaskedMaterial;                                             // 0x05E0   (0x0008)  
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                    // 0x05E8   (0x0008)  
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x05F0   (0x0008)  
	class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x05F8   (0x0008)  
	bool                                               bAddedToScreen;                                             // 0x0600   (0x0001)  
	bool                                               bEditTimeUsable;                                            // 0x0601   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x0602   (0x0002)  MISSED
	FName                                              SharedLayerName;                                            // 0x0604   (0x0004)  
	int32_t                                            LayerZOrder;                                                // 0x0608   (0x0004)  
	EWidgetGeometryMode                                GeometryMode;                                               // 0x060C   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x060D   (0x0003)  MISSED
	float                                              CylinderArcAngle;                                           // 0x0610   (0x0004)  
	ETickMode                                          TickMode;                                                   // 0x0614   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2B];                                      // 0x0615   (0x002B)  MISSED
	class UUserWidget*                                 Widget;                                                     // 0x0640   (0x0008)  
	unsigned char                                      UnknownData09_6[0x28];                                      // 0x0648   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetComponent.SetWindowVisibility
	// void SetWindowVisibility(EWindowVisibility InVisibility);                                                             // [0x5fcdb1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWindowFocusable
	// void SetWindowFocusable(bool bInWindowFocusable);                                                                     // [0x5fcda50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidgetSpace
	// void SetWidgetSpace(EWidgetSpace NewSpace);                                                                           // [0x5fcd8d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidget
	// void SetWidget(class UUserWidget* Widget);                                                                            // [0x5fcd814] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTwoSided
	// void SetTwoSided(bool bWantTwoSided);                                                                                 // [0x5fcd034] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity
	// void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);                                                     // [0x5fccddc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen
	// void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);                                                               // [0x5fccd1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickMode
	// void SetTickMode(ETickMode InTickMode);                                                                               // [0x5fccc5c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetRedrawTime
	// void SetRedrawTime(float InRedrawTime);                                                                               // [0x5fcac7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetPivot
	// void SetPivot(FVector2D& InPivot);                                                                                    // [0x5fcaa94] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer
	// void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);                                                                 // [0x5fca928] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetManuallyRedraw
	// void SetManuallyRedraw(bool bUseManualRedraw);                                                                        // [0x5fc9154] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetGeometryMode
	// void SetGeometryMode(EWidgetGeometryMode InGeometryMode);                                                             // [0x5fc7f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawSize
	// void SetDrawSize(FVector2D Size);                                                                                     // [0x5fc70d0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize
	// void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);                                                                 // [0x5fc7010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetCylinderArcAngle
	// void SetCylinderArcAngle(float InCylinderArcAngle);                                                                   // [0x5fc61bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor NewBackgroundColor);                                                             // [0x5fc5ae0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRenderUpdate
	// void RequestRenderUpdate();                                                                                           // [0x5fc4dbc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRedraw
	// void RequestRedraw();                                                                                                 // [0x5fc4d68] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.IsWidgetVisible
	// bool IsWidgetVisible();                                                                                               // [0x5fc3de8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowVisiblility
	// EWindowVisibility GetWindowVisiblility();                                                                             // [0x5fc3840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowFocusable
	// bool GetWindowFocusable();                                                                                            // [0x5fc3828] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidgetSpace
	// EWidgetSpace GetWidgetSpace();                                                                                        // [0x38b8c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidget
	// class UUserWidget* GetWidget();                                                                                       // [0x382f720] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject
	// class UUserWidget* GetUserWidgetObject();                                                                             // [0x2f4d9a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTwoSided
	// bool GetTwoSided();                                                                                                   // [0x5fc36c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen
	// bool GetTickWhenOffscreen();                                                                                          // [0x5fc36a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRenderTarget
	// class UTextureRenderTarget2D* GetRenderTarget();                                                                      // [0x5fc34a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRedrawTime
	// float GetRedrawTime();                                                                                                // [0x38b8b88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetPivot
	// FVector2D GetPivot();                                                                                                 // [0x5fc3460] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer
	// class ULocalPlayer* GetOwnerPlayer();                                                                                 // [0x5fc33e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetMaterialInstance
	// class UMaterialInstanceDynamic* GetMaterialInstance();                                                                // [0x5fc32c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetManuallyRedraw
	// bool GetManuallyRedraw();                                                                                             // [0x5fc32a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetGeometryMode
	// EWidgetGeometryMode GetGeometryMode();                                                                                // [0x5fc2f98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawSize
	// FVector2D GetDrawSize();                                                                                              // [0x5fc2edc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize
	// bool GetDrawAtDesiredSize();                                                                                          // [0x5fc2ec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCylinderArcAngle
	// float GetCylinderArcAngle();                                                                                          // [0x5fc2d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCurrentDrawSize
	// FVector2D GetCurrentDrawSize();                                                                                       // [0x5fc2d34] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x02D0 (0x000220 - 0x0004F0)
class UWidgetInteractionComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,1560) /* FMulticastInlineDelegate */ __um(OnHoveredWidgetChanged);                            // 0x0220   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0230   (0x0010)  MISSED
	int32_t                                            VirtualUserIndex;                                           // 0x0240   (0x0004)  
	int32_t                                            PointerIndex;                                               // 0x0244   (0x0004)  
	SDK_UNDEFINED(1,1561) /* TEnumAsByte<ECollisionChannel> */ __um(TraceChannel);                                 // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              InteractionDistance;                                        // 0x024C   (0x0004)  
	EWidgetInteractionSource                           InteractionSource;                                          // 0x0250   (0x0001)  
	bool                                               bEnableHitTesting;                                          // 0x0251   (0x0001)  
	bool                                               bShowDebug;                                                 // 0x0252   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0253   (0x0001)  MISSED
	float                                              DebugSphereLineThickness;                                   // 0x0254   (0x0004)  
	float                                              DebugLineThickness;                                         // 0x0258   (0x0004)  
	FLinearColor                                       DebugColor;                                                 // 0x025C   (0x0010)  
	unsigned char                                      UnknownData03_5[0x7C];                                      // 0x026C   (0x007C)  MISSED
	FHitResult                                         CustomHitResult;                                            // 0x02E8   (0x00E8)  
	FVector2D                                          LocalHitLocation;                                           // 0x03D0   (0x0010)  
	FVector2D                                          LastLocalHitLocation;                                       // 0x03E0   (0x0010)  
	class UWidgetComponent*                            HoveredWidgetComponent;                                     // 0x03F0   (0x0008)  
	FHitResult                                         LastHitResult;                                              // 0x03F8   (0x00E8)  
	bool                                               bIsHoveredWidgetInteractable;                               // 0x04E0   (0x0001)  
	bool                                               bIsHoveredWidgetFocusable;                                  // 0x04E1   (0x0001)  
	bool                                               bIsHoveredWidgetHitTestVisible;                             // 0x04E2   (0x0001)  
	unsigned char                                      UnknownData04_6[0xD];                                       // 0x04E3   (0x000D)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetInteractionComponent.SetFocus
	// void SetFocus(class UWidget* FocusWidget);                                                                            // [0x5fe7e14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult
	// void SetCustomHitResult(FHitResult& HitResult);                                                                       // [0x5fe7a70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar
	// bool SendKeyChar(FString Characters, bool bRepeat);                                                                   // [0x5fe6c74] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel
	// void ScrollWheel(float ScrollDelta);                                                                                  // [0x5fe6bac] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey
	// void ReleasePointerKey(FKey Key);                                                                                     // [0x5fe5ee0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey
	// bool ReleaseKey(FKey Key);                                                                                            // [0x5fe5c6c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey
	// void PressPointerKey(FKey Key);                                                                                       // [0x5fe5600] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressKey
	// bool PressKey(FKey Key, bool bRepeat);                                                                                // [0x5fe5400] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey
	// bool PressAndReleaseKey(FKey Key);                                                                                    // [0x5fe5284] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// bool IsOverInteractableWidget();                                                                                      // [0x5fe3c78] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// bool IsOverHitTestVisibleWidget();                                                                                    // [0x5fe3c60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// bool IsOverFocusableWidget();                                                                                         // [0x5fe3c48] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult
	// FHitResult GetLastHitResult();                                                                                        // [0x5fe2fe0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// class UWidgetComponent* GetHoveredWidgetComponent();                                                                  // [0x5fe2b50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation
	// FVector2D Get2DHitLocation();                                                                                         // [0x5fe1e90] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
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
	// void SetActiveWidgetIndex(int32_t Index);                                                                             // [0x1a4b114] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                          // [0x1343840] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                       // [0x5fe3898] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets
	// int32_t GetNumWidgets();                                                                                              // [0x5fe34e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                       // [0x5fe1f90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                     // [0x333f3a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWidgetSwitcherSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1562) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1563) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5fe9c50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2dfaa3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5fe827c] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5fe9d10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x5fe9440] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5fe833c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWindowTitleBarAreaSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1564) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1565) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5fe9dd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x5fe9510] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5fe83fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UWrapBox : public UPanelWidget
{ 
public:
	FVector2D                                          InnerSlotPadding;                                           // 0x0190   (0x0010)  
	float                                              WrapSize;                                                   // 0x01A0   (0x0004)  
	bool                                               bExplicitWrapSize;                                          // 0x01A4   (0x0001)  
	SDK_UNDEFINED(1,1566) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x01A5   (0x0001)  
	SDK_UNDEFINED(1,1567) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x01A6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x11];                                      // 0x01A7   (0x0011)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBox.SetInnerSlotPadding
	// void SetInnerSlotPadding(FVector2D InPadding);                                                                        // [0x5fe8640] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WrapBox.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5fe84c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBox.AddChildToWrapBox
	// class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);                                                        // [0x5fddf6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWrapBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	float                                              FillSpanWhenLessThan;                                       // 0x0048   (0x0004)  
	SDK_UNDEFINED(1,1568) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x004C   (0x0001)  
	SDK_UNDEFINED(1,1569) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x004D   (0x0001)  
	bool                                               bFillEmptySpace;                                            // 0x004E   (0x0001)  
	bool                                               bForceNewLine;                                              // 0x004F   (0x0001)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x5fe9e94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x5fe95e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetNewLine
	// void SetNewLine(bool InForceNewLine);                                                                                 // [0x5fe9128] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x5fe8580] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                           // [0x5fe7d50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace
	// void SetFillEmptySpace(bool InbFillEmptySpace);                                                                       // [0x5fe7c8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0068 (0x000028 - 0x000090)
class UDragDropOperation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,1570) /* FString */               __um(tag);                                                  // 0x0028   (0x0010)  
	class UObject*                                     Payload;                                                    // 0x0038   (0x0008)  
	class UWidget*                                     DefaultDragVisual;                                          // 0x0040   (0x0008)  
	EDragPivot                                         Pivot;                                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FVector2D                                          Offset;                                                     // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1571) /* FMulticastInlineDelegate */ __um(OnDrop);                                            // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,1572) /* FMulticastInlineDelegate */ __um(OnDragCancelled);                                   // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1573) /* FMulticastInlineDelegate */ __um(OnDragged);                                         // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/UMG.DragDropOperation.Drop
	// void Drop(FPointerEvent& PointerEvent);                                                                               // [0x5fe1ccc] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.Dragged
	// void Dragged(FPointerEvent& PointerEvent);                                                                            // [0x5fdf5a4] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DragCancelled
	// void DragCancelled(FPointerEvent& PointerEvent);                                                                      // [0x5fdf4fc] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	// FVector2D TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector);                                 // [0x5feae34] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	// FVector2D TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector);                              // [0x5feac40] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	// float TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar);                                         // [0x5feaa68] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	// float TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar);                                      // [0x5fea890] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// void ScreenToWidgetLocal(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // [0x5fe6818] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// void ScreenToWidgetAbsolute(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // [0x5fe6618] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToViewport
	// void ScreenToViewport(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);      // [0x5fe6490] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToViewport
	// void LocalToViewport(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x5fe4200] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToAbsolute
	// FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate);                                            // [0x5fe4010] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.IsUnderLocation
	// bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate);                                             // [0x5fe3c90] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalTopLeft
	// FVector2D GetLocalTopLeft(FGeometry& Geometry);                                                                       // [0x5fe3178] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalSize
	// FVector2D GetLocalSize(FGeometry& Geometry);                                                                          // [0x5fe3084] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// FVector2D GetAbsoluteSize(FGeometry& Geometry);                                                                       // [0x5fe1eac] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B);                                                           // [0x23fce28] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// void AbsoluteToViewport(class UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x5fddda4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate);                                         // [0x5fddbb4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
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
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
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
	SDK_UNDEFINED(16,1574) /* FString */               __um(ObjectName);                                           // 0x0000   (0x0010)  
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
	// FEventReply UnlockMouse(FEventReply& Reply);                                                                          // [0x5feb360] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Unhandled
	// FEventReply Unhandled();                                                                                              // [0x5feb2fc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // [0x5fea008] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty Delegate);                                             // [0x2298728] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// void SetWindowTitleBarCloseButtonActive(bool bActive);                                                                // [0x5fe9f54] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetUserFocus
	// FEventReply SetUserFocus(FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);                           // [0x5fe9968] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetMousePosition
	// FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);                                         // [0x5fe8f30] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bFlushInput); // [0x5fe8c78] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// void SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput);                              // [0x5fe8b08] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput); // [0x5fe87cc] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot); // [0x5fe8000] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// void SetFocusToGameViewport();                                                                                        // [0x5fe7f04] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	// void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // [0x5fe783c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// void SetBrushResourceToTexture(FSlateBrush& Brush, class UTexture2D* Texture);                                        // [0x5fe770c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// void SetBrushResourceToMaterial(FSlateBrush& Brush, class UMaterialInterface* Material);                              // [0x5fe770c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// void RestorePreviousWindowTitleBarState();                                                                            // [0x5fe6358] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// FEventReply ReleaseMouseCapture(FEventReply& Reply);                                                                  // [0x5fe5de8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);                                         // [0x5fe5a78] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();                                                     // [0x2047e54] Public|Delegate      
	// Function /Script/UMG.WidgetBlueprintLibrary.NoResourceBrush
	// FSlateBrush NoResourceBrush();                                                                                        // [0x5fe4c24] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);                           // [0x5fe4a44] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);                 // [0x5fe4864] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);                                                   // [0x5fe4724] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.LockMouse
	// FEventReply LockMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                            // [0x5fe44e0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.IsDragDropping
	// bool IsDragDropping();                                                                                                // [0x5fe3ac8] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Handled
	// FEventReply Handled();                                                                                                // [0x5fe3968] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// void GetSafeZonePadding(class UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding); // [0x248915c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event);                                                  // [0x5fe2eec] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event);                                                      // [0x5fe2e20] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event);                                                // [0x5fe2d40] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event);                                                              // [0x5fe2c48] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event);                                                  // [0x5fe2b68] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);                                               // [0x23fc5c4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// class UDragDropOperation* GetDragDroppingContent();                                                                   // [0x5fe2a08] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// class UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush& Brush);                                                    // [0x5fe2964] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// class UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush& Brush);                                             // [0x23fd9bc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResource
	// class UObject* GetBrushResource(FSlateBrush& Brush);                                                                  // [0x23fca0c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* Interface, bool TopLevelOnly); // [0x5fe246c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly); // [0x5fe2038] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.EndDragDrop
	// FEventReply EndDragDrop(FEventReply& Reply);                                                                          // [0x5fe1d74] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// void DrawTextFormatted(FPaintContext& Context, FText& Text, FVector2D Position, class UFont* Font, float FontSize, FName FontTypeFace, FLinearColor Tint); // [0x5fe1560] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawText
	// void DrawText(FPaintContext& Context, FString InString, FVector2D Position, FLinearColor Tint);                       // [0x5fe0bbc] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawSpline
	// void DrawSpline(FPaintContext& Context, FVector2D Start, FVector2D StartDir, FVector2D End, FVector2D EndDir, FLinearColor Tint, float Thickness); // [0x5fe053c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLines
	// void DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x5fe0154] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLine
	// void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x5fdfbe8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawBox
	// void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, class USlateBrushAsset* Brush, FLinearColor Tint); // [0x5fdf64c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DismissAllMenus
	// void DismissAllMenus();                                                                                               // [0x5fdf4e0] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, FKey DragKey);       // [0x5fdf154] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDrag
	// FEventReply DetectDrag(FEventReply& Reply, class UWidget* WidgetDetectingDrag, FKey DragKey);                         // [0x5fdedc8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);                                      // [0x5fdeca4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.Create
	// class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer); // [0x17d3158] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ClearUserFocus
	// FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);                                                     // [0x5fdeab0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureMouse
	// FEventReply CaptureMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                         // [0x5fde86c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureJoystick
	// FEventReply CaptureJoystick(FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);                // [0x5fde528] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CancelDragDrop
	// void CancelDragDrop();                                                                                                // [0x5fde4f8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	// class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget);                                                         // [0x5fea65c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	// class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget);                                           // [0x2e7b8a8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);                                                 // [0x1e10cf4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);                                                 // [0x5fea578] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	// class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget);                                                         // [0x278b854] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	// class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget);                                                     // [0x5fea494] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	// class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget);                                                       // [0x5fea3b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	// class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget);                                                        // [0x5fea2cc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);                                                         // [0x2e1482c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);                                             // [0x23fbf3c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// class UGridSlot* SlotAsGridSlot(class UWidget* Widget);                                                               // [0x29e3510] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);                                                      // [0x3718a34] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);                                                           // [0x3925fc0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// void RemoveAllWidgets(class UObject* WorldContextObject);                                                             // [0x5fe604c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative); // [0x5fe576c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);                                               // [0x5fe37ac] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportSize
	// FVector2D GetViewportSize(class UObject* WorldContextObject);                                                         // [0x5fe36e0] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportScale
	// float GetViewportScale(class UObject* WorldContextObject);                                                            // [0x5fe361c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);                                   // [0x5fe3530] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// bool GetMousePositionScaledByDPI(class APlayerController* Player, float& LocationX, float& LocationY);                // [0x5fe3358] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);                                              // [0x5fe328c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// FVector2D GetMousePositionOnPlatform();                                                                               // [0x5fe325c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0060 (0x000028 - 0x000088)
class UWidgetTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UWidget*                                     RootWidget;                                                 // 0x0030   (0x0008)  
	SDK_UNDEFINED(80,1575) /* TMap<FName, UWidget*> */ __um(NamedSlotBindings);                                    // 0x0038   (0x0050)  
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FEventReply
{ 
	unsigned char                                      UnknownData00_2[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPaintContext
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/UMG.WidgetEventField
/// Size: 0x0001 (0x000000 - 0x000001)
struct FWidgetEventField
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/UMG.SequenceTickManagerWidgetData
/// Size: 0x0002 (0x000000 - 0x000002)
struct FSequenceTickManagerWidgetData
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/UMG.WidgetStateBitfield
/// Size: 0x0590 (0x000000 - 0x000590)
struct FWidgetStateBitfield
{ 
	unsigned char                                      UnknownData00_2[0x590];                                     // 0x0000   (0x0590)  MISSED
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
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTextBlockStyle                                    TextStyle;                                                  // 0x0010   (0x0310)  
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRichImageRow : FTableRowBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Brush;                                                      // 0x0010   (0x00C0)  
};

/// Struct /Script/UMG.WidgetComponentInstanceData
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

