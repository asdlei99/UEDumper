
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

/// Struct /Engine/Transient.PropertyBag_6ef5c23e2caa9e33
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_6ef5c23e2caa9e33
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

/// Struct /Engine/Transient.PropertyBag_ec318c908d1b93fc
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_ec318c908d1b93fc
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_362cdb6acb62229c
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_362cdb6acb62229c
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_d7fc55f8b97bedcd
/// Size: 0x001C (0x000000 - 0x00001C)
struct FPropertyBag_d7fc55f8b97bedcd
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x000C   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LineHeightPercentage;                                       // 0x0014   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0018   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_1be14465084bb72d
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_1be14465084bb72d
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_78cef59d0c1f47eb
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPropertyBag_78cef59d0c1f47eb
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0008   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_f3084650b2229ad9
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_f3084650b2229ad9
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_171a41a1e4f2834c
/// Size: 0x0009 (0x000000 - 0x000009)
struct FPropertyBag_171a41a1e4f2834c
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0008   (0x0001)  
};

/// Struct /Engine/Transient.PropertyBag_1a1366b3dc91599f
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_1a1366b3dc91599f
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_62501747dcc51816
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_62501747dcc51816
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_3b60d7ba72eec7dd
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_3b60d7ba72eec7dd
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_bebd31ffcf29a3b7
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_bebd31ffcf29a3b7
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_9a82cc6aaa7facdd
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_9a82cc6aaa7facdd
{ 
	class UObject*                                     Font_FontMaterial;                                          // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_d5b637bee001c377
/// Size: 0x0064 (0x000000 - 0x000064)
struct FPropertyBag_d5b637bee001c377
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

/// Struct /Engine/Transient.PropertyBag_7e520ae6f698159d
/// Size: 0x02AC (0x000000 - 0x0002AC)
struct FPropertyBag_7e520ae6f698159d
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

/// Struct /Engine/Transient.PropertyBag_996a0ad306ff3c56
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPropertyBag_996a0ad306ff3c56
{ 
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0000   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_c8c0480719ea50fd
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_c8c0480719ea50fd
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

/// Struct /Engine/Transient.PropertyBag_b6b0307d4845b834
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_b6b0307d4845b834
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

/// Struct /Engine/Transient.PropertyBag_384d5289602ce51f
/// Size: 0x0078 (0x000000 - 0x000078)
struct FPropertyBag_384d5289602ce51f
{ 
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0010   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0018   (0x0008)  
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0020   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_67414331d86259df
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_67414331d86259df
{ 
	class USoundBase*                                  MatchMakingSucceededSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_82f82b251490b40
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_82f82b251490b40
{ 
	float                                              SecondsPriorToTransSound;                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class USoundBase*                                  TransitionSound;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_45f468269bcc1aac
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_45f468269bcc1aac
{ 
	class USoundBase*                                  MTXOfferTileIntroWhoosh;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_96d821840febe92
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_96d821840febe92
{ 
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_234310beccc6e74e
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_234310beccc6e74e
{ 
	class USoundBase*                                  LockerCategoryWhooshSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_4dcfa884907b2b7c
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_4dcfa884907b2b7c
{ 
	class USoundBase*                                  BannerAppearSound;                                          // 0x0000   (0x0008)  
	class USoundBase*                                  BannerAwaySound;                                            // 0x0008   (0x0008)  
	class USoundBase*                                  IntroSound;                                                 // 0x0010   (0x0008)  
	class USoundBase*                                  OutroSound;                                                 // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_df50dda7370b781a
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_df50dda7370b781a
{ 
	class USoundBase*                                  ShopIntroWhooshSound;                                       // 0x0000   (0x0008)  
	class USoundBase*                                  ContentWhoosh_RetractSound;                                 // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_ede83502c464c81f
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_ede83502c464c81f
{ 
	class USoundBase*                                  ErrorWindowAppearSound;                                     // 0x0000   (0x0008)  
	class USoundBase*                                  ErrorWindowAwaySound;                                       // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_6ec344efa1cb0538
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_6ec344efa1cb0538
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_9c487f4e8b6650fc
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyBag_9c487f4e8b6650fc
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0008   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0010   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0018   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0020   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_1d1691f2458bc69e
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_1d1691f2458bc69e
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_d5e72d7e53a916a2
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_d5e72d7e53a916a2
{ 
	class USoundBase*                                  HoldPressedSound;                                           // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0010   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_abe71a7708c53e42
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_abe71a7708c53e42
{ 
	class USoundBase*                                  ContextButtonHoverSound;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ContextButtonClickedSound;                                  // 0x0008   (0x0008)  
	class USoundBase*                                  BlockOutlineHoverSound;                                     // 0x0010   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_9394362bd73891f7
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPropertyBag_9394362bd73891f7
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0010   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0028   (0x0018)  
	class USoundBase*                                  ActivityBrowserTileHoverSound;                              // 0x0040   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_51ad1af663f11dc2
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_51ad1af663f11dc2
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_4c8130712915cd6d
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_4c8130712915cd6d
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_74c4f1afdb7e7d47
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_74c4f1afdb7e7d47
{ 
	class USoundBase*                                  ListEntryHoveredSound;                                      // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_f5c9e4924dc91427
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_f5c9e4924dc91427
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_844f46863e643127
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_844f46863e643127
{ 
	class USoundBase*                                  Press_Sound;                                                // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  ReleaseSound;                                               // 0x0010   (0x0008)  
	class USoundBase*                                  CompleteSound;                                              // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a5768d2a5e68640d
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPropertyBag_a5768d2a5e68640d
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

/// Struct /Engine/Transient.PropertyBag_a041324a5d7d7e4f
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_a041324a5d7d7e4f
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_90181fb90b9b48a8
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_90181fb90b9b48a8
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

/// Struct /Engine/Transient.PropertyBag_9541941d5930db2
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_9541941d5930db2
{ 
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_d57ce8e8b9b8dba3
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_d57ce8e8b9b8dba3
{ 
	class USoundBase*                                  BattlePassIntroWhooshSound;                                 // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_3950e74ac89396af
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_3950e74ac89396af
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_53b2ed6678cd36ae
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPropertyBag_53b2ed6678cd36ae
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
	class USoundBase*                                  ClickedSound;                                               // 0x0030   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_1df8743494dd36e
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_1df8743494dd36e
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_30c209cc7a4783c4
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_30c209cc7a4783c4
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

