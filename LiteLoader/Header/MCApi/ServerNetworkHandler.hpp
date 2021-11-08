// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ServerNetworkHandler {

public:
    MCAPI void activateAllowList();
    MCAPI void addToDenyList(class mce::UUID const&, std::string const&);
    MCAPI void allowIncomingConnections(std::string const&, bool);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createNewPlayer(class NetworkIdentifier const&, class ConnectionRequest const&);
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSimulatedPlayer(std::string const&);
    MCAPI void disallowIncomingConnections();
    MCAPI void disconnectClient(class NetworkIdentifier const&, std::string const&, bool);
    MCAPI void disconnectClient(class NetworkIdentifier const&, unsigned char, std::string const&, bool);
    MCAPI void engineCancelResponseHelper(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);
    MCAPI void engineDownloadingFinishedResponseHelper(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);
    MCAPI void engineDownloadingResponseHelper(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);
    MCAPI class ConnectionRequest const& fetchConnectionRequest(class NetworkIdentifier const&);
    MCAPI bool isDedicatedServer();
    MCAPI bool isHost(class ServerPlayer&);
    MCAPI void onReady_ClientGeneration(class Player&, class NetworkIdentifier const&);
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const&, enum PlayerPermissionLevel);
    MCAPI void sendLoginMessageLocal(class NetworkIdentifier const&, class ConnectionRequest const&, class ServerPlayer&);
    MCAPI void setAutomationClient(void*);
    MCAPI int setMaxNumPlayers(int);
    MCAPI void setNewPlayerPermissions(class ServerPlayer&);
    MCAPI bool trytLoadPlayer(class ServerPlayer&, class ConnectionRequest const&);
    MCAPI void updateServerAnnouncement();

    inline class ServerPlayer* getServerPlayer(class NetworkIdentifier const& netId) {
        return _getServerPlayer(netId, 0);
    }

private:
    MCAPI class ServerPlayer& _createNewPlayer(class NetworkIdentifier const&, class SubClientConnectionRequest const&, unsigned char);
    MCAPI void _displayGameMessage(class Player const&, struct ChatEvent&);
    MCAPI int _getActiveAndInProgressPlayerCount(class mce::UUID) const;
    MCAPI std::string _getDisplayName(class Certificate const&, bool, std::string const&) const;
    MCAPI inline class ServerPlayer* _getServerPlayer(class NetworkIdentifier const&, unsigned char);
    MCAPI bool _loadNewPlayer(class ServerPlayer&, bool);
    MCAPI void _onClientAuthenticated(class NetworkIdentifier const&, class Certificate const&);
    MCAPI void _onPlayerLeft(class ServerPlayer*, bool);
    MCAPI void _onSubClientAuthenticated(class NetworkIdentifier const&, class Certificate const&, class SubClientLoginPacket const&);
    MCAPI void _sendAdditionalLevelData(class ServerPlayer&, class NetworkIdentifier const&);
    MCAPI void _sendLevelData(class ServerPlayer&, class NetworkIdentifier const&);
};