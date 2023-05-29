// WidgetBlueprintGeneratedClass BadgeSashEntry.BadgeSashEntry_C
// Size: 0x390 (Inherited: 0x260)
struct UBadgeSashEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AcquiredAnimation; // 0x268(0x08)
	struct UImage* BadgeIcon; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_16; // 0x278(0x08)
	struct USizeBox* Counter; // 0x280(0x08)
	struct UTextBlock* CounterTextWidget; // 0x288(0x08)
	struct UImage* FocussedBottomLeftBracket_2; // 0x290(0x08)
	struct UImage* FocussedBottomRightBracket_2; // 0x298(0x08)
	struct UImage* FocussedTopLeftBracket_2; // 0x2a0(0x08)
	struct UImage* FocussedTopRightBracket_2; // 0x2a8(0x08)
	struct UButton* InteractionButton; // 0x2b0(0x08)
	struct UCanvasPanel* SelectionBorderPanel; // 0x2b8(0x08)
	struct UTexture2D* BadgeIconTexture; // 0x2c0(0x08)
	int32_t UnlockedCount; // 0x2c8(0x04)
	bool bLoading; // 0x2cc(0x01)
	bool bIsGamepad; // 0x2cd(0x01)
	bool bHovered; // 0x2ce(0x01)
	bool bFocused; // 0x2cf(0x01)
	struct FRBPlayerBadgeRow Badge Settings; // 0x2d0(0x78)
	struct FMulticastInlineDelegate OnHovered; // 0x348(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x358(0x10)
	struct FSlateColor HoverBracketsTint; // 0x368(0x28)

	void PlayAcquiredAnimation(); // Function BadgeSashEntry.BadgeSashEntry_C.PlayAcquiredAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void IsConsideredHovered(bool& bConsideredHovered); // Function BadgeSashEntry.BadgeSashEntry_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetFocused(bool bInFocused); // Function BadgeSashEntry.BadgeSashEntry_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function BadgeSashEntry.BadgeSashEntry_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupEmpty(); // Function BadgeSashEntry.BadgeSashEntry_C.SetupEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function BadgeSashEntry.BadgeSashEntry_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_E635967C4C8D98AF198D06928C9FF87D(struct UObject* Loaded); // Function BadgeSashEntry.BadgeSashEntry_C.OnLoaded_E635967C4C8D98AF198D06928C9FF87D // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function BadgeSashEntry.BadgeSashEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Setup(int32_t UnlockedCount, struct FRBPlayerBadgeRow badgeSettings); // Function BadgeSashEntry.BadgeSashEntry_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__BadgeSashEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function BadgeSashEntry.BadgeSashEntry_C.BndEvt__BadgeSashEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__BadgeSashEntry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function BadgeSashEntry.BadgeSashEntry_C.BndEvt__BadgeSashEntry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function BadgeSashEntry.BadgeSashEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function BadgeSashEntry.BadgeSashEntry_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function BadgeSashEntry.BadgeSashEntry_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function BadgeSashEntry.BadgeSashEntry_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function BadgeSashEntry.BadgeSashEntry_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_BadgeSashEntry(int32_t EntryPoint); // Function BadgeSashEntry.BadgeSashEntry_C.ExecuteUbergraph_BadgeSashEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnUnhovered__DelegateSignature(struct FRBPlayerBadgeRow badgeSettings); // Function BadgeSashEntry.BadgeSashEntry_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHovered__DelegateSignature(struct FRBPlayerBadgeRow badgeSettings); // Function BadgeSashEntry.BadgeSashEntry_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

