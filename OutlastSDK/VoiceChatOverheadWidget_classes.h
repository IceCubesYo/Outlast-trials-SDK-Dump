// WidgetBlueprintGeneratedClass VoiceChatOverheadWidget.VoiceChatOverheadWidget_C
// Size: 0x4c0 (Inherited: 0x290)
struct UVoiceChatOverheadWidget_C : URBOverheadVoiceChatWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* SpeakerIcon; // 0x298(0x08)
	struct FSlateBrush SpeakingBrush; // 0x2a0(0x88)
	struct FSlateBrush GloballyMutedBrush; // 0x328(0x88)
	struct FSlateBrush MutedBrush; // 0x3b0(0x88)
	struct FSlateBrush NotSpeakingBrush; // 0x438(0x88)

	void Event_Refresh(); // Function VoiceChatOverheadWidget.VoiceChatOverheadWidget_C.Event_Refresh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_VoiceChatOverheadWidget(int32_t EntryPoint); // Function VoiceChatOverheadWidget.VoiceChatOverheadWidget_C.ExecuteUbergraph_VoiceChatOverheadWidget // (Final|UbergraphFunction) // @ game+0x201e6d4
};

