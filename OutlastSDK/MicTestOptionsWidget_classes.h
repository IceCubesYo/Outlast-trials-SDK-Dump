// WidgetBlueprintGeneratedClass MicTestOptionsWidget.MicTestOptionsWidget_C
// Size: 0x3d8 (Inherited: 0x318)
struct UMicTestOptionsWidget_C : URBMicTestOptionsEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* Button_2; // 0x320(0x08)
	struct UButton* MicTestButton; // 0x328(0x08)
	struct UTextBlock* OptionTitle; // 0x330(0x08)
	struct UTextBlock* SubEntryTitle; // 0x338(0x08)
	struct UImage* TitleBackground; // 0x340(0x08)
	struct UImage* ValueBackground; // 0x348(0x08)
	struct UHorizontalBox* VoicePips; // 0x350(0x08)
	struct UImage* VoicePipsBackground; // 0x358(0x08)
	struct FSlateColor HoveredTint; // 0x360(0x28)
	struct FSlateColor HoveredTint_Semi; // 0x388(0x28)
	struct FSlateColor UnhoveredTint; // 0x3b0(0x28)

	struct FText GetTestButtonText(); // Function MicTestOptionsWidget.MicTestOptionsWidget_C.GetTestButtonText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void BndEvt__MicTestOptionsWidget_MicTestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function MicTestOptionsWidget.MicTestOptionsWidget_C.BndEvt__MicTestOptionsWidget_MicTestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MicTestOptionsWidget.MicTestOptionsWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__MicTestOptionsWidget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function MicTestOptionsWidget.MicTestOptionsWidget_C.BndEvt__MicTestOptionsWidget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void HighlightEntry(); // Function MicTestOptionsWidget.MicTestOptionsWidget_C.HighlightEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void DownplayEntry(); // Function MicTestOptionsWidget.MicTestOptionsWidget_C.DownplayEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnEchoChannelStateChanged(); // Function MicTestOptionsWidget.MicTestOptionsWidget_C.OnEchoChannelStateChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MicTestOptionsWidget(int32_t EntryPoint); // Function MicTestOptionsWidget.MicTestOptionsWidget_C.ExecuteUbergraph_MicTestOptionsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

