// WidgetBlueprintGeneratedClass DocumentGroupButton.DocumentGroupButton_C
// Size: 0x2c0 (Inherited: 0x260)
struct UDocumentGroupButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* ContentBorder; // 0x268(0x08)
	struct UTextBlock* Counter; // 0x270(0x08)
	struct UButton* DocumentButton; // 0x278(0x08)
	struct UTextBlock* Header1; // 0x280(0x08)
	struct UTextBlock* Header2; // 0x288(0x08)
	struct UImage* MainImage; // 0x290(0x08)
	struct UImage* NewImage; // 0x298(0x08)
	bool bIsGamepad; // 0x2a0(0x01)
	bool bHovered; // 0x2a1(0x01)
	bool bFocused; // 0x2a2(0x01)
	char pad_2A3[0x5]; // 0x2a3(0x05)
	struct FMulticastInlineDelegate OnSelected; // 0x2a8(0x10)
	struct FName documentGroupId; // 0x2b8(0x08)

	void IsElementEmpty(bool& bIsEmpty); // Function DocumentGroupButton.DocumentGroupButton_C.IsElementEmpty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function DocumentGroupButton.DocumentGroupButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void IsConsideredHovered(bool& bConsideredHovered); // Function DocumentGroupButton.DocumentGroupButton_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetFocused(bool bInFocused); // Function DocumentGroupButton.DocumentGroupButton_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function DocumentGroupButton.DocumentGroupButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(struct FRBCollectibleDocumentGroupRow documentGroupRow, int32_t Index); // Function DocumentGroupButton.DocumentGroupButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateFocus(); // Function DocumentGroupButton.DocumentGroupButton_C.UpdateFocus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function DocumentGroupButton.DocumentGroupButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function DocumentGroupButton.DocumentGroupButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function DocumentGroupButton.DocumentGroupButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function DocumentGroupButton.DocumentGroupButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function DocumentGroupButton.DocumentGroupButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function DocumentGroupButton.DocumentGroupButton_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_DocumentGroupButton(int32_t EntryPoint); // Function DocumentGroupButton.DocumentGroupButton_C.ExecuteUbergraph_DocumentGroupButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnSelected__DelegateSignature(struct FName documentGroupId); // Function DocumentGroupButton.DocumentGroupButton_C.OnSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

