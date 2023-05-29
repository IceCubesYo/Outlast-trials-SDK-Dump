// WidgetBlueprintGeneratedClass OptionsEntry.OptionsEntry_C
// Size: 0x49c (Inherited: 0x318)
struct UOptionsEntry_C : URBMenuOptionsEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* PulseLeft; // 0x320(0x08)
	struct UWidgetAnimation* PulseRight; // 0x328(0x08)
	struct UWidgetAnimation* OptionValue_FadeOut; // 0x330(0x08)
	struct UButton* GlobalHoveringDetection; // 0x338(0x08)
	struct UGridPanel* GridPanel_1; // 0x340(0x08)
	struct UButton* LeftArrowBtn; // 0x348(0x08)
	struct UCommonTextBlock* OptionTitle; // 0x350(0x08)
	struct UCommonTextBlock* OptionValue; // 0x358(0x08)
	struct UButton* RightArrowBtn; // 0x360(0x08)
	struct USlider* SliderElement; // 0x368(0x08)
	struct UHorizontalBox* SliderSelection; // 0x370(0x08)
	struct UEditableText* SliderValue; // 0x378(0x08)
	struct UImage* SliderValueFrame; // 0x380(0x08)
	struct UButton* SliderValueHoveringDetection; // 0x388(0x08)
	struct UButton* SubEntryBtn; // 0x390(0x08)
	struct UTextBlock* SubEntryTitle; // 0x398(0x08)
	struct UImage* TitleBackground; // 0x3a0(0x08)
	struct UImage* ValueBackground; // 0x3a8(0x08)
	struct UOverlay* ValueSelectionArrows; // 0x3b0(0x08)
	struct FLinearColor CurrentGeneralTint; // 0x3b8(0x10)
	struct FSlateColor HoveredTint; // 0x3c8(0x28)
	struct FSlateColor HoveredTint_Semi; // 0x3f0(0x28)
	struct FSlateColor NormalTint; // 0x418(0x28)
	struct FText EntryName; // 0x440(0x18)
	bool bToggleCandidate; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FText SubButtonTitle; // 0x460(0x18)
	struct FLinearColor ArrowHoveredTint; // 0x478(0x10)
	struct FLinearColor ArrowUnhoveredTint; // 0x488(0x10)
	float PreviousStep; // 0x498(0x04)

	void UpdateValueFont(); // Function OptionsEntry.OptionsEntry_C.UpdateValueFont // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function OptionsEntry.OptionsEntry_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function OptionsEntry.OptionsEntry_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function OptionsEntry.OptionsEntry_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateTextValue(struct FText& NewValue); // Function OptionsEntry.OptionsEntry_C.Event_UpdateTextValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateSliderValue(int32_t Value); // Function OptionsEntry.OptionsEntry_C.Event_UpdateSliderValue // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshDisplay(); // Function OptionsEntry.OptionsEntry_C.RefreshDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshEntry(); // Function OptionsEntry.OptionsEntry_C.RefreshEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void DownplayEntry(); // Function OptionsEntry.OptionsEntry_C.DownplayEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HighlightEntry(); // Function OptionsEntry.OptionsEntry_C.HighlightEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateEnableStatus(); // Function OptionsEntry.OptionsEntry_C.UpdateEnableStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ColorChangedEntries(); // Function OptionsEntry.OptionsEntry_C.ColorChangedEntries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSliderButton(bool IsSliderEntry); // Function OptionsEntry.OptionsEntry_C.SetSliderButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Set Button Type(bool IsSubEntry, struct FText (Optionnal)SubEntryTitle, bool IsSlider); // Function OptionsEntry.OptionsEntry_C.Set Button Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetValue(struct FText OptionValue); // Function OptionsEntry.OptionsEntry_C.SetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function OptionsEntry.OptionsEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function OptionsEntry.OptionsEntry_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RightArrowBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__RightArrowBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function OptionsEntry.OptionsEntry_C.BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SliderValueHoveringDetection_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__SliderValueHoveringDetection_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SliderValueHoveringDetection_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__SliderValueHoveringDetection_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateTitle(struct FText& newTitle); // Function OptionsEntry.OptionsEntry_C.Event_UpdateTitle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshValue(bool forceUpdateSlider); // Function OptionsEntry.OptionsEntry_C.RefreshValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateSubButtonText(struct FText& NewValue); // Function OptionsEntry.OptionsEntry_C.Event_UpdateSubButtonText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__OptionsEntry_LeftArrowBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_LeftArrowBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__OptionsEntry_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__OptionsEntry_RightArrowBtn_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_RightArrowBtn_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__OptionsEntry_RightArrowBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_RightArrowBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_RefreshEntry(); // Function OptionsEntry.OptionsEntry_C.Event_RefreshEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_OptionsEntry(int32_t EntryPoint); // Function OptionsEntry.OptionsEntry_C.ExecuteUbergraph_OptionsEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

