// Class Lobby.LobbyBeaconClient
// Size: 0x360 (Inherited: 0x2d8)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x2d8(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x2e0(0x08)
	char pad_2E8[0x1]; // 0x2e8(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x2e9(0x01)
	char pad_2EA[0x76]; // 0x2ea(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1340f90
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1340f44
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1340dc4
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1340ca4
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1340c58
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1340ba0
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1340a3c
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13409b0
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x1340908
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x134080c
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x134071c
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1340704
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x13406ec
};

// Class Lobby.LobbyBeaconHost
// Size: 0x2a8 (Inherited: 0x270)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_270[0x8]; // 0x270(0x08)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x278(0x28)
	struct ALobbyBeaconState* LobbyState; // 0x2a0(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x308 (Inherited: 0x248)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x248(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x260(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x288(0x28)
	bool bInLobby; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x2b8(0x08)
	char pad_2C0[0x48]; // 0x2c0(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x1340b54
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x1340b1c
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x1340ad0
};

// Class Lobby.LobbyBeaconState
// Size: 0x3f0 (Inherited: 0x248)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
	bool bLobbyStarted; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float WaitForPlayersTimeRemaining; // 0x264(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x268(0x120)
	char pad_388[0x68]; // 0x388(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x1340b8c
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x1340b08
};

