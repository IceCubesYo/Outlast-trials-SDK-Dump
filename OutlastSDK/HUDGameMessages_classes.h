// WidgetBlueprintGeneratedClass HUDGameMessages.HUDGameMessages_C
// Size: 0x3a0 (Inherited: 0x2e8)
struct UHUDGameMessages_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* HideMessageAnim; // 0x2f0(0x08)
	struct UWidgetAnimation* ShowMessageAnim; // 0x2f8(0x08)
	struct UTextBlock* AssignmentStatus; // 0x300(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x308(0x08)
	struct UCompleteStamp_C* CompleteStamp; // 0x310(0x08)
	struct UImage* Icon; // 0x318(0x08)
	struct UInvalidationBox* InvalidationBox_HUDGameMessages; // 0x320(0x08)
	struct UTextBlock* Message; // 0x328(0x08)
	bool NeedIntro; // 0x330(0x01)
	bool IsInitialized; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct UMaterialInstanceDynamic* iconMaterial; // 0x338(0x08)
	struct UAkAudioEvent* Sound; // 0x340(0x08)
	struct UAkAudioEvent* Voice; // 0x348(0x08)
	struct FGameMessageAudioParams Audio Params; // 0x350(0x10)
	struct FTimerHandle HideDelayTimerHandle; // 0x360(0x08)
	bool WaitingToShow; // 0x368(0x01)
	bool ShowingMessage; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct FText BufferGameMessage; // 0x370(0x18)
	enum class EGameMessageCategory BufferMessageCategory; // 0x388(0x01)
	enum class EGameObjectiveType BufferGameObjectiveType; // 0x389(0x01)
	char pad_38A[0x6]; // 0x38a(0x06)
	struct FGameMessageAudioParams BufferAudioParams; // 0x390(0x10)

	void InitializeMessage(struct FText Message, enum class EGameMessageCategory messageCategory, enum class EGameObjectiveType ObjectiveType, struct FGameMessageAudioParams audioParams); // Function HUDGameMessages.HUDGameMessages_C.InitializeMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function HUDGameMessages.HUDGameMessages_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void Finished_1D4430144A0F9FAAAB764FB894A8E54F(); // Function HUDGameMessages.HUDGameMessages_C.Finished_1D4430144A0F9FAAAB764FB894A8E54F // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function HUDGameMessages.HUDGameMessages_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnShowGameMessage_Event_1(struct FText& gameMessage, enum class EGameMessageCategory messageCategory, enum class EGameObjectiveType gameObjectiveType, struct FGameMessageAudioParams& audioParams); // Function HUDGameMessages.HUDGameMessages_C.OnShowGameMessage_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnStageEnded_Event_1(struct FRBStageID& StageID, struct FRBMissionID& MissionID, bool isFail); // Function HUDGameMessages.HUDGameMessages_C.OnStageEnded_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function HUDGameMessages.HUDGameMessages_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ShowMessage(); // Function HUDGameMessages.HUDGameMessages_C.ShowMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnHudModeChanged(enum class EHudMode newHudMode); // Function HUDGameMessages.HUDGameMessages_C.Event_OnHudModeChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function HUDGameMessages.HUDGameMessages_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_HUDGameMessages(int32_t EntryPoint); // Function HUDGameMessages.HUDGameMessages_C.ExecuteUbergraph_HUDGameMessages // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

