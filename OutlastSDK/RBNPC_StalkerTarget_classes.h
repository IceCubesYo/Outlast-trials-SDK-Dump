// BlueprintGeneratedClass RBNPC_StalkerTarget.RBNPC_StalkerTarget_C
// Size: 0x5850 (Inherited: 0x5840)
struct ARBNPC_StalkerTarget_C : ARBNPC_Grunt_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5840(0x08)
	struct URBObjectiveActorComponent* RBObjectiveActor; // 0x5848(0x08)

	void CustomizeCharacter(); // Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.CustomizeCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnHeadBoom(); // Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.Event_OnHeadBoom // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBNPC_StalkerTarget(int32_t EntryPoint); // Function RBNPC_StalkerTarget.RBNPC_StalkerTarget_C.ExecuteUbergraph_RBNPC_StalkerTarget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

