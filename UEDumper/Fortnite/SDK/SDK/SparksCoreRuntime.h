
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AudioModulation
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Enum /Script/SparksCoreRuntime.ESparksInstrumentType
/// Size: 0x08
enum class ESparksInstrumentType : uint8_t
{
	ESparksInstrumentType__Guitar                                                    = 0,
	ESparksInstrumentType__Bass                                                      = 1,
	ESparksInstrumentType__Vocals                                                    = 2,
	ESparksInstrumentType__Drum                                                      = 3,
	ESparksInstrumentType__Keyboard                                                  = 4,
	ESparksInstrumentType__None                                                      = 5,
	ESparksInstrumentType__NumInstrumentTypes                                        = 5,
	ESparksInstrumentType__ESparksInstrumentType_MAX                                 = 6
};

/// Enum /Script/SparksCoreRuntime.ESparksAccountItemSubtype
/// Size: 0x11
enum class ESparksAccountItemSubtype : uint8_t
{
	ESparksAccountItemSubtype__Aura                                                  = 0,
	ESparksAccountItemSubtype__Guitar                                                = 1,
	ESparksAccountItemSubtype__Bass                                                  = 2,
	ESparksAccountItemSubtype__Keyboard                                              = 3,
	ESparksAccountItemSubtype__Microphone                                            = 4,
	ESparksAccountItemSubtype__Drums                                                 = 5,
	ESparksAccountItemSubtype__SpotlightAnim                                         = 6,
	ESparksAccountItemSubtype__Song                                                  = 7,
	ESparksAccountItemSubtype__None                                                  = 8,
	ESparksAccountItemSubtype__NumAccountItemTypes                                   = 8,
	ESparksAccountItemSubtype__ESparksAccountItemSubtype_MAX                         = 9
};

/// Enum /Script/SparksCoreRuntime.EBassMidiNoteEvent
/// Size: 0x25
enum class EBassMidiNoteEvent : uint8_t
{
	EBassMidiNoteEvent__None                                                         = 0,
	EBassMidiNoteEvent__FretPosition1                                                = 1,
	EBassMidiNoteEvent__FretPosition2                                                = 2,
	EBassMidiNoteEvent__FretPosition3                                                = 3,
	EBassMidiNoteEvent__FretPosition4                                                = 4,
	EBassMidiNoteEvent__FretPosition5                                                = 5,
	EBassMidiNoteEvent__FretPosition6                                                = 6,
	EBassMidiNoteEvent__FretPosition7                                                = 7,
	EBassMidiNoteEvent__FretPosition8                                                = 8,
	EBassMidiNoteEvent__FretPosition9                                                = 9,
	EBassMidiNoteEvent__FretPosition10                                               = 10,
	EBassMidiNoteEvent__FretPosition11                                               = 11,
	EBassMidiNoteEvent__FretPosition12                                               = 12,
	EBassMidiNoteEvent__FretPosition13                                               = 13,
	EBassMidiNoteEvent__FretPosition14                                               = 14,
	EBassMidiNoteEvent__FretPosition15                                               = 15,
	EBassMidiNoteEvent__FretPosition16                                               = 16,
	EBassMidiNoteEvent__FretPosition17                                               = 17,
	EBassMidiNoteEvent__FretPosition18                                               = 18,
	EBassMidiNoteEvent__FretPosition19                                               = 19,
	EBassMidiNoteEvent__FretPosition20                                               = 20,
	EBassMidiNoteEvent__StrumDown                                                    = 21,
	EBassMidiNoteEvent__StrumUp                                                      = 22,
	EBassMidiNoteEvent__ChordShape                                                   = 23,
	EBassMidiNoteEvent__EBassMidiNoteEvent_MAX                                       = 24
};

