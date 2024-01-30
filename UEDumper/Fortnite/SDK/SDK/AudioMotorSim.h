
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/AudioMotorSim.MotorSimEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMotorSimEntry
{ 
	SDK_UNDEFINED(16,11606) /* TScriptInterface<Class> */ __um(Sim);                                               // 0x0000   (0x0010)  
	int32_t                                            SortOrder;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/AudioMotorSim.AudioMotorModelComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UAudioMotorModelComponent : public UActorComponent
{ 
public:
	TArray<FMotorSimEntry>                             SimComponents;                                              // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,11607) /* TArray<TScriptInterface<Class>> */ __um(AudioComponents);                           // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x00C0   (0x0040)  MISSED


	/// Functions
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.Update
	// void Update(FAudioMotorSimInputContext Input);                                                                        // [0xa7fb778] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.StopOutput
	// void StopOutput();                                                                                                    // [0x212f900] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.StartOutput
	// void StartOutput();                                                                                                   // [0x6e94000] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.Reset
	// void Reset();                                                                                                         // [0x219df9c] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent
	// void RemoveMotorSimComponent(TScriptInterface<Class> InComponent);                                                    // [0xa7fb5b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent
	// void RemoveMotorAudioComponent(TScriptInterface<Class> InComponent);                                                  // [0xa7fb460] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo
	// FAudioMotorSimRuntimeContext GetRuntimeInfo();                                                                        // [0xa7fb43c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetRpm
	// float GetRpm();                                                                                                       // [0x63b1c64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetGear
	// int32_t GetGear();                                                                                                    // [0x35a13ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetCachedInputData
	// FAudioMotorSimInputContext GetCachedInputData();                                                                      // [0xa7fb3fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent
	// void AddMotorSimComponent(TScriptInterface<Class> InComponent, int32_t SortOrder);                                    // [0x1e6e674] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent
	// void AddMotorAudioComponent(TScriptInterface<Class> InComponent);                                                     // [0x219e004] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMotorSim.AudioMotorSim
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMotorSim : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AudioMotorSim.AudioMotorSim.Reset
	// void Reset();                                                                                                         // [0x3346b94] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorSim.GetEnabled
	// bool GetEnabled();                                                                                                    // [0x2a89fe4] Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMotorSim.AudioMotorSimComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UAudioMotorSimComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A0   (0x0008)  MISSED
	bool                                               bEnabled;                                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/AudioMotorSim.AudioMotorSimComponent.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0xa7fb6f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorSimComponent.BP_Update
	// bool BP_Update(FAudioMotorSimInputContext& Input, FAudioMotorSimRuntimeContext& RuntimeInfo);                         // [0x211c0a0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AudioMotorSim.AudioMotorSimComponent.BP_Reset
	// void BP_Reset();                                                                                                      // [0x211c0a0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/AudioMotorSim.AudioMotorSimOutput
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMotorSimOutput : public UInterface
{ 
public:
};

/// Struct /Script/AudioMotorSim.AudioMotorSimInputContext
/// Size: 0x002C (0x000000 - 0x00002C)
struct FAudioMotorSimInputContext
{ 
	float                                              DeltaTime;                                                  // 0x0000   (0x0004)  
	float                                              Speed;                                                      // 0x0004   (0x0004)  
	float                                              ForwardSpeed;                                               // 0x0008   (0x0004)  
	float                                              SideSpeed;                                                  // 0x000C   (0x0004)  
	float                                              UpSpeed;                                                    // 0x0010   (0x0004)  
	float                                              Throttle;                                                   // 0x0014   (0x0004)  
	float                                              Brake;                                                      // 0x0018   (0x0004)  
	float                                              SurfaceFrictionModifier;                                    // 0x001C   (0x0004)  
	float                                              MotorFrictionModifier;                                      // 0x0020   (0x0004)  
	float                                              Boost;                                                      // 0x0024   (0x0004)  
	bool                                               bDriving;                                                   // 0x0028   (0x0001)  
	bool                                               bGrounded;                                                  // 0x0029   (0x0001)  
	bool                                               bCanShift;                                                  // 0x002A   (0x0001)  
	bool                                               bClutchEngaged;                                             // 0x002B   (0x0001)  
};

/// Struct /Script/AudioMotorSim.AudioMotorSimRuntimeContext
/// Size: 0x0014 (0x000000 - 0x000014)
struct FAudioMotorSimRuntimeContext
{ 
	bool                                               bShifting;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Gear;                                                       // 0x0004   (0x0004)  
	float                                              RPM;                                                        // 0x0008   (0x0004)  
	float                                              Volume;                                                     // 0x000C   (0x0004)  
	float                                              pitch;                                                      // 0x0010   (0x0004)  
};

