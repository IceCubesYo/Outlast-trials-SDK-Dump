// BlueprintGeneratedClass MedPharma_SkillController_BP.MedPharma_SkillController_BP_C
// Size: 0x9f0 (Inherited: 0x9e0)
struct AMedPharma_SkillController_BP_C : ARBActiveSkillController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct UParticleSystemComponent* ptc_Thrust; // 0x9e8(0x08)

	void UpdateParticleEmitter(bool IsActive); // Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.UpdateParticleEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnItemHeldInHandChanged(bool bHeldInHand); // Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.Event_OnItemHeldInHandChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MedPharma_SkillController_BP(int32_t EntryPoint); // Function MedPharma_SkillController_BP.MedPharma_SkillController_BP_C.ExecuteUbergraph_MedPharma_SkillController_BP // (Final|UbergraphFunction) // @ game+0x201e6d4
};

