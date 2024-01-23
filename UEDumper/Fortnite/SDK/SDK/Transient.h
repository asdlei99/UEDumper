
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

/// Struct /Engine/Transient.PropertyBag_1eb86950b9ea4c2f
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_1eb86950b9ea4c2f
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

/// Struct /Engine/Transient.PropertyBag_7c180a2da50520c3
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_7c180a2da50520c3
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_3f575e7f170ea07b
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_3f575e7f170ea07b
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_3b275ebd49bb8a32
/// Size: 0x001C (0x000000 - 0x00001C)
struct FPropertyBag_3b275ebd49bb8a32
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x000C   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LineHeightPercentage;                                       // 0x0014   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0018   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_78a041c03555e01e
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_78a041c03555e01e
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_c51152f2f0adef5d
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPropertyBag_c51152f2f0adef5d
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0008   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_723fa99cbf9544c8
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_723fa99cbf9544c8
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_a7ae8babf8692733
/// Size: 0x0009 (0x000000 - 0x000009)
struct FPropertyBag_a7ae8babf8692733
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0008   (0x0001)  
};

/// Struct /Engine/Transient.PropertyBag_2a7a742581e2515d
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_2a7a742581e2515d
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_f6cd4a9269f01ad8
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_f6cd4a9269f01ad8
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_59fab09b0abd5c5c
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_59fab09b0abd5c5c
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_1f09a5b30f08bb17
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_1f09a5b30f08bb17
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_b3b0feaa3606b92b
/// Size: 0x02AC (0x000000 - 0x0002AC)
struct FPropertyBag_b3b0feaa3606b92b
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

/// Struct /Engine/Transient.PropertyBag_521b65a3a02501c5
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_521b65a3a02501c5
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

/// Struct /Engine/Transient.PropertyBag_415224967cb1b25a
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_415224967cb1b25a
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

/// Struct /Engine/Transient.PropertyBag_9fcc02f4cd533d3e
/// Size: 0x0078 (0x000000 - 0x000078)
struct FPropertyBag_9fcc02f4cd533d3e
{ 
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0010   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0018   (0x0008)  
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0020   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_734b42cb1386f44a
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_734b42cb1386f44a
{ 
	class USoundBase*                                  MatchMakingSucceededSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_4530c92c15d7d34e
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_4530c92c15d7d34e
{ 
	float                                              SecondsPriorToTransSound;                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class USoundBase*                                  TransitionSound;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_dbd12eee6c885c63
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_dbd12eee6c885c63
{ 
	class USoundBase*                                  MTXOfferTileIntroWhoosh;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_3e8449df0104b653
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_3e8449df0104b653
{ 
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_528dd23eca1b086e
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_528dd23eca1b086e
{ 
	class USoundBase*                                  LockerCategoryWhooshSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_deb44cecaa900ae8
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_deb44cecaa900ae8
{ 
	class USoundBase*                                  BannerAppearSound;                                          // 0x0000   (0x0008)  
	class USoundBase*                                  BannerAwaySound;                                            // 0x0008   (0x0008)  
	class USoundBase*                                  IntroSound;                                                 // 0x0010   (0x0008)  
	class USoundBase*                                  OutroSound;                                                 // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_48cfbe9b26b59748
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_48cfbe9b26b59748
{ 
	class USoundBase*                                  ShopIntroWhooshSound;                                       // 0x0000   (0x0008)  
	class USoundBase*                                  ContentWhoosh_RetractSound;                                 // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_859991c4ae766396
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_859991c4ae766396
{ 
	class USoundBase*                                  ErrorWindowAppearSound;                                     // 0x0000   (0x0008)  
	class USoundBase*                                  ErrorWindowAwaySound;                                       // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_54064870c3770cd7
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_54064870c3770cd7
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_8be6df46aa3256f0
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyBag_8be6df46aa3256f0
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0008   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0010   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0018   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0020   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_bd78389cad4d80dd
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_bd78389cad4d80dd
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_9fb949bdeafd3856
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_9fb949bdeafd3856
{ 
	class USoundBase*                                  HoldPressedSound;                                           // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0010   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_16f1700737d05ae0
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_16f1700737d05ae0
{ 
	class USoundBase*                                  ContextButtonHoverSound;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ContextButtonClickedSound;                                  // 0x0008   (0x0008)  
	class USoundBase*                                  BlockOutlineHoverSound;                                     // 0x0010   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_9ece6724b0ad55a1
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPropertyBag_9ece6724b0ad55a1
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0010   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0028   (0x0018)  
	class USoundBase*                                  ActivityBrowserTileHoverSound;                              // 0x0040   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a0a865abc2bfa3b9
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_a0a865abc2bfa3b9
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_39f66925334b085d
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_39f66925334b085d
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_29d35a4b7705ae8a
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_29d35a4b7705ae8a
{ 
	class USoundBase*                                  ListEntryHoveredSound;                                      // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_1c161f9d99175658
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_1c161f9d99175658
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_6f701cdf1508f25f
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_6f701cdf1508f25f
{ 
	class USoundBase*                                  Press_Sound;                                                // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  ReleaseSound;                                               // 0x0010   (0x0008)  
	class USoundBase*                                  CompleteSound;                                              // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_506ae6cfe3eab58b
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPropertyBag_506ae6cfe3eab58b
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

/// Struct /Engine/Transient.PropertyBag_ca40bc0bbdff4337
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_ca40bc0bbdff4337
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_31de08d0942ed207
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_31de08d0942ed207
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

/// Struct /Engine/Transient.PropertyBag_d769f7773ed7774e
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_d769f7773ed7774e
{ 
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_b910df7dfde230b2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_b910df7dfde230b2
{ 
	class USoundBase*                                  BattlePassIntroWhooshSound;                                 // 0x0000   (0x0008)  
};

