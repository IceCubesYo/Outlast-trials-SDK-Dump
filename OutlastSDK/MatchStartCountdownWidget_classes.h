// WidgetBlueprintGeneratedClass MatchStartCountdownWidget.MatchStartCountdownWidget_C
// Size: 0x308 (Inherited: 0x2e8)
struct UMatchStartCountdownWidget_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UCommonHudCountdown_C* CommonHudCountdown; // 0x2f0(0x08)
	float MatchStartServerTime; // 0x2f8(0x04)
	bool MatchCountdownActive; // 0x2fc(0x01)
	bool IsStartingSoon; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
	float MatchCountdownStartServerTime; // 0x300(0x04)
	bool ReadyToTravelToMatch; // 0x304(0x01)
	bool FindPartyActive; // 0x305(0x01)
	enum class EFindPartyTicketState findPartyTicketState; // 0x306(0x01)
	bool bIsRelease; // 0x307(0x01)

	void OnFindPartyTicketStateUpdated(enum class EFindPartyTicketState findPartyTicketState); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFindPartyStateUpdated(struct FFindPartyState& FindPartyState); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateText(); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMatchStateUpdated(struct FMatchState& MatchState); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetIsRightAligned(bool isRightAligned); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.SetIsRightAligned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void CancelMatchCountdown(); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.CancelMatchCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void StartMatchCountdown(float MatchCancelationGracePeriodServerTime, float MatchStartServerTime, bool bReadyToTravelToMatch); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.StartMatchCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnMatchStateUpdatedEvent(struct ARBLobbyPlayerState* RBLobbyPlayerState, struct FMatchState& MatchState); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdatedEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFindPartyStateUpdatedEvent(struct ARBLobbyPlayerState* RBLobbyPlayerState, struct FFindPartyState& FindPartyState); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdatedEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnFindPartyTicketStateUpdatedEvent(enum class EFindPartyTicketState findPartyTicketState); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MatchStartCountdownWidget(int32_t EntryPoint); // Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ExecuteUbergraph_MatchStartCountdownWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

