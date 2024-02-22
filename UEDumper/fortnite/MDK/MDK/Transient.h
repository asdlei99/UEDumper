
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Struct /Engine/Transient.ChaosDestructionEvent_SWC
/// Size: 0x0044 (0x000000 - 0x000044)
class FChaosDestructionEvent_SWC : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FVector3f)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Normal                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 Velocity                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 AngularVelocity                                             OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     ExtentMin                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ExtentMax                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ParticleID                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   Type                                                        OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_73c83f300aa939fa
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_73c83f300aa939fa : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_862508c04c749853
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_862508c04c749853 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_31d4f59c9de5909b
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_31d4f59c9de5909b : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_16760b1878cd5980
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_16760b1878cd5980 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_82c781121f843240
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_82c781121f843240 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_fac7b344770e15fd
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_fac7b344770e15fd : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_e3e7e92a845c2033
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_e3e7e92a845c2033 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_10c101f3deb2057c
/// Size: 0x001C (0x000000 - 0x00001C)
class FPropertyBag_10c101f3deb2057c : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_e0e58a952d95c448
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_e0e58a952d95c448 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_e7e7cb83ee719f42
/// Size: 0x000C (0x000000 - 0x00000C)
class FPropertyBag_e7e7cb83ee719f42 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2a41f76ed07526a9
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_2a41f76ed07526a9 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5720aaedf7018a4e
/// Size: 0x0009 (0x000000 - 0x000009)
class FPropertyBag_5720aaedf7018a4e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5884a518b6aacaba
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_5884a518b6aacaba : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_db89005b64c45693
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_db89005b64c45693 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2d5b19208d477caa
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_2d5b19208d477caa : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f3dcf9c4d6629c95
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_f3dcf9c4d6629c95 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1e8a942f65d43805
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_1e8a942f65d43805 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UObject*)                            Font_FontMaterial                                           OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_b96c15fcad8332c5
/// Size: 0x0064 (0x000000 - 0x000064)
class FPropertyBag_b96c15fcad8332c5 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FSlateColor)                               Color_Idle                                                  OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	SMember(FSlateColor)                               Color_Hovered                                               OFFSET(getStruct<T>, {0x14, 20, 0, 0})
	SMember(FSlateColor)                               Color_Focused                                               OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FSlateColor)                               Color_Pressed                                               OFFSET(getStruct<T>, {0x3C, 20, 0, 0})
	SMember(FSlateColor)                               Color_Disabled                                              OFFSET(getStruct<T>, {0x50, 20, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_6919764150bc1872
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_6919764150bc1872 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_28d5dad2828a7313
/// Size: 0x02AC (0x000000 - 0x0002AC)
class FPropertyBag_28d5dad2828a7313 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 684;

public:
	SMember(FSlateFontInfo)                            LargePrimaryFont                                            OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FSlateFontInfo)                            LargeSecondaryFont                                          OFFSET(getStruct<T>, {0x58, 88, 0, 0})
	SMember(FSlateFontInfo)                            MediumPrimaryFont                                           OFFSET(getStruct<T>, {0xB0, 88, 0, 0})
	SMember(FSlateFontInfo)                            MeduimSecondaryFont                                         OFFSET(getStruct<T>, {0x108, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallPrimaryFont                                            OFFSET(getStruct<T>, {0x160, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallSecondaryFont                                          OFFSET(getStruct<T>, {0x1B8, 88, 0, 0})
	SMember(FMargin)                                   SingleTextLargePadding                                      OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	SMember(FMargin)                                   SingleTextMediumPadding                                     OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FMargin)                                   SingleTextSmallPadding                                      OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextLargePadding                                      OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextMediumPadding                                     OFFSET(getStruct<T>, {0x250, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSmallPadding                                      OFFSET(getStruct<T>, {0x260, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryLargePadding                             OFFSET(getStruct<T>, {0x270, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryMediumPadding                            OFFSET(getStruct<T>, {0x280, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondarySmallPadding                             OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	DMember(int32_t)                                   LargeHeight                                                 OFFSET(get<int32_t>, {0x2A0, 4, 0, 0})
	DMember(int32_t)                                   MediumHeight                                                OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	DMember(int32_t)                                   SmallHeight                                                 OFFSET(get<int32_t>, {0x2A8, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_4f24155652d1e783
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_4f24155652d1e783 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            GamepadPromptFont                                           OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_932fa99f64ccb328
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_932fa99f64ccb328 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UObject*)                            LargePrimaryFont_FontMaterial                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            LargeSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UObject*)                            MediumPrimaryFont_FontMaterial                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UObject*)                            MeduimSecondaryFont_FontMaterial                            OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UObject*)                            SmallPrimaryFont_FontMaterial                               OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UObject*)                            SmallSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BackgroundMaterial                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BorderMaterial                                              OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_9ddb10a57d9e945f
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_9ddb10a57d9e945f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UMaterialInstance*)                  RegularFontMaterial                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularSecondaryFontMaterial                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularBackgroundMaterial                                   OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularOutlineMaterial                                      OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietFontMaterial                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietSecondaryFontMaterial                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietBackgroundMaterial                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietOutlineMaterial                                        OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_e9c5d60470d8aa27
/// Size: 0x0078 (0x000000 - 0x000078)
class FPropertyBag_e9c5d60470d8aa27 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UObject*)                            SmallPrimaryFont_FontMaterial                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            SmallSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BackgroundMaterial                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BorderMaterial                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FSlateFontInfo)                            GamepadPromptFont                                           OFFSET(getStruct<T>, {0x20, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_cf29546cd9d68801
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_cf29546cd9d68801 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         MatchMakingSucceededSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_bd34a4f9201a0e8
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_bd34a4f9201a0e8 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     SecondsPriorToTransSound                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class USoundBase*)                         TransitionSound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f3cda6ec48f08745
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_f3cda6ec48f08745 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         MTXOfferTileIntroWhoosh                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a315c55de45079cc
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_a315c55de45079cc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_fa9bb65acdbad2f
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_fa9bb65acdbad2f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         LockerCategoryWhooshSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_fa7138803f4fee0a
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_fa7138803f4fee0a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         BannerAppearSound                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         BannerAwaySound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         IntroSound                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         OutroSound                                                  OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f41e5dfd81ca0734
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_f41e5dfd81ca0734 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ShopIntroWhooshSound                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContentWhoosh_RetractSound                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_20d7e6f9399ac64f
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_20d7e6f9399ac64f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ErrorWindowAppearSound                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ErrorWindowAwaySound                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_792cf1c5a5dc360e
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_792cf1c5a5dc360e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_fb6139f65bc10b31
/// Size: 0x0028 (0x000000 - 0x000028)
class FPropertyBag_fb6139f65bc10b31 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_25777e6931f5ffc6
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_25777e6931f5ffc6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2a86f11f1ee02f2
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_2a86f11f1ee02f2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a4a2dce05de4b12f
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_a4a2dce05de4b12f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         ContextButtonHoverSound                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContextButtonClickedSound                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         BlockOutlineHoverSound                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1b25160667cde836
/// Size: 0x0048 (0x000000 - 0x000048)
class FPropertyBag_1b25160667cde836 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(class USoundBase*)                         ActivityBrowserTileHoverSound                               OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_b0a8a7081ca222c9
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_b0a8a7081ca222c9 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_944f77c9159b4444
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_944f77c9159b4444 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_edc33f2f87fbbae6
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_edc33f2f87fbbae6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ListEntryHoveredSound                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_49e36f57f914b908
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_49e36f57f914b908 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_45752ea0fe017c1e
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_45752ea0fe017c1e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         Press_Sound                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         ReleaseSound                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         CompleteSound                                               OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f50c039b885b918
/// Size: 0x0090 (0x000000 - 0x000090)
class FPropertyBag_f50c039b885b918 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UObject*)                            LargePrimaryFont_FontObject                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     LargePrimaryFont_TypefaceFontName                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     LargePrimaryFont_Size                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   LargePrimaryFont_LetterSpacing                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     LargePrimaryFont_SkewAmount                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(class UObject*)                            MediumPrimaryFont_FontObject                                OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     MediumPrimaryFont_TypefaceFontName                          OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     MediumPrimaryFont_Size                                      OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   MediumPrimaryFont_LetterSpacing                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     MediumPrimaryFont_SkewAmount                                OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(class UObject*)                            SmallPrimaryFont_FontObject                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SmallPrimaryFont_TypefaceFontName                           OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	DMember(float)                                     SmallPrimaryFont_Size                                       OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   SmallPrimaryFont_LetterSpacing                              OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     SmallPrimaryFont_SkewAmount                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(class UObject*)                            LargeSecondaryFont_FontObject                               OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FName)                                     LargeSecondaryFont_TypefaceFontName                         OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	DMember(float)                                     LargeSecondaryFont_Size                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   LargeSecondaryFont_LetterSpacing                            OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(float)                                     LargeSecondaryFont_SkewAmount                               OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(class UObject*)                            MeduimSecondaryFont_FontObject                              OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FName)                                     MeduimSecondaryFont_TypefaceFontName                        OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(float)                                     MeduimSecondaryFont_Size                                    OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   MeduimSecondaryFont_LetterSpacing                           OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     MeduimSecondaryFont_SkewAmount                              OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(class UObject*)                            SmallSecondaryFont_FontObject                               OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FName)                                     SmallSecondaryFont_TypefaceFontName                         OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	DMember(float)                                     SmallSecondaryFont_Size                                     OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   SmallSecondaryFont_LetterSpacing                            OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(float)                                     SmallSecondaryFont_SkewAmount                               OFFSET(get<float>, {0x8C, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_22f4644cfb939433
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_22f4644cfb939433 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_24950c48ddf0699e
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_24950c48ddf0699e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(class UObject*)                            TabFont_FontObject                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     TabFont_TypefaceFontName                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     TabFont_Size                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   TabFont_LetterSpacing                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     TabFont_SkewAmount                                          OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_36a8e063ea560cbe
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_36a8e063ea560cbe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            SmallPrimaryFont_FontObject                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SmallPrimaryFont_TypefaceFontName                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     SmallPrimaryFont_Size                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SmallPrimaryFont_LetterSpacing                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     SmallPrimaryFont_SkewAmount                                 OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ecf817c09d14d56a
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_ecf817c09d14d56a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         BattlePassIntroWhooshSound                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_b05ebc8ace1263bf
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_b05ebc8ace1263bf : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_8cfa81c112c7db54
/// Size: 0x0038 (0x000000 - 0x000038)
class FPropertyBag_8cfa81c112c7db54 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(class USoundBase*)                         ClickedSound                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f0c20023e0f910d0
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_f0c20023e0f910d0 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_189eb6d51ba03be3
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_189eb6d51ba03be3 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x28, 8, 0, 0})
};

