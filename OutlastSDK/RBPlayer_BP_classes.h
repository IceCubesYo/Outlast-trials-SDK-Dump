// BlueprintGeneratedClass RBPlayer_BP.RBPlayer_BP_C
// Size: 0x7768 (Inherited: 0x7520)
struct ARBPlayer_BP_C : ARBPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7520(0x08)
	struct UParticleSystemComponent* UnderwaterBubbles; // 0x7528(0x08)
	struct UStaticMeshComponent* Watch; // 0x7530(0x08)
	struct UNiagaraComponent* Ngr_UnderwaterBubble; // 0x7538(0x08)
	struct UNiagaraComponent* Ngr_TraproomGas; // 0x7540(0x08)
	struct UStaticMeshComponent* Lens_R; // 0x7548(0x08)
	struct UStaticMeshComponent* Lens_L; // 0x7550(0x08)
	struct USkeletalMeshComponent* NightVision1P; // 0x7558(0x08)
	struct UArrowComponent* ProxyLightDir; // 0x7560(0x08)
	struct UStaticMeshComponent* ShadowPickupStatic; // 0x7568(0x08)
	struct USkeletalMeshComponent* ShadowPickupSkeletal; // 0x7570(0x08)
	struct UNiagaraComponent* Ngr_ElectricHit; // 0x7578(0x08)
	struct UNiagaraComponent* Ngr_BloodDripping; // 0x7580(0x08)
	struct URBPlayerSkelMeshComponent* ESOP; // 0x7588(0x08)
	struct UStaticMeshComponent* ESOP_Battery; // 0x7590(0x08)
	struct UStaticMeshComponent* ESOP_Lever; // 0x7598(0x08)
	struct UStaticMeshComponent* ESOP_Apparatus; // 0x75a0(0x08)
	struct USkeletalMeshComponent* HeadCap1P; // 0x75a8(0x08)
	struct USkeletalMeshComponent* HairMesh3P; // 0x75b0(0x08)
	struct USkeletalMeshComponent* GloveMesh3P; // 0x75b8(0x08)
	struct USpotLightComponent* ProxyLight; // 0x75c0(0x08)
	struct USkeletalMeshComponent* Straps; // 0x75c8(0x08)
	struct USkeletalMeshComponent* NightVision; // 0x75d0(0x08)
	struct USkeletalMeshComponent* LegsMesh3P; // 0x75d8(0x08)
	struct USkeletalMeshComponent* TorsoMesh3P; // 0x75e0(0x08)
	struct USkeletalMeshComponent* HeadMesh3P; // 0x75e8(0x08)
	int32_t CurrentLobbyCameraIndex; // 0x75f0(0x04)
	char pad_75F4[0x4]; // 0x75f4(0x04)
	struct ACameraIntercom-01_BP_C* CurrentCameraIntercom; // 0x75f8(0x08)
	int32_t CurrentHitCount; // 0x7600(0x04)
	char pad_7604[0x4]; // 0x7604(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> DamageMaterials; // 0x7608(0x10)
	struct TArray<struct FPlayerVisualDamageStruct> DamagedBones; // 0x7618(0x10)
	struct FMulticastInlineDelegate Deleteme; // 0x7628(0x10)
	struct TArray<struct USceneComponent*> ShadowMesh_Visual; // 0x7638(0x10)
	struct TArray<struct USceneComponent*> ShadowMesh_Shadow; // 0x7648(0x10)
	float ConstantDamageBias; // 0x7658(0x04)
	char pad_765C[0x4]; // 0x765c(0x04)
	struct TArray<struct USkeletalMeshComponent*> ExtraCustomizationMeshes; // 0x7660(0x10)
	bool CreatedShadowMesh; // 0x7670(0x01)
	bool HasInitReplicated; // 0x7671(0x01)
	bool HasReceivedInitialCustomization; // 0x7672(0x01)
	char pad_7673[0x1]; // 0x7673(0x01)
	float DamageRadius1; // 0x7674(0x04)
	float DamageRadius2; // 0x7678(0x04)
	float DamageRadius3; // 0x767c(0x04)
	struct FMulticastInlineDelegate ShadowMeshCompleted; // 0x7680(0x10)
	float CorpseSearchBloodHandStartTime; // 0x7690(0x04)
	float DesiredRightHandBloodIntensity; // 0x7694(0x04)
	float CorpseSearchBloodDuration; // 0x7698(0x04)
	float CurrentRightHandBloodIntensity; // 0x769c(0x04)
	float HandBloodInterpSpeed; // 0x76a0(0x04)
	char pad_76A4[0x4]; // 0x76a4(0x04)
	struct TSoftObjectPtr<USkeletalMesh> DefaultNV1PMesh; // 0x76a8(0x28)
	float NextBloodDripDelay; // 0x76d0(0x04)
	float LastBloodDripTimestamp; // 0x76d4(0x04)
	float LastDownedStateSmearTimestamp; // 0x76d8(0x04)
	char pad_76DC[0x4]; // 0x76dc(0x04)
	struct TArray<struct UMaterialInstanceConstant*> DynamicBloodSplatterMaterials; // 0x76e0(0x10)
	struct TArray<struct UMaterialInstanceConstant*> DynamicBloodSplatterMaterials_Shuffled; // 0x76f0(0x10)
	float NextDownedStateSmearDelay; // 0x7700(0x04)
	char pad_7704[0x4]; // 0x7704(0x04)
	struct TArray<struct UMaterialInstanceConstant*> DynamicStraightBloodSmearMaterials; // 0x7708(0x10)
	float TravelledDist; // 0x7718(0x04)
	struct FVector DamageVisualPreviousLocation; // 0x771c(0x0c)
	struct FRotator DamageVisualPreviousRotation; // 0x7728(0x0c)
	char pad_7734[0x4]; // 0x7734(0x04)
	struct TArray<struct UMaterialInstanceConstant*> DynamicRoundBloodSmearMaterials; // 0x7738(0x10)
	struct UPoseAsset* FacePoseAsset; // 0x7748(0x08)
	float LastLocationDataTimestamp; // 0x7750(0x04)
	float NextLongBloodDripDelay; // 0x7754(0x04)
	float LastLongBloodDripTimestamp; // 0x7758(0x04)
	char pad_775C[0x4]; // 0x775c(0x04)
	struct UStaticMeshComponent* ApparatusShadowMesh; // 0x7760(0x08)

	struct USkeletalMeshComponent* GetMainParentSkeletalMesh(); // Function RBPlayer_BP.RBPlayer_BP_C.GetMainParentSkeletalMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	struct UStaticMeshComponent* GetWatchComponent(); // Function RBPlayer_BP.RBPlayer_BP_C.GetWatchComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	struct FRBPlayerCustomizationInfo GetPlayerCustomizationInfo(); // Function RBPlayer_BP.RBPlayer_BP_C.GetPlayerCustomizationInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	struct USkeletalMeshComponent* GetSkeletalMeshComponentForSlot(enum class EPlayerCustomizationSlot Slot); // Function RBPlayer_BP.RBPlayer_BP_C.GetSkeletalMeshComponentForSlot // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x201e6d4
	void UpdateShadowActiveSkill(); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowActiveSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateESOPVisibility(); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateESOPVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateVisualDamage(float DeltaTime); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateVisualDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateBloodSmearInDownedState(); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodSmearInDownedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetNextShuffledMaterial(struct UMaterialInstanceConstant*& NewParam); // Function RBPlayer_BP.RBPlayer_BP_C.GetNextShuffledMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void ApplyBloodDecal(struct UMaterialInstanceConstant* MatDecal, float Scale, bool Rotate); // Function RBPlayer_BP.RBPlayer_BP_C.ApplyBloodDecal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyDamageVFX(enum class EDamageType InfoType, enum class ENPCWeapon NPCWeapon, float DmdAmount, struct FVector DmgLocation, struct FVector DmgDirection, struct AActor* SourceActor, bool bBloodParticles); // Function RBPlayer_BP.RBPlayer_BP_C.ApplyDamageVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void TrySpawnBloodSplatterDecal(struct AActor* SrcActor, struct FVector In_HitLoc, struct UMaterialInstanceConstant* DecalMaterial, float RandomOffset, float DecalSize, struct FVector& Out_HitLoc); // Function RBPlayer_BP.RBPlayer_BP_C.TrySpawnBloodSplatterDecal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetRelevantForDamageExtraMeshes(struct TArray<struct USkeletalMeshComponent*>& SkeletalMeshes_); // Function RBPlayer_BP.RBPlayer_BP_C.GetRelevantForDamageExtraMeshes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	bool TryPlayFacialAnim(struct FString lineId); // Function RBPlayer_BP.RBPlayer_BP_C.TryPlayFacialAnim // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyBloodOnRightHand(); // Function RBPlayer_BP.RBPlayer_BP_C.ApplyBloodOnRightHand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateBloodHand(float DeltaTime); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodHand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	struct USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent(); // Function RBPlayer_BP.RBPlayer_BP_C.GetFaceFXSkeletalMeshComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	struct UPoseAsset* GetFacePoseAsset(); // Function RBPlayer_BP.RBPlayer_BP_C.GetFacePoseAsset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateShadowPickup(struct ARBPickup* Old, struct ARBPickup* New); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowPickup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateBloodDrippingParticle(); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateBloodDrippingParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void DebugVisualDamage(); // Function RBPlayer_BP.RBPlayer_BP_C.DebugVisualDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReduceVisualDamage(bool Increased, float newHealth); // Function RBPlayer_BP.RBPlayer_BP_C.ReduceVisualDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyVisualDamageToSkelMeshes(); // Function RBPlayer_BP.RBPlayer_BP_C.ApplyVisualDamageToSkelMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void RefreshHeadCapVisibility(); // Function RBPlayer_BP.RBPlayer_BP_C.RefreshHeadCapVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateHeadCapMesh(); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateHeadCapMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Should Hide Customization Slot in 1P(enum class EPlayerCustomizationSlot Slot, bool& ShouldHide); // Function RBPlayer_BP.RBPlayer_BP_C.Should Hide Customization Slot in 1P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x201e6d4
	void ClearExtraCustomizationMeshes(); // Function RBPlayer_BP.RBPlayer_BP_C.ClearExtraCustomizationMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CreateShadowmeshCopyOfStaticMesh(struct UStaticMeshComponent*& InVisualMesh, struct USkeletalMeshComponent*& Parent, struct UStaticMeshComponent*& OutNewComponent); // Function RBPlayer_BP.RBPlayer_BP_C.CreateShadowmeshCopyOfStaticMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CreateSkeletalMeshForShadow(struct USkeletalMeshComponent* InVisibleMesh, struct USceneComponent* InParent, struct USkeletalMeshComponent*& Out); // Function RBPlayer_BP.RBPlayer_BP_C.CreateSkeletalMeshForShadow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Remove Shadow Meshes(); // Function RBPlayer_BP.RBPlayer_BP_C.Remove Shadow Meshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CreateShadowmeshCopyOfSkeletalMesh(struct USkeletalMeshComponent*& InVisibleMesh, struct USceneComponent*& InParent); // Function RBPlayer_BP.RBPlayer_BP_C.CreateShadowmeshCopyOfSkeletalMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Update Shadow Mesh(bool ForceClean); // Function RBPlayer_BP.RBPlayer_BP_C.Update Shadow Mesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateESOPBatteryType(); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateESOPBatteryType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ResetDamageMaterials(); // Function RBPlayer_BP.RBPlayer_BP_C.ResetDamageMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyVisualDamageToCharacter(struct FVector Location, float damageAmount, struct AActor* SrcActor); // Function RBPlayer_BP.RBPlayer_BP_C.ApplyVisualDamageToCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void CustomizeCharacterModel(struct URBCustomizationOutfit* OutfitOverride); // Function RBPlayer_BP.RBPlayer_BP_C.CustomizeCharacterModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_PlayHitReactionEffects(struct FPlayerHitReactionParams& hitReaction, struct FVector& attackLoc, float hitRelativeAngle); // Function RBPlayer_BP.RBPlayer_BP_C.Event_PlayHitReactionEffects // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void SetInitialPlayerSettings(); // Function RBPlayer_BP.RBPlayer_BP_C.SetInitialPlayerSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UserConstructionScript(); // Function RBPlayer_BP.RBPlayer_BP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnLoaded_E32B3EA245CB7B65286791842D20B97F(struct UObject* Loaded); // Function RBPlayer_BP.RBPlayer_BP_C.OnLoaded_E32B3EA245CB7B65286791842D20B97F // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnPlayerPerspectiveChanged(); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnPlayerPerspectiveChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnDie(); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnDie // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnTakeDamage(struct FDamageInfo& Info); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnTakeDamage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature(bool bOn); // Function RBPlayer_BP.RBPlayer_BP_C.BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x201e6d4
	void Event_OnCustomizationChanged(); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnCustomizationChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_StartSpectatingLocally(); // Function RBPlayer_BP.RBPlayer_BP_C.Event_StartSpectatingLocally // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_StopSpectatingLocally(); // Function RBPlayer_BP.RBPlayer_BP_C.Event_StopSpectatingLocally // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function RBPlayer_BP.RBPlayer_BP_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void SetRemoteCameraIntercomInteractibilitty(struct ARemoteCameraIntercom-01_BP_C* RemoteCameraIntercom, bool bInteractibleValue); // Function RBPlayer_BP.RBPlayer_BP_C.SetRemoteCameraIntercomInteractibilitty // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Server_SetCameraIntercomActive(bool Active, struct ACameraIntercom-01_BP_C* CameraIntercom); // Function RBPlayer_BP.RBPlayer_BP_C.Server_SetCameraIntercomActive // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Server_SetCameraIntercomPitchYaw(float Pitch, float Yaw, struct ACameraIntercom-01_BP_C* CameraIntercom, bool IsTalking); // Function RBPlayer_BP.RBPlayer_BP_C.Server_SetCameraIntercomPitchYaw // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Multicast_SetCameraIntercomPitchYaw(float Pitch, float Yaw, struct ACameraIntercom-01_BP_C* CameraIntercom, bool IsTalking); // Function RBPlayer_BP.RBPlayer_BP_C.Multicast_SetCameraIntercomPitchYaw // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Multicast_SetCameraIntercomActive(bool Active, struct ACameraIntercom-01_BP_C* CameraIntercom); // Function RBPlayer_BP.RBPlayer_BP_C.Multicast_SetCameraIntercomActive // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Multicast_CameraIntercomInteractibility(struct ARemoteCameraIntercom-01_BP_C* RemoteCameraIntercom, bool bInteractibleValue); // Function RBPlayer_BP.RBPlayer_BP_C.Multicast_CameraIntercomInteractibility // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_InitReplicated(); // Function RBPlayer_BP.RBPlayer_BP_C.Event_InitReplicated // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void PlaySoundOnPlayer(struct UAkAudioEvent* akEvent); // Function RBPlayer_BP.RBPlayer_BP_C.PlaySoundOnPlayer // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveBeginPlay(); // Function RBPlayer_BP.RBPlayer_BP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x201e6d4
	void BP_OnTrapRoomFailed(); // Function RBPlayer_BP.RBPlayer_BP_C.BP_OnTrapRoomFailed // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnLastConsumedBatteryTypeChanged(enum class EItemType batteryType); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnLastConsumedBatteryTypeChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnFootstep(struct FFootstepData& FootstepData); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnFootstep // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x201e6d4
	void UpdatePerspective(); // Function RBPlayer_BP.RBPlayer_BP_C.UpdatePerspective // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateCustomization(); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateCustomization // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnHealthUpdated_Event(float newHealth, bool bIncreased); // Function RBPlayer_BP.RBPlayer_BP_C.OnHealthUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnExtraCustomizationMeshesAddedForSlot(struct TArray<struct USkeletalMeshComponent*>& addedExtraMeshes, enum class EPlayerCustomizationSlot Slot); // Function RBPlayer_BP.RBPlayer_BP_C.OnExtraCustomizationMeshesAddedForSlot // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnAffectedByPsychosisGas_BP(); // Function RBPlayer_BP.RBPlayer_BP_C.OnAffectedByPsychosisGas_BP // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void UpdateShadowPickupEvent(struct ARBPickup* oldItem, struct ARBPickup* newItem); // Function RBPlayer_BP.RBPlayer_BP_C.UpdateShadowPickupEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ReceiveTick(float DeltaSeconds); // Function RBPlayer_BP.RBPlayer_BP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ShowProxyLight(); // Function RBPlayer_BP.RBPlayer_BP_C.ShowProxyLight // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Broadcast2DSound(struct UAkAudioEvent* Event); // Function RBPlayer_BP.RBPlayer_BP_C.Broadcast2DSound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void OnNVAnimationDone_Event(bool isNvActive); // Function RBPlayer_BP.RBPlayer_BP_C.OnNVAnimationDone_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void NVAnimationDone(); // Function RBPlayer_BP.RBPlayer_BP_C.NVAnimationDone // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnNVAnimationNotify(bool bWantsNvOn, enum class ENightVisionAnimNotifyType Type); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnNVAnimationNotify // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void SetProxylightEnabled(bool Enabled); // Function RBPlayer_BP.RBPlayer_BP_C.SetProxylightEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ApplyDefaultNV(); // Function RBPlayer_BP.RBPlayer_BP_C.ApplyDefaultNV // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UnderwaterStateChanged(bool bIsUnderwater); // Function RBPlayer_BP.RBPlayer_BP_C.UnderwaterStateChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnHealthRestored(); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnHealthRestored // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void Event_OnActiveSkillActorChanged(struct AActor* activeSkillActor); // Function RBPlayer_BP.RBPlayer_BP_C.Event_OnActiveSkillActorChanged // (Event|Public|BlueprintEvent) // @ game+0x201e6d4
	void ForceHideUnderwaterBubble(); // Function RBPlayer_BP.RBPlayer_BP_C.ForceHideUnderwaterBubble // (BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void ExecuteUbergraph_RBPlayer_BP(int32_t EntryPoint); // Function RBPlayer_BP.RBPlayer_BP_C.ExecuteUbergraph_RBPlayer_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0x201e6d4
	void ShadowMeshCompleted__DelegateSignature(); // Function RBPlayer_BP.RBPlayer_BP_C.ShadowMeshCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void Deleteme__DelegateSignature(); // Function RBPlayer_BP.RBPlayer_BP_C.Deleteme__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

