// WidgetBlueprintGeneratedClass RigButton.RigButton_C
// Size: 0x484 (Inherited: 0x260)
struct URigButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* buyAnimation; // 0x268(0x08)
	struct UTextBlock* ActiveSkillName; // 0x270(0x08)
	struct UTextBlock* ActiveSkillTier; // 0x278(0x08)
	struct UImage* BackgroundImage; // 0x280(0x08)
	struct UImage* BackgroundImage_2; // 0x288(0x08)
	struct UTextBlock* CostAmountText; // 0x290(0x08)
	struct UImage* CurrencyTypeImage; // 0x298(0x08)
	struct UImage* EquippedIcon; // 0x2a0(0x08)
	struct UImage* EquippedImage; // 0x2a8(0x08)
	struct UImage* FocussedBottomLeftBracket_2; // 0x2b0(0x08)
	struct UImage* FocussedBottomRightBracket_2; // 0x2b8(0x08)
	struct UImage* FocussedTopLeftBracket_2; // 0x2c0(0x08)
	struct UImage* FocussedTopRightBracket_2; // 0x2c8(0x08)
	struct UCanvasPanel* HoverBackground; // 0x2d0(0x08)
	struct UImage* HoverBackgroundImage; // 0x2d8(0x08)
	struct UImage* Icon; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image_164; // 0x2f0(0x08)
	struct UButton* InteractionButton; // 0x2f8(0x08)
	struct UImage* LockImage; // 0x300(0x08)
	struct UCanvasPanel* SelectionBorderPanel; // 0x308(0x08)
	bool bIsLoadout; // 0x310(0x01)
	bool bIsHeader; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct FMenuUpgradeItemInfo UpgradeInfo; // 0x318(0x108)
	int32_t CurrentUpgradeTier; // 0x420(0x04)
	bool bIsGamepad; // 0x424(0x01)
	bool bHovered; // 0x425(0x01)
	bool bFocused; // 0x426(0x01)
	bool bEquipped; // 0x427(0x01)
	struct FName Item Id; // 0x428(0x08)
	struct FMulticastInlineDelegate OnHovered; // 0x430(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x440(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x450(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x460(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x470(0x10)
	int32_t CostAmount; // 0x480(0x04)

	void IsConsideredHovered(bool& bConsideredHovered); // Function RigButton.RigButton_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function RigButton.RigButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ComputeTier(); // Function RigButton.RigButton_C.ComputeTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetFocused(bool bInFocused); // Function RigButton.RigButton_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function RigButton.RigButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function RigButton.RigButton_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Init(bool bIsLoadout, struct FName ItemId, bool bIsHeader); // Function RigButton.RigButton_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function RigButton.RigButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function RigButton.RigButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function RigButton.RigButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RigButton.RigButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function RigButton.RigButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function RigButton.RigButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function RigButton.RigButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function RigButton.RigButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function RigButton.RigButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function RigButton.RigButton_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function RigButton.RigButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RigButton(int32_t EntryPoint); // Function RigButton.RigButton_C.ExecuteUbergraph_RigButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnReleased__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigButton.RigButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPressed__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigButton.RigButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnClicked__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigButton.RigButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnUnhovered__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigButton.RigButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHovered__DelegateSignature(struct FName ItemId, enum class EActiveSkillType ActiveSkillType); // Function RigButton.RigButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

