// WidgetBlueprintGeneratedClass HealthBar6_Animated.HealthBar6_Animated_C
// Size: 0x38a (Inherited: 0x2e8)
struct UHealthBar6_Animated_C : URBHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* SlideInFifthBar; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeInStatus; // 0x2f8(0x08)
	struct UWidgetAnimation* FadeInFadeOut; // 0x300(0x08)
	struct UWidgetAnimation* FadeInBar; // 0x308(0x08)
	struct UHudBarElement_Animated_C* FifthBracket; // 0x310(0x08)
	struct UHudBarElement_Animated_C* FirstBracket; // 0x318(0x08)
	struct UHudBarElement_Animated_C* FourthBracket; // 0x320(0x08)
	struct UHorizontalBox* HealthBar; // 0x328(0x08)
	struct UImage* Image_70; // 0x330(0x08)
	struct UPlayerStatus_C* PlayerStatus; // 0x338(0x08)
	struct UHudBarElement_Animated_C* SecondBracket; // 0x340(0x08)
	struct UHudBarElement_Animated_C* ThirdBracket; // 0x348(0x08)
	bool ShouldShowEmpty; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float CurrentHealth; // 0x354(0x04)
	float PreviousHealth; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UMaterialInstanceDynamic* HealthBarMaterial; // 0x360(0x08)
	struct TArray<struct UHudBarElement_Animated_C*> brackets; // 0x368(0x10)
	struct UHudBarElement_Animated_C* CurrentAnimatedBracket; // 0x378(0x08)
	int32_t Starting Bracket; // 0x380(0x04)
	int32_t FinishingBracket; // 0x384(0x04)
	bool WasDown; // 0x388(0x01)
	bool OngoingTweens; // 0x389(0x01)

	void UpdateFifthBarVisibility(bool Show, bool AnimateShow); // Function HealthBar6_Animated.HealthBar6_Animated_C.UpdateFifthBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void InitHealthBars(bool AnimateShow); // Function HealthBar6_Animated.HealthBar6_Animated_C.InitHealthBars // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ProcessPlayerStatusChange(enum class EPlayerIndicatorType NewStatus); // Function HealthBar6_Animated.HealthBar6_Animated_C.ProcessPlayerStatusChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ChainTweens(); // Function HealthBar6_Animated.HealthBar6_Animated_C.ChainTweens // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ProcessHealthEvent(float newHealth, bool Increased, bool SkipAnims); // Function HealthBar6_Animated.HealthBar6_Animated_C.ProcessHealthEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	bool ShouldShow(); // Function HealthBar6_Animated.HealthBar6_Animated_C.ShouldShow // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void Event_Show(); // Function HealthBar6_Animated.HealthBar6_Animated_C.Event_Show // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_Hide(); // Function HealthBar6_Animated.HealthBar6_Animated_C.Event_Hide // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PreConstruct(bool IsDesignTime); // Function HealthBar6_Animated.HealthBar6_Animated_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnWatchedPlayerChanged(struct ARBPlayer* oldPlayer, struct ARBPlayer* NewPlayer); // Function HealthBar6_Animated.HealthBar6_Animated_C.Event_OnWatchedPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void OnHealthUpdated(float newHealth, bool bIncreased); // Function HealthBar6_Animated.HealthBar6_Animated_C.OnHealthUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnPlayerIndicatorTypeChanged(enum class EPlayerIndicatorType playerIndicatorType); // Function HealthBar6_Animated.HealthBar6_Animated_C.OnPlayerIndicatorTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnAutoHealthRegenEnded(); // Function HealthBar6_Animated.HealthBar6_Animated_C.OnAutoHealthRegenEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMaxHealthChanged(float maxHealth); // Function HealthBar6_Animated.HealthBar6_Animated_C.OnMaxHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Construct(); // Function HealthBar6_Animated.HealthBar6_Animated_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Destruct(); // Function HealthBar6_Animated.HealthBar6_Animated_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_HealthBar6_Animated(int32_t EntryPoint); // Function HealthBar6_Animated.HealthBar6_Animated_C.ExecuteUbergraph_HealthBar6_Animated // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
};

