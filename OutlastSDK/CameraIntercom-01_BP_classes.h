// BlueprintGeneratedClass CameraIntercom-01_BP.CameraIntercom-01_BP_C
// Size: 0x2e0 (Inherited: 0x248)
struct ACameraIntercom-01_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USpotLightComponent* NightVisionLight; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	struct UPoseableMeshComponent* CameraMesh; // 0x260(0x08)
	struct URBSoundComponent* RBSound; // 0x268(0x08)
	struct UStaticMeshComponent* Speaker-01; // 0x270(0x08)
	struct UCameraComponent* Camera; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	float CurrentCameraYaw; // 0x288(0x04)
	float CameraMovementSpeed; // 0x28c(0x04)
	float TargetCameraYaw; // 0x290(0x04)
	float CurrentCameraPitch; // 0x294(0x04)
	float TargetCameraPitch; // 0x298(0x04)
	float MaxYaw; // 0x29c(0x04)
	float MaxPitch; // 0x2a0(0x04)
	bool CameraActive; // 0x2a4(0x01)
	bool IsTalking; // 0x2a5(0x01)
	bool CheckSpecificCheckpoint; // 0x2a6(0x01)
	char pad_2A7[0x1]; // 0x2a7(0x01)
	struct FRBStageID SpecificStage; // 0x2a8(0x28)
	float Delta Seconds; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct ARBPlayer_BP_C* Observer; // 0x2d8(0x08)

	void UserConstructionScript(); // Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveTick(float DeltaSeconds); // Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Activate Light(); // Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Activate Light // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Deactivate Light(); // Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Deactivate Light // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AssignPlayer(struct ARBPlayer_BP_C* Player); // Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.AssignPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReactToNightVision(bool bOn); // Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReactToNightVision // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CameraIntercom-01_BP(int32_t EntryPoint); // Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ExecuteUbergraph_CameraIntercom-01_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

