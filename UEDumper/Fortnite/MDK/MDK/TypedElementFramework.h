
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/TypedElementFramework.TypedElementDataStorageCompatibilityInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageCompatibilityInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageUiInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementDataStorageUiInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementHandleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementHandleLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.Release
	// void Release(FScriptTypedElementHandle& ElementHandle);                                                                  // [0x5b82f5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.NotEqual
	// bool NotEqual(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS);                                           // [0x5b82c8c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.IsSet
	// bool IsSet(FScriptTypedElementHandle& ElementHandle);                                                                    // [0x5b8287c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.Equal
	// bool Equal(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS);                                              // [0x5b8165c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TypedElementFramework.TypedElementListLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementListLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Shrink
	// void Shrink(FScriptTypedElementListProxy ElementList);                                                                   // [0x5b838dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reset
	// void Reset(FScriptTypedElementListProxy ElementList);                                                                    // [0x5b8349c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reserve
	// void Reserve(FScriptTypedElementListProxy ElementList, int32_t Size);                                                    // [0x5b8321c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Remove
	// bool Remove(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                         // [0x5b83000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Num
	// int32_t Num(FScriptTypedElementListProxy ElementList);                                                                   // [0x5b82db8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.IsValidIndex
	// bool IsValidIndex(FScriptTypedElementListProxy ElementList, int32_t Index);                                              // [0x5b8292c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElementsOfType
	// bool HasElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName);                                 // [0x5b825f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElements
	// bool HasElements(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType);                             // [0x5b82354] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementInterface
	// class UObject* GetElementInterface(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType); // [0x5b81da4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandles
	// TArray<FScriptTypedElementHandle> GetElementHandles(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType); // [0x5b81af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
	// FScriptTypedElementHandle GetElementHandleAt(FScriptTypedElementListProxy ElementList, int32_t Index);                   // [0x5b8185c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Empty
	// void Empty(FScriptTypedElementListProxy ElementList, int32_t Slack);                                                     // [0x5b813dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
	// FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* Registry);                             // [0x5b81334] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElementsOfType
	// int32_t CountElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName);                            // [0x5b810a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElements
	// int32_t CountElements(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType);                        // [0x5b80e0c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Contains
	// bool Contains(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                       // [0x5b80bf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Clone
	// FScriptTypedElementListProxy Clone(FScriptTypedElementListProxy ElementList);                                            // [0x5b80a34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.AppendList
	// void AppendList(FScriptTypedElementListProxy ElementList, FScriptTypedElementListProxy OtherElementList);                // [0x5b80738] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Append
	// void Append(FScriptTypedElementListProxy ElementList, TArray<FScriptTypedElementHandle>& ElementHandles);                // [0x5b8053c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Add
	// bool Add(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                            // [0x5b80320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TypedElementCounterInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementCounterInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementFramework.TypedElementRegistry
/// Size: 0x0950 (0x000028 - 0x000978)
class UTypedElementRegistry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2424;

public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementRegistry.GetInstance
	// class UTypedElementRegistry* GetInstance();                                                                              // [0x5b8227c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementRegistry.GetElementInterface
	// class UObject* GetElementInterface(FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType);       // [0x5b820ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceA : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
	// bool SetDisplayName(FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify);                          // [0x5b8363c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
	// FText GetDisplayName(FScriptTypedElementHandle& InElementHandle);                                                        // [0x5b81788] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceB
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceB : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
	// bool MarkAsTested(FScriptTypedElementHandle& InElementHandle);                                                           // [0x5b822a0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceC
/// Size: 0x0000 (0x000028 - 0x000028)
class UTestTypedElementInterfaceC : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
	// bool GetIsTested(FScriptTypedElementHandle& InElementHandle);                                                            // [0x5b822a0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
