// BlueprintGeneratedClass PPManager_BP.PPManager_BP_C
// Size: 0x3c4 (Inherited: 0x248)
struct APPManager_BP_C : ARBPostProcessUpdateManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float FX_Hit_TL_NewTrack_0_B57CAFE54A8B999E18CC5DA1AAB74DB1; // 0x260(0x04)
	enum class ETimelineDirection FX_Hit_TL__Direction_B57CAFE54A8B999E18CC5DA1AAB74DB1; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* FX_Hit_TL; // 0x268(0x08)
	float FX_WakeUp_TL_NewTrack_0_2212E6434646E7D0E5FB40A24C17E1E2; // 0x270(0x04)
	enum class ETimelineDirection FX_WakeUp_TL__Direction_2212E6434646E7D0E5FB40A24C17E1E2; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct UTimelineComponent* FX_WakeUp_TL; // 0x278(0x08)
	float TL_inFocus_NewTrack_0_ACB905814E0B0B7B864472BC02D3CA55; // 0x280(0x04)
	float TL_inFocus_Blend_ACB905814E0B0B7B864472BC02D3CA55; // 0x284(0x04)
	enum class ETimelineDirection TL_inFocus__Direction_ACB905814E0B0B7B864472BC02D3CA55; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UTimelineComponent* TL_inFocus; // 0x290(0x08)
	float nvExit_TL_UV_C77ACCC546F2A7F1CE0A3DAFBDE18CEE; // 0x298(0x04)
	float nvExit_TL_FocalDistance_C77ACCC546F2A7F1CE0A3DAFBDE18CEE; // 0x29c(0x04)
	float nvExit_TL_Black_C77ACCC546F2A7F1CE0A3DAFBDE18CEE; // 0x2a0(0x04)
	float nvExit_TL_Blur_C77ACCC546F2A7F1CE0A3DAFBDE18CEE; // 0x2a4(0x04)
	float nvExit_TL_DoubleVision_C77ACCC546F2A7F1CE0A3DAFBDE18CEE; // 0x2a8(0x04)
	enum class ETimelineDirection nvExit_TL__Direction_C77ACCC546F2A7F1CE0A3DAFBDE18CEE; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* nvExit_TL; // 0x2b0(0x08)
	float nvEnter_TL_White_D0C479F54AFB3F9F5915F18D719266F7; // 0x2b8(0x04)
	float nvEnter_TL_NV_Flash_D0C479F54AFB3F9F5915F18D719266F7; // 0x2bc(0x04)
	float nvEnter_TL_FocalDistance_D0C479F54AFB3F9F5915F18D719266F7; // 0x2c0(0x04)
	float nvEnter_TL_Exposition_D0C479F54AFB3F9F5915F18D719266F7; // 0x2c4(0x04)
	float nvEnter_TL_Blur_D0C479F54AFB3F9F5915F18D719266F7; // 0x2c8(0x04)
	float nvEnter_TL_DoubleVision_D0C479F54AFB3F9F5915F18D719266F7; // 0x2cc(0x04)
	enum class ETimelineDirection nvEnter_TL__Direction_D0C479F54AFB3F9F5915F18D719266F7; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UTimelineComponent* nvEnter_TL; // 0x2d8(0x08)
	float Timeline_0_Density_754EF43147DE172C96E7C49DB7B7D5B6; // 0x2e0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_754EF43147DE172C96E7C49DB7B7D5B6; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2e8(0x08)
	float TL_Spook01_Blend_E7E483AF40D2178EA14504A6D0309303; // 0x2f0(0x04)
	enum class ETimelineDirection TL_Spook01__Direction_E7E483AF40D2178EA14504A6D0309303; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* TL_Spook01; // 0x2f8(0x08)
	float TL_WhiteFadeOut_Blend_5A85C2A143557A30588EA087FA49DDA1; // 0x300(0x04)
	enum class ETimelineDirection TL_WhiteFadeOut__Direction_5A85C2A143557A30588EA087FA49DDA1; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* TL_WhiteFadeOut; // 0x308(0x08)
	float TL_WhiteFadeIn_Blend_2CF0231D4859F6655484A8AD69175B7F; // 0x310(0x04)
	enum class ETimelineDirection TL_WhiteFadeIn__Direction_2CF0231D4859F6655484A8AD69175B7F; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct UTimelineComponent* TL_WhiteFadeIn; // 0x318(0x08)
	struct TArray<struct UActorComponent*> CA; // 0x320(0x10)
	bool FX_FlashWhite_On; // 0x330(0x01)
	bool FX_FadeWhite_On; // 0x331(0x01)
	bool FX_PsySpook_On; // 0x332(0x01)
	bool FX_GetGased_On; // 0x333(0x01)
	bool FX_nv_On; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct FWeightedBlendable FX_PsySpook_Mat; // 0x338(0x10)
	struct FWeightedBlendable FX_GetGas_Mat; // 0x348(0x10)
	struct FWeightedBlendable FX Double Vision Mat; // 0x358(0x10)
	float FX_FadeWhiteExpComp; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct TArray<struct FWeightedBlendable> Material; // 0x370(0x10)
	float PsySpookFOVScale; // 0x380(0x04)
	float PsySpookFarBlurSize; // 0x384(0x04)
	float PsyFocalDistance; // 0x388(0x04)
	float nvFlashExpComp; // 0x38c(0x04)
	float nvFlashDistance; // 0x390(0x04)
	float nvFlashFOVScale; // 0x394(0x04)
	float nvFlashNearBlurSize; // 0x398(0x04)
	bool FX_InFocus_On; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	float InFocusNearBlurSize; // 0x3a0(0x04)
	float InFocusFOVScale; // 0x3a4(0x04)
	float InFocusFocalDistance; // 0x3a8(0x04)
	float InFocusFarBlurSize; // 0x3ac(0x04)
	float InFocusFocalRegion; // 0x3b0(0x04)
	bool bMansionIntroOn; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	float FarTransitionRegion; // 0x3b8(0x04)
	bool bFX_Hit; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	float hitExpComp; // 0x3c0(0x04)

	void debug(); // Function PPManager_BP.PPManager_BP_C.debug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Remove PP Override(); // Function PPManager_BP.PPManager_BP_C.Remove PP Override // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OverridePP(struct FPostProcessSettings& PP); // Function PPManager_BP.PPManager_BP_C.OverridePP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TL_WhiteFadeIn__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void TL_WhiteFadeIn__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void TL_WhiteFadeOut__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void TL_WhiteFadeOut__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.TL_WhiteFadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void TL_Spook01__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.TL_Spook01__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void TL_Spook01__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.TL_Spook01__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void nvEnter_TL__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.nvEnter_TL__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void nvEnter_TL__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.nvEnter_TL__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void nvExit_TL__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.nvExit_TL__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void nvExit_TL__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.nvExit_TL__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void TL_inFocus__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.TL_inFocus__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void TL_inFocus__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.TL_inFocus__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void FX_WakeUp_TL__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.FX_WakeUp_TL__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void FX_WakeUp_TL__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.FX_WakeUp_TL__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void FX_Hit_TL__FinishedFunc(); // Function PPManager_BP.PPManager_BP_C.FX_Hit_TL__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void FX_Hit_TL__UpdateFunc(); // Function PPManager_BP.PPManager_BP_C.FX_Hit_TL__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void FX_FadeWhiteOut(float MinExp, float MaxExp, float TimeFadeOut); // Function PPManager_BP.PPManager_BP_C.FX_FadeWhiteOut // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void FX_FadeWhiteIn(float MinExp, float MaxExp, float TimeFadeIn); // Function PPManager_BP.PPManager_BP_C.FX_FadeWhiteIn // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void FX_PsySpook(float SpookTime, struct UObject* PP_Material); // Function PPManager_BP.PPManager_BP_C.FX_PsySpook // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void FX_GetGas(); // Function PPManager_BP.PPManager_BP_C.FX_GetGas // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveTick(float DeltaSeconds); // Function PPManager_BP.PPManager_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void FX_WhiteFlash(float MaxExp, float TimeFadeIn, float TimeFadeOut, float DelayTimeOut); // Function PPManager_BP.PPManager_BP_C.FX_WhiteFlash // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnExitNightVision(); // Function PPManager_BP.PPManager_BP_C.OnExitNightVision // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnEnterNightVision(); // Function PPManager_BP.PPManager_BP_C.OnEnterNightVision // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void FX_InFocus(float delay, float blendTime, float MinFocalDistance, float MaxFocalDistance, float MinFOVScale, float MaxFOVScale, float NearBlurSize, float FarBlurSize, float MinFocalRegion, float MaxFocalRegion); // Function PPManager_BP.PPManager_BP_C.FX_InFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void FX_SetMansionDOFEnabled(); // Function PPManager_BP.PPManager_BP_C.FX_SetMansionDOFEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void FX_PlayMansionDOFEaseOut(); // Function PPManager_BP.PPManager_BP_C.FX_PlayMansionDOFEaseOut // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void FX_Hit(float MaxExp); // Function PPManager_BP.PPManager_BP_C.FX_Hit // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PPManager_BP(int32_t EntryPoint); // Function PPManager_BP.PPManager_BP_C.ExecuteUbergraph_PPManager_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

