// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CommonResourceDefinitionMapAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommonResourceDefinitionMap {
#include "Extra/CommonResourceDefinitionMapAPI.hpp"

public:
    MCAPI CommonResourceDefinitionMap();
    MCAPI std::vector<struct NamedMolangScript> const& getAnimateScriptArray() const;
    MCAPI std::vector<struct MolangVariableSettings> const& getVariableSettings() const;
    MCAPI bool isCommonResourceDefinitionMapEmpty() const;
    MCAPI void mergeActorAnimateScriptArray(std::vector<struct NamedMolangScript> const&);
    MCAPI void mergeAnimation(class HashedString const&, class ActorSkeletalAnimationPtr);
    MCAPI void mergeAnimationController(class HashedString const&, class ActorAnimationControllerPtr);


private:
    MCAPI static class std::recursive_mutex& _getAnimationResourceDefinitionLock();
};