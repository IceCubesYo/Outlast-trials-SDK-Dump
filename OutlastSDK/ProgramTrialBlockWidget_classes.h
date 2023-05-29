// WidgetBlueprintGeneratedClass ProgramTrialBlockWidget.ProgramTrialBlockWidget_C
// Size: 0x31f (Inherited: 0x260)
struct UProgramTrialBlockWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BackgroundImage; // 0x268(0x08)
	struct UTextBlock* BlockNumberText; // 0x270(0x08)
	struct UButton* Button_1; // 0x278(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x280(0x08)
	struct UVerticalBox* EntriesVBox_2; // 0x288(0x08)
	struct UImage* FocussedBottomLeftBracket_2; // 0x290(0x08)
	struct UImage* FocussedBottomRightBracket_2; // 0x298(0x08)
	struct UImage* FocussedTopLeftBracket_2; // 0x2a0(0x08)
	struct UImage* FocussedTopRightBracket_2; // 0x2a8(0x08)
	struct UImage* Image_117; // 0x2b0(0x08)
	struct UBorder* InnerBorder; // 0x2b8(0x08)
	struct USizeBox* NumberSizeBox; // 0x2c0(0x08)
	struct USizeBox* ProgramPointerArrowContainer; // 0x2c8(0x08)
	struct UProgramTrialEntryContentWidget_C* ProgramTrialEntryContentWidget; // 0x2d0(0x08)
	struct UProgramTrialEntryContentWidget_C* ProgramTrialEntryContentWidget_2; // 0x2d8(0x08)
	struct UProgramTrialEntryContentWidget_C* ProgramTrialEntryContentWidget_3; // 0x2e0(0x08)
	struct UProgramTrialEntryContentWidget_C* ProgramTrialEntryContentWidget_4; // 0x2e8(0x08)
	bool bHovered; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UTexture2D* BackgroundImageTexture; // 0x2f8(0x08)
	int32_t NumEditorEntries; // 0x300(0x04)
	bool bMajor; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FMulticastInlineDelegate OnTrialSelected; // 0x308(0x10)
	int32_t BlockNumber; // 0x318(0x04)
	bool bFocused; // 0x31c(0x01)
	bool bIsMatchOwner; // 0x31d(0x01)
	bool bHasSelectedTrial; // 0x31e(0x01)

	void SetFocused(bool bFocused); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bHovered); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateSelectedTrialArrow(); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.UpdateSelectedTrialArrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSelectedTrial(struct FName TrialId); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetSelectedTrial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnTrialSelectedInternal(struct FName TrialId); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.OnTrialSelectedInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AddTrial(struct FRBTrialInfoRow trialInfo, int32_t BlockNumber, bool bLocked, bool bCompleted, float bestScore, bool bSelected); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.AddTrial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsMatchOwner(bool bIsMatchOwner); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.SetIsMatchOwner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsMatchOwner); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.BndEvt__ProgramTrialBlockWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_ProgramTrialBlockWidget(int32_t EntryPoint); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.ExecuteUbergraph_ProgramTrialBlockWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnTrialSelected__DelegateSignature(struct FName TrialId); // Function ProgramTrialBlockWidget.ProgramTrialBlockWidget_C.OnTrialSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

