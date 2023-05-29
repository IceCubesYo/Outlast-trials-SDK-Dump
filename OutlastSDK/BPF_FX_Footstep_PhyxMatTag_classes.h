// BlueprintGeneratedClass BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C
// Size: 0x28 (Inherited: 0x28)
struct UBPF_FX_Footstep_PhyxMatTag_C : UBlueprintFunctionLibrary {

	void tmpPlayLandingFX(struct UObject* __WorldContext); // Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayLandingFX // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void tmpPlayFootstepFX(bool& IsLeftFoot, struct UObject* __WorldContext); // Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayFootstepFX // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void tmpPlayVFX(struct FVector& TestPosition, struct TMap<struct UPhysicalMaterial*, struct UNiagaraSystem*>& PhysicsMaterialsToSystems, struct UNiagaraSystem* DefaultSystem, struct UObject* __WorldContext); // Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.tmpPlayVFX // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Footstep FX Landing(struct ARBPawn* Pawn, struct UObject* __WorldContext, int32_t& Index); // Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.Footstep FX Landing // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Footstep FX Run(struct ARBPawn* Pawn, struct FFootstepData FootstepData, struct UObject* __WorldContext, int32_t& Index); // Function BPF_FX_Footstep_PhyxMatTag.BPF_FX_Footstep_PhyxMatTag_C.Footstep FX Run // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

