// WidgetBlueprintGeneratedClass InputBindingsMenu.InputBindingsMenu_C
// Size: 0x449 (Inherited: 0x340)
struct UInputBindingsMenu_C : URBMenuControlBinding {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UInputBindingEntryWidget_C* 1stItemBinding; // 0x348(0x08)
	struct UInputBindingEntryWidget_C* 2ndItemBinding; // 0x350(0x08)
	struct UInputBindingEntryWidget_C* 3rdItemBinding; // 0x358(0x08)
	struct UInputBindingEntryWidget_C* 4thItemBinding; // 0x360(0x08)
	struct UInputBindingEntryWidget_C* 5thItemBinding; // 0x368(0x08)
	struct UInputBindingEntryWidget_C* ActiveSkillBinding; // 0x370(0x08)
	struct URBMenuButton_C* ApplyChangeBtn; // 0x378(0x08)
	struct UInputBindingEntryWidget_C* BackwardBinding; // 0x380(0x08)
	struct UImage* bg; // 0x388(0x08)
	struct UBackgroundBlur* Blur; // 0x390(0x08)
	struct UInputBindingEntryWidget_C* CrouchBinding; // 0x398(0x08)
	struct URBMenuButton_C* ExitBtn; // 0x3a0(0x08)
	struct UInputBindingEntryWidget_C* ForwardBinding; // 0x3a8(0x08)
	struct UInputBindingEntryWidget_C* HoldCrouchBinding; // 0x3b0(0x08)
	struct UImage* InputBlocker; // 0x3b8(0x08)
	struct UInputBindingEntryWidget_C* InteractBinding; // 0x3c0(0x08)
	struct UInputBindingEntryWidget_C* ItemDownBinding; // 0x3c8(0x08)
	struct UInputBindingEntryWidget_C* ItemUpBinding; // 0x3d0(0x08)
	struct UInputBindingEntryWidget_C* JumpBinding; // 0x3d8(0x08)
	struct UInputBindingEntryWidget_C* LeftBinding; // 0x3e0(0x08)
	struct UInputBindingEntryWidget_C* ObjectiveDisplayBinding; // 0x3e8(0x08)
	struct UInputBindingEntryWidget_C* PeekLeftBinding; // 0x3f0(0x08)
	struct UInputBindingEntryWidget_C* PeekRightBinding; // 0x3f8(0x08)
	struct UInputBindingEntryWidget_C* PushToTalkBinding; // 0x400(0x08)
	struct UInputBindingEntryWidget_C* QuickThrow; // 0x408(0x08)
	struct URBMenuButton_C* ResetDefaultsBtn; // 0x410(0x08)
	struct UInputBindingEntryWidget_C* RightBinding; // 0x418(0x08)
	struct UInputBindingEntryWidget_C* RunBinding; // 0x420(0x08)
	struct UInputBindingEntryWidget_C* TalkWheelBinding; // 0x428(0x08)
	struct UInputBindingEntryWidget_C* ToggleNVBinding; // 0x430(0x08)
	struct UInputBindingEntryWidget_C* TradeBinding; // 0x438(0x08)
	struct UInputBindingEntryWidget_C* UseItemBinding; // 0x440(0x08)
	bool RebindInProgress; // 0x448(0x01)

	void Init(); // Function InputBindingsMenu.InputBindingsMenu_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshDisplay(); // Function InputBindingsMenu.InputBindingsMenu_C.RefreshDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ApplyChangeBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ApplyChangeBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct URBMenuButton_C* Button); // Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function InputBindingsMenu.InputBindingsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function InputBindingsMenu.InputBindingsMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnResetOptionsPressed(); // Function InputBindingsMenu.InputBindingsMenu_C.OnResetOptionsPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateRebindStatus(bool isRebindInProgress); // Function InputBindingsMenu.InputBindingsMenu_C.Event_UpdateRebindStatus // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_InputBindingsMenu(int32_t EntryPoint); // Function InputBindingsMenu.InputBindingsMenu_C.ExecuteUbergraph_InputBindingsMenu // (Final|UbergraphFunction) // @ game+0x201e6d4
};

