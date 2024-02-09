
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{ 
public:
	SDK_UNDEFINED(16,14117) /* FString */              __um(MeshName);                                             // 0x0060   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{ 
public:
	SDK_UNDEFINED(16,14118) /* FString */              __um(TextureName);                                          // 0x0060   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeResultMeshError : public UInterchangeResultError
{ 
public:
	SDK_UNDEFINED(16,14119) /* FString */              __um(MeshName);                                             // 0x0060   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_Generic
/// Size: 0x0018 (0x000070 - 0x000088)
class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning
{ 
public:
	SDK_UNDEFINED(24,14120) /* FText */                __um(Text);                                                 // 0x0070   (0x0018)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError_Generic
/// Size: 0x0018 (0x000070 - 0x000088)
class UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError
{ 
public:
	SDK_UNDEFINED(24,14121) /* FText */                __um(Text);                                                 // 0x0070   (0x0018)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
/// Size: 0x0008 (0x000070 - 0x000078)
class UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning
{ 
public:
	int32_t                                            ExcessUVs;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
/// Size: 0x0028 (0x000070 - 0x000098)
class UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning
{ 
public:
	SDK_UNDEFINED(24,14122) /* FText */                __um(Text);                                                 // 0x0070   (0x0018)  
	SDK_UNDEFINED(16,14123) /* FString */              __um(MaterialName);                                         // 0x0088   (0x0010)  
};

