// BlueprintGeneratedClass RBMainMenuGameMode_BP.RBMainMenuGameMode_BP_C
// Size: 0x3c8 (Inherited: 0x3a8)
struct ARBMainMenuGameMode_BP_C : ARBGameModeMainMenu {
	struct USceneComponent* DefaultSceneRoot; // 0x3a8(0x08)
	bool CheckRequiredXP; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FMulticastInlineDelegate CheckRequiredXPChanged; // 0x3b8(0x10)

	void SetCheckRequiredXP(bool CheckRequiredXP); // Function RBMainMenuGameMode_BP.RBMainMenuGameMode_BP_C.SetCheckRequiredXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CheckRequiredXPChanged__DelegateSignature(bool CheckRequiredXP); // Function RBMainMenuGameMode_BP.RBMainMenuGameMode_BP_C.CheckRequiredXPChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

