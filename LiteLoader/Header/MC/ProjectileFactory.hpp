// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ProjectileFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ProjectileFactory {
#include "Extra/ProjectileFactoryAPI.hpp"

public:
    MCAPI ProjectileFactory(class Level&);
    MCAPI bool shootProjectileFromDefinition(struct ActorDefinitionIdentifier const&, class Mob*, class Vec3);

    MCAPI static void initFactory();
    MCAPI static void shutdown();
};