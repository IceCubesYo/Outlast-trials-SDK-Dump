// BlueprintGeneratedClass RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C
// Size: 0x690 (Inherited: 0x658)
struct ARemoteCameraIntercom-01_BP_C : ARBOperatable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x660(0x08)
	struct TArray<struct ACameraIntercom-01_BP_C*> CameraIntercoms; // 0x668(0x10)
	struct ACameraIntercom-01_BP_C* CurrentIntercom; // 0x678(0x08)
	struct FMulticastInlineDelegate OnForcePlayerExit; // 0x680(0x10)

	void GetAllCameraIntercoms(); // Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.GetAllCameraIntercoms // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnCompletedOperation(struct TArray<struct ARBPawn*>& pawns); // Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.Event_OnCompletedOperation // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RemoteCameraIntercom-01_BP(int32_t EntryPoint); // Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.ExecuteUbergraph_RemoteCameraIntercom-01_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnForcePlayerExit__DelegateSignature(); // Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.OnForcePlayerExit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

