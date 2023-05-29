// BlueprintGeneratedClass MainMenu.MainMenu_C
// Size: 0x290 (Inherited: 0x250)
struct AMainMenu_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ARBMainMenuPlayerController* MainMenuController; // 0x258(0x08)
	bool IsMusicPlaying; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct UBinkMediaPlayer* BinkMovie-01; // 0x268(0x08)
	struct UBinkMediaPlayer* BinkOldMovie-01; // 0x270(0x08)
	struct UBinkMediaPlayer* BinkMovie-02; // 0x278(0x08)
	struct ALevelSequenceActor* MenuSequencer-01_2_ExecuteUbergraph_MainMenu_RefProperty; // 0x280(0x08)
	struct ALevelSequenceActor* MenuSequencer-02_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x288(0x08)

	void ToggleXPCheck(); // Function MainMenu.MainMenu_C.ToggleXPCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function MainMenu.MainMenu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function MainMenu.MainMenu_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void MM_PlayCamera01(); // Function MainMenu.MainMenu_C.MM_PlayCamera01 // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MM_PlayCamera-02(); // Function MainMenu.MainMenu_C.MM_PlayCamera-02 // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MM_StopCamera01(); // Function MainMenu.MainMenu_C.MM_StopCamera01 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MM_StopCamera-02(); // Function MainMenu.MainMenu_C.MM_StopCamera-02 // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnMainMenuStageChanged(enum class EMainMenuState mainMenuState); // Function MainMenu.MainMenu_C.OnMainMenuStageChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MM_Scratch(); // Function MainMenu.MainMenu_C.MM_Scratch // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void MM_ScratchClose(); // Function MainMenu.MainMenu_C.MM_ScratchClose // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_MainMenu(int32_t EntryPoint); // Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu // (Final|UbergraphFunction) // @ game+0x201e6d4
};

