// WidgetBlueprintGeneratedClass ContextualMenuButton.ContextualMenuButton_C
// Size: 0x280 (Inherited: 0x260)
struct UContextualMenuButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_47; // 0x268(0x08)
	struct FMulticastInlineDelegate EventClicked; // 0x270(0x10)

	void BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ContextualMenuButton.ContextualMenuButton_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ContextualMenuButton(int32_t EntryPoint); // Function ContextualMenuButton.ContextualMenuButton_C.ExecuteUbergraph_ContextualMenuButton // (Final|UbergraphFunction) // @ game+0x201e6d4
	void EventClicked__DelegateSignature(); // Function ContextualMenuButton.ContextualMenuButton_C.EventClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

