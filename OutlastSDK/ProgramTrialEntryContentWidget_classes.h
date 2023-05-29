// WidgetBlueprintGeneratedClass ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C
// Size: 0x31a (Inherited: 0x260)
struct UProgramTrialEntryContentWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Pulse; // 0x268(0x08)
	struct UBorder* BackgroundBorder; // 0x270(0x08)
	struct UButton* Button_1; // 0x278(0x08)
	struct UHorizontalBox* ContentBox; // 0x280(0x08)
	struct UImage* Image_62; // 0x288(0x08)
	struct UImage* LockImage; // 0x290(0x08)
	struct UTextBlock* ScoreText; // 0x298(0x08)
	struct UCommonTextBlock* TrialNameText; // 0x2a0(0x08)
	struct UTextBlock* TrialTypeWidget; // 0x2a8(0x08)
	struct UVariatorCountPreviewWidget_C* VariatorCountPreviewWidget; // 0x2b0(0x08)
	struct FName TrialId; // 0x2b8(0x08)
	struct FText TrialName; // 0x2c0(0x18)
	struct FText TrialType; // 0x2d8(0x18)
	bool bLocked; // 0x2f0(0x01)
	bool bCompleted; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	float bestScore; // 0x2f4(0x04)
	struct FMulticastInlineDelegate OnTrialSelected; // 0x2f8(0x10)
	bool bHovered; // 0x308(0x01)
	bool bSelected; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct UProgramTrialBlockWidget_C* parentBlock; // 0x310(0x08)
	bool bFocused; // 0x318(0x01)
	bool Is Match Owner; // 0x319(0x01)

	void SetFocused(bool bInFocused); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelected(bool bInSelected); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsMatchOwner(bool bIsMatchOwner); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.SetIsMatchOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(struct UProgramTrialBlockWidget_C* parentBlock, struct FRBTrialInfoRow trialInfo, bool bLocked, bool bCompleted, float bestScore, bool bSelected, bool bIsMatchOwner); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.BndEvt__ProgramTrialEntryContentWidget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ProgramTrialEntryContentWidget(int32_t EntryPoint); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.ExecuteUbergraph_ProgramTrialEntryContentWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
	void OnTrialSelected__DelegateSignature(struct FName TrialId); // Function ProgramTrialEntryContentWidget.ProgramTrialEntryContentWidget_C.OnTrialSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

