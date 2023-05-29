// Class PrefabAsset.PrefabActor
// Size: 0x250 (Inherited: 0x248)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x248(0x08)

	void SetPrefab(struct UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected); // Function PrefabAsset.PrefabActor.SetPrefab // (Final|Native|Public|BlueprintCallable) // @ game+0x12e21c8
	void SetMobility(enum class EComponentMobility InMobility); // Function PrefabAsset.PrefabActor.SetMobility // (Final|Native|Public|BlueprintCallable) // @ game+0x12e2144
	struct UPrefabAsset* GetPrefab(); // Function PrefabAsset.PrefabActor.GetPrefab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12e2124
	void DestroyPrefabActor(bool bDestroyAttachedChildren); // Function PrefabAsset.PrefabActor.DestroyPrefabActor // (Final|Native|Public|BlueprintCallable) // @ game+0x12e20c0
};

// Class PrefabAsset.PrefabAsset
// Size: 0x28 (Inherited: 0x28)
struct UPrefabAsset : UObject {
};

// Class PrefabAsset.PrefabVariantAsset
// Size: 0x30 (Inherited: 0x28)
struct UPrefabVariantAsset : UPrefabAsset {
	struct UPrefabAsset* Parent; // 0x28(0x08)
};

// Class PrefabAsset.PrefabComponent
// Size: 0x510 (Inherited: 0x490)
struct UPrefabComponent : UPrimitiveComponent {
	char bConnected : 1; // 0x490(0x01)
	char bLockSelection : 1; // 0x490(0x01)
	char pad_490_2 : 6; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct UPrefabAsset* Prefab; // 0x498(0x08)
	struct UBlueprint* GeneratedBlueprint; // 0x4a0(0x08)
	struct TMap<struct FName, struct AActor*> PrefabInstancesMap; // 0x4a8(0x50)
	struct TArray<struct FPrefabVariantRule> VariantRulesOverwrite; // 0x4f8(0x10)
	char bTransient : 1; // 0x508(0x01)
	char pad_508_1 : 7; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
};

// Class PrefabAsset.PrefabFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPrefabFunctionLibrary : UBlueprintFunctionLibrary {

	struct APrefabActor* SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabAsset* PrefabAsset, struct FTransform& SpawnTransform, struct TArray<struct AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner); // Function PrefabAsset.PrefabFunctionLibrary.SpawnPrefab // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x12e228c
};

// Class PrefabAsset.PrefabExporter
// Size: 0x78 (Inherited: 0x78)
struct UPrefabExporter : UExporter {
};

// Class PrefabAsset.PrefabLevelExporter
// Size: 0x88 (Inherited: 0x78)
struct UPrefabLevelExporter : UPrefabExporter {
	char pad_78[0x10]; // 0x78(0x10)
};

// Class PrefabAsset.PrefabObjectExporterT3D
// Size: 0x78 (Inherited: 0x78)
struct UPrefabObjectExporterT3D : UPrefabExporter {
};

// Class PrefabAsset.PrefabToolSettings
// Size: 0x100 (Inherited: 0x28)
struct UPrefabToolSettings : UObject {
	bool bReplaceActorsWithCreatedPrefab; // 0x28(0x01)
	bool bAutoIncludeAttachedActorsWhenCreateNewPrefab; // 0x29(0x01)
	bool bNestedPrefabSupport; // 0x2a(0x01)
	bool bRestorePrefabActorCollapseStatusAfterPIE; // 0x2b(0x01)
	bool bCollapseAllPrefabActorsAfterMapOpened; // 0x2c(0x01)
	bool bMoveActorsInWorldAfterSetPrefabPivot; // 0x2d(0x01)
	bool bDuplicateNoRevertWithOffset; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	struct FString NewPrefabNamePattern; // 0x30(0x10)
	enum class EPTUITheme UITheme; // 0x40(0x04)
	bool bUpdateAllPrefabActorsWhenOpenMap; // 0x44(0x01)
	bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap; // 0x45(0x01)
	bool bUpdateAllPrefabActorsWhenApply; // 0x46(0x01)
	bool bApplyToNestedPrefab; // 0x47(0x01)
	bool bEnableApplyFromDisconnectedPrefabActor; // 0x48(0x01)
	bool bTryQuickApplyFirstWhenApply; // 0x49(0x01)
	bool bAutoAddRemoveVariantActorPrefix; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct FString VariantActorPrefix; // 0x50(0x10)
	bool bEnablePrefabComponentVisualizer; // 0x60(0x01)
	enum class EPrefabVisualizerType PrefabComponentVisualizerType; // 0x61(0x01)
	bool bDisplayPrefabComponentVisualizerEvenNotSelected; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	struct FColor PrefabViewVisualizerColor; // 0x64(0x04)
	struct FColor TargetActorColor; // 0x68(0x04)
	struct FColor UnLockedConnectedColor; // 0x6c(0x04)
	struct FColor LockedConnectedColor; // 0x70(0x04)
	struct FColor UnLockedDisConnectedColor; // 0x74(0x04)
	struct FColor LockedDisConnectedColor; // 0x78(0x04)
	struct FColor UnLockedNoPrefabAssignedColor; // 0x7c(0x04)
	struct FColor LockedNoPrefabAssignedColor; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FSoftObjectPath PrefabMaterialPath; // 0x88(0x18)
	char pad_A0[0x28]; // 0xa0(0x28)
	bool bShadedPrefabViewVisualizer; // 0xc8(0x01)
	bool bLockPrefabSelectionByDefault; // 0xc9(0x01)
	bool bDisableLockPrefabSelectionFeature; // 0xca(0x01)
	bool bForceApplyPerInstanceVertexColor; // 0xcb(0x01)
	bool bHideChildActorsInPIEIfHiddenInEditor; // 0xcc(0x01)
	bool bCanToggleChildActorVisibilityInPIE; // 0xcd(0x01)
	char pad_CE[0x1]; // 0xce(0x01)
	bool bIgnoreLayersInPrefab; // 0xcf(0x01)
	bool bSupportGenerateBlueprint; // 0xd0(0x01)
	bool bHarvestComponentsWhenGeneratingBlueprint; // 0xd1(0x01)
	bool bUseActorNameAsVariableNameWhenGeneratingBlueprint; // 0xd2(0x01)
	bool bForceMobilityToMovableWhenGeneratingBlueprint; // 0xd3(0x01)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct AActor*> IgnoreActorClassesWhenGeneratingBlueprint; // 0xd8(0x10)
	struct TArray<struct FName> IgnoreActorTagsWhenGeneratingBlueprint; // 0xe8(0x10)
	bool bFlashPrefabWindowForTargetPrefabActor; // 0xf8(0x01)
	bool bEnablePrefabTextEditor; // 0xf9(0x01)
	bool bDebugMode; // 0xfa(0x01)
	bool bDisableThumbnailRender; // 0xfb(0x01)
	bool bShowPrefabInstanceTagInPrefabToolWindow; // 0xfc(0x01)
	bool bSkipActorReferenceReplacement; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
};

