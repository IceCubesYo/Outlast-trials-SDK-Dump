// WidgetBlueprintGeneratedClass ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C
// Size: 0x323 (Inherited: 0x260)
struct UProgramTrialVariatorWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* BackgroundBorder; // 0x268(0x08)
	struct UOverlay* BackgroundOverlay; // 0x270(0x08)
	struct UButton* Button_1; // 0x278(0x08)
	struct UImage* FocussedBottomLeftBracket_7; // 0x280(0x08)
	struct UImage* FocussedBottomRightBracket_7; // 0x288(0x08)
	struct UImage* FocussedTopLeftBracket_7; // 0x290(0x08)
	struct UImage* FocussedTopRightBracket_7; // 0x298(0x08)
	struct UImage* Icon; // 0x2a0(0x08)
	struct UImage* NotAvailableIcon; // 0x2a8(0x08)
	struct UScaleBox* ScaleBox_2; // 0x2b0(0x08)
	bool bHovered; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UTexture2D* IconTexture; // 0x2c0(0x08)
	bool bDisplayNotAvailableIcon; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FText VariatorName; // 0x2d0(0x18)
	struct FText VariatorDescription; // 0x2e8(0x18)
	struct FMulticastInlineDelegate OnHovered; // 0x300(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x310(0x10)
	bool bFocused; // 0x320(0x01)
	bool bDetailsDisplayed; // 0x321(0x01)
	bool bFullSize; // 0x322(0x01)

	void TriggerHoverEvent(); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.TriggerHoverEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetDetailsDisplayed(bool bDetailsDisplayed); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetDetailsDisplayed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetFocused(bool bFocused); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bHovered); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitFromVariatorInfo(struct URBVariatorInfo* variatorInfo); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.InitFromVariatorInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitFromDifficulty(enum class EGameDifficulty Difficulty); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.InitFromDifficulty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.BndEvt__ProgramTrialVariatorWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ProgramTrialVariatorWidget(int32_t EntryPoint); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.ExecuteUbergraph_ProgramTrialVariatorWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnUnhovered__DelegateSignature(struct UProgramTrialVariatorWidget_C* Widget); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHovered__DelegateSignature(struct UProgramTrialVariatorWidget_C* Widget); // Function ProgramTrialVariatorWidget.ProgramTrialVariatorWidget_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

