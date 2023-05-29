// WidgetBlueprintGeneratedClass NPCDebugIcon.NPCDebugIcon_C
// Size: 0x374 (Inherited: 0x338)
struct UNPCDebugIcon_C : URBNPCDebugIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UProgressBar* AlertedProgress; // 0x340(0x08)
	struct UImage* ChaseIcon; // 0x348(0x08)
	struct UInvalidationBox* InvalidationBox_ObjectiveInWorld; // 0x350(0x08)
	struct UProgressBar* SuspiciousProgress; // 0x358(0x08)
	struct UProgressBar* UnawareProgress; // 0x360(0x08)
	enum class EAIAwarenessStateType CurrentState; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float CurrentMeterValue; // 0x36c(0x04)
	float ApprochainCoeff; // 0x370(0x04)

	bool ShouldShow(); // Function NPCDebugIcon.NPCDebugIcon_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void Event_Show(); // Function NPCDebugIcon.NPCDebugIcon_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function NPCDebugIcon.NPCDebugIcon_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function NPCDebugIcon.NPCDebugIcon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void UpdateDisplay(); // Function NPCDebugIcon.NPCDebugIcon_C.UpdateDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_NPCDebugIcon(int32_t EntryPoint); // Function NPCDebugIcon.NPCDebugIcon_C.ExecuteUbergraph_NPCDebugIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

