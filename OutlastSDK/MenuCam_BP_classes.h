// BlueprintGeneratedClass MenuCam_BP.MenuCam_BP_C
// Size: 0x410 (Inherited: 0x248)
struct AMenuCam_BP_C : ARBClientOnlyActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UWidgetComponent* ExperimentResultWidget8; // 0x250(0x08)
	struct UWidgetComponent* ExperimentResultWidget7; // 0x258(0x08)
	struct UWidgetComponent* ExperimentResultWidget6; // 0x260(0x08)
	struct UWidgetComponent* ExperimentResultWidget5; // 0x268(0x08)
	struct UWidgetComponent* ExperimentResultWidget4; // 0x270(0x08)
	struct UWidgetComponent* ExperimentResultWidget3; // 0x278(0x08)
	struct UWidgetComponent* ExperimentResultWidget1; // 0x280(0x08)
	struct UWidgetComponent* ExperimentResultWidget2; // 0x288(0x08)
	struct UTextRenderComponent* TitleText; // 0x290(0x08)
	struct UStaticMeshComponent* LobbyMemo-08; // 0x298(0x08)
	struct UStaticMeshComponent* LobbyMemo-07; // 0x2a0(0x08)
	struct UStaticMeshComponent* LobbyMemo-06; // 0x2a8(0x08)
	struct UStaticMeshComponent* LobbyMemo-05; // 0x2b0(0x08)
	struct UStaticMeshComponent* LobbyMemo-04; // 0x2b8(0x08)
	struct UStaticMeshComponent* LobbyMemo-03; // 0x2c0(0x08)
	struct UStaticMeshComponent* LobbyMemo-02; // 0x2c8(0x08)
	struct UStaticMeshComponent* LobbyMemo-01; // 0x2d0(0x08)
	struct UStaticMeshComponent* CorkBoard-01; // 0x2d8(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x2e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e8(0x08)
	struct FVector Timeline_0_RotationAdd_03F95FB149BF264944D15A8464935B4F; // 0x2f0(0x0c)
	struct FVector Timeline_0_Rotation_03F95FB149BF264944D15A8464935B4F; // 0x2fc(0x0c)
	float Timeline_0_FOVAdd_03F95FB149BF264944D15A8464935B4F; // 0x308(0x04)
	float Timeline_0_FOV_03F95FB149BF264944D15A8464935B4F; // 0x30c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_03F95FB149BF264944D15A8464935B4F; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UTimelineComponent* Timeline_1; // 0x318(0x08)
	struct FVector BlendCameraTimeline_RotationAdd_7615D4114D6C37915E6757AD3B036641; // 0x320(0x0c)
	struct FVector BlendCameraTimeline_Rotation_7615D4114D6C37915E6757AD3B036641; // 0x32c(0x0c)
	float BlendCameraTimeline_FOVAdd_7615D4114D6C37915E6757AD3B036641; // 0x338(0x04)
	float BlendCameraTimeline_FOV_7615D4114D6C37915E6757AD3B036641; // 0x33c(0x04)
	enum class ETimelineDirection BlendCameraTimeline__Direction_7615D4114D6C37915E6757AD3B036641; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct UTimelineComponent* BlendCameraTimeline; // 0x348(0x08)
	struct TArray<struct FRotator> TargetCamRotation; // 0x350(0x10)
	struct TArray<float> TargetCamFOV; // 0x360(0x10)
	int32_t StartingMenu; // 0x370(0x04)
	struct FRotator CurrentCamRotation; // 0x374(0x0c)
	float CurrentCamFOV; // 0x380(0x04)
	char pad_384[0xc]; // 0x384(0x0c)
	struct FVector4 RandomPower; // 0x390(0x10)
	struct UMaterialInstanceDynamic* LobbyMemo-01Mat; // 0x3a0(0x08)
	int32_t CurrentMenuId; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct TArray<struct UStaticMeshComponent*> PagesMeshes; // 0x3b0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PagesMaterials; // 0x3c0(0x10)
	bool TransitionDone; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct TArray<struct UWidgetComponent*> PagesWidget; // 0x3d8(0x10)
	int32_t PagesCount; // 0x3e8(0x04)
	float Ran; // 0x3ec(0x04)
	bool DebugPosition; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FRotator DebugRotation; // 0x3f4(0x0c)
	float DebugFOV; // 0x400(0x04)
	bool bHasFirstInit; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	struct UMaterialInstanceConstant* MemoMaterialInstConst; // 0x408(0x08)

	void InitPageMaterial(int32_t PageIndex); // Function MenuCam_BP.MenuCam_BP_C.InitPageMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void StopCycleSound(); // Function MenuCam_BP.MenuCam_BP_C.StopCycleSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PlayCycleSound(); // Function MenuCam_BP.MenuCam_BP_C.PlayCycleSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetTickEnabled(bool bEnabled); // Function MenuCam_BP.MenuCam_BP_C.SetTickEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Clean(); // Function MenuCam_BP.MenuCam_BP_C.Clean // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateMaterialWithRenderTarget(int32_t PageId); // Function MenuCam_BP.MenuCam_BP_C.UpdateMaterialWithRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateScene(float FovTarget, float  ovAnim , float FovAdd, struct FRotator InRot, struct FVector Base2, struct FVector InVec); // Function MenuCam_BP.MenuCam_BP_C.UpdateScene // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CyclePage(bool CycleRight); // Function MenuCam_BP.MenuCam_BP_C.CyclePage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(); // Function MenuCam_BP.MenuCam_BP_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyMaterialToUsedPages(int32_t PagesUsed); // Function MenuCam_BP.MenuCam_BP_C.ApplyMaterialToUsedPages // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function MenuCam_BP.MenuCam_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BlendCameraTimeline__FinishedFunc(); // Function MenuCam_BP.MenuCam_BP_C.BlendCameraTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void BlendCameraTimeline__UpdateFunc(); // Function MenuCam_BP.MenuCam_BP_C.BlendCameraTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__FinishedFunc(); // Function MenuCam_BP.MenuCam_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__UpdateFunc(); // Function MenuCam_BP.MenuCam_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void BlendCameraPosition(struct FRotator TargetRotation, float TargetFOV); // Function MenuCam_BP.MenuCam_BP_C.BlendCameraPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SelectMenu(int32_t MenuID); // Function MenuCam_BP.MenuCam_BP_C.SelectMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveTick(float DeltaSeconds); // Function MenuCam_BP.MenuCam_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function MenuCam_BP.MenuCam_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MenuCam_BP(int32_t EntryPoint); // Function MenuCam_BP.MenuCam_BP_C.ExecuteUbergraph_MenuCam_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

