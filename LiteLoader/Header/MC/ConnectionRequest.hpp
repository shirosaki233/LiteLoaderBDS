// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ConnectionRequestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ConnectionRequest {
#include "Extra/ConnectionRequestAPI.hpp"

public:
    MCAPI ConnectionRequest(class ConnectionRequest const&);
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    MCAPI std::string getArmSize() const;
    MCAPI std::vector<unsigned char> getCapeData() const;
    MCAPI std::string getCapeId() const;
    MCAPI unsigned short getCapeImageHeight() const;
    MCAPI unsigned short getCapeImageWidth() const;
    MCAPI class Certificate const* getCertificate() const;
    MCAPI std::string getClientPlatformId() const;
    MCAPI std::string getClientPlatformOfflineId() const;
    MCAPI std::string getClientPlatformOnlineId() const;
    MCAPI unsigned __int64 getClientRandomId() const;
    MCAPI unsigned char getClientSubId() const;
    MCAPI std::string getClientThirdPartyName() const;
    MCAPI std::string getDeviceId() const;
    MCAPI enum BuildPlatform getDeviceOS() const;
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    MCAPI std::string getPlayFabId() const;
    MCAPI std::string getSelfSignedId() const;
    MCAPI std::string getSkinAnimationData() const;
    MCAPI class mce::Color getSkinColor() const;
    MCAPI std::vector<unsigned char> getSkinData() const;
    MCAPI std::string getSkinGeometry() const;
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;
    MCAPI std::string getSkinId() const;
    MCAPI unsigned short getSkinImageHeight() const;
    MCAPI unsigned short getSkinImageWidth() const;
    MCAPI std::string getSkinResourcePatch() const;
    MCAPI std::string getTenantId() const;
    MCAPI bool isCapeOnClassicSkin() const;
    MCAPI bool isClientThirdPartyNameOnly() const;
    MCAPI bool isEduMode() const;
    MCAPI bool isPersonaSkin() const;
    MCAPI bool isPremiumSkin() const;
    MCAPI std::string toString();
    MCAPI bool verify(std::vector<std::string> const&, __int64);
    MCAPI bool verifySelfSigned();
    MCAPI ~ConnectionRequest();

    MCAPI static class ConnectionRequest fromString(std::string const&);

private:
    MCAPI ConnectionRequest(std::unique_ptr<class WebToken>, std::string const&);
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, __int64) const;
};