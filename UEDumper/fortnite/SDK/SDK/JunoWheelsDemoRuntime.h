
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AttachableWheelsRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/JunoWheelsDemoRuntime.JunoWheelActor
/// Size: 0x00F0 (0x000328 - 0x000418)
class AJunoWheelActor : public AAttachableWheel
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0328   (0x0050)  MISSED
	class UFortHealthSet*                              HealthSet;                                                  // 0x0378   (0x0008)  
	class UFortAbilitySystemComponent*                 AbilitySystemComponent;                                     // 0x0380   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0388   (0x0018)  MISSED
	FGuid                                              WheelGuid;                                                  // 0x03A0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x03B0   (0x0008)  MISSED
	class UFortItemDefinition*                         AssociatedItem;                                             // 0x03B8   (0x0008)  
	FAttachableWheelAttachData                         LocalAttachData;                                            // 0x03C0   (0x0058)  


	/// Functions
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetAssociatedItem
	// void SetAssociatedItem(class UFortItemDefinition* ItemDefinition);                                                    // [0xc14e7bc] Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.OnHeldObjectPickedUp
	// void OnHeldObjectPickedUp();                                                                                          // [0xc14e7a8] Final|Native|Private 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleOutOfHealth
	// void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, class AController* InEventInstigator, class AActor* InDamageCauser); // [0xb6d3058] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleDamaged
	// void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser); // [0x130d900] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetMaxHealth
	// float GetMaxHealth();                                                                                                 // [0xc14e778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetHealth
	// float GetHealth();                                                                                                    // [0xc14e748] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.AttachToUsingCachedData
	// bool AttachToUsingCachedData(class UPrimitiveComponent* InAttachComponent);                                           // [0xc14e678] Final|Native|Public|BlueprintCallable 
};

