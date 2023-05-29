// WidgetBlueprintGeneratedClass UpgradeButton.UpgradeButton_C
// Size: 0x47a (Inherited: 0x260)
struct UUpgradeButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* PurchaseProgressAnimation; // 0x268(0x08)
	struct UWidgetAnimation* PurchaseAnimation; // 0x270(0x08)
	struct UImage* AcquiredCheckmark; // 0x278(0x08)
	struct UImage* BackgroundImage; // 0x280(0x08)
	struct UTextBlock* BlockNumberText; // 0x288(0x08)
	struct UHorizontalBox* ContentBox; // 0x290(0x08)
	struct UTextBlock* CostAmountText; // 0x298(0x08)
	struct UHorizontalBox* CostHBox; // 0x2a0(0x08)
	struct UImage* CurrencyTypeImage; // 0x2a8(0x08)
	struct UImage* FocussedBottomLeftBracket_2; // 0x2b0(0x08)
	struct UImage* FocussedBottomRightBracket_2; // 0x2b8(0x08)
	struct UImage* FocussedTopLeftBracket_2; // 0x2c0(0x08)
	struct UImage* FocussedTopRightBracket_2; // 0x2c8(0x08)
	struct UImage* Image_117; // 0x2d0(0x08)
	struct UButton* InteractionButton; // 0x2d8(0x08)
	struct UImage* LockedIcon; // 0x2e0(0x08)
	struct UImage* PurchaseAnimationImage; // 0x2e8(0x08)
	struct UCanvasPanel* SelectionBorderPanel; // 0x2f0(0x08)
	struct UTextBlock* UpgradeName; // 0x2f8(0x08)
	struct UOverlay* UpgradeNumberOverlay; // 0x300(0x08)
	bool bIsLoadout; // 0x308(0x01)
	bool bDisplayNumber; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct FMenuUpgradeItemInfo UpgradeInfo; // 0x310(0x108)
	bool bIsGamepad; // 0x418(0x01)
	bool bHovered; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct FMulticastInlineDelegate OnHovered; // 0x420(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x430(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x440(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x450(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x460(0x10)
	bool bFocused; // 0x470(0x01)
	bool bEnableLoadoutHoveredEvents; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	float TimeCounter; // 0x474(0x04)
	enum class ELoadoutElementType OverrideLoadoutHoverType; // 0x478(0x01)
	bool bPressed; // 0x479(0x01)

	void IsConsideredHovered(bool& bConsideredHovered); // Function UpgradeButton.UpgradeButton_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetFocused(bool bInFocused); // Function UpgradeButton.UpgradeButton_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UpgradeButton.UpgradeButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function UpgradeButton.UpgradeButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function UpgradeButton.UpgradeButton_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsLoadout, struct FName ItemId, int32_t Index, bool bDisplayNumber); // Function UpgradeButton.UpgradeButton_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function UpgradeButton.UpgradeButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UpgradeButton.UpgradeButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UpgradeButton.UpgradeButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UpgradeButton.UpgradeButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__UpgradeButton_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function UpgradeButton.UpgradeButton_C.BndEvt__UpgradeButton_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__UpgradeButton_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UpgradeButton.UpgradeButton_C.BndEvt__UpgradeButton_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UpgradeButton.UpgradeButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function UpgradeButton.UpgradeButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuActionProgressChanged(struct FName& ActionName, float newProgress); // Function UpgradeButton.UpgradeButton_C.OnMenuActionProgressChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function UpgradeButton.UpgradeButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function UpgradeButton.UpgradeButton_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_UpgradeButton(int32_t EntryPoint); // Function UpgradeButton.UpgradeButton_C.ExecuteUbergraph_UpgradeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnReleased__DelegateSignature(struct FName ItemId); // Function UpgradeButton.UpgradeButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPressed__DelegateSignature(struct FName ItemId); // Function UpgradeButton.UpgradeButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(struct FName ItemId); // Function UpgradeButton.UpgradeButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUnhovered__DelegateSignature(struct FName ItemId); // Function UpgradeButton.UpgradeButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHovered__DelegateSignature(struct FName ItemId); // Function UpgradeButton.UpgradeButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

