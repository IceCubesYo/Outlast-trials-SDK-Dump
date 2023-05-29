// BlueprintGeneratedClass Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C
// Size: 0x4b0 (Inherited: 0x488)
struct ASpectra_Base_ActiveSkill_BP_C : ARBSpectraSkill {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct URBActiveSkillVisionComponent* RBActiveSkillVision; // 0x490(0x08)
	struct UStaticMeshComponent* AS_WaveSphere; // 0x498(0x08)
	struct UStaticMeshComponent* ESOP; // 0x4a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4a8(0x08)

	void UserConstructionScript(); // Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnVisionActiveChanged(bool IsActive, bool bFullEffect); // Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.Event_OnVisionActiveChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_Spectra_Base_ActiveSkill_BP(int32_t EntryPoint); // Function Spectra_Base_ActiveSkill_BP.Spectra_Base_ActiveSkill_BP_C.ExecuteUbergraph_Spectra_Base_ActiveSkill_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

