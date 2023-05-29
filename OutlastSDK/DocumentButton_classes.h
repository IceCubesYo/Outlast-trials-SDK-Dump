// WidgetBlueprintGeneratedClass DocumentButton.DocumentButton_C
// Size: 0x3a8 (Inherited: 0x260)
struct UDocumentButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* ContentBorder; // 0x268(0x08)
	struct UButton* DocumentButton; // 0x270(0x08)
	struct UImage* MainImage; // 0x278(0x08)
	struct UImage* NewImage; // 0x280(0x08)
	struct UTextBlock* UnknownTextWidget; // 0x288(0x08)
	bool bIsGamepad; // 0x290(0x01)
	bool bHovered; // 0x291(0x01)
	bool bFocused; // 0x292(0x01)
	char pad_293[0x5]; // 0x293(0x05)
	struct FMulticastInlineDelegate OnSelected; // 0x298(0x10)
	struct FRBCollectibleDocumentDefinitionRow Document; // 0x2a8(0xe8)
	bool bAcquired; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FMulticastInlineDelegate OnSeen; // 0x398(0x10)

	void IsElementEmpty(bool& bIsEmpty); // Function DocumentButton.DocumentButton_C.IsElementEmpty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function DocumentButton.DocumentButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetSeen(); // Function DocumentButton.DocumentButton_C.SetSeen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void IsConsideredHovered(bool& bConsideredHovered); // Function DocumentButton.DocumentButton_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetFocused(bool bInFocused); // Function DocumentButton.DocumentButton_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function DocumentButton.DocumentButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function DocumentButton.DocumentButton_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateFocus(); // Function DocumentButton.DocumentButton_C.UpdateFocus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_400D3A6F46134D64437AC5B163287479(struct UObject* Loaded); // Function DocumentButton.DocumentButton_C.OnLoaded_400D3A6F46134D64437AC5B163287479 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function DocumentButton.DocumentButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function DocumentButton.DocumentButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function DocumentButton.DocumentButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function DocumentButton.DocumentButton_C.BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Setup(struct FRBCollectibleDocumentDefinitionRow Document); // Function DocumentButton.DocumentButton_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function DocumentButton.DocumentButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function DocumentButton.DocumentButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function DocumentButton.DocumentButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function DocumentButton.DocumentButton_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_DocumentButton(int32_t EntryPoint); // Function DocumentButton.DocumentButton_C.ExecuteUbergraph_DocumentButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnSeen__DelegateSignature(); // Function DocumentButton.DocumentButton_C.OnSeen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnSelected__DelegateSignature(struct FRBCollectibleDocumentDefinitionRow Document); // Function DocumentButton.DocumentButton_C.OnSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

