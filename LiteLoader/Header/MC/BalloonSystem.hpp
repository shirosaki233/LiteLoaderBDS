// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BalloonSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BalloonSystem : public ITickingSystem {
#include "Extra/BalloonSystemAPI.hpp"
public:
    virtual ~BalloonSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};