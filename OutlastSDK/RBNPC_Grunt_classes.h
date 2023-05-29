// BlueprintGeneratedClass RBNPC_Grunt.RBNPC_Grunt_C
// Size: 0x5840 (Inherited: 0x5608)
struct ARBNPC_Grunt_C : ARBNPC_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5608(0x08)
	struct UNiagaraComponent* Ngr_GruntHard_8Skt; // 0x5610(0x08)
	struct UNiagaraComponent* Ngr_GruntHard_4Skt; // 0x5618(0x08)
	struct USkeletalMeshComponent* Hair_Mesh; // 0x5620(0x08)
	struct USkeletalMeshComponent* Head_Mesh; // 0x5628(0x08)
	struct USkeletalMeshComponent* LowerBody_Mesh; // 0x5630(0x08)
	struct USkeletalMeshComponent* UpperBody_Mesh; // 0x5638(0x08)
	struct TMap<struct FString, struct UMaterialInstanceConstant*> LoadedHeadMaterials; // 0x5640(0x50)
	struct TArray<struct USkeletalMeshComponent*> AdditionalBodyMeshes; // 0x5690(0x10)
	struct FSelectedGruntCustomizationMeshesInfo SelectedCustomizationInfo; // 0x56a0(0x14)
	char pad_56B4[0x4]; // 0x56b4(0x04)
	struct FGruntCustomizationMeshesConfig CustomizationConfig; // 0x56b8(0x180)
	struct UPoseAsset* FacePoseAsset; // 0x5838(0x08)

	bool TryPlayFacialAnim(struct FString lineId); // Function RBNPC_Grunt.RBNPC_Grunt_C.TryPlayFacialAnim // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct UPoseAsset* GetFacePoseAsset(); // Function RBNPC_Grunt.RBNPC_Grunt_C.GetFacePoseAsset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FName GetFoleySwitchOverride(); // Function RBNPC_Grunt.RBNPC_Grunt_C.GetFoleySwitchOverride // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x201e6d4
	void OnRep_SelectedCustomizationInfo(); // Function RBNPC_Grunt.RBNPC_Grunt_C.OnRep_SelectedCustomizationInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyGruntCustomization(); // Function RBNPC_Grunt.RBNPC_Grunt_C.ApplyGruntCustomization // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CustomizeCharacter(); // Function RBNPC_Grunt.RBNPC_Grunt_C.CustomizeCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateMaterialsOnCustomizedMeshFromMap(struct USkeletalMeshComponent*& SkeletalMeshComponent, struct TMap<struct FString, struct UMaterialInstanceConstant*>& MaterialOverrides); // Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateMaterialsOnCustomizedMeshFromMap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateMaterialsOnCustomizedMesh(struct USkeletalMeshComponent*& SkeletalMeshComponent, struct TMap<struct FString, struct UMaterialInstanceConstant*>& MaterialOverrides); // Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateMaterialsOnCustomizedMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateComponentFromIndex(struct USkeletalMeshComponent*& MeshComponent, enum class ENPCCustomizationSlot Slot); // Function RBNPC_Grunt.RBNPC_Grunt_C.UpdateComponentFromIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent(); // Function RBNPC_Grunt.RBNPC_Grunt_C.GetFaceFXSkeletalMeshComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void UserConstructionScript(); // Function RBNPC_Grunt.RBNPC_Grunt_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RequestGruntCustomization(); // Function RBNPC_Grunt.RBNPC_Grunt_C.RequestGruntCustomization // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCustomizationLoaded(struct AActor* customizationOwner, int32_t requestID, enum class EPawnCustomizationRequestType requestType); // Function RBNPC_Grunt.RBNPC_Grunt_C.OnCustomizationLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function RBNPC_Grunt.RBNPC_Grunt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWeaponVisible(enum class ENPCWeapon weaponType, struct ARBNPCWeapon* weaponActor); // Function RBNPC_Grunt.RBNPC_Grunt_C.Event_OnWeaponVisible // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBNPC_Grunt(int32_t EntryPoint); // Function RBNPC_Grunt.RBNPC_Grunt_C.ExecuteUbergraph_RBNPC_Grunt // (Final|UbergraphFunction) // @ game+0x201e6d4
};

