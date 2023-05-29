// WidgetBlueprintGeneratedClass BrightnessCalibrationMenu.BrightnessCalibrationMenu_C
// Size: 0x368 (Inherited: 0x328)
struct UBrightnessCalibrationMenu_C : URBMenuBrightnessCalibration {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UOptionsEntry_C* BrightnessEntry; // 0x330(0x08)
	struct UTextBlock* CalibrationTitleText; // 0x338(0x08)
	struct URichTextBlock* DescriptionText; // 0x340(0x08)
	struct URBMenuButton_C* ExitBtn; // 0x348(0x08)
	struct UOptionsEntry_C* HDRPaperwhiteEntry; // 0x350(0x08)
	struct UOptionsEntry_C* HDRUserInterfaceEntry; // 0x358(0x08)
	struct URBMenuButton_C* ResetDefaultsBtn; // 0x360(0x08)

	void RefreshSliders(); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.RefreshSliders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPush(); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_OnPush // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPop(); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_OnPop // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__BrightnessCalibrationMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_SetToDefaults(); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.Event_SetToDefaults // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__BrightnessCalibrationMenu_HDRPaperwhiteEntry_K2Node_ComponentBoundEvent_4_OnOptionValueChanged__DelegateSignature(struct URBMenuOptionsEntry* OptionEntry); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_HDRPaperwhiteEntry_K2Node_ComponentBoundEvent_4_OnOptionValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__BrightnessCalibrationMenu_HDRUserInterfaceEntry_K2Node_ComponentBoundEvent_6_OnOptionValueChanged__DelegateSignature(struct URBMenuOptionsEntry* OptionEntry); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_HDRUserInterfaceEntry_K2Node_ComponentBoundEvent_6_OnOptionValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__BrightnessCalibrationMenu_BrightnessEntry_K2Node_ComponentBoundEvent_7_OnOptionValueChanged__DelegateSignature(struct URBMenuOptionsEntry* OptionEntry); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.BndEvt__BrightnessCalibrationMenu_BrightnessEntry_K2Node_ComponentBoundEvent_7_OnOptionValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BrightnessCalibrationMenu(int32_t EntryPoint); // Function BrightnessCalibrationMenu.BrightnessCalibrationMenu_C.ExecuteUbergraph_BrightnessCalibrationMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

