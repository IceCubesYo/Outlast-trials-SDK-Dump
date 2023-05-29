// BlueprintGeneratedClass CustomizationViewer_BP.CustomizationViewer_BP_C
// Size: 0x2c9 (Inherited: 0x248)
struct ACustomizationViewer_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x250(0x08)
	struct UBoxComponent* CameraBoxDetection; // 0x258(0x08)
	struct URBCinematicZoneComponent* RBCinematicZone; // 0x260(0x08)
	struct URBSpotLightComponent* RBSpotLight3; // 0x268(0x08)
	struct URBSpotLightComponent* RBSpotLight2; // 0x270(0x08)
	struct URBSpotLightComponent* RBSpotLight1; // 0x278(0x08)
	struct URBSpotLightComponent* RBSpotLight; // 0x280(0x08)
	struct UChildActorComponent* MenuCharacter; // 0x288(0x08)
	struct USceneComponent* Root; // 0x290(0x08)
	struct AActor* CustomReturnViewTarget; // 0x298(0x08)
	bool Active; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct ACameraActor* WholeBodyCamera; // 0x2a8(0x08)
	struct ACameraActor* HeadCamea; // 0x2b0(0x08)
	struct ACameraActor* LowerBodyCamera; // 0x2b8(0x08)
	struct ACameraActor* UpperBodyCamera; // 0x2c0(0x08)
	bool debug; // 0x2c8(0x01)

	void GetCameras(); // Function CustomizationViewer_BP.CustomizationViewer_BP_C.GetCameras // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetMenuCharacter(struct AMenuCharacter_C*& MenuCharacter); // Function CustomizationViewer_BP.CustomizationViewer_BP_C.GetMenuCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void DeactivateViewer(bool SkipViewTargetChange); // Function CustomizationViewer_BP.CustomizationViewer_BP_C.DeactivateViewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ActivateViewer(struct AActor* CustomReturnViewTarget); // Function CustomizationViewer_BP.CustomizationViewer_BP_C.ActivateViewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function CustomizationViewer_BP.CustomizationViewer_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function CustomizationViewer_BP.CustomizationViewer_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void CustomEvent(enum class ECustomizationMenuCategory CustomizationMenuCategory); // Function CustomizationViewer_BP.CustomizationViewer_BP_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CustomizationViewer_BP(int32_t EntryPoint); // Function CustomizationViewer_BP.CustomizationViewer_BP_C.ExecuteUbergraph_CustomizationViewer_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

