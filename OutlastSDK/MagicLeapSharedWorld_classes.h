// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size: 0x400 (Inherited: 0x330)
struct AMagicLeapSharedWorldGameMode : AGameMode {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x330(0x10)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x340(0x10)
	float PinSelectionConfidenceThreshold; // 0x350(0x04)
	char pad_354[0xa4]; // 0x354(0xa4)
	struct AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3f8(0x08)

	bool SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x17bacb4
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x17bac9c
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData& NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x17babc0
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size: 0x2e8 (Inherited: 0x2a8)
struct AMagicLeapSharedWorldGameState : AGameState {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x2a8(0x10)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2d8(0x10)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData // (Final|Native|Private) // @ game+0x17bac88
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms // (Final|Native|Private) // @ game+0x17bac74
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x201e6d4
	struct FTransform CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x17baab0
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size: 0x5b0 (Inherited: 0x598)
struct AMagicLeapSharedWorldPlayerController : APlayerController {
	char pad_598[0x18]; // 0x598(0x18)

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x17bad6c
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x17bacd8
	bool IsChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17bac5c
	void ClientSetChosenOne(bool bChosenOne); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x17bab3c
	void ClientMarkReadyForSendingLocalData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x17bab24
	bool CanSendLocalDataToServer(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17bab0c
};

