// WidgetBlueprintGeneratedClass SocialMenu_PartyWidget.SocialMenu_PartyWidget_C
// Size: 0x3c0 (Inherited: 0x348)
struct USocialMenu_PartyWidget_C : URBSocialMenuPartyWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* ShowContent; // 0x350(0x08)
	struct UWidgetAnimation* HideLoading; // 0x358(0x08)
	struct UWidgetAnimation* ShowLoading; // 0x360(0x08)
	struct USocialMenu_PartyOption_C* CrossplayOption; // 0x368(0x08)
	struct UGridPanel* Grid; // 0x370(0x08)
	struct USocialMenu_PartyOption_C* IgnoreInviteRequestsOption; // 0x378(0x08)
	struct UExperimentBoardActionButton_C* LeavePartyBtn; // 0x380(0x08)
	struct ULoadingVideoWidget_C* LoadingVideoWidget; // 0x388(0x08)
	struct USocialMenu_PartyOption_C* PartyMembersCanInviteOption; // 0x390(0x08)
	struct USocialMenu_PartyOption_C* PrivacyOption; // 0x398(0x08)
	struct UTextBlock* Title; // 0x3a0(0x08)
	struct FText EmptyText; // 0x3a8(0x18)

	enum class ESlateVisibility GetLeavePartyBtnVisibility(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.GetLeavePartyBtnVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void SlotHasFocus(int32_t column, int32_t row, bool& bHasFocus); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SlotHasFocus // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupInitialFocus(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupInitialFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetupPartySettings(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupPartySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup Editor Preview(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup Editor Preview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateEntry(struct UWidget* Entry, int32_t column, int32_t row); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.UpdateEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Setup(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_RemoveEntry(struct URBUserWidget* Entry); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RemoveEntry // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_UpdateEntry(struct URBUserWidget* Entry, int32_t column, int32_t row); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_UpdateEntry // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Clear(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_Clear // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDataPending(bool bIsDataPending); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_OnDataPending // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_RefreshPartyOptions(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RefreshPartyOptions // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature(int32_t Value); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature(int32_t Value); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature(int32_t Value); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_SocialMenu_PartyWidget(int32_t EntryPoint); // Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.ExecuteUbergraph_SocialMenu_PartyWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

