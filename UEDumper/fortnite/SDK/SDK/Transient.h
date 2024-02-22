
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Struct /Engine/Transient.ChaosDestructionEvent_SWC
/// Size: 0x0044 (0x000000 - 0x000044)
struct FChaosDestructionEvent_SWC
{ 
	FVector3f                                          Position;                                                   // 0x0000   (0x000C)  
	FVector3f                                          Normal;                                                     // 0x000C   (0x000C)  
	FVector3f                                          Velocity;                                                   // 0x0018   (0x000C)  
	FVector3f                                          AngularVelocity;                                            // 0x0024   (0x000C)  
	float                                              ExtentMin;                                                  // 0x0030   (0x0004)  
	float                                              ExtentMax;                                                  // 0x0034   (0x0004)  
	int32_t                                            ParticleID;                                                 // 0x0038   (0x0004)  
	float                                              Time;                                                       // 0x003C   (0x0004)  
	int32_t                                            Type;                                                       // 0x0040   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_73c83f300aa939fa
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_73c83f300aa939fa
{ 
	float                                              LineHeightPercentage;                                       // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_862508c04c749853
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_862508c04c749853
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
};

/// Struct /Engine/Transient.PropertyBag_31d4f59c9de5909b
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_31d4f59c9de5909b
{ 
	float                                              LineHeightPercentage;                                       // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_16760b1878cd5980
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_16760b1878cd5980
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_82c781121f843240
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_82c781121f843240
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
};

/// Struct /Engine/Transient.PropertyBag_fac7b344770e15fd
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_fac7b344770e15fd
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_e3e7e92a845c2033
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_e3e7e92a845c2033
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_10c101f3deb2057c
/// Size: 0x001C (0x000000 - 0x00001C)
struct FPropertyBag_10c101f3deb2057c
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x000C   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LineHeightPercentage;                                       // 0x0014   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0018   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_e0e58a952d95c448
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_e0e58a952d95c448
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_e7e7cb83ee719f42
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPropertyBag_e7e7cb83ee719f42
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0008   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_2a41f76ed07526a9
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_2a41f76ed07526a9
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_5720aaedf7018a4e
/// Size: 0x0009 (0x000000 - 0x000009)
struct FPropertyBag_5720aaedf7018a4e
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0008   (0x0001)  
};

