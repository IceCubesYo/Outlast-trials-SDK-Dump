// WidgetBlueprintGeneratedClass PsychosisBar2.PsychosisBar2_C
// Size: 0x379 (Inherited: 0x2e8)
struct UPsychosisBar2_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* IconMorph; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeInFadeOut; // 0x2f8(0x08)
	struct UHudBarElement_Animated_C* FirstBracket; // 0x300(0x08)
	struct UImage* Icon; // 0x308(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x310(0x08)
	struct UHorizontalBox* PsychosisBar; // 0x318(0x08)
	struct UHudBarElement_Animated_C* SecondBracket; // 0x320(0x08)
	struct UHudBarElement_Animated_C* ThirdBracket; // 0x328(0x08)
	struct TArray<struct UHudBarElement_Animated_C*> PsychosisBrackets; // 0x330(0x10)
	struct UHudBarElement_Animated_C* CurrentAnimatedBracket; // 0x340(0x08)
	int32_t Starting Bracket; // 0x348(0x04)
	int32_t FinishingBracket; // 0x34c(0x04)
	bool OngoingTweens; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float CurrentSanity; // 0x354(0x04)
	float PreviousSanity; // 0x358(0x04)
	int32_t Current Bracket; // 0x35c(0x04)
	struct TArray<struct UTexture*> BracketsIcon; // 0x360(0x10)
	bool SanityIncreased; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	float FadeOutDelay; // 0x374(0x04)
	bool SkipDelay; // 0x378(0x01)

	void SequenceEvent__ENTRYPOINTPsychosisBar2_1(); // Function PsychosisBar2.PsychosisBar2_C.SequenceEvent__ENTRYPOINTPsychosisBar2_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void HandlePlayerStatusChanged(enum class EPlayerIndicatorType NewStatus); // Function PsychosisBar2.PsychosisBar2_C.HandlePlayerStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateIcon(); // Function PsychosisBar2.PsychosisBar2_C.UpdateIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ProcessPsychosisEvent(int32_t NewValue, int32_t OldValue, bool SkipAnims); // Function PsychosisBar2.PsychosisBar2_C.ProcessPsychosisEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ChainTweens(); // Function PsychosisBar2.PsychosisBar2_C.ChainTweens // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function PsychosisBar2.PsychosisBar2_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void IconMorphCompleted(); // Function PsychosisBar2.PsychosisBar2_C.IconMorphCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function PsychosisBar2.PsychosisBar2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Show(); // Function PsychosisBar2.PsychosisBar2_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function PsychosisBar2.PsychosisBar2_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWatchedPlayerChanged(struct ARBPlayer* oldPlayer, struct ARBPlayer* NewPlayer); // Function PsychosisBar2.PsychosisBar2_C.Event_OnWatchedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnPsychosisChanged(int32_t NewValue, int32_t OldValue); // Function PsychosisBar2.PsychosisBar2_C.OnPsychosisChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerStatusChanged(enum class EPlayerIndicatorType playerIndicatorType); // Function PsychosisBar2.PsychosisBar2_C.OnPlayerStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnBarHidden(); // Function PsychosisBar2.PsychosisBar2_C.OnBarHidden // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PsychosisBar2(int32_t EntryPoint); // Function PsychosisBar2.PsychosisBar2_C.ExecuteUbergraph_PsychosisBar2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

