// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ActorMotionSyncSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorMotionSyncSystem : public ITickingSystem {
#include "Extra/ActorMotionSyncSystemAPI.hpp"
public:
    virtual ~ActorMotionSyncSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};