// WidgetBlueprintGeneratedClass InputBindingEntryWidget.InputBindingEntryWidget_C
// Size: 0x388 (Inherited: 0x2b8)
struct UInputBindingEntryWidget_C : URBMenuControlBindingEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UActionIconWidget_C* ActionIconWidget; // 0x2c0(0x08)
	struct UButton* HoveringDetection; // 0x2c8(0x08)
	struct UCommonTextBlock* Name; // 0x2d0(0x08)
	struct UButton* RebindButton; // 0x2d8(0x08)
	struct UImage* RebindingImage; // 0x2e0(0x08)
	struct UImage* TitleBackground; // 0x2e8(0x08)
	struct UImage* ValueBackground; // 0x2f0(0x08)
	struct UInputBindingsMenu_C* ParentMenu; // 0x2f8(0x08)
	struct UInputBindingEntryWidget_C* NextWidget; // 0x300(0x08)
	struct UInputBindingEntryWidget_C* PreviousWidget; // 0x308(0x08)
	struct FSlateColor HoveredTint; // 0x310(0x28)
	struct FSlateColor HoveredTint_Semi; // 0x338(0x28)
	struct FSlateColor NormalTint; // 0x360(0x28)

	void Downplay(); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.Downplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Highlight(); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.Highlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshValue(); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.RefreshValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(struct UInputBindingsMenu_C* ParentMenu); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__Button_131_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.BndEvt__HoveringDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void UpdateRebindStatus(bool bIsRebindInProgress); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.UpdateRebindStatus // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_InputBindingEntryWidget(int32_t EntryPoint); // Function InputBindingEntryWidget.InputBindingEntryWidget_C.ExecuteUbergraph_InputBindingEntryWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

