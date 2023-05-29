// WidgetBlueprintGeneratedClass SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C
// Size: 0x4f3 (Inherited: 0x460)
struct USocialMenu_Entry_PartyInvite_C : URBSocialMenuEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* WaitingAnimation; // 0x468(0x08)
	struct UImage* BackgroundImage; // 0x470(0x08)
	struct UImage* BackgroundImage_2; // 0x478(0x08)
	struct UImage* Icon; // 0x480(0x08)
	struct UImage* Icon_2; // 0x488(0x08)
	struct UButton* InteractionButton; // 0x490(0x08)
	struct UBorder* LoadingContainer; // 0x498(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x4a0(0x08)
	struct UTextBlock* Name; // 0x4a8(0x08)
	struct UTextBlock* OnlineStatusText; // 0x4b0(0x08)
	struct UImage* PlatformIcon; // 0x4b8(0x08)
	struct UBorder* PlayerLevelBox; // 0x4c0(0x08)
	struct UTextBlock* PlayerLevelText; // 0x4c8(0x08)
	struct UCommonTextBlock* PresenceAndDetailsText; // 0x4d0(0x08)
	struct UImage* ProfileIcon; // 0x4d8(0x08)
	struct UButton* SendInviteButton; // 0x4e0(0x08)
	struct UBorder* SentOverlay; // 0x4e8(0x08)
	bool bIsGamepad; // 0x4f0(0x01)
	bool bHovered; // 0x4f1(0x01)
	bool bFocused; // 0x4f2(0x01)

	struct FText UpdatePresenceAndDetailsText(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.UpdatePresenceAndDetailsText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void GetPartyText(struct FText& DetailsText); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.GetPartyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void IsConsideredHovered(bool& bConsideredHovered); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.IsConsideredHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SetFocused(bool bInFocused); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetHovered(bool bInHovered); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetPlayerLevel(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetPlayerLevel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct UUserWidget* CreateContextualMenu(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.CreateContextualMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetProfileIcon(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetProfileIcon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool IsPendingFriendRequest(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.IsPendingFriendRequest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ShowLoading(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.ShowLoading // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetBackground(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetBackground // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetOnlineStatus(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetOnlineStatus // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetName(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetPlatformIcon(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.SetPlatformIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Refresh(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Event_Refresh // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMenuInputSourceChanged(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.OnMenuInputSourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.BndEvt__SocialMenu_Entry_PartyInvite_InteractionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_Entry_PartyInvite(int32_t EntryPoint); // Function SocialMenu_Entry_PartyInvite.SocialMenu_Entry_PartyInvite_C.ExecuteUbergraph_SocialMenu_Entry_PartyInvite // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

