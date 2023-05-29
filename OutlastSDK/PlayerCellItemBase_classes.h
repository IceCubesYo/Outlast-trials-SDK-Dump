// BlueprintGeneratedClass PlayerCellItemBase.PlayerCellItemBase_C
// Size: 0x302 (Inherited: 0x250)
struct APlayerCellItemBase_C : ARBPlayerCellItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UStaticMeshComponent* DisplayStaticMeshComponent; // 0x258(0x08)
	struct USceneComponent* Scene; // 0x260(0x08)
	struct UBillboardComponent* Billboard; // 0x268(0x08)
	struct UStaticMesh* DefaultStaticMesh; // 0x270(0x08)
	int32_t MaterialIDs; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UMaterialInstanceConstant* DefaultMaterial; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)
	struct FTransform DebugTransform; // 0x290(0x30)
	struct URBPlayerCellItemDefinition* PreviewDefinition; // 0x2c0(0x08)
	bool bDebugTransform; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FName StaticmeshTag; // 0x2cc(0x08)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct AActor*> AttachedStaticmeshes; // 0x2d8(0x10)
	float FOV; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct AActor* refActor; // 0x2f0(0x08)
	struct URBPlayerCellItemDefinition* PendingTarget; // 0x2f8(0x08)
	bool bPendingAsyncPreview; // 0x300(0x01)
	bool bHasPendingTarget; // 0x301(0x01)

	void OnPreviewDone(); // Function PlayerCellItemBase.PlayerCellItemBase_C.OnPreviewDone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyTransformToConfig(); // Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyTransformToConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TryDestroyPreviousProp(); // Function PlayerCellItemBase.PlayerCellItemBase_C.TryDestroyPreviousProp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ChangeMaterialOnStaticmesh(struct UPrimitiveComponent* Comp, struct UObject* Material); // Function PlayerCellItemBase.PlayerCellItemBase_C.ChangeMaterialOnStaticmesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetDebugTransform(); // Function PlayerCellItemBase.PlayerCellItemBase_C.GetDebugTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function PlayerCellItemBase.PlayerCellItemBase_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreviewCellItemDefinition(struct URBPlayerCellItemDefinition* CellItemDefinition); // Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewCellItemDefinition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function PlayerCellItemBase.PlayerCellItemBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_979288504F90989FEEAAD0BBDC449001(struct UObject* Loaded); // Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_979288504F90989FEEAAD0BBDC449001 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_4E18DE394F253951F2F6CCB149B0597D(struct UObject* Loaded); // Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_4E18DE394F253951F2F6CCB149B0597D // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_2A9FE965428939AA3930E497B1EEF09B(struct UObject* Loaded); // Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_2A9FE965428939AA3930E497B1EEF09B // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69(struct UObject* Loaded); // Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_5B91E09E4750328E9B0B8B975CA0679F(struct UObject* Loaded); // Function PlayerCellItemBase.PlayerCellItemBase_C.OnLoaded_5B91E09E4750328E9B0B8B975CA0679F // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_AssignItem(struct URBPlayerCellItemDefinition* ItemDefinition); // Function PlayerCellItemBase.PlayerCellItemBase_C.Event_AssignItem // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreviewItem(struct URBPlayerCellItemDefinition* Target); // Function PlayerCellItemBase.PlayerCellItemBase_C.PreviewItem // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyNewMaterial(struct URBPlayerCellItemDefinition* ItemDefinition); // Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyNewMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyNewStaticmesh(struct URBPlayerCellItemDefinition* ItemDefinition); // Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyNewStaticmesh // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyBlueprintClass(struct URBPlayerCellItemDefinition* ItemDefinition); // Function PlayerCellItemBase.PlayerCellItemBase_C.ApplyBlueprintClass // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerCellItemBase(int32_t EntryPoint); // Function PlayerCellItemBase.PlayerCellItemBase_C.ExecuteUbergraph_PlayerCellItemBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

