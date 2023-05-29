// WidgetBlueprintGeneratedClass PlayerHud.PlayerHud_C
// Size: 0x384 (Inherited: 0x298)
struct UPlayerHud_C : URBHUDWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* InviteFadeIn; // 0x2a0(0x08)
	struct UWidgetAnimation* TransitionFadeAnimation; // 0x2a8(0x08)
	struct UWidgetAnimation* HealAnimation; // 0x2b0(0x08)
	struct UActiveEffectsHudWidget_C* ActiveEffectsHudWidget_C_109; // 0x2b8(0x08)
	struct UImage* ColorFadeImage; // 0x2c0(0x08)
	struct UConsumingProgressWidget_C* ConsumingProgressWidget; // 0x2c8(0x08)
	struct UDetectionCrosshair_C* DetectionCrosshair; // 0x2d0(0x08)
	struct UCanvasPanel* FadeOutCanvas; // 0x2d8(0x08)
	struct UGroupStatusWidget_C* GroupStatusWidget; // 0x2e0(0x08)
	struct UHealthBar6_Animated_C* HealthBar; // 0x2e8(0x08)
	struct UImage* HealthGainImage; // 0x2f0(0x08)
	struct UHUDNightVision_C* HUD_NV_W; // 0x2f8(0x08)
	struct UHUDGameMessages_C* HUDGameMessages; // 0x300(0x08)
	struct UHUDStageIntro_C* HUDStageIntro; // 0x308(0x08)
	struct UHUDTutorial_C* HUDTutorial; // 0x310(0x08)
	struct UHUDTutorialMessages_C* HUDTutorialMessages; // 0x318(0x08)
	struct UInvalidationBox* InvalidationBox_PlayerHud; // 0x320(0x08)
	struct ULinearInventory_C* LinearInventory; // 0x328(0x08)
	struct UMatchStartCountdownWidget_C* MatchStartCountdownWidget; // 0x330(0x08)
	struct UMessageWidget_C* MessageWidget; // 0x338(0x08)
	struct UMinigame_Progress_Widget_C* Minigame_Progress_Widget; // 0x340(0x08)
	struct UHUDObjectives_C* ObjectivesWidget; // 0x348(0x08)
	struct UPsychosisBar2_C* PsychosisBar2; // 0x350(0x08)
	struct USpectatorInfoHudWidget_C* SpectatorInfoHudWidget; // 0x358(0x08)
	struct UTalkWheel_V2_C* TalkWheel_V2; // 0x360(0x08)
	struct UWaitingForPlayersCountdownWidget_C* WaitingForPlayersCountdownWidget; // 0x368(0x08)
	struct FMulticastInlineDelegate FadeInCompleted; // 0x370(0x10)
	float blackoutDuration; // 0x380(0x04)

	void SequenceEvent__ENTRYPOINTPlayerHud_2(); // Function PlayerHud.PlayerHud_C.SequenceEvent__ENTRYPOINTPlayerHud_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SequenceEvent__ENTRYPOINTPlayerHud_1(); // Function PlayerHud.PlayerHud_C.SequenceEvent__ENTRYPOINTPlayerHud_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void PlayTransitionFeedback(); // Function PlayerHud.PlayerHud_C.PlayTransitionFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void BlackoutCompleted(); // Function PlayerHud.PlayerHud_C.BlackoutCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function PlayerHud.PlayerHud_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnResetHud(); // Function PlayerHud.PlayerHud_C.Event_OnResetHud // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_StartTransitionFeedback(float blackoutDuration); // Function PlayerHud.PlayerHud_C.Event_StartTransitionFeedback // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void TransitionFeedbackFinished(); // Function PlayerHud.PlayerHud_C.TransitionFeedbackFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_ShowInteractionMessage(struct FText& Message, enum class EGameMessageCategory GameMessageCategory); // Function PlayerHud.PlayerHud_C.Event_ShowInteractionMessage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void Event_HideInteractionMessage(); // Function PlayerHud.PlayerHud_C.Event_HideInteractionMessage // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function PlayerHud.PlayerHud_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_ForceUpdateSwapIcons(); // Function PlayerHud.PlayerHud_C.Event_ForceUpdateSwapIcons // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnIncapacitatedVisibilityChanged(enum class ESlateVisibility InVisibility); // Function PlayerHud.PlayerHud_C.OnIncapacitatedVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnHUDOpacityChanged(); // Function PlayerHud.PlayerHud_C.Event_OnHUDOpacityChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_PlayerHud(int32_t EntryPoint); // Function PlayerHud.PlayerHud_C.ExecuteUbergraph_PlayerHud // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void FadeInCompleted__DelegateSignature(); // Function PlayerHud.PlayerHud_C.FadeInCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

