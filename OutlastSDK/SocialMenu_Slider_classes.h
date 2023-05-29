// WidgetBlueprintGeneratedClass SocialMenu_Slider.SocialMenu_Slider_C
// Size: 0x44e (Inherited: 0x260)
struct USocialMenu_Slider_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* EditingBox; // 0x268(0x08)
	struct UButton* HigherButton; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)
	struct UButton* LowerButton; // 0x280(0x08)
	struct USlider* SliderValue; // 0x288(0x08)
	struct UTextBlock* Value; // 0x290(0x08)
	struct FMulticastInlineDelegate OnValueUpdated; // 0x298(0x10)
	bool bEnabled; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FSlateBrush EnabledIcon; // 0x2b0(0x88)
	struct FSlateBrush DisabledIcon; // 0x338(0x88)
	struct FSlateBrush EnabledZeroValueIcon; // 0x3c0(0x88)
	float CurrentValue; // 0x448(0x04)
	bool bUpdateValue; // 0x44c(0x01)
	bool bUpdatePlus; // 0x44d(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_Slider.SocialMenu_Slider_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnValueChanged(float CurrentValue); // Function SocialMenu_Slider.SocialMenu_Slider_C.OnValueChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetValueText(); // Function SocialMenu_Slider.SocialMenu_Slider_C.SetValueText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetValue(float Value); // Function SocialMenu_Slider.SocialMenu_Slider_C.SetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetEnabled(bool bInEnabled); // Function SocialMenu_Slider.SocialMenu_Slider_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function SocialMenu_Slider.SocialMenu_Slider_C.Setup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function SocialMenu_Slider.SocialMenu_Slider_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenuSlider_LowerButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SocialMenuSlider_LowerButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SocialMenu_Slider.SocialMenu_Slider_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenuSlider_LowerButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SocialMenuSlider_LowerButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenuSlider_HigherButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SocialMenuSlider_HigherButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenuSlider_HigherButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function SocialMenu_Slider.SocialMenu_Slider_C.BndEvt__SocialMenuSlider_HigherButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_Slider(int32_t EntryPoint); // Function SocialMenu_Slider.SocialMenu_Slider_C.ExecuteUbergraph_SocialMenu_Slider // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnValueUpdated__DelegateSignature(float Value); // Function SocialMenu_Slider.SocialMenu_Slider_C.OnValueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

