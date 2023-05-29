// BlueprintGeneratedClass CustomizationLibrary.CustomizationLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UCustomizationLibrary_C : UBlueprintFunctionLibrary {

	struct FEventReply HandleGamepadCharacterRotationInput(struct FAnalogInputEvent Analog Input, struct UObject* __WorldContext); // Function CustomizationLibrary.CustomizationLibrary_C.HandleGamepadCharacterRotationInput // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void AssignCustomAnimBPOrSetMasterPose(struct USkeletalMeshComponent*& Component, struct USkeletalMesh* Mesh, bool MasterPoseFallback, struct UObject* __WorldContext); // Function CustomizationLibrary.CustomizationLibrary_C.AssignCustomAnimBPOrSetMasterPose // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void GetClosestMenuCharacter(struct FVector actorLocation, struct UObject* __WorldContext, struct AMenuCharacter_C*& MenuCharacter); // Function CustomizationLibrary.CustomizationLibrary_C.GetClosestMenuCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
	void UpdateSkinAlbedo(struct USkeletalMeshComponent* Head, struct TArray<struct USkeletalMeshComponent*>& OtherBodyParts, struct UObject* __WorldContext); // Function CustomizationLibrary.CustomizationLibrary_C.UpdateSkinAlbedo // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x201e6d4
};

