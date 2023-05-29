// Class AkAudio.AkAcousticPortal
// Size: 0x328 (Inherited: 0x280)
struct AAkAcousticPortal : AVolume {
	enum class AkAcousticPortalState InitialState; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float ObstructionRefreshInterval; // 0x284(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x288(0x01)
	char pad_289[0x9f]; // 0x289(0x9f)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x187ee58
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x187e3ac
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x187dc08
};

// Class AkAudio.AkPortalComponent
// Size: 0x220 (Inherited: 0x220)
struct UAkPortalComponent : USceneComponent {
};

// Class AkAudio.AkAcousticTexture
// Size: 0x80 (Inherited: 0x80)
struct UAkAcousticTexture : UPhysicalMaterial {
};

// Class AkAudio.AkAmbientSound
// Size: 0x288 (Inherited: 0x248)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x258(0x01)
	bool AutoPost; // 0x259(0x01)
	char pad_25A[0x2e]; // 0x25a(0x2e)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x188230c
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1882070
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x3c)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class AkAudio.AkAudioBank
// Size: 0x30 (Inherited: 0x28)
struct UAkAudioBank : UObject {
	bool AutoLoad; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x48 (Inherited: 0x28)
struct UAkAudioEvent : UObject {
	struct UAkAudioBank* RequiredBank; // 0x28(0x08)
	float MaxAttenuationRadius; // 0x30(0x04)
	bool IsInfinite; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MinimumDuration; // 0x38(0x04)
	float MaximumDuration; // 0x3c(0x04)
	bool ForceSyncPrepare; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class AkAudio.AkComponent
// Size: 0x3a0 (Inherited: 0x220)
struct UAkComponent : USceneComponent {
	bool bUseSpatialAudio; // 0x218(0x01)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x220(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x228(0x10)
	int32_t EarlyReflectionOrder; // 0x238(0x04)
	float EarlyReflectionBusSendGain; // 0x23c(0x04)
	float EarlyReflectionMaxPathLength; // 0x240(0x04)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x244(0x01)
	char pad_246[0x6]; // 0x246(0x06)
	char EnableSpotReflectors : 1; // 0x24c(0x01)
	char pad_24C_1 : 7; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	float roomReverbAuxBusGain; // 0x250(0x04)
	int32_t diffractionMaxEdges; // 0x254(0x04)
	int32_t diffractionMaxPaths; // 0x258(0x04)
	float diffractionMaxPathLength; // 0x25c(0x04)
	char DrawFirstOrderReflections : 1; // 0x260(0x01)
	char DrawSecondOrderReflections : 1; // 0x260(0x01)
	char DrawHigherOrderReflections : 1; // 0x260(0x01)
	char DrawDiffraction : 1; // 0x260(0x01)
	char pad_260_4 : 4; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	bool StopWhenOwnerDestroyed; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	float AttenuationScalingFactor; // 0x268(0x04)
	float OcclusionRefreshInterval; // 0x26c(0x04)
	bool bUseReverbVolumes; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UAkAudioEvent* AkAudioEvent; // 0x278(0x08)
	struct FString EventName; // 0x280(0x10)
	char pad_290[0x110]; // 0x290(0x110)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1882b00
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x188266c
	void Stop(); // Function AkAudio.AkComponent.Stop // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1882184
	void SetUseSpatialAudio(bool bNewValue); // Function AkAudio.AkComponent.SetUseSpatialAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x1881c8c
	void SetSwitch(struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18819ec
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x188196c
	void SetRTPCValue(struct FString RTPC, float Value, int32_t InterpolationTimeMs); // Function AkAudio.AkComponent.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1881528
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18812f8
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1880acc
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1880850
	void PostTrigger(struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18804d0
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x187f630
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkComponent.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x187f4e8
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x187f218
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* akEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x187f068
	int32_t PostAkEvent(struct UAkAudioEvent* akEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEvent // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x187ee84
	void GetRTPCValue(struct FString RTPC, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType); // Function AkAudio.AkComponent.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x187e3e4
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x187e344
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x3b0 (Inherited: 0x3a0)
struct UAkAudioInputComponent : UAkComponent {
	char pad_3A0[0x10]; // 0x3a0(0x10)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x187f758
};

// Class AkAudio.AkAuxBus
// Size: 0x38 (Inherited: 0x28)
struct UAkAuxBus : UObject {
	struct UAkAudioBank* RequiredBank; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xad0 (Inherited: 0x120)
struct UAkCheckBox : UContentWidget {
	char pad_120[0x340]; // 0x120(0x340)
	enum class ECheckBoxState CheckedState; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FDelegate CheckedStateDelegate; // 0x464(0x10)
	char pad_474[0x4]; // 0x474(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x478(0x580)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x9f8(0x01)
	bool IsFocusable; // 0x9f9(0x01)
	char pad_9FA[0x6]; // 0x9fa(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xa00(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xa10(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xa50(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xa60(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xa70(0x10)
	char pad_A80[0x50]; // 0xa80(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x1880a4c
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x18809cc
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x18807c4
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1880734
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x187e980
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x187e8c0
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x187e370
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x187e308
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x187e2b4
};

// Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1882b80
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1882860
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x18825ec
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18824f0
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1882380
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1882350
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1882320
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x188229c
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1882270
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x188219c
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1882104
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1882084
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1882000
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, struct UAkAuxBus* EarlyReflectionsBus, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, struct FString EarlyReflectionsBusName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1881d24
	void SetSwitch(struct FName SwitchGroup, struct FName SwitchState, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1881adc
	void SetState(struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x18818b8
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1881780
	void SetRTPCValue(struct FName RTPC, float Value, int32_t InterpolationTimeMs, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1881644
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1881498
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x188137c
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1881280
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1881168
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1880fc0
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1880d90
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1880b64
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18808d4
	void PostTrigger(struct FName Trigger, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.PostTrigger // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1880578
	int32_t PostNotifyOnActor(struct UAkAudioEvent* akEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostNotifyOnActor // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18802b0
	int32_t PostEventOnActor(struct UAkAudioEvent* akEvent, struct UObject* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventOnActor // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18800bc
	int32_t PostEventGlobal(struct UAkAudioEvent* akEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventGlobal // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x187ff58
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x187fe28
	int32_t PostEventAttached(struct UAkAudioEvent* akEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x187fc8c
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x187fb4c
	int32_t PostEventAtLocation(struct UAkAudioEvent* akEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x187f9b8
	int32_t PostEvent(struct UAkAudioEvent* akEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct UObject* WorldContextObject, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x187f77c
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* akEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x187f2b4
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x187ee30
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x187ed54
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x187ecd4
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x187eb18
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x187e9a8
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x187e8e4
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x150d484
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x187e780
	void GetRTPCValue(struct FName RTPC, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x187e5a0
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x187e3c8
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x187e0d4
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType actionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x187df50
	void ExecuteActionOnEvent(struct UAkAudioEvent* akEvent, enum class AkActionOnEventType actionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x187dc2c
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x187dbe0
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x187db54
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x187dac8
};

// Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x28(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	int32_t EventId; // 0x34(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_38[0x10]; // 0x38(0x10)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x1885dc0
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1885cf4
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1885c3c
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1885b6c
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1885a9c
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18859cc
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1885908
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x188583c
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x1885824
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1885754
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x04)
	int32_t Position; // 0x3c(0x04)
	struct FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float duration; // 0x38(0x04)
	float EstimatedDuration; // 0x3c(0x04)
	int32_t AudioNodeID; // 0x40(0x04)
	int32_t MediaID; // 0x44(0x04)
	bool bStreaming; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkAudioSession AudioSession; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888b4c
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888a9c
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x148 (Inherited: 0x108)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18892d8
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1888e50
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1888de0
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888b4c
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888a9c
};

// Class AkAudio.AkItemProperties
// Size: 0x148 (Inherited: 0x108)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18892d8
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1888e8c
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1888de0
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x260 (Inherited: 0x220)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x218(0x01)
	struct UAkAuxBus* AuxBus; // 0x220(0x08)
	struct FString AuxBusName; // 0x228(0x10)
	float SendLevel; // 0x238(0x04)
	float FadeRate; // 0x23c(0x04)
	float Priority; // 0x240(0x04)
	char pad_244_1 : 7; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x248(0x08)
	char pad_250[0x10]; // 0x250(0x10)
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)
};

// Class AkAudio.AkLuminInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLuminInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb0(0x40)
};

// Class AkAudio.AkPS5InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS5InitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88(0x28)
	struct FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xb0(0x3c)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class AkAudio.AkDPXInitializationSettings
// Size: 0xf0 (Inherited: 0xf0)
struct UAkDPXInitializationSettings : UAkPS5InitializationSettings {
};

// Class AkAudio.AkReverbVolume
// Size: 0x2b8 (Inherited: 0x280)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x280(0x01)
	char pad_280_1 : 7; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UAkAuxBus* AuxBus; // 0x288(0x08)
	struct FString AuxBusName; // 0x290(0x10)
	float SendLevel; // 0x2a0(0x04)
	float FadeRate; // 0x2a4(0x04)
	float Priority; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x2b0(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x240 (Inherited: 0x220)
struct UAkRoomComponent : USceneComponent {
	char bEnable : 1; // 0x218(0x01)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x220(0x08)
	float Priority; // 0x228(0x04)
	float WallOcclusion; // 0x22c(0x04)
	char pad_230_1 : 7; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)
};

// Class AkAudio.AkSettings
// Size: 0xc8 (Inherited: 0x28)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundBankFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x01)
	enum class AkMultiPositionType DefaultMultipositionType; // 0x51(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x52(0x01)
	bool bEnableMultiCoreRendering; // 0x53(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x58(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x68(0x10)
	struct TArray<struct FString> BanksContainingMedia; // 0x78(0x10)
	char pad_88[0x40]; // 0x88(0x40)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x60 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	struct FString WaapiIPAddress; // 0x48(0x10)
	uint32_t WaapiPort; // 0x58(0x04)
	bool SuppressWwiseProjectPathWarnings; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class AkAudio.AkSlider
// Size: 0x530 (Inherited: 0x108)
struct UAkSlider : UWidget {
	float Value; // 0x108(0x04)
	struct FDelegate ValueDelegate; // 0x10c(0x10)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FSliderStyle WidgetStyle; // 0x120(0x340)
	enum class EOrientation Orientation; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FLinearColor SliderBarColor; // 0x464(0x10)
	struct FLinearColor SliderHandleColor; // 0x474(0x10)
	bool IndentHandle; // 0x484(0x01)
	bool Locked; // 0x485(0x01)
	char pad_486[0x2]; // 0x486(0x02)
	float StepSize; // 0x488(0x04)
	bool IsFocusable; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x490(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4a0(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x500(0x10)
	char pad_510[0x20]; // 0x510(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x188968c
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1889544
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1889478
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x18893ac
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1889258
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x18891d8
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x18890f0
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1889030
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1888f70
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1888d94
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1888d3c
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x298 (Inherited: 0x280)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x280(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x288(0x08)
	struct UAkRoomComponent* Room; // 0x290(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x278 (Inherited: 0x248)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* AuxBus; // 0x248(0x08)
	struct FString AuxBusName; // 0x250(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x260(0x08)
	float DistanceScalingFactor; // 0x268(0x04)
	float Level; // 0x26c(0x04)
	char pad_270[0x8]; // 0x270(0x08)
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x250 (Inherited: 0x220)
struct UAkSurfaceReflectorSetComponent : USceneComponent {
	char bEnableSurfaceReflectors : 1; // 0x218(0x01)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x220(0x10)
	char bEnableDiffraction : 1; // 0x230(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x230(0x01)
	char pad_230_3 : 5; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct AActor* AssociatedRoom; // 0x238(0x08)
	char pad_240[0x10]; // 0x240(0x10)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x1889980
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x188901c
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x1889008
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xe8 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettings CommunicationSettings; // 0x90(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb0(0x38)
};

// Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18898b0
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1889710
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18895c8
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1888f98
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1888f98
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1888eec
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888c9c
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888bfc
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1888930
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888b4c
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888a9c
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188d19c
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188cf14
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188cda0
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188cc20
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188ca98
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188c910
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188c7bc
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188c578
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188c460
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188c328
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188c1f0
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x188c0c4
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x188c00c
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x188bf54
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888b4c
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1888a9c
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x44)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkWwiseTree
// Size: 0x148 (Inherited: 0x108)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x188d0c8
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x188c758
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x188c6e8
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x168 (Inherited: 0x108)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
	char pad_128[0x40]; // 0x128(0x40)
};

// Class AkAudio.AkXBoxOneInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXBoxOneInitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkXBoxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkXBoxOneAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	struct FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1d0 (Inherited: 0xe8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_E8[0x40]; // 0xe8(0x40)
	struct UAkAudioEvent* Event; // 0x128(0x08)
	bool RetriggerEvent; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32_t ScrubTailLengthMs; // 0x134(0x04)
	bool StopAtSectionEnd; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FString EventName; // 0x140(0x10)
	char pad_150[0x20]; // 0x150(0x20)
	float MaxSourceDuration; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FString MaxDurationSourceID; // 0x178(0x10)
	char pad_188[0x48]; // 0x188(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
	char bIsAMasterTrack : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x248 (Inherited: 0xe8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct FString Name; // 0xe8(0x10)
	struct FRichCurve FloatCurve; // 0xf8(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178(0x30)
	char pad_1A8[0xa0]; // 0x1a8(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