/// Enum /Script/SparksCoreRuntime.EBassMidiTextEvent
/// Size: 0x10
enum class EBassMidiTextEvent : uint8_t
{
	EBassMidiTextEvent__None                                                         = 0,
	EBassMidiTextEvent__PlayingMellow                                                = 1,
	EBassMidiTextEvent__PlayingStandard                                              = 2,
	EBassMidiTextEvent__PlayingIntense                                               = 3,
	EBassMidiTextEvent__IdleRhythmMellow                                             = 4,
	EBassMidiTextEvent__IdleRhythmStandard                                           = 5,
	EBassMidiTextEvent__IdleRhythmIntense                                            = 6,
	EBassMidiTextEvent__IdleRealtime                                                 = 7,
	EBassMidiTextEvent__Pickup                                                       = 8,
	EBassMidiTextEvent__EBassMidiTextEvent_MAX                                       = 9
};

/// Enum /Script/SparksCoreRuntime.EDrumMidiNoteEvent
/// Size: 0x30
enum class EDrumMidiNoteEvent : uint8_t
{
	EDrumMidiNoteEvent__None                                                         = 0,
	EDrumMidiNoteEvent__KickHit_RightFoot                                            = 1,
	EDrumMidiNoteEvent__HiHatPedalUp_LeftFoot                                        = 2,
	EDrumMidiNoteEvent__SnareHit_LeftHand                                            = 3,
	EDrumMidiNoteEvent__SnareHit_RightHand                                           = 4,
	EDrumMidiNoteEvent__HiHatHit_LeftHand                                            = 5,
	EDrumMidiNoteEvent__HiHatHit_RightHand                                           = 6,
	EDrumMidiNoteEvent__Percussion_RightHand                                         = 7,
	EDrumMidiNoteEvent__Crash1HardHit_LeftHand                                       = 8,
	EDrumMidiNoteEvent__Crash1SoftHit_LeftHand                                       = 9,
	EDrumMidiNoteEvent__Crash1Hardhit_RightHand                                      = 10,
	EDrumMidiNoteEvent__Crash1SoftHit_RightHand                                      = 11,
	EDrumMidiNoteEvent__Crash2HardHit_RightHand                                      = 12,
	EDrumMidiNoteEvent__Crash2SoftHit_RightHand                                      = 13,
	EDrumMidiNoteEvent__Crash1Choke                                                  = 14,
	EDrumMidiNoteEvent__Crash2Choke                                                  = 15,
	EDrumMidiNoteEvent__RideCymbalHit_RightHand                                      = 16,
	EDrumMidiNoteEvent__RideCymbalHit_LeftHand                                       = 17,
	EDrumMidiNoteEvent__Crash2Hit_LeftHand                                           = 18,
	EDrumMidiNoteEvent__Crash2SoftHit_LeftHand                                       = 19,
	EDrumMidiNoteEvent__Tom1Hit_LeftHand                                             = 20,
	EDrumMidiNoteEvent__Tom1Hit_RightHand                                            = 21,
	EDrumMidiNoteEvent__Tom2Hit_LeftHand                                             = 22,
	EDrumMidiNoteEvent__Tom2Hit_RightHand                                            = 23,
	EDrumMidiNoteEvent__FloorTomHit_LeftHand                                         = 24,
	EDrumMidiNoteEvent__FloorTomHit_RightHand                                        = 25,
	EDrumMidiNoteEvent__SticksHeld                                                   = 26,
	EDrumMidiNoteEvent__SnareHit_LeftHand_Soft                                       = 27,
	EDrumMidiNoteEvent__SnareHit_RightHand_Soft                                      = 28,
	EDrumMidiNoteEvent__EDrumMidiNoteEvent_MAX                                       = 29
};

/// Enum /Script/SparksCoreRuntime.EDrumMidiTextEvent
/// Size: 0x10
enum class EDrumMidiTextEvent : uint8_t
{
	EDrumMidiTextEvent__None                                                         = 0,
	EDrumMidiTextEvent__PlayingMellow                                                = 1,
	EDrumMidiTextEvent__PlayingStandard                                              = 2,
	EDrumMidiTextEvent__PlayingIntense                                               = 3,
	EDrumMidiTextEvent__IdleRhythmMellow                                             = 4,
	EDrumMidiTextEvent__IdleRhythmStandard                                           = 5,
	EDrumMidiTextEvent__IdleRhythmIntense                                            = 6,
	EDrumMidiTextEvent__IdleRealtime                                                 = 7,
	EDrumMidiTextEvent__Pickup                                                       = 8,
	EDrumMidiTextEvent__EDrumMidiTextEvent_MAX                                       = 9
};