/// Size: 0x0008 (0x000028 - 0x000030)
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
/// Size: 0x0008 (0x000028 - 0x000030)
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
/// Size: 0x0010 (0x000028 - 0x000038)
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FScriptTypedElementHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageColumn
/// Size: 0x0001 (0x000000 - 0x000001)
class FTypedElementDataStorageColumn : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementUObjectColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementUObjectColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementExternalObjectColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementExternalObjectColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageTag
/// Size: 0x0001 (0x000000 - 0x000001)
class FTypedElementDataStorageTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementWidgetConstructor
/// Size: 0x0020 (0x000000 - 0x000020)
class FTypedElementWidgetConstructor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementParentColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementParentColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementUnresolvedParentColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementUnresolvedParentColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  ParentIdHash                                                OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementLabelColumn
/// Size: 0x000F (0x000001 - 0x000010)
class FTypedElementLabelColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Label                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementLabelHashColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementLabelHashColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  LabelHash                                                   OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementListProxy
/// Size: 0x0010 (0x000000 - 0x000010)
class FScriptTypedElementListProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementSyncBackToWorldTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementSyncFromWorldTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementSyncFromWorldTag : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementRowReferenceColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementRowReferenceColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementPackageUnresolvedReference
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementPackageUnresolvedReference : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementPackageReference
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementPackageReference : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementPackagePathColumn
/// Size: 0x000F (0x000001 - 0x000010)
class FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Path                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementPackageLoadedPathColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.SCCInChangelistTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FSCCInChangelistTag : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.SCCStagedTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FSCCStagedTag : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.SCCLockedTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FSCCLockedTag : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.SCCExternallyEditedTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FSCCExternallyEditedTag : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.SCCStatusColumn
/// Size: 0x0003 (0x000001 - 0x000004)
class FSCCStatusColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(ESCCModification)                          Modification                                                OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/TypedElementFramework.SCCRevisionId
/// Size: 0x0014 (0x000000 - 0x000014)
class FSCCRevisionId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(uint32_t)                                  ID                                                          OFFSET(get<uint32_t>, {0x0, 20, 0, 0})
};

/// Struct /Script/TypedElementFramework.SCCRevisionIdColumn
/// Size: 0x0013 (0x000001 - 0x000014)
class FSCCRevisionIdColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FSCCRevisionId)                            RevisionId                                                  OFFSET(getStruct<T>, {0x0, 20, 0, 0})
};

/// Struct /Script/TypedElementFramework.SCCExternalRevisionIdColumn
/// Size: 0x0013 (0x000001 - 0x000014)
class FSCCExternalRevisionIdColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FSCCRevisionId)                            RevisionId                                                  OFFSET(getStruct<T>, {0x0, 20, 0, 0})
};

/// Struct /Script/TypedElementFramework.SCCUserInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FSCCUserInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TypedElementFramework.SCCExternallyLockedColumn
/// Size: 0x000F (0x000001 - 0x000010)
class FSCCExternallyLockedColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FSCCUserInfo)                              LockedBy                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementSelectionColumn
/// Size: 0x0003 (0x000001 - 0x000004)
class FTypedElementSelectionColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     SelectionSet                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceColumn
/// Size: 0x000F (0x000001 - 0x000010)
class FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestColumnA
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestColumnA : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestColumnB
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestColumnB : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestColumnC
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestColumnC : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestColumnD
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestColumnD : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestColumnE
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestColumnE : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestColumnF
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestColumnF : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestColumnG
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestColumnG : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestTagColumnA
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestTagColumnA : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestTagColumnB
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestTagColumnB : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestTagColumnC
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestTagColumnC : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TestTagColumnD
/// Size: 0x0000 (0x000001 - 0x000001)
class FTestTagColumnD : public FTypedElementDataStorageTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementLocalTransformColumn
/// Size: 0x005F (0x000001 - 0x000060)
class FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementClassTypeInfoColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementClassTypeInfoColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementScriptStructTypeInfoColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementScriptStructTypeInfoColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TypedElementFramework.TypedElementU32IntValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
class FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementI32IntValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
class FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementU64IntValueCacheColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementU64IntValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  Value                                                       OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementI64IntValueCacheColumn
/// Size: 0x0007 (0x000001 - 0x000008)
class FTypedElementI64IntValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Value                                                       OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementFloatValueCacheColumn
/// Size: 0x0003 (0x000001 - 0x000004)
class FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/TypedElementFramework.TypedElementViewportColorColumn
/// Size: 0x0000 (0x000001 - 0x000001)
class FTypedElementViewportColorColumn : public FTypedElementDataStorageColumn
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/TypedElementFramework.ESCCModification
/// Size: 0x05
enum ESCCModification : uint32_t
{
	ESCCModification__Modified                                                       = 0,
	ESCCModification__Added                                                          = 1,
	ESCCModification__Removed                                                        = 2,
	ESCCModification__Conflicted                                                     = 3,
	ESCCModification__ESCCModification_MAX                                           = 4
};

