// WidgetBlueprintGeneratedClass SocialMenu_PartyOption.SocialMenu_PartyOption_C
// Size: 0x2e0 (Inherited: 0x260)
struct USocialMenu_PartyOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BackgroundImage; // 0x268(0x08)
	struct UHorizontalBox* EditingBox; // 0x270(0x08)
	struct UButton* InteractionButton; // 0x278(0x08)
	struct UButton* NextValueButton; // 0x280(0x08)
	struct UTextBlock* OptionNameText; // 0x288(0x08)
	struct UButton* PreviousValueButton; // 0x290(0x08)
	struct UTextBlock* ValueText; // 0x298(0x08)
	struct FMulticastInlineDelegate OnValueUpdated; // 0x2a0(0x10)
	bool bEnabled; // 0x2b0(0x01)
	bool bHovered; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	int32_t CurrentValue; // 0x2b4(0x04)
	struct TArray<struct FText> Values; // 0x2b8(0x10)
	struct FText OptionName; // 0x2c8(0x18)

	void SetHovered(bool bInHovered); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.SetHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetValue(int32_t Value); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.SetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetEnabled(bool bInEnabled); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.Setup // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PreviousValueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.BndEvt__PreviousValueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__NextValueButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.BndEvt__NextValueButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_PartyOption_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.BndEvt__SocialMenu_PartyOption_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_PartyOption_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.BndEvt__SocialMenu_PartyOption_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_PartyOption_PreviousValueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.BndEvt__SocialMenu_PartyOption_PreviousValueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_PartyOption_NextValueButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.BndEvt__SocialMenu_PartyOption_NextValueButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_PartyOption_InteractionButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.BndEvt__SocialMenu_PartyOption_InteractionButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_PartyOption(int32_t EntryPoint); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.ExecuteUbergraph_SocialMenu_PartyOption // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnValueUpdated__DelegateSignature(int32_t Value); // Function SocialMenu_PartyOption.SocialMenu_PartyOption_C.OnValueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