/// Enum /Script/SparksCoreRuntime.EGuitarMidiNoteEvent
/// Size: 0x25
enum class EGuitarMidiNoteEvent : uint8_t
{
	EGuitarMidiNoteEvent__None                                                       = 0,
	EGuitarMidiNoteEvent__FretPosition1                                              = 1,
	EGuitarMidiNoteEvent__FretPosition2                                              = 2,
	EGuitarMidiNoteEvent__FretPosition3                                              = 3,
	EGuitarMidiNoteEvent__FretPosition4                                              = 4,
	EGuitarMidiNoteEvent__FretPosition5                                              = 5,
	EGuitarMidiNoteEvent__FretPosition6                                              = 6,
	EGuitarMidiNoteEvent__FretPosition7                                              = 7,
	EGuitarMidiNoteEvent__FretPosition8                                              = 8,
	EGuitarMidiNoteEvent__FretPosition9                                              = 9,
	EGuitarMidiNoteEvent__FretPosition10                                             = 10,
	EGuitarMidiNoteEvent__FretPosition11                                             = 11,
	EGuitarMidiNoteEvent__FretPosition12                                             = 12,
	EGuitarMidiNoteEvent__FretPosition13                                             = 13,
	EGuitarMidiNoteEvent__FretPosition14                                             = 14,
	EGuitarMidiNoteEvent__FretPosition15                                             = 15,
	EGuitarMidiNoteEvent__FretPosition16                                             = 16,
	EGuitarMidiNoteEvent__FretPosition17                                             = 17,
	EGuitarMidiNoteEvent__FretPosition18                                             = 18,
	EGuitarMidiNoteEvent__FretPosition19                                             = 19,
	EGuitarMidiNoteEvent__FretPosition20                                             = 20,
	EGuitarMidiNoteEvent__StrumDown                                                  = 21,
	EGuitarMidiNoteEvent__StrumUp                                                    = 22,
	EGuitarMidiNoteEvent__ChordShape                                                 = 23,
	EGuitarMidiNoteEvent__EGuitarMidiNoteEvent_MAX                                   = 24
};

/// Enum /Script/SparksCoreRuntime.EGuitarMidiTextEvent
/// Size: 0x12
enum class EGuitarMidiTextEvent : uint8_t
{
	EGuitarMidiTextEvent__None                                                       = 0,
	EGuitarMidiTextEvent__PlayingMellow                                              = 1,
	EGuitarMidiTextEvent__PlayingStandard                                            = 2,
	EGuitarMidiTextEvent__PlayingIntense                                             = 3,
	EGuitarMidiTextEvent__IdleRhythmMellow                                           = 4,
	EGuitarMidiTextEvent__IdleRhythmStandard                                         = 5,
	EGuitarMidiTextEvent__IdleRhythmIntense                                          = 6,
	EGuitarMidiTextEvent__IdleRealtime                                               = 7,
	EGuitarMidiTextEvent__UsingInstrumentGuitar                                      = 8,
	EGuitarMidiTextEvent__UsingInstrumentKeytar                                      = 9,
	EGuitarMidiTextEvent__Pickup                                                     = 10,
	EGuitarMidiTextEvent__EGuitarMidiTextEvent_MAX                                   = 11
};

/// Enum /Script/SparksCoreRuntime.EVocalsMidiNoteEvent
/// Size: 0x02
enum class EVocalsMidiNoteEvent : uint8_t
{
	EVocalsMidiNoteEvent__None                                                       = 0,
	EVocalsMidiNoteEvent__EVocalsMidiNoteEvent_MAX                                   = 1
};

