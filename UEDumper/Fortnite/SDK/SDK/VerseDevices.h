
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures

/// Class /Script/VerseDevices.VerseCreativePropAsset
/// Size: 0x0068 (0x000028 - 0x000090)
class UVerseCreativePropAsset : public UObject
{ 
public:
	FName                                              AssetPathName;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class ULevelSaveRecord*                            LevelSaveRecord;                                            // 0x0030   (0x0008)  
	SDK_UNDEFINED(32,9220) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                         // 0x0038   (0x0020)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0058   (0x0038)  MISSED
};

/// Struct /Script/VerseDevices.PlaylistOptionScriptValue
/// Size: 0x0008 (0x000098 - 0x0000A0)
struct FPlaylistOptionScriptValue : FPlaylistOptionValue
{ 
	class UClass*                                      Value;                                                      // 0x0098   (0x0008)  
};

/// Class /Script/VerseDevices.PlaylistUserOptionScript
/// Size: 0x0018 (0x0001D0 - 0x0001E8)
class UPlaylistUserOptionScript : public UPlaylistUserOptionBase
{ 
public:
	TArray<FPlaylistOptionScriptValue>                 OptionValues;                                               // 0x01D0   (0x0010)  
	int32_t                                            DefaultValueIndex;                                          // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01E4   (0x0004)  MISSED
};

/// Class /Script/VerseDevices.ScriptDevice
/// Size: 0x0038 (0x000BC8 - 0x000C00)
class AScriptDevice : public ABuildingProp
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0BC8   (0x0008)  MISSED
	class UVerseCreativeDevice*                        Script;                                                     // 0x0BD0   (0x0008)  
	class UVerseCreativeDevice*                        ScriptInstance;                                             // 0x0BD8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0BE0   (0x0020)  MISSED


	/// Functions
	// Function /Script/VerseDevices.ScriptDevice.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                     // [0xa6d3ed0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VerseDevices.ScriptDevice.BP_SetVisibility
	// void BP_SetVisibility(bool bVisible);                                                                                 // [0x211c0a0] Event|Public|BlueprintEvent 
};

/// Class /Script/VerseDevices.VerseMovableObjectBase
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UVerseMovableObjectBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0028   (0x0078)  MISSED
};

/// Class /Script/VerseDevices.VerseCreativeDevice
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UVerseCreativeDevice : public UVerseMovableObjectBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A0   (0x0010)  MISSED
};

/// Class /Script/VerseDevices.VerseCreativeObject
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UVerseCreativeObject : public UVerseMovableObjectBase
{ 
public:
	class AActor*                                      SavedActor;                                                 // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A8   (0x0018)  MISSED
};

/// Class /Script/VerseDevices.VerseCreativeObjectQuotaHelperComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UVerseCreativeObjectQuotaHelperComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00A0   (0x0018)  MISSED
};

/// Class /Script/VerseDevices.VerseDevicesFeatureAction_RegisterWrapperClasses
/// Size: 0x0028 (0x000028 - 0x000050)
class UVerseDevicesFeatureAction_RegisterWrapperClasses : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,9221) /* TWeakObjectPtr<UVerseDeviceWrapperClassMap*> */ __um(DeviceToWrapperClassMapAsset);  // 0x0028   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/VerseDevices.VerseDeviceSubsystem
/// Size: 0x0110 (0x000030 - 0x000140)
class UVerseDeviceSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(80,9222) /* TMap<TWeakObjectPtr<UClass*>, UVerseClass*> */ __um(DeviceClassToVerseClassMap);     // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_6[0xC0];                                      // 0x0080   (0x00C0)  MISSED
};

/// Class /Script/VerseDevices.VerseDeviceWrapperClassMap
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseDeviceWrapperClassMap : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,9223) /* TMap<TWeakObjectPtr<UClass*>, UClass*> */ __um(DeviceClassMap);                      // 0x0030   (0x0050)  
};

/// Struct /Script/VerseDevices.VerseDeviceFunctionPayload
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVerseDeviceFunctionPayload
{ 
	class AController*                                 Instigator;                                                 // 0x0000   (0x0008)  
};

