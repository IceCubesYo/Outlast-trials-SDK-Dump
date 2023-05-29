// WidgetBlueprintGeneratedClass CoreUpgradeTierButton.CoreUpgradeTierButton_C
// Size: 0x30c (Inherited: 0x260)
struct UCoreUpgradeTierButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BackgroundImage; // 0x268(0x08)
	struct UHorizontalBox* ContentBox; // 0x270(0x08)
	struct UImage* FocussedBottomLeftBracket_2; // 0x278(0x08)
	struct UImage* FocussedBottomRightBracket_2; // 0x280(0x08)
	struct UImage* FocussedTopLeftBracket_2; // 0x288(0x08)
	struct UImage* FocussedTopRightBracket_2; // 0x290(0x08)
	struct UButton* InteractionButton; // 0x298(0x08)
	struct UImage* LockImage; // 0x2a0(0x08)
	struct UCanvasPanel* SelectionBorderPanel; // 0x2a8(0x08)
	struct UTextBlock* TierNameText; // 0x2b0(0x08)
	struct UTextBlock* TierStateText; // 0x2b8(0x08)
	bool bIsLoadout; // 0x2c0(0x01)
	bool bIsHeader; // 0x2c1(0x01)
	bool bIsGamepad; // 0x2c2(0x01)
	bool bHovered; // 0x2c3(0x01)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FMulticastInlineDelegate OnHovered; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2e8(0x10)
	bool bFocused; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	int32_t tier; // 0x2fc(0x04)
	bool bLocked; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t AcquiredUpgradeCount; // 0x304(0x04)
	int32_t TotalUpgradeCount; // 0x308(0x04)

	void IsConsideredHovered(bool& bConsideredHovered); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ComputeValues(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.ComputeValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetFocused(bool bInFocused); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsLoadout, bool bIsHeader, int32_t tier); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_CoreUpgradeTierButton(int32_t EntryPoint); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.ExecuteUbergraph_CoreUpgradeTierButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(int32_t tier); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUnhovered__DelegateSignature(int32_t tier); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHovered__DelegateSignature(int32_t tier); // Function CoreUpgradeTierButton.CoreUpgradeTierButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

