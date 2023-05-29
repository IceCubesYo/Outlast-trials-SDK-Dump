// BlueprintGeneratedClass RBNPC_Gooseberry.RBNPC_Gooseberry_C
// Size: 0x5648 (Inherited: 0x5608)
struct ARBNPC_Gooseberry_C : ARBNPC_BP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5608(0x08)
	struct USkeletalMeshComponent* Futterman; // 0x5610(0x08)
	struct USkeletalMeshComponent* Gooseberry_Skirt; // 0x5618(0x08)
	struct USkeletalMeshComponent* Head; // 0x5620(0x08)
	struct USkeletalMeshComponent* FullBodyMesh; // 0x5628(0x08)
	float TimeToPlayNextIdleBreaker; // 0x5630(0x04)
	char pad_5634[0x4]; // 0x5634(0x04)
	struct FMulticastInlineDelegate PlayFuttermanIdleBreaker; // 0x5638(0x10)

	bool TryPlayFacialAnim(struct FString lineId); // Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.TryPlayFacialAnim // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent(); // Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.GetFaceFXSkeletalMeshComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void UserConstructionScript(); // Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void UpdateTimeToPlayFuttermanIdleBreaker(); // Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UpdateTimeToPlayFuttermanIdleBreaker // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveTick(float DeltaSeconds); // Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBNPC_Gooseberry(int32_t EntryPoint); // Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ExecuteUbergraph_RBNPC_Gooseberry // (Final|UbergraphFunction) // @ game+0x201e6d4
	void PlayFuttermanIdleBreaker__DelegateSignature(); // Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.PlayFuttermanIdleBreaker__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

