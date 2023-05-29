// BlueprintGeneratedClass RBLight_BP.RBLight_BP_C
// Size: 0x72e (Inherited: 0x580)
struct ARBLight_BP_C : ARBLight {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UStaticMeshComponent* LightBulb; // 0x588(0x08)
	struct UStaticMeshComponent* LightMesh; // 0x590(0x08)
	struct UStaticMeshComponent* DebugArrow; // 0x598(0x08)
	struct UNiagaraComponent* AmbDustCone; // 0x5a0(0x08)
	struct UNiagaraComponent* AmbDustSphere; // 0x5a8(0x08)
	struct URBSoundComponent* RBSound; // 0x5b0(0x08)
	struct URBRandomizableHelperComponent* RBRandomizableHelper; // 0x5b8(0x08)
	struct UStaticMeshComponent* CableSMeshComp; // 0x5c0(0x08)
	struct UStaticMeshComponent* AnchorSMeshComp; // 0x5c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5d0(0x08)
	bool bVisible_OLD; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	struct FMulticastInlineDelegate LightVisibilityChanged; // 0x5e0(0x10)
	bool bUseDynamicLighting_OLD; // 0x5f0(0x01)
	bool bBakeIndirectOnMovables_OLD; // 0x5f1(0x01)
	bool bIsFlickering_OLD; // 0x5f2(0x01)
	bool bNoStaticLightingWhenFlickering_OLD; // 0x5f3(0x01)
	bool UseVolumetricFogLights_OLD; // 0x5f4(0x01)
	bool UseVolumetricFog_OLD; // 0x5f5(0x01)
	bool DONTBakeFog_OLD; // 0x5f6(0x01)
	bool UseAnchorAndCables; // 0x5f7(0x01)
	struct FVector AnchorPosition; // 0x5f8(0x0c)
	float LightIntensity_OLD; // 0x604(0x04)
	float LightIntensityScale_OLD; // 0x608(0x04)
	struct FLinearColor Color_OLD; // 0x60c(0x10)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct TArray<struct ULightComponent*> AllLights_1; // 0x620(0x10)
	struct TArray<struct ULightComponent*> DynamicLights_OLD; // 0x630(0x10)
	struct TArray<struct ULightComponent*> StaticLights_OLD; // 0x640(0x10)
	struct TArray<struct ULightComponent*> DualLights_OLD; // 0x650(0x10)
	struct TArray<struct URBVolumetricFogLightComponent*> FogLights_OLD; // 0x660(0x10)
	float RadiusScaleMultiplier_OLD; // 0x670(0x04)
	float FlickeringIntensity_OLD; // 0x674(0x04)
	float FlickeringSpeed_OLD; // 0x678(0x04)
	float VolumetricFogIntensity_OLD; // 0x67c(0x04)
	float ConeAngle_OLD; // 0x680(0x04)
	float ShadowResolutionScale_OLD; // 0x684(0x04)
	float ShadowBias_OLD; // 0x688(0x04)
	float IndirectLightingIntensity_OLD; // 0x68c(0x04)
	struct UCurveFloat* FlickeringCurve_OLD; // 0x690(0x08)
	struct UStaticMesh* AnchorStaticMesh; // 0x698(0x08)
	struct UStaticMesh* CableStaticMesh; // 0x6a0(0x08)
	float MaxDrawDistanceFadeStart_OLD; // 0x6a8(0x04)
	float MaxDrawDistanceFadeEnd_OLD; // 0x6ac(0x04)
	struct FLightingChannels LightingChannels_OLD; // 0x6b0(0x01)
	bool ForceSound; // 0x6b1(0x01)
	bool VolumetricFogCastShadows_OLD; // 0x6b2(0x01)
	bool Use_ConeShape; // 0x6b3(0x01)
	float EmitterConeFar; // 0x6b4(0x04)
	float EmitterConeAngle; // 0x6b8(0x04)
	struct FVector ConeShapeOffset; // 0x6bc(0x0c)
	float SpawnRateCone; // 0x6c8(0x04)
	float ConeShapeBiasRadius; // 0x6cc(0x04)
	bool Use_SphereShape; // 0x6d0(0x01)
	char pad_6D1[0x3]; // 0x6d1(0x03)
	float SpawnRateSphere; // 0x6d4(0x04)
	float SphereEmitterRadius; // 0x6d8(0x04)
	float DustSize; // 0x6dc(0x04)
	struct FLinearColor DustColor; // 0x6e0(0x10)
	enum class ELightClipPlaneMode ClipPlane_OLD; // 0x6f0(0x01)
	char pad_6F1[0x3]; // 0x6f1(0x03)
	float ClipPlaneDistance_OLD; // 0x6f4(0x04)
	bool UseBulb; // 0x6f8(0x01)
	bool Animation Set Material Dynamic Data A_OLD; // 0x6f9(0x01)
	bool Animation Set Material Dynamic Data B_OLD; // 0x6fa(0x01)
	bool Animation Set Material Dynamic Data G_OLD; // 0x6fb(0x01)
	bool Animation Set Material Dynamic Data R_OLD; // 0x6fc(0x01)
	char pad_6FD[0x3]; // 0x6fd(0x03)
	float Animated Material Dynamic Data Intensity_OLD; // 0x700(0x04)
	bool bLinkFogLightColor_OLD; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	float MaxDrawDistanceMultiplier_OLD; // 0x708(0x04)
	bool bOverrideAll_OLD; // 0x70c(0x01)
	bool bOverrideIntensities_OLD; // 0x70d(0x01)
	bool bOverrideColor_OLD; // 0x70e(0x01)
	bool bOverrideFog_OLD; // 0x70f(0x01)
	bool bOverrideConeOpening_OLD; // 0x710(0x01)
	bool bOverrideRadius_OLD; // 0x711(0x01)
	char pad_712[0x6]; // 0x712(0x06)
	struct UCurveFloat* AnimationCurve_OLD; // 0x718(0x08)
	bool bIsPlayingAnimationCurve_OLD; // 0x720(0x01)
	char pad_721[0x3]; // 0x721(0x03)
	float AnimationCurveStartTime_OLD; // 0x724(0x04)
	float ReflectionDiffuseBrightness_OLD; // 0x728(0x04)
	bool bShouldResetWithStageOverride_OLD; // 0x72c(0x01)
	bool ValuesMigratedV1; // 0x72d(0x01)

