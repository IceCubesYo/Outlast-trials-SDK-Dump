// Class CinematicCamera.CameraRig_Crane
// Size: 0x278 (Inherited: 0x248)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x248(0x04)
	float CraneYaw; // 0x24c(0x04)
	float CraneArmLength; // 0x250(0x04)
	bool bLockMountPitch; // 0x254(0x01)
	bool bLockMountYaw; // 0x255(0x01)
	char pad_256[0x2]; // 0x256(0x02)
	struct USceneComponent* TransformComponent; // 0x258(0x08)
	struct USceneComponent* CraneYawControl; // 0x260(0x08)
	struct USceneComponent* CranePitchControl; // 0x268(0x08)
	struct USceneComponent* CraneCameraMount; // 0x270(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x268 (Inherited: 0x248)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x248(0x04)
	bool bLockOrientationToRail; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct USceneComponent* TransformComponent; // 0x250(0x08)
	struct USplineComponent* RailSplineComponent; // 0x258(0x08)
	struct USceneComponent* RailCameraMount; // 0x260(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2d83f38
};

// Class CinematicCamera.CineCameraActor
// Size: 0x890 (Inherited: 0x830)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x830(0x50)
	char pad_880[0x10]; // 0x880(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d83c90
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x950 (Inherited: 0x850)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x850(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x85c(0x0c)
	struct FCameraLensSettings LensSettings; // 0x868(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x880(0x58)
	float CurrentFocalLength; // 0x8d8(0x04)
	float CurrentAperture; // 0x8dc(0x04)
	float CurrentFocusDistance; // 0x8e0(0x04)
	char pad_8E4[0xc]; // 0x8e4(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x8f0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x900(0x10)
	struct FString DefaultFilmbackPresetName; // 0x910(0x10)
	struct FString DefaultFilmbackPreset; // 0x920(0x10)
	struct FString DefaultLensPresetName; // 0x930(0x10)
	float DefaultLensFocalLength; // 0x940(0x04)
	float DefaultLensFStop; // 0x944(0x04)
	char pad_948[0x8]; // 0x948(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x2d840a0
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x2d84004
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x2d83f78
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d83f50
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2d83e98
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d83e5c
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d83e34
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2d83d94
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d83cec
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d83ca8
};

