
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: TargetingSystem

/// Class /Script/VerseFortniteGameplayAbilities.FortAnimNotify_UEFNGameplayTag
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortAnimNotify_UEFNGameplayTag : public UFortAnimNotify_GameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim
/// Size: 0x0010 (0x000B60 - 0x000B70)
class UFortGameplayAbility_PlayAnim : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2928;

public:
	CMember(class UAnimMontage*)                       MontageToPlay                                               OFFSET(get<T>, {0xB60, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0xB68, 4, 0, 0})


	/// Functions
	// Function /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnInterrupted
	// void OnInterrupted();                                                                                                    // [0xa618f38] Final|Native|Private 
	// Function /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnCompleted
	// void OnCompleted();                                                                                                      // [0xa618f38] Final|Native|Private 
	// Function /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnCancelled
	// void OnCancelled();                                                                                                      // [0xa618f38] Final|Native|Private 
	// Function /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnBlendOut
	// void OnBlendOut();                                                                                                       // [0x32e4b44] Final|Native|Private 
};

/// Class /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnimAndApplyEffect
/// Size: 0x0018 (0x000B70 - 0x000B88)
class UFortGameplayAbility_PlayAnimAndApplyEffect : public UFortGameplayAbility_PlayAnim
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2952;

public:
	DMember(bool)                                      bWaitForAnimNotify                                          OFFSET(get<bool>, {0xB70, 1, 0, 0})
	CMember(class UClass*)                             EffectToApply                                               OFFSET(get<T>, {0xB78, 8, 0, 0})
	CMember(class UTargetingPreset*)                   TargetingPreset                                             OFFSET(get<T>, {0xB80, 8, 0, 0})
};

/// Class /Script/VerseFortniteGameplayAbilities.VerseGameplayAttribute
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseGameplayAttribute : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VerseFortniteGameplayAbilities.VerseGameplayAttribute.GetGameplayAttributeForClass
	// FGameplayAttribute GetGameplayAttributeForClass(class UClass*& AttributeClass);                                          // [0xa9397e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VerseFortniteGameplayAbilities.VerseFortniteAbilityComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class UVerseFortniteAbilityComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

