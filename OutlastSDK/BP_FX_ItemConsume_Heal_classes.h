// BlueprintGeneratedClass BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_FX_ItemConsume_Heal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float Heal02_Smooth_Depth_AEE0181E49033649DF2B4380EAB8474E; // 0x258(0x04)
	float Heal02_Smooth_StretchDistance_AEE0181E49033649DF2B4380EAB8474E; // 0x25c(0x04)
	float Heal02_Smooth_StretchMulti_AEE0181E49033649DF2B4380EAB8474E; // 0x260(0x04)
	enum class ETimelineDirection Heal02_Smooth__Direction_AEE0181E49033649DF2B4380EAB8474E; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Heal02_Smooth; // 0x268(0x08)
	float Heal01_Depth_8F9E003B47CEC232C974F28F12769A0D; // 0x270(0x04)
	float Heal01_StratchDistance_8F9E003B47CEC232C974F28F12769A0D; // 0x274(0x04)
	float Heal01_OpacityMulti_8F9E003B47CEC232C974F28F12769A0D; // 0x278(0x04)
	enum class ETimelineDirection Heal01__Direction_8F9E003B47CEC232C974F28F12769A0D; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Heal01; // 0x280(0x08)

	void Heal01__FinishedFunc(); // Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal01__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Heal01__UpdateFunc(); // Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal01__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Heal02_Smooth__FinishedFunc(); // Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal02_Smooth__FinishedFunc // (BlueprintEvent) // @ game+0x201e6d4
	void Heal02_Smooth__UpdateFunc(); // Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.Heal02_Smooth__UpdateFunc // (BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BP_FX_ItemConsume_Heal(int32_t EntryPoint); // Function BP_FX_ItemConsume_Heal.BP_FX_ItemConsume_Heal_C.ExecuteUbergraph_BP_FX_ItemConsume_Heal // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

