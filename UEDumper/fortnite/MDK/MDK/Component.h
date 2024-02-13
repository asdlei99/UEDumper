
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Component.CameraProxyActor
/// Size: 0x0000 (0x0009A0 - 0x0009A0)
class ACameraProxyActor : public ACameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2464;

public:
};

/// Class /Script/Component.LightProxyActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ALightProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UPointLightComponent*)               LightComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

