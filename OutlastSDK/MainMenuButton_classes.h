// WidgetBlueprintGeneratedClass MainMenuButton.MainMenuButton_C
// Size: 0x2b0 (Inherited: 0x260)
struct UMainMenuButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Focus; // 0x268(0x08)
	struct UButton* Button_33; // 0x270(0x08)
	struct UImage* Image_62; // 0x278(0x08)
	struct UTextBlock* Text; // 0x280(0x08)
	struct FText OptionName; // 0x288(0x18)
	struct FMulticastInlineDelegate Event_Clicked; // 0x2a0(0x10)

	void SetEnabled(bool IsEnabled); // Function MainMenuButton.MainMenuButton_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function MainMenuButton.MainMenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function MainMenuButton.MainMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_32_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function MainMenuButton.MainMenuButton_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_32_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function MainMenuButton.MainMenuButton_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_32_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function MainMenuButton.MainMenuButton_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MainMenuButton(int32_t EntryPoint); // Function MainMenuButton.MainMenuButton_C.ExecuteUbergraph_MainMenuButton // (Final|UbergraphFunction) // @ game+0x201e6d4
	void Event_Clicked__DelegateSignature(); // Function MainMenuButton.MainMenuButton_C.Event_Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

