// WidgetBlueprintGeneratedClass ControllerMappingMenu.ControllerMappingMenu_C
// Size: 0x340 (Inherited: 0x308)
struct UControllerMappingMenu_C : URBMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UImage* bg; // 0x310(0x08)
	struct UBackgroundBlur* Blur; // 0x318(0x08)
	struct UCanvasPanel* DualSenseController; // 0x320(0x08)
	struct UCanvasPanel* Dualshock4Controller; // 0x328(0x08)
	struct URBMenuButton_C* ExitBtn; // 0x330(0x08)
	struct UCanvasPanel* XboneController; // 0x338(0x08)

	void RefreshLayers(); // Function ControllerMappingMenu.ControllerMappingMenu_C.RefreshLayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ControllerMappingMenu.ControllerMappingMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ControllerMappingMenu.ControllerMappingMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ControllerMappingMenu(int32_t EntryPoint); // Function ControllerMappingMenu.ControllerMappingMenu_C.ExecuteUbergraph_ControllerMappingMenu // (Final|UbergraphFunction) // @ game+0x201e6d4
};

