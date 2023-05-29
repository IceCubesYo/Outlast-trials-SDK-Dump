// WidgetBlueprintGeneratedClass QuitMenu.QuitMenu_C
// Size: 0x350 (Inherited: 0x308)
struct UQuitMenu_C : URBQuitMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* WaitingAnimation; // 0x310(0x08)
	struct UImage* Background_2; // 0x318(0x08)
	struct URBMenuButton_C* CancelBtn; // 0x320(0x08)
	struct UHorizontalBox* ControlsHorizontalBox; // 0x328(0x08)
	struct UImage* Line; // 0x330(0x08)
	struct UImage* Line_2; // 0x338(0x08)
	struct URBMenuButton_C* QuitGameBtn; // 0x340(0x08)
	struct UImage* RibbonBackground; // 0x348(0x08)

	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function QuitMenu.QuitMenu_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Exiting(); // Function QuitMenu.QuitMenu_C.Event_Exiting // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function QuitMenu.QuitMenu_C.BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function QuitMenu.QuitMenu_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuConfirm_Released(); // Function QuitMenu.QuitMenu_C.Event_MenuConfirm_Released // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_MenuCancel_Pressed(); // Function QuitMenu.QuitMenu_C.Event_MenuCancel_Pressed // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_QuitMenu(int32_t EntryPoint); // Function QuitMenu.QuitMenu_C.ExecuteUbergraph_QuitMenu // (Final|UbergraphFunction) // @ game+0x201e6d4
};

