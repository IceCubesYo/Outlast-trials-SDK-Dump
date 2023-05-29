// WidgetBlueprintGeneratedClass PlayerStatus.PlayerStatus_C
// Size: 0x2a8 (Inherited: 0x278)
struct UPlayerStatus_C : URBHUDPlayerStatus {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UImage* StatusIcon; // 0x280(0x08)
	struct USizeBox* StatusSize; // 0x288(0x08)
	float DeathTime; // 0x290(0x04)
	float TimeBeforeRespawn; // 0x294(0x04)
	struct UMaterialInstanceDynamic* DesatMaterial; // 0x298(0x08)
	struct UMaterialInstanceDynamic* ObjectiveMaterial; // 0x2a0(0x08)

	struct UTexture2D* GetStatusIconTexture(enum class EPlayerIndicatorType& playerIndicatorType, bool bIsObjective); // Function PlayerStatus.PlayerStatus_C.GetStatusIconTexture // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void UpdateStatusIcon(); // Function PlayerStatus.PlayerStatus_C.UpdateStatusIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnCompletingObjectiveChanged(bool isCompletingObjective); // Function PlayerStatus.PlayerStatus_C.OnCompletingObjectiveChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerStatusChanged(enum class EPlayerIndicatorType newPlayerStatus); // Function PlayerStatus.PlayerStatus_C.OnPlayerStatusChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateProgress(); // Function PlayerStatus.PlayerStatus_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function PlayerStatus.PlayerStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayerStatus.PlayerStatus_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerStatus(int32_t EntryPoint); // Function PlayerStatus.PlayerStatus_C.ExecuteUbergraph_PlayerStatus // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

