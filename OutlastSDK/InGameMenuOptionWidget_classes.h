// WidgetBlueprintGeneratedClass InGameMenuOptionWidget.InGameMenuOptionWidget_C
// Size: 0x2f0 (Inherited: 0x260)
struct UInGameMenuOptionWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* DevOptionsBTN; // 0x268(0x08)
	struct UTextBlock* Text; // 0x270(0x08)
	struct FSlateColor HoveredTextColor; // 0x278(0x28)
	struct FSlateColor NormalTextColor; // 0x2a0(0x28)
	struct FMulticastInlineDelegate OnClicked; // 0x2c8(0x10)
	struct FText TextValue; // 0x2d8(0x18)

	void PreConstruct(bool IsDesignTime); // Function InGameMenuOptionWidget.InGameMenuOptionWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function InGameMenuOptionWidget.InGameMenuOptionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DevOptionsBTN_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function InGameMenuOptionWidget.InGameMenuOptionWidget_C.BndEvt__DevOptionsBTN_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DevOptionsBTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function InGameMenuOptionWidget.InGameMenuOptionWidget_C.BndEvt__DevOptionsBTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DevOptionsBTN_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function InGameMenuOptionWidget.InGameMenuOptionWidget_C.BndEvt__DevOptionsBTN_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_InGameMenuOptionWidget(int32_t EntryPoint); // Function InGameMenuOptionWidget.InGameMenuOptionWidget_C.ExecuteUbergraph_InGameMenuOptionWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(); // Function InGameMenuOptionWidget.InGameMenuOptionWidget_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

