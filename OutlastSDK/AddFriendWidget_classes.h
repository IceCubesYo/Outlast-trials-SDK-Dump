// WidgetBlueprintGeneratedClass AddFriendWidget.AddFriendWidget_C
// Size: 0x3d1 (Inherited: 0x2e0)
struct UAddFriendWidget_C : URBAddFriendWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* FriendRequestSentAnimation; // 0x2e8(0x08)
	struct UWidgetAnimation* HideLoading; // 0x2f0(0x08)
	struct UWidgetAnimation* InitAnimation; // 0x2f8(0x08)
	struct UWidgetAnimation* CopiedAnimation; // 0x300(0x08)
	struct UImage* BottomBorder_5; // 0x308(0x08)
	struct UButton* CopyFriendCodeButton; // 0x310(0x08)
	struct UImage* CopyImage; // 0x318(0x08)
	struct UTextBlock* FoundProfileName; // 0x320(0x08)
	struct UEditableTextBox* FriendCodeInputBox; // 0x328(0x08)
	struct UBorder* GroupFinderContainer; // 0x330(0x08)
	struct UImage* loading_overlay; // 0x338(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x340(0x08)
	struct UImage* MainBackground_5; // 0x348(0x08)
	struct UImage* PlatformIcon; // 0x350(0x08)
	struct UTextBlock* ProfileStatusText; // 0x358(0x08)
	struct UButton* SearchButton; // 0x360(0x08)
	struct UImage* SearchImage; // 0x368(0x08)
	struct ULoadingVideoWidget_C* SearchingLoadingWidget; // 0x370(0x08)
	struct UExperimentBoardActionButton_C* SendFriendRequestButton; // 0x378(0x08)
	struct UImage* Separator; // 0x380(0x08)
	struct UImage* Separator_2; // 0x388(0x08)
	struct UImage* Separator_3; // 0x390(0x08)
	struct UImage* Separator_4; // 0x398(0x08)
	struct UTextBlock* TextBlock; // 0x3a0(0x08)
	struct UImage* TopBorder_5; // 0x3a8(0x08)
	struct UExperimentBoardActionButton_C* ViewProfileButton; // 0x3b0(0x08)
	bool bTriedResolve; // 0x3b8(0x01)
	bool bResolving; // 0x3b9(0x01)
	bool bInitialLoadingHidden; // 0x3ba(0x01)
	char pad_3BB[0x5]; // 0x3bb(0x05)
	struct FMulticastInlineDelegate OnBackRequested; // 0x3c0(0x10)
	bool bRequestSent; // 0x3d0(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function AddFriendWidget.AddFriendWidget_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Refresh(); // Function AddFriendWidget.AddFriendWidget_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Finished_ADCAA9EE48D9ECCB3494DC85E0915EEF(); // Function AddFriendWidget.AddFriendWidget_C.Finished_ADCAA9EE48D9ECCB3494DC85E0915EEF // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function AddFriendWidget.AddFriendWidget_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function AddFriendWidget.AddFriendWidget_C.BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function AddFriendWidget.AddFriendWidget_C.BndEvt__FriendCodeInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__AddFriendMenu_ViewProfileButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_ViewProfileButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__AddFriendMenu_SendFriendRequestButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_SendFriendRequestButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__AddFriendMenu_CopyFriendCodeButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendMenu_CopyFriendCodeButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__AddFriendWidget_SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function AddFriendWidget.AddFriendWidget_C.BndEvt__AddFriendWidget_SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_Init(); // Function AddFriendWidget.AddFriendWidget_C.Event_Init // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_ResolveCompleted(); // Function AddFriendWidget.AddFriendWidget_C.Event_ResolveCompleted // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Done(); // Function AddFriendWidget.AddFriendWidget_C.Event_Done // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnError(); // Function AddFriendWidget.AddFriendWidget_C.Event_OnError // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_AddFriendWidget(int32_t EntryPoint); // Function AddFriendWidget.AddFriendWidget_C.ExecuteUbergraph_AddFriendWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void OnBackRequested__DelegateSignature(); // Function AddFriendWidget.AddFriendWidget_C.OnBackRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

