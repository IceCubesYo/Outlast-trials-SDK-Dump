// WidgetBlueprintGeneratedClass SocialMenu_Entry_Party.SocialMenu_Entry_Party_C
// Size: 0x4e8 (Inherited: 0x460)
struct USocialMenu_Entry_Party_C : URBSocialMenuEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* WaitingAnimation; // 0x468(0x08)
	struct UImage* BackgroundImage; // 0x470(0x08)
	struct UMenuAnchor* ContextualMenuAnchor; // 0x478(0x08)
	struct UContextualMenuButton_C* ContextualMenuButton; // 0x480(0x08)
	struct UButton* InteractionButton; // 0x488(0x08)
	struct UBorder* LoadingContainer; // 0x490(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x498(0x08)
	struct UTextBlock* Name; // 0x4a0(0x08)
	struct UImage* PartyLeaderIcon; // 0x4a8(0x08)
	struct UImage* PendingNotificationIcon; // 0x4b0(0x08)
	struct UImage* PlatformIcon; // 0x4b8(0x08)
	struct UBorder* PlayerLevelBox; // 0x4c0(0x08)
	struct UTextBlock* PlayerLevelText; // 0x4c8(0x08)
	struct UImage* ProfileIcon; // 0x4d0(0x08)
	bool bIsGamepad; // 0x4d8(0x01)
	bool bHovered; // 0x4d9(0x01)
	bool bFocused; // 0x4da(0x01)
	char pad_4DB[0x5]; // 0x4db(0x05)
	struct USocialMenu_ContextualMenu_C* ContextualMenu_1; // 0x4e0(0x08)

	void ShowNotificationIcon(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ShowNotificationIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void IsConsideredHovered(bool& bConsideredHovered); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetFocused(bool bInFocused); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetFocused // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshContextualMenu(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.RefreshContextualMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetPlayerLevel(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPlayerLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct UUserWidget* CreateContextualMenu(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.CreateContextualMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetProfileIcon(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetProfileIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetPartyLeaderIcon(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPartyLeaderIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShowLoading(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ShowLoading // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetBackground(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetBackground // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetInGameStatus(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetInGameStatus // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetName(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetPlatformIcon(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPlatformIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_ActionRequested(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_ActionRequested // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OpenContextualMenu(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_OpenContextualMenu // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_CloseContextualMenu(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_CloseContextualMenu // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_Entry_Party(int32_t EntryPoint); // Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ExecuteUbergraph_SocialMenu_Entry_Party // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

