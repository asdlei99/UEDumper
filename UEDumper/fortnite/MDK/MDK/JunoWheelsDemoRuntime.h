
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AttachableWheelsRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ItemizationCoreRuntime

/// Class /Script/JunoWheelsDemoRuntime.JunoWheelActor
/// Size: 0x00F0 (0x000328 - 0x000418)
class AJunoWheelActor : public AAttachableWheel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(class UFortHealthSet*)                     HealthSet                                                   OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UFortAbilitySystemComponent*)        AbilitySystemComponent                                      OFFSET(get<T>, {0x380, 8, 0, 0})
	SMember(FGuid)                                     WheelGuid                                                   OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	CMember(class UItemDefinitionBase*)                AssociatedItem                                              OFFSET(get<T>, {0x3B8, 8, 0, 0})
	SMember(FAttachableWheelAttachData)                LocalAttachData                                             OFFSET(getStruct<T>, {0x3C0, 88, 0, 0})


	/// Functions
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetAssociatedItem
	// void SetAssociatedItem(class UItemDefinitionBase* ItemDefinition);                                                       // [0xc0fb7d8] Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.OnHeldObjectPickedUp
	// void OnHeldObjectPickedUp();                                                                                             // [0xc0fb7c4] Final|Native|Private 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleOutOfHealth
	// void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, class AController* InEventInstigator, class AActor* InDamageCauser); // [0xb7df3fc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleDamaged
	// void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser); // [0x3d1d968] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetMaxHealth
	// float GetMaxHealth();                                                                                                    // [0xc0fb794] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetHealth
	// float GetHealth();                                                                                                       // [0xc0fb764] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.AttachToUsingCachedData
	// bool AttachToUsingCachedData(class UPrimitiveComponent* InAttachComponent);                                              // [0xc0fb6d4] Final|Native|Public|BlueprintCallable 
};

