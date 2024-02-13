
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/InterchangeCore.InterchangeFactoryBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterchangeFactoryBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UInterchangeResultsContainer*)       Results                                                     OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBase.GetFactoryClass
	// class UClass* GetFactoryClass();                                                                                         // [0x2ba70cc] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeSourceData
/// Size: 0x0028 (0x000028 - 0x000050)
class UInterchangeSourceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceData.SetFilename
	// bool SetFilename(FString InFilename);                                                                                    // [0xc7e1530] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceData.GetFilename
	// FString GetFilename();                                                                                                   // [0xc7d1fc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeWriterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeWriterBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeCore.InterchangePipelineBase
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UInterchangePipelineBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UInterchangeResultsContainer*)       Results                                                     OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TMap<FName, FInterchangePipelinePropertyStates>) PropertiesStates                                      OFFSET(get<T>, {0x48, 80, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex
	// void ScriptedSetReimportSourceIndex(class UClass* ReimportObjectClass, int32_t SourceFileIndex);                         // [0xc7df35c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline
	// void ScriptedExecutePostImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport); // [0xc7deb10] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline
	// void ScriptedExecutePostFactoryPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport); // [0xc7de2c4] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline
	// void ScriptedExecutePipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*>& SourceDatas); // [0xc7ddba8] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline
	// void ScriptedExecuteExportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer);                              // [0x7853998] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates
	// FInterchangePipelinePropertyStates FindOrAddPropertyStates(FName PropertyPath);                                          // [0xc7cef60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist
	// bool DoesPropertyStatesExist(FName PropertyPath);                                                                        // [0xc7cecb4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeResult
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangeResult : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   SourceAssetName                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   DestinationAssetName                                        OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UClass*)                             AssetType                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FString)                                   InterchangeKey                                              OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultSuccess
/// Size: 0x0000 (0x000060 - 0x000060)
class UInterchangeResultSuccess : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning
/// Size: 0x0000 (0x000060 - 0x000060)
class UInterchangeResultWarning : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultError
/// Size: 0x0000 (0x000060 - 0x000060)
class UInterchangeResultError : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning_Generic
/// Size: 0x0018 (0x000060 - 0x000078)
class UInterchangeResultWarning_Generic : public UInterchangeResultWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultError_Generic
/// Size: 0x0018 (0x000060 - 0x000078)
class UInterchangeResultError_Generic : public UInterchangeResultError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultError_ReimportFail
/// Size: 0x0000 (0x000060 - 0x000060)
class UInterchangeResultError_ReimportFail : public UInterchangeResultError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultDisplay_Generic
/// Size: 0x0018 (0x000060 - 0x000078)
class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultsContainer
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangeResultsContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<class UInterchangeResult*>)         Results                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeTranslatorBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UInterchangeTranslatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UInterchangeResultsContainer*)       Results                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UInterchangeSourceData*)             SourceData                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeBaseNode
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangeBaseNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetParentUid
	// bool SetParentUid(FString ParentUid);                                                                                    // [0xc7e23c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetEnabled
	// bool SetEnabled(bool bIsEnabled);                                                                                        // [0xc7e1460] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetDisplayLabel
	// bool SetDisplayLabel(FString DisplayName);                                                                               // [0xc7e0d6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetAssetName
	// bool SetAssetName(FString AssetName);                                                                                    // [0xc7df4a0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.RemoveTargetNodeUid
	// bool RemoveTargetNodeUid(FString AssetUid);                                                                              // [0xc7dbef8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.RemoveAttribute
	// bool RemoveAttribute(FString NodeAttributeKey);                                                                          // [0xc7db108] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xc7da2f8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.InitializeNode
	// void InitializeNode(FString UniqueID, FString DisplayLabel, EInterchangeNodeContainerType NodeContainerType);            // [0xc7d938c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetVector2Attribute
	// bool GetVector2Attribute(FString NodeAttributeKey, FVector2f& OutValue);                                                 // [0xc7d8c6c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetUniqueID
	// FString GetUniqueID();                                                                                                   // [0xc7d6324] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetTargetNodeUids
	// void GetTargetNodeUids(TArray<FString>& OutTargetAssets);                                                                // [0xc7d6288] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetTargetNodeCount
	// int32_t GetTargetNodeCount();                                                                                            // [0xc7d6260] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetStringAttribute
	// bool GetStringAttribute(FString NodeAttributeKey, FString& OutValue);                                                    // [0xc7d5b28] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetParentUid
	// FString GetParentUid();                                                                                                  // [0xc7d5a2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetNodeContainerType
	// EInterchangeNodeContainerType GetNodeContainerType();                                                                    // [0xc7d58e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetLinearColorAttribute
	// bool GetLinearColorAttribute(FString NodeAttributeKey, FLinearColor& OutValue);                                          // [0xc7d3580] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetInt32Attribute
	// bool GetInt32Attribute(FString NodeAttributeKey, int32_t& OutValue);                                                     // [0xc7d2e5c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetGuidAttribute
	// bool GetGuidAttribute(FString NodeAttributeKey, FGuid& OutValue);                                                        // [0xc7d2734] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetFloatAttribute
	// bool GetFloatAttribute(FString NodeAttributeKey, float& OutValue);                                                       // [0xc7d2010] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetDoubleAttribute
	// bool GetDoubleAttribute(FString NodeAttributeKey, double& OutValue);                                                     // [0xc7d09d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetDisplayLabel
	// FString GetDisplayLabel();                                                                                               // [0xc7d0990] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetBooleanAttribute
	// bool GetBooleanAttribute(FString NodeAttributeKey, bool& OutValue);                                                      // [0xc7cf0d4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetAssetName
	// FString GetAssetName();                                                                                                  // [0xc7cf090] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddVector2Attribute
	// bool AddVector2Attribute(FString NodeAttributeKey, FVector2f& Value);                                                    // [0xc7cb860] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddTargetNodeUid
	// bool AddTargetNodeUid(FString AssetUid);                                                                                 // [0xc7cb164] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddStringAttribute
	// bool AddStringAttribute(FString NodeAttributeKey, FString Value);                                                        // [0xc7ca9f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddLinearColorAttribute
	// bool AddLinearColorAttribute(FString NodeAttributeKey, FLinearColor& Value);                                             // [0xc7ca1f4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddInt32Attribute
	// bool AddInt32Attribute(FString NodeAttributeKey, int32_t& Value);                                                        // [0xc7c9ad0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddGuidAttribute
	// bool AddGuidAttribute(FString NodeAttributeKey, FGuid& Value);                                                           // [0xc7c93a8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddFloatAttribute
	// bool AddFloatAttribute(FString NodeAttributeKey, float& Value);                                                          // [0xc7c8c84] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddDoubleAttribute
	// bool AddDoubleAttribute(FString NodeAttributeKey, double& Value);                                                        // [0xc7c7e60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddBooleanAttribute
	// bool AddBooleanAttribute(FString NodeAttributeKey, bool& Value);                                                         // [0xc7c773c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeBaseNodeContainer
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UInterchangeBaseNodeContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FString, UInterchangeBaseNode*>)      Nodes                                                       OFFSET(get<T>, {0x28, 80, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid
	// bool SetNodeParentUid(FString NodeUniqueID, FString NewParentNodeUid);                                                   // [0xc7e1c54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SaveToFile
	// void SaveToFile(FString Filename);                                                                                       // [0xc7dd4b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ResetChildrenCache
	// void ResetChildrenCache();                                                                                               // [0xc7dd49c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode
	// void ReplaceNode(FString NodeUniqueID, class UInterchangeFactoryBaseNode* NewNode);                                      // [0xc7dcd40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile
	// void LoadFromFile(FString Filename);                                                                                     // [0xc7daa10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid
	// bool IsNodeUidValid(FString NodeUniqueID);                                                                               // [0xc7da31c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetRoots
	// void GetRoots(TArray<FString>& RootNodes);                                                                               // [0xc7d5a90] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodes
	// void GetNodes(class UClass* ClassNode, TArray<FString>& OutNodes);                                                       // [0xc7d5904] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids
	// TArray<FString> GetNodeChildrenUids(FString NodeUniqueID);                                                               // [0xc7d51e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount
	// int32_t GetNodeChildrenCount(FString NodeUniqueID);                                                                      // [0xc7d4aec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren
	// class UInterchangeBaseNode* GetNodeChildren(FString NodeUniqueID, int32_t ChildIndex);                                   // [0xc7d4394] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNode
	// class UInterchangeBaseNode* GetNode(FString NodeUniqueID);                                                               // [0xc7d3ca0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode
	// class UInterchangeFactoryBaseNode* GetFactoryNode(FString NodeUniqueID);                                                 // [0xc7d18d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ComputeChildrenCache
	// void ComputeChildrenCache();                                                                                             // [0xc7cbfe4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.AddNode
	// FString AddNode(class UInterchangeBaseNode* Node);                                                                       // [0xc7ca914] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeFactoryBaseNode
/// Size: 0x00E0 (0x000060 - 0x000140)
class UInterchangeFactoryBaseNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.UnsetSkipNodeImport
	// bool UnsetSkipNodeImport();                                                                                              // [0xc7e2bdc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.UnsetForceNodeReimport
	// bool UnsetForceNodeReimport();                                                                                           // [0xc7e2bb8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.ShouldSkipNodeImport
	// bool ShouldSkipNodeImport();                                                                                             // [0xc7e2b94] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.ShouldForceNodeReimport
	// bool ShouldForceNodeReimport();                                                                                          // [0xc7e2b70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetSkipNodeImport
	// bool SetSkipNodeImport();                                                                                                // [0xc7e2b4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetReimportStrategyFlags
	// bool SetReimportStrategyFlags(EReimportStrategyFlags& ReimportStrategyFlags);                                            // [0xc7e2ab4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetForceNodeReimport
	// bool SetForceNodeReimport();                                                                                             // [0xc7e1c30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetCustomSubPath
	// bool SetCustomSubPath(FString AttributeValue);                                                                           // [0xc7e0678] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetCustomReferenceObject
	// bool SetCustomReferenceObject(FSoftObjectPath& AttributeValue);                                                          // [0xc7dfd6c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.RemoveFactoryDependencyUid
	// bool RemoveFactoryDependencyUid(FString DependencyUid);                                                                  // [0xc7db7fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetReimportStrategyFlags
	// EReimportStrategyFlags GetReimportStrategyFlags();                                                                       // [0xc7d5a6c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependency
	// void GetFactoryDependency(int32_t Index, FString& OutDependency);                                                        // [0xc7d11bc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependenciesCount
	// int32_t GetFactoryDependenciesCount();                                                                                   // [0xc7d1194] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependencies
	// void GetFactoryDependencies(TArray<FString>& OutDependencies);                                                           // [0xc7d10f8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetCustomSubPath
	// bool GetCustomSubPath(FString& AttributeValue);                                                                          // [0xc7d02d4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetCustomReferenceObject
	// bool GetCustomReferenceObject(FSoftObjectPath& AttributeValue);                                                          // [0xc7cf9c8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.AddFactoryDependencyUid
	// bool AddFactoryDependencyUid(FString DependencyUid);                                                                     // [0xc7c8588] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeSourceNode
/// Size: 0x0070 (0x000060 - 0x0000D0)
class UInterchangeSourceNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineStart
	// bool SetCustomSourceTimelineStart(double& AttributeValue);                                                               // [0xc7e05dc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineEnd
	// bool SetCustomSourceTimelineEnd(double& AttributeValue);                                                                 // [0xc7e0540] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateNumerator
	// bool SetCustomSourceFrameRateNumerator(int32_t& AttributeValue);                                                         // [0xc7e04a8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateDenominator
	// bool SetCustomSourceFrameRateDenominator(int32_t& AttributeValue);                                                       // [0xc7e0410] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomImportUnusedMaterial
	// bool SetCustomImportUnusedMaterial(bool& AttributeValue);                                                                // [0xc7dfcd4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeStart
	// bool SetCustomAnimatedTimeStart(double& AttributeValue);                                                                 // [0xc7dfc38] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeEnd
	// bool SetCustomAnimatedTimeEnd(double& AttributeValue);                                                                   // [0xc7dfb9c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.InitializeSourceNode
	// void InitializeSourceNode(FString UniqueID, FString DisplayLabel);                                                       // [0xc7d9b7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineStart
	// bool GetCustomSourceTimelineStart(double& AttributeValue);                                                               // [0xc7d0238] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineEnd
	// bool GetCustomSourceTimelineEnd(double& AttributeValue);                                                                 // [0xc7d019c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateNumerator
	// bool GetCustomSourceFrameRateNumerator(int32_t& AttributeValue);                                                         // [0xc7d0104] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateDenominator
	// bool GetCustomSourceFrameRateDenominator(int32_t& AttributeValue);                                                       // [0xc7d006c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomImportUnusedMaterial
	// bool GetCustomImportUnusedMaterial(bool& AttributeValue);                                                                // [0xc7cf930] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeStart
	// bool GetCustomAnimatedTimeStart(double& AttributeValue);                                                                 // [0xc7cf894] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeEnd
	// bool GetCustomAnimatedTimeEnd(double& AttributeValue);                                                                   // [0xc7cf7f8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeUserDefinedAttributesAPI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute
	// bool RemoveUserDefinedAttribute(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName);          // [0xc7dc5f4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos
	// void GetUserDefinedAttributeInfos(class UInterchangeBaseNode* InterchangeNode, TArray<FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos); // [0xc7d6364] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32
	// bool GetUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& OutValue, FString& OutPayloadKey); // [0xc7d8474] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString
	// bool GetUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey); // [0xc7d7470] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float
	// bool GetUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey); // [0xc7d7c7c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double
	// bool GetUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey); // [0xc7d6c74] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean
	// bool GetUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey); // [0xc7d647c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute
	// void DuplicateAllUserDefinedAttribute(class UInterchangeBaseNode* InterchangeSourceNode, class UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName); // [0xc7ceda4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32
	// bool CreateUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& Value, FString PayloadKey, bool RequiresDelegate); // [0xc7ce3a8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString
	// bool CreateUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString Value, FString PayloadKey, bool RequiresDelegate); // [0xc7cd1b4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float
	// bool CreateUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& Value, FString PayloadKey, bool RequiresDelegate); // [0xc7cdafc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double
	// bool CreateUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& Value, FString PayloadKey, bool RequiresDelegate); // [0xc7cc904] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean
	// bool CreateUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& Value, FString PayloadKey, bool RequiresDelegate); // [0xc7cbff8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStatePerContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FInterchangePipelinePropertyStatePerContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStates
/// Size: 0x0003 (0x000000 - 0x000003)
class FInterchangePipelinePropertyStates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FInterchangePipelinePropertyStatePerContext) ImportStates                                              OFFSET(getStruct<T>, {0x1, 1, 0, 0})
	SMember(FInterchangePipelinePropertyStatePerContext) ReimportStates                                            OFFSET(getStruct<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/InterchangeCore.InterchangeUserDefinedAttributeInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FInterchangeUserDefinedAttributeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/InterchangeCore.EInterchangeFactoryAssetType
/// Size: 0x07
enum EInterchangeFactoryAssetType : uint8_t
{
	EInterchangeFactoryAssetType__None                                               = 0,
	EInterchangeFactoryAssetType__Textures                                           = 1,
	EInterchangeFactoryAssetType__Materials                                          = 2,
	EInterchangeFactoryAssetType__Meshes                                             = 3,
	EInterchangeFactoryAssetType__Animations                                         = 4,
	EInterchangeFactoryAssetType__Physics                                            = 5,
	EInterchangeFactoryAssetType__EInterchangeFactoryAssetType_MAX                   = 6
};

/// Enum /Script/InterchangeCore.EInterchangePipelineTask
/// Size: 0x05
enum EInterchangePipelineTask : uint8_t
{
	EInterchangePipelineTask__PostTranslator                                         = 0,
	EInterchangePipelineTask__PostFactory                                            = 1,
	EInterchangePipelineTask__PostImport                                             = 2,
	EInterchangePipelineTask__Export                                                 = 3,
	EInterchangePipelineTask__EInterchangePipelineTask_MAX                           = 4
};

/// Enum /Script/InterchangeCore.EInterchangePipelineContext
/// Size: 0x10
enum EInterchangePipelineContext : uint8_t
{
	EInterchangePipelineContext__None                                                = 0,
	EInterchangePipelineContext__AssetImport                                         = 1,
	EInterchangePipelineContext__AssetReimport                                       = 2,
	EInterchangePipelineContext__SceneImport                                         = 3,
	EInterchangePipelineContext__SceneReimport                                       = 4,
	EInterchangePipelineContext__AssetCustomLODImport                                = 5,
	EInterchangePipelineContext__AssetCustomLODReimport                              = 6,
	EInterchangePipelineContext__AssetAlternateSkinningImport                        = 7,
	EInterchangePipelineContext__AssetAlternateSkinningReimport                      = 8,
	EInterchangePipelineContext__EInterchangePipelineContext_MAX                     = 9
};

/// Enum /Script/InterchangeCore.EInterchangeResultType
/// Size: 0x04
enum EInterchangeResultType : uint8_t
{
	EInterchangeResultType__Success                                                  = 0,
	EInterchangeResultType__Warning                                                  = 1,
	EInterchangeResultType__Error                                                    = 2,
	EInterchangeResultType__EInterchangeResultType_MAX                               = 3
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorType
/// Size: 0x05
enum EInterchangeTranslatorType : uint8_t
{
	EInterchangeTranslatorType__Invalid                                              = 0,
	EInterchangeTranslatorType__Assets                                               = 2,
	EInterchangeTranslatorType__Actors                                               = 4,
	EInterchangeTranslatorType__Scenes                                               = 6,
	EInterchangeTranslatorType__EInterchangeTranslatorType_MAX                       = 7
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorAssetType
/// Size: 0x06
enum EInterchangeTranslatorAssetType : uint8_t
{
	EInterchangeTranslatorAssetType__None                                            = 0,
	EInterchangeTranslatorAssetType__Textures                                        = 1,
	EInterchangeTranslatorAssetType__Materials                                       = 2,
	EInterchangeTranslatorAssetType__Meshes                                          = 4,
	EInterchangeTranslatorAssetType__Animations                                      = 8,
	EInterchangeTranslatorAssetType__EInterchangeTranslatorAssetType_MAX             = 9
};

/// Enum /Script/InterchangeCore.EInterchangeNodeContainerType
/// Size: 0x05
enum EInterchangeNodeContainerType : uint8_t
{
	EInterchangeNodeContainerType__None                                              = 0,
	EInterchangeNodeContainerType__TranslatedScene                                   = 1,
	EInterchangeNodeContainerType__TranslatedAsset                                   = 2,
	EInterchangeNodeContainerType__FactoryData                                       = 3,
	EInterchangeNodeContainerType__EInterchangeNodeContainerType_MAX                 = 4
};

/// Enum /Script/InterchangeCore.EReimportStrategyFlags
/// Size: 0x04
enum EReimportStrategyFlags : uint8_t
{
	EReimportStrategyFlags__ApplyNoProperties                                        = 0,
	EReimportStrategyFlags__ApplyPipelineProperties                                  = 1,
	EReimportStrategyFlags__ApplyEditorChangedProperties                             = 2,
	EReimportStrategyFlags__EReimportStrategyFlags_MAX                               = 3
};

