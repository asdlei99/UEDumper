
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/JunoRidableRuntime.JunoRidableCheatManager
/// Size: 0x0040 (0x000028 - 0x000068)
class UJunoRidableCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UClass*>)                   CreatureRidableComponentClass                               OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PlayerRidingComponentClass                                  OFFSET(get<T>, {0x48, 32, 0, 0})


	/// Functions
	// Function /Script/JunoRidableRuntime.JunoRidableCheatManager.NativeAddToCheatManager
	// void NativeAddToCheatManager();                                                                                          // [0x32e6c74] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoRidableRuntime.JunoRidableCheatManager.JunoStopRiding
	// void JunoStopRiding();                                                                                                   // [0x22f0068] BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/JunoRidableRuntime.JunoRidableCheatManager.JunoStartRiding
	// void JunoStartRiding();                                                                                                  // [0x1f5bf84] BlueprintAuthorityOnly|Exec|Native|Public 
};

