// WidgetBlueprintGeneratedClass WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C
// Size: 0x305 (Inherited: 0x2e8)
struct UWaitingForPlayersCountdownWidget_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UCommonHudCountdown_C* CommonHudCountdown; // 0x2f0(0x08)
	float MatchStartServerTime; // 0x2f8(0x04)
	bool bCountdownActive; // 0x2fc(0x01)
	bool IsStartingSoon; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
	float MatchCountdownStartServerTime; // 0x300(0x04)
	bool ReadyToTravelToMatch; // 0x304(0x01)

	void OnGamePhaseUpdated(enum class EGamePhase gamePhase, bool bDrugSequenceCompleted); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnGamePhaseUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void HideCountdown(); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.HideCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void StartCountdown(); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.StartCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnGamePhaseUpdatedEvent(enum class EGamePhase gamePhase); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnGamePhaseUpdatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnDrugSequenceCompleted(); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnDrugSequenceCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_WaitingForPlayersCountdownWidget(int32_t EntryPoint); // Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ExecuteUbergraph_WaitingForPlayersCountdownWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