	bool BP_MapCheck(enum class EMapCheckType checkType, struct FString& outErrorMsg); // Function RBLight_BP.RBLight_BP_C.BP_MapCheck // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool FixUp(); // Function RBLight_BP.RBLight_BP_C.FixUp // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldBeIgnoredForLots(); // Function RBLight_BP.RBLight_BP_C.ShouldBeIgnoredForLots // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	bool GetStateName(struct FString& stateA, struct FString& stateB); // Function RBLight_BP.RBLight_BP_C.GetStateName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool IsStateA(); // Function RBLight_BP.RBLight_BP_C.IsStateA // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void MigrateOldValues(); // Function RBLight_BP.RBLight_BP_C.MigrateOldValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetUseBulb(); // Function RBLight_BP.RBLight_BP_C.SetUseBulb // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetClipPlaneDistance(); // Function RBLight_BP.RBLight_BP_C.GetClipPlaneDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetDustParticle(bool IsRuntime); // Function RBLight_BP.RBLight_BP_C.SetDustParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ConstructAudio(); // Function RBLight_BP.RBLight_BP_C.ConstructAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetVisible(bool visible); // Function RBLight_BP.RBLight_BP_C.SetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Initialize(bool IsRuntime); // Function RBLight_BP.RBLight_BP_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetAnchorAndCablePosition(bool bIsRuntime); // Function RBLight_BP.RBLight_BP_C.SetAnchorAndCablePosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function RBLight_BP.RBLight_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BP_PrepareMapCheck(); // Function RBLight_BP.RBLight_BP_C.BP_PrepareMapCheck // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnPostActorsPasted(struct TArray<struct AActor*>& pastedActors); // Function RBLight_BP.RBLight_BP_C.OnPostActorsPasted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void PostAddedToLevel(); // Function RBLight_BP.RBLight_BP_C.PostAddedToLevel // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PostDuplicated(struct AActor* duplicationParent); // Function RBLight_BP.RBLight_BP_C.PostDuplicated // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PostEditChange(struct FName& PropertyName); // Function RBLight_BP.RBLight_BP_C.PostEditChange // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void PostEditMove(bool bFinished); // Function RBLight_BP.RBLight_BP_C.PostEditMove // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void TickSelected(); // Function RBLight_BP.RBLight_BP_C.TickSelected // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PrepareState(bool bStateA, struct AActor* randomOwner); // Function RBLight_BP.RBLight_BP_C.PrepareState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetShouldBeIgnoredForLots(bool bValue); // Function RBLight_BP.RBLight_BP_C.SetShouldBeIgnoredForLots // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetState(bool bStateA); // Function RBLight_BP.RBLight_BP_C.SetState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function RBLight_BP.RBLight_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void OnRandomStateChanged(); // Function RBLight_BP.RBLight_BP_C.OnRandomStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void LightingScenarioChanged(); // Function RBLight_BP.RBLight_BP_C.LightingScenarioChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnEditorPostLoad(); // Function RBLight_BP.RBLight_BP_C.OnEditorPostLoad // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnBPConstruction(); // Function RBLight_BP.RBLight_BP_C.OnBPConstruction // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBLight_BP(int32_t EntryPoint); // Function RBLight_BP.RBLight_BP_C.ExecuteUbergraph_RBLight_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void LightVisibilityChanged__DelegateSignature(); // Function RBLight_BP.RBLight_BP_C.LightVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