/// Struct /Engine/Transient.PropertyBag_5884a518b6aacaba
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_5884a518b6aacaba
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_db89005b64c45693
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_db89005b64c45693
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_2d5b19208d477caa
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_2d5b19208d477caa
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_f3dcf9c4d6629c95
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_f3dcf9c4d6629c95
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_1e8a942f65d43805
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_1e8a942f65d43805
{ 
	class UObject*                                     Font_FontMaterial;                                          // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_b96c15fcad8332c5
/// Size: 0x0064 (0x000000 - 0x000064)
struct FPropertyBag_b96c15fcad8332c5
{ 
	FSlateColor                                        Color_Idle;                                                 // 0x0000   (0x0014)  
	FSlateColor                                        Color_Hovered;                                              // 0x0014   (0x0014)  
	FSlateColor                                        Color_Focused;                                              // 0x0028   (0x0014)  
	FSlateColor                                        Color_Pressed;                                              // 0x003C   (0x0014)  
	FSlateColor                                        Color_Disabled;                                             // 0x0050   (0x0014)  
};

/// Struct /Engine/Transient.PropertyBag_6919764150bc1872
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPropertyBag_6919764150bc1872
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0000   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_28d5dad2828a7313
/// Size: 0x02AC (0x000000 - 0x0002AC)
struct FPropertyBag_28d5dad2828a7313
{ 
	FSlateFontInfo                                     LargePrimaryFont;                                           // 0x0000   (0x0058)  
	FSlateFontInfo                                     LargeSecondaryFont;                                         // 0x0058   (0x0058)  
	FSlateFontInfo                                     MediumPrimaryFont;                                          // 0x00B0   (0x0058)  
	FSlateFontInfo                                     MeduimSecondaryFont;                                        // 0x0108   (0x0058)  
	FSlateFontInfo                                     SmallPrimaryFont;                                           // 0x0160   (0x0058)  
	FSlateFontInfo                                     SmallSecondaryFont;                                         // 0x01B8   (0x0058)  
	FMargin                                            SingleTextLargePadding;                                     // 0x0210   (0x0010)  
	FMargin                                            SingleTextMediumPadding;                                    // 0x0220   (0x0010)  
	FMargin                                            SingleTextSmallPadding;                                     // 0x0230   (0x0010)  
	FMargin                                            DoubleTextLargePadding;                                     // 0x0240   (0x0010)  
	FMargin                                            DoubleTextMediumPadding;                                    // 0x0250   (0x0010)  
	FMargin                                            DoubleTextSmallPadding;                                     // 0x0260   (0x0010)  
	FMargin                                            DoubleTextSecondaryLargePadding;                            // 0x0270   (0x0010)  
	FMargin                                            DoubleTextSecondaryMediumPadding;                           // 0x0280   (0x0010)  
	FMargin                                            DoubleTextSecondarySmallPadding;                            // 0x0290   (0x0010)  
	int32_t                                            LargeHeight;                                                // 0x02A0   (0x0004)  
	int32_t                                            MediumHeight;                                               // 0x02A4   (0x0004)  
	int32_t                                            SmallHeight;                                                // 0x02A8   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_4f24155652d1e783
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPropertyBag_4f24155652d1e783
{ 
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0000   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_932fa99f64ccb328
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_932fa99f64ccb328
{ 
	class UObject*                                     LargePrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     LargeSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UObject*                                     MediumPrimaryFont_FontMaterial;                             // 0x0010   (0x0008)  
	class UObject*                                     MeduimSecondaryFont_FontMaterial;                           // 0x0018   (0x0008)  
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0020   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0028   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0030   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0038   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_9ddb10a57d9e945f
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_9ddb10a57d9e945f
{ 
	class UMaterialInstance*                           RegularFontMaterial;                                        // 0x0000   (0x0008)  
	class UMaterialInstance*                           RegularSecondaryFontMaterial;                               // 0x0008   (0x0008)  
	class UMaterialInstance*                           RegularBackgroundMaterial;                                  // 0x0010   (0x0008)  
	class UMaterialInstance*                           RegularOutlineMaterial;                                     // 0x0018   (0x0008)  
	class UMaterialInstance*                           QuietFontMaterial;                                          // 0x0020   (0x0008)  
	class UMaterialInstance*                           QuietSecondaryFontMaterial;                                 // 0x0028   (0x0008)  
	class UMaterialInstance*                           QuietBackgroundMaterial;                                    // 0x0030   (0x0008)  
	class UMaterialInstance*                           QuietOutlineMaterial;                                       // 0x0038   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_e9c5d60470d8aa27
/// Size: 0x0078 (0x000000 - 0x000078)
struct FPropertyBag_e9c5d60470d8aa27
{ 
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0010   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0018   (0x0008)  
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0020   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_cf29546cd9d68801
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_cf29546cd9d68801
{ 
	class USoundBase*                                  MatchMakingSucceededSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_bd34a4f9201a0e8
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_bd34a4f9201a0e8
{ 
	float                                              SecondsPriorToTransSound;                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class USoundBase*                                  TransitionSound;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_f3cda6ec48f08745
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_f3cda6ec48f08745
{ 
	class USoundBase*                                  MTXOfferTileIntroWhoosh;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a315c55de45079cc
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_a315c55de45079cc
{ 
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_fa9bb65acdbad2f
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_fa9bb65acdbad2f
{ 
	class USoundBase*                                  LockerCategoryWhooshSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_fa7138803f4fee0a
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_fa7138803f4fee0a
{ 
	class USoundBase*                                  BannerAppearSound;                                          // 0x0000   (0x0008)  
	class USoundBase*                                  BannerAwaySound;                                            // 0x0008   (0x0008)  
	class USoundBase*                                  IntroSound;                                                 // 0x0010   (0x0008)  
	class USoundBase*                                  OutroSound;                                                 // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_f41e5dfd81ca0734
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_f41e5dfd81ca0734
{ 
	class USoundBase*                                  ShopIntroWhooshSound;                                       // 0x0000   (0x0008)  
	class USoundBase*                                  ContentWhoosh_RetractSound;                                 // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_20d7e6f9399ac64f
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_20d7e6f9399ac64f
{ 
	class USoundBase*                                  ErrorWindowAppearSound;                                     // 0x0000   (0x0008)  
	class USoundBase*                                  ErrorWindowAwaySound;                                       // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_792cf1c5a5dc360e
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_792cf1c5a5dc360e
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_fb6139f65bc10b31
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyBag_fb6139f65bc10b31
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0008   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0010   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0018   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0020   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_25777e6931f5ffc6
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_25777e6931f5ffc6
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_2a86f11f1ee02f2
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_2a86f11f1ee02f2
{ 
	class USoundBase*                                  HoldPressedSound;                                           // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0010   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a4a2dce05de4b12f
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_a4a2dce05de4b12f
{ 
	class USoundBase*                                  ContextButtonHoverSound;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ContextButtonClickedSound;                                  // 0x0008   (0x0008)  
	class USoundBase*                                  BlockOutlineHoverSound;                                     // 0x0010   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_1b25160667cde836
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPropertyBag_1b25160667cde836
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0010   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0028   (0x0018)  
	class USoundBase*                                  ActivityBrowserTileHoverSound;                              // 0x0040   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_b0a8a7081ca222c9
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_b0a8a7081ca222c9
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_944f77c9159b4444
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_944f77c9159b4444
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_edc33f2f87fbbae6
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_edc33f2f87fbbae6
{ 
	class USoundBase*                                  ListEntryHoveredSound;                                      // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_49e36f57f914b908
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_49e36f57f914b908
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_45752ea0fe017c1e
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_45752ea0fe017c1e
{ 
	class USoundBase*                                  Press_Sound;                                                // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  ReleaseSound;                                               // 0x0010   (0x0008)  
	class USoundBase*                                  CompleteSound;                                              // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_f50c039b885b918
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPropertyBag_f50c039b885b918
{ 
	class UObject*                                     LargePrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              LargePrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              LargePrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            LargePrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              LargePrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
	class UObject*                                     MediumPrimaryFont_FontObject;                               // 0x0018   (0x0008)  
	FName                                              MediumPrimaryFont_TypefaceFontName;                         // 0x0020   (0x0004)  
	float                                              MediumPrimaryFont_Size;                                     // 0x0024   (0x0004)  
	int32_t                                            MediumPrimaryFont_LetterSpacing;                            // 0x0028   (0x0004)  
	float                                              MediumPrimaryFont_SkewAmount;                               // 0x002C   (0x0004)  
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0030   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0038   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x003C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0040   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0044   (0x0004)  
	class UObject*                                     LargeSecondaryFont_FontObject;                              // 0x0048   (0x0008)  
	FName                                              LargeSecondaryFont_TypefaceFontName;                        // 0x0050   (0x0004)  
	float                                              LargeSecondaryFont_Size;                                    // 0x0054   (0x0004)  
	int32_t                                            LargeSecondaryFont_LetterSpacing;                           // 0x0058   (0x0004)  
	float                                              LargeSecondaryFont_SkewAmount;                              // 0x005C   (0x0004)  
	class UObject*                                     MeduimSecondaryFont_FontObject;                             // 0x0060   (0x0008)  
	FName                                              MeduimSecondaryFont_TypefaceFontName;                       // 0x0068   (0x0004)  
	float                                              MeduimSecondaryFont_Size;                                   // 0x006C   (0x0004)  
	int32_t                                            MeduimSecondaryFont_LetterSpacing;                          // 0x0070   (0x0004)  
	float                                              MeduimSecondaryFont_SkewAmount;                             // 0x0074   (0x0004)  
	class UObject*                                     SmallSecondaryFont_FontObject;                              // 0x0078   (0x0008)  
	FName                                              SmallSecondaryFont_TypefaceFontName;                        // 0x0080   (0x0004)  
	float                                              SmallSecondaryFont_Size;                                    // 0x0084   (0x0004)  
	int32_t                                            SmallSecondaryFont_LetterSpacing;                           // 0x0088   (0x0004)  
	float                                              SmallSecondaryFont_SkewAmount;                              // 0x008C   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_22f4644cfb939433
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_22f4644cfb939433
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_24950c48ddf0699e
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_24950c48ddf0699e
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
	class UObject*                                     TabFont_FontObject;                                         // 0x0018   (0x0008)  
	FName                                              TabFont_TypefaceFontName;                                   // 0x0020   (0x0004)  
	float                                              TabFont_Size;                                               // 0x0024   (0x0004)  
	int32_t                                            TabFont_LetterSpacing;                                      // 0x0028   (0x0004)  
	float                                              TabFont_SkewAmount;                                         // 0x002C   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_36a8e063ea560cbe
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_36a8e063ea560cbe
{ 
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_ecf817c09d14d56a
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_ecf817c09d14d56a
{ 
	class USoundBase*                                  BattlePassIntroWhooshSound;                                 // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_b05ebc8ace1263bf
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_b05ebc8ace1263bf
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_8cfa81c112c7db54
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPropertyBag_8cfa81c112c7db54
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
	class USoundBase*                                  ClickedSound;                                               // 0x0030   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_f0c20023e0f910d0
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_f0c20023e0f910d0
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_189eb6d51ba03be3
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_189eb6d51ba03be3
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

