// BlueprintGeneratedClass PaintBomb-01_BP.PaintBomb-01_BP_C
// Size: 0x330 (Inherited: 0x248)
struct APaintBomb-01_BP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct URBVolumetricFogDynamicDensityVolumeComponent* RBVolumetricFogDynamicDensityVolume; // 0x250(0x08)
	struct UDecalComponent* PaintDecal0; // 0x258(0x08)
	struct UDecalComponent* PaintDecal6; // 0x260(0x08)
	struct UDecalComponent* PaintDecal5; // 0x268(0x08)
	struct UDecalComponent* PaintDecal4; // 0x270(0x08)
	struct UDecalComponent* PaintDecal3; // 0x278(0x08)
	struct UDecalComponent* PaintDecal2; // 0x280(0x08)
	struct UDecalComponent* PaintDecal1; // 0x288(0x08)
	struct UDecalComponent* Ring; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Timeline_0_NewTrack_0_35EB4F934C318FB144B7CEA72B3FBFEB; // 0x2a0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_35EB4F934C318FB144B7CEA72B3FBFEB; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	float MistTimeline_NewTrack_0_25BE09A44DE7BD92D095759D8ACFA6DC; // 0x2b0(0x04)
	enum class ETimelineDirection MistTimeline__Direction_25BE09A44DE7BD92D095759D8ACFA6DC; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* MistTimeline; // 0x2b8(0x08)
	struct TArray<struct FVector> LineTraces; // 0x2c0(0x10)
	struct TArray<struct UMaterialInstanceConstant*> DecalsList; // 0x2d0(0x10)
	struct TArray<struct UDecalComponent*> GroundDecals; // 0x2e0(0x10)
	struct FVector DecalSizeCustom; // 0x2f0(0x0c)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TArray<struct AOrientedDecalActor_C*> DecalActors; // 0x300(0x10)
	struct FLinearColor DecalColor; // 0x310(0x10)
	struct UParticleSystem* ParticleEmitter; // 0x320(0x08)
	float NewVar_1; // 0x328(0x04)
	float Radius; // 0x32c(0x04)

	void UpdateFog(float Density, float Radius); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.UpdateFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddDecals(struct FVector Location, struct FVector Normal); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.AddDecals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MistTimeline__FinishedFunc(); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.MistTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void MistTimeline__UpdateFunc(); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.MistTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__FinishedFunc(); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Timeline_0__UpdateFunc(); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Boom(float duration, float Radius, struct FLinearColor Color, struct APawn* TriggeringPawn); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.Boom // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetDecal(float duration, float Radius); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.SetDecal // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Mist(float Time, float Radius); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.Mist // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PaintBomb-01_BP(int32_t EntryPoint); // Function PaintBomb-01_BP.PaintBomb-01_BP_C.ExecuteUbergraph_PaintBomb-01_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