/// Enum /Script/SparksCoreRuntime.EVocalsMidiTextEvent
/// Size: 0x10
enum class EVocalsMidiTextEvent : uint8_t
{
	EVocalsMidiTextEvent__None                                                       = 0,
	EVocalsMidiTextEvent__PlayingMellow                                              = 1,
	EVocalsMidiTextEvent__PlayingStandard                                            = 2,
	EVocalsMidiTextEvent__PlayingIntense                                             = 3,
	EVocalsMidiTextEvent__IdleRhythmMellow                                           = 4,
	EVocalsMidiTextEvent__IdleRhythmStandard                                         = 5,
	EVocalsMidiTextEvent__IdleRhythmIntense                                          = 6,
	EVocalsMidiTextEvent__IdleRealtime                                               = 7,
	EVocalsMidiTextEvent__Pickup                                                     = 8,
	EVocalsMidiTextEvent__EVocalsMidiTextEvent_MAX                                   = 9
};

/// Class /Script/SparksCoreRuntime.SparksCore_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCore_BPFL : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.InstrumentTypeToCosmeticSubtype
	// ESparksAccountItemSubtype InstrumentTypeToCosmeticSubtype(ESparksInstrumentType Instrument);                          // [0xac09a44] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiTextStringsFromEnums
	// TArray<FString> GetVocalsMidiTextStringsFromEnums(TArray<EVocalsMidiTextEvent>& MidiTextEvents);                      // [0xac09380] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiTextStringFromEnum
	// FString GetVocalsMidiTextStringFromEnum(EVocalsMidiTextEvent MidiTextEvent);                                          // [0xac092a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiTextEnumsFromStrings
	// TArray<EVocalsMidiTextEvent> GetVocalsMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings);                // [0xac091ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiTextEnumFromString
	// EVocalsMidiTextEvent GetVocalsMidiTextEnumFromString(FString MidiTextEventString);                                    // [0xac08b00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiNoteIntegersFromEnums
	// TArray<char> GetVocalsMidiNoteIntegersFromEnums(TArray<EVocalsMidiNoteEvent>& MidiNoteEvents);                        // [0xac08438] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiNoteIntegerFromEnum
	// char GetVocalsMidiNoteIntegerFromEnum(EVocalsMidiNoteEvent MidiNoteEvent);                                            // [0xac08370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiNoteEnumsFromIntegers
	// TArray<EVocalsMidiNoteEvent> GetVocalsMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts);                     // [0xac07cac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiNoteEnumFromInteger
	// EVocalsMidiNoteEvent GetVocalsMidiNoteEnumFromInteger(char MidiNoteEventInt);                                         // [0xac07be4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiTextStringsFromEnums
	// TArray<FString> GetGuitarMidiTextStringsFromEnums(TArray<EGuitarMidiTextEvent>& MidiTextEvents);                      // [0xac074fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiTextStringFromEnum
	// FString GetGuitarMidiTextStringFromEnum(EGuitarMidiTextEvent MidiTextEvent);                                          // [0xac0741c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiTextEnumsFromStrings
	// TArray<EGuitarMidiTextEvent> GetGuitarMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings);                // [0xac07368] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiTextEnumFromString
	// EGuitarMidiTextEvent GetGuitarMidiTextEnumFromString(FString MidiTextEventString);                                    // [0xac06c7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiNoteIntegersFromEnums
	// TArray<char> GetGuitarMidiNoteIntegersFromEnums(TArray<EGuitarMidiNoteEvent>& MidiNoteEvents);                        // [0xac065b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiNoteIntegerFromEnum
	// char GetGuitarMidiNoteIntegerFromEnum(EGuitarMidiNoteEvent MidiNoteEvent);                                            // [0xac064ec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiNoteEnumsFromIntegers
	// TArray<EGuitarMidiNoteEvent> GetGuitarMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts);                     // [0xac05e28] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiNoteEnumFromInteger
	// EGuitarMidiNoteEvent GetGuitarMidiNoteEnumFromInteger(char MidiNoteEventInt);                                         // [0xac05d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiTextStringsFromEnums
	// TArray<FString> GetDrumMidiTextStringsFromEnums(TArray<EDrumMidiTextEvent>& MidiTextEvents);                          // [0xac0569c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiTextStringFromEnum
	// FString GetDrumMidiTextStringFromEnum(EDrumMidiTextEvent MidiTextEvent);                                              // [0xac055bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiTextEnumsFromStrings
	// TArray<EDrumMidiTextEvent> GetDrumMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings);                    // [0xac05508] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiTextEnumFromString
	// EDrumMidiTextEvent GetDrumMidiTextEnumFromString(FString MidiTextEventString);                                        // [0xac04e1c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiNoteIntegersFromEnums
	// TArray<char> GetDrumMidiNoteIntegersFromEnums(TArray<EDrumMidiNoteEvent>& MidiNoteEvents);                            // [0xac04754] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiNoteIntegerFromEnum
	// char GetDrumMidiNoteIntegerFromEnum(EDrumMidiNoteEvent MidiNoteEvent);                                                // [0xac0468c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiNoteEnumsFromIntegers
	// TArray<EDrumMidiNoteEvent> GetDrumMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts);                         // [0xac03fc8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiNoteEnumFromInteger
	// EDrumMidiNoteEvent GetDrumMidiNoteEnumFromInteger(char MidiNoteEventInt);                                             // [0xac03f00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiTextStringsFromEnums
	// TArray<FString> GetBassMidiTextStringsFromEnums(TArray<EBassMidiTextEvent>& MidiTextEvents);                          // [0xac0383c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiTextStringFromEnum
	// FString GetBassMidiTextStringFromEnum(EBassMidiTextEvent MidiTextEvent);                                              // [0xac0375c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiTextEnumsFromStrings
	// TArray<EBassMidiTextEvent> GetBassMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings);                    // [0xac036a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiTextEnumFromString
	// EBassMidiTextEvent GetBassMidiTextEnumFromString(FString MidiTextEventString);                                        // [0xac02fbc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiNoteIntegersFromEnums
	// TArray<char> GetBassMidiNoteIntegersFromEnums(TArray<EBassMidiNoteEvent>& MidiNoteEvents);                            // [0xac028f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiNoteIntegerFromEnum
	// char GetBassMidiNoteIntegerFromEnum(EBassMidiNoteEvent MidiNoteEvent);                                                // [0xac0282c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiNoteEnumsFromIntegers
	// TArray<EBassMidiNoteEvent> GetBassMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts);                         // [0xac02168] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiNoteEnumFromInteger
	// EBassMidiNoteEvent GetBassMidiNoteEnumFromInteger(char MidiNoteEventInt);                                             // [0xac020a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllVocalsMidiTextStrings
	// TArray<FString> GetAllVocalsMidiTextStrings();                                                                        // [0xac02034] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllVocalsMidiTextEnums
	// TArray<EVocalsMidiTextEvent> GetAllVocalsMidiTextEnums();                                                             // [0xac019b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllVocalsMidiNoteIntegers
	// TArray<char> GetAllVocalsMidiNoteIntegers();                                                                          // [0xac0193c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllVocalsMidiNoteEnums
	// TArray<EVocalsMidiNoteEvent> GetAllVocalsMidiNoteEnums();                                                             // [0xac012b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllGuitarMidiTextStrings
	// TArray<FString> GetAllGuitarMidiTextStrings();                                                                        // [0xac0124c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllGuitarMidiTextEnums
	// TArray<EGuitarMidiTextEvent> GetAllGuitarMidiTextEnums();                                                             // [0xac00bc8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllGuitarMidiNoteIntegers
	// TArray<char> GetAllGuitarMidiNoteIntegers();                                                                          // [0xac00b54] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllGuitarMidiNoteEnums
	// TArray<EGuitarMidiNoteEvent> GetAllGuitarMidiNoteEnums();                                                             // [0xac004d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllDrumMidiTextStrings
	// TArray<FString> GetAllDrumMidiTextStrings();                                                                          // [0xac00464] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllDrumMidiTextEnums
	// TArray<EDrumMidiTextEvent> GetAllDrumMidiTextEnums();                                                                 // [0xabffde0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllDrumMidiNoteIntegers
	// TArray<char> GetAllDrumMidiNoteIntegers();                                                                            // [0xabffd6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllDrumMidiNoteEnums
	// TArray<EDrumMidiNoteEvent> GetAllDrumMidiNoteEnums();                                                                 // [0xabff6e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllBassMidiTextStrings
	// TArray<FString> GetAllBassMidiTextStrings();                                                                          // [0xabff67c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllBassMidiTextEnums
	// TArray<EBassMidiTextEvent> GetAllBassMidiTextEnums();                                                                 // [0xabfeff8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllBassMidiNoteIntegers
	// TArray<char> GetAllBassMidiNoteIntegers();                                                                            // [0xabfef84] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllBassMidiNoteEnums
	// TArray<EBassMidiNoteEvent> GetAllBassMidiNoteEnums();                                                                 // [0xabfe900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.CosmeticSubtypeToInstrumentType
	// ESparksInstrumentType CosmeticSubtypeToInstrumentType(ESparksAccountItemSubtype Subtype);                             // [0xabfe818] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCoreRuntime.SparksDrumEventsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksDrumEventsInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Tom2_Hit
	// void Bind_Tom2_Hit(FDelegateProperty& Callback);                                                                      // [0xabfe774] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Tom1_Hit
	// void Bind_Tom1_Hit(FDelegateProperty& Callback);                                                                      // [0x891b3b4] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_SnareHit
	// void Bind_SnareHit(FDelegateProperty& Callback);                                                                      // [0xabfe6d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_RideHardHit
	// void Bind_RideHardHit(FDelegateProperty& Callback);                                                                   // [0xabfe62c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_KickHit
	// void Bind_KickHit(FDelegateProperty& Callback);                                                                       // [0x9ee9558] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_HiHatPedalUp
	// void Bind_HiHatPedalUp(FDelegateProperty& Callback);                                                                  // [0xabfe588] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_HiHatHit
	// void Bind_HiHatHit(FDelegateProperty& Callback);                                                                      // [0xabfe4e4] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_FloorTomHit
	// void Bind_FloorTomHit(FDelegateProperty& Callback);                                                                   // [0x9ee87e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash2_SoftHit
	// void Bind_Crash2_SoftHit(FDelegateProperty& Callback);                                                                // [0x80e9118] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash2_HardHit
	// void Bind_Crash2_HardHit(FDelegateProperty& Callback);                                                                // [0x80ea154] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash2_Choke
	// void Bind_Crash2_Choke(FDelegateProperty& Callback);                                                                  // [0xabfe440] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash1_SoftHit
	// void Bind_Crash1_SoftHit(FDelegateProperty& Callback);                                                                // [0x80ea00c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash1_HardHit
	// void Bind_Crash1_HardHit(FDelegateProperty& Callback);                                                                // [0x80e9074] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash1_Choke
	// void Bind_Crash1_Choke(FDelegateProperty& Callback);                                                                  // [0x80e8fd0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_CowbellHit
	// void Bind_CowbellHit(FDelegateProperty& Callback);                                                                    // [0x80ea0b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SparksCoreRuntime.SparksGameUserSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USparksGameUserSettings : public UObject
{ 
public:
	float                                              GameplayMusicVolume;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED


	/// Functions
	// Function /Script/SparksCoreRuntime.SparksGameUserSettings.SetGameplayMusicVolume
	// void SetGameplayMusicVolume(float NewVolume);                                                                         // [0xac09b04] Final|Native|Public  
	// Function /Script/SparksCoreRuntime.SparksGameUserSettings.GetGameplayMusicVolume
	// float GetGameplayMusicVolume();                                                                                       // [0x6743f90] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/SparksCoreRuntime.SparksSettingsControllerComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class USparksSettingsControllerComponent : public UControllerComponent
{ 
public:
	class USparksGameUserSettings*                     SparksGameUserSettings;                                     // 0x00A0   (0x0008)  
	class USoundControlBusMix*                         SparksMix;                                                  // 0x00A8   (0x0008)  
	class USoundControlBus*                            SparksBus;                                                  // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/SparksCoreRuntime.SparksSettingsControllerComponent.GetSparksGameUserSettings
	// class USparksGameUserSettings* GetSparksGameUserSettings();                                                           // [0xac07bc0] Final|Native|Public  
};

