// WidgetBlueprintGeneratedClass SASCameraIntercomUI.SASCameraIntercomUI_C
// Size: 0x2a9 (Inherited: 0x260)
struct USASCameraIntercomUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_2; // 0x268(0x08)
	struct UButton* ExitButton; // 0x270(0x08)
	struct UButton* LeftButton; // 0x278(0x08)
	struct UButton* RightButton; // 0x280(0x08)
	struct TArray<struct ACameraIntercom-01_BP_C*> CameraIntercoms; // 0x288(0x10)
	int32_t CameraIndex; // 0x298(0x04)
	int32_t RemoteCamera; // 0x29c(0x04)
	struct ARemoteCameraIntercom-01_BP_C* RemoteCameraIntercom; // 0x2a0(0x08)
	bool MousePressed; // 0x2a8(0x01)

	void BndEvt__Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.BndEvt__Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void TrackMouse(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.TrackMouse // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExitMenu(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.ExitMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetCameraIntercom(struct ARemoteCameraIntercom-01_BP_C* CameraIntercom); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.SetCameraIntercom // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ForcePlayerExit(); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.ForcePlayerExit // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SASCameraIntercomUI(int32_t EntryPoint); // Function SASCameraIntercomUI.SASCameraIntercomUI_C.ExecuteUbergraph_SASCameraIntercomUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

