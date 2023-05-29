// BlueprintGeneratedClass MenuCharacter.MenuCharacter_C
// Size: 0x40c (Inherited: 0x248)
struct AMenuCharacter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct URBSpotLightComponent* RBSpotLight11; // 0x250(0x08)
	struct URBSpotLightComponent* RBSpotLight10; // 0x258(0x08)
	struct URBSpotLightComponent* RBSpotLight9; // 0x260(0x08)
	struct URBSpotLightComponent* RBSpotLight8; // 0x268(0x08)
	struct URBSpotLightComponent* RBSpotLight7; // 0x270(0x08)
	struct URBSpotLightComponent* RBSpotLight6; // 0x278(0x08)
	struct URBSpotLightComponent* RBSpotLight5; // 0x280(0x08)
	struct UStaticMeshComponent* Watch; // 0x288(0x08)
	struct URBSpotLightComponent* RBSpotLight4; // 0x290(0x08)
	struct UBoxComponent* CameraBoxDetection; // 0x298(0x08)
	struct USkeletalMeshComponent* Character_Mesh; // 0x2a0(0x08)
	struct USceneComponent* Scene; // 0x2a8(0x08)
	struct USkeletalMeshComponent* HairMesh; // 0x2b0(0x08)
	struct USkeletalMeshComponent* NightVision; // 0x2b8(0x08)
	struct USkeletalMeshComponent* Glove_Mesh; // 0x2c0(0x08)
	struct USkeletalMeshComponent* ESOP; // 0x2c8(0x08)
	struct UStaticMeshComponent* ESOP_Battery; // 0x2d0(0x08)
	struct UStaticMeshComponent* ESOP_Apparatus; // 0x2d8(0x08)
	struct UStaticMeshComponent* ESOP_Lever; // 0x2e0(0x08)
	struct USkeletalMeshComponent* Straps; // 0x2e8(0x08)
	struct USkeletalMeshComponent* UpperBody_Mesh; // 0x2f0(0x08)
	struct USkeletalMeshComponent* LowerBody_Mesh; // 0x2f8(0x08)
	struct USkeletalMeshComponent* Head_Mesh; // 0x300(0x08)
	bool Initialized; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct TArray<struct URBPlayerCustomizationOption*> CustomizationOptions; // 0x310(0x10)
	bool bIsFemale; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct AActor* RigChest; // 0x328(0x08)
	struct AActor* RigComponent; // 0x330(0x08)
	enum class ECustomizationMenuCategory CurrentMenuCategory; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TMap<enum class ECustomizationMenuCategory, struct UAnimSequence*> EquipAnimations; // 0x340(0x50)
	struct URBCustomizationOutfit* LegendaryOutfit; // 0x390(0x08)
	struct TArray<struct USkeletalMeshComponent*> ExtraCustomizationMeshes; // 0x398(0x10)
	struct FMulticastInlineDelegate OncategoryClickedEvent; // 0x3a8(0x10)
	bool debug; // 0x3b8(0x01)
	bool bActive; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct ACameraActor* WholeBodyCamera; // 0x3c0(0x08)
	struct ACameraActor* HeadCamea; // 0x3c8(0x08)
	struct ACameraActor* LowerBodyCamera; // 0x3d0(0x08)
	struct ACameraActor* UpperBodyCamera; // 0x3d8(0x08)
	int32_t DebugPoseIndex; // 0x3e0(0x04)
	enum class EActiveSkillType SelectedActiveSkill; // 0x3e4(0x01)
	bool bAllowRotation; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)
	struct ACameraActor* CurrentCamera; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnCustomizationLoadedEvent; // 0x3f0(0x10)
	bool bIsReadyForCusto; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FName HairColorId; // 0x404(0x08)

	struct USkeletalMeshComponent* GetMainParentSkeletalMesh(); // Function MenuCharacter.MenuCharacter_C.GetMainParentSkeletalMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	struct UStaticMeshComponent* GetWatchComponent(); // Function MenuCharacter.MenuCharacter_C.GetWatchComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	struct FRBPlayerCustomizationInfo GetPlayerCustomizationInfo(); // Function MenuCharacter.MenuCharacter_C.GetPlayerCustomizationInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	struct USkeletalMeshComponent* GetSkeletalMeshComponentForSlot(enum class EPlayerCustomizationSlot Slot); // Function MenuCharacter.MenuCharacter_C.GetSkeletalMeshComponentForSlot // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void ResetPlacementAndAnim(); // Function MenuCharacter.MenuCharacter_C.ResetPlacementAndAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HasCustomizationChanged(struct FRBPlayerCustomizationInfo RBPlayerCustomizationInfo, bool& bHasChanged); // Function MenuCharacter.MenuCharacter_C.HasCustomizationChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHairColor(struct FName newHairColor); // Function MenuCharacter.MenuCharacter_C.SetHairColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CycleDebugPose(); // Function MenuCharacter.MenuCharacter_C.CycleDebugPose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetCharacterHidden(bool Hidden); // Function MenuCharacter.MenuCharacter_C.SetCharacterHidden // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetDebugMode(bool debug); // Function MenuCharacter.MenuCharacter_C.SetDebugMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetLightsActivation(bool bAffectWorld); // Function MenuCharacter.MenuCharacter_C.SetLightsActivation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetCameras(); // Function MenuCharacter.MenuCharacter_C.GetCameras // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void DeactivateViewer(); // Function MenuCharacter.MenuCharacter_C.DeactivateViewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ActivateViewer(struct AActor* CustomReturnViewTarget); // Function MenuCharacter.MenuCharacter_C.ActivateViewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetLightingChannels(); // Function MenuCharacter.MenuCharacter_C.SetLightingChannels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetCustomization(struct FRBPlayerCustomizationInfo customizationInfo); // Function MenuCharacter.MenuCharacter_C.SetCustomization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCategoryClicked(enum class ECustomizationMenuCategory customizationCategory); // Function MenuCharacter.MenuCharacter_C.OnCategoryClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnItemBought(); // Function MenuCharacter.MenuCharacter_C.OnItemBought // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void On Item Equipped(); // Function MenuCharacter.MenuCharacter_C.On Item Equipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ChangeBodyType(bool IsFemale, struct TArray<struct URBPlayerCustomizationOption*>& Options); // Function MenuCharacter.MenuCharacter_C.ChangeBodyType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateCustomization(struct URBPlayerCustomizationOption* Option); // Function MenuCharacter.MenuCharacter_C.UpdateCustomization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CleanSpawnedRigs(); // Function MenuCharacter.MenuCharacter_C.CleanSpawnedRigs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetSelectedCustomizationOption(enum class EPlayerCustomizationSlot Slot, struct URBPlayerCustomizationOption*& SelectedOption); // Function MenuCharacter.MenuCharacter_C.GetSelectedCustomizationOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateSlotSelection(struct URBPlayerCustomizationOption* NewCustomizationOption); // Function MenuCharacter.MenuCharacter_C.UpdateSlotSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void LoadCustomization(); // Function MenuCharacter.MenuCharacter_C.LoadCustomization // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Show(); // Function MenuCharacter.MenuCharacter_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void DressCharacter(); // Function MenuCharacter.MenuCharacter_C.DressCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function MenuCharacter.MenuCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddCharacterRotation(float Factor); // Function MenuCharacter.MenuCharacter_C.AddCharacterRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function MenuCharacter.MenuCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function MenuCharacter.MenuCharacter_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void CustomEvent_1(enum class ECustomizationMenuCategory CustomizationMenuCategory); // Function MenuCharacter.MenuCharacter_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BindOnCategoryChanged(); // Function MenuCharacter.MenuCharacter_C.BindOnCategoryChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GoingToMainPosition(); // Function MenuCharacter.MenuCharacter_C.GoingToMainPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void StartInteracting(); // Function MenuCharacter.MenuCharacter_C.StartInteracting // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RequestDressCharacter(); // Function MenuCharacter.MenuCharacter_C.RequestDressCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnExtraCustomizationMeshesAddedForSlot(struct TArray<struct USkeletalMeshComponent*>& addedExtraMeshes, enum class EPlayerCustomizationSlot Slot); // Function MenuCharacter.MenuCharacter_C.OnExtraCustomizationMeshesAddedForSlot // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RequestSpawnRig(enum class EActiveSkillType skillType); // Function MenuCharacter.MenuCharacter_C.RequestSpawnRig // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnActiveSkillLoaded(); // Function MenuCharacter.MenuCharacter_C.OnActiveSkillLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerCustoLoaded(); // Function MenuCharacter.MenuCharacter_C.OnPlayerCustoLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCustomizationLoaded(struct AActor* customizationOwner, int32_t requestID, enum class EPawnCustomizationRequestType requestType); // Function MenuCharacter.MenuCharacter_C.OnCustomizationLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReachedMainPosition(); // Function MenuCharacter.MenuCharacter_C.ReachedMainPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCurrentLoadoutChanged(); // Function MenuCharacter.MenuCharacter_C.OnCurrentLoadoutChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MenuCharacter(int32_t EntryPoint); // Function MenuCharacter.MenuCharacter_C.ExecuteUbergraph_MenuCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnCustomizationLoadedEvent__DelegateSignature(); // Function MenuCharacter.MenuCharacter_C.OnCustomizationLoadedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OncategoryClickedEvent__DelegateSignature(enum class ECustomizationMenuCategory CustomizationMenuCategory); // Function MenuCharacter.MenuCharacter_C.OncategoryClickedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

