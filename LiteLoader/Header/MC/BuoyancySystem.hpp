// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BuoyancySystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BuoyancySystem : public ITickingSystem {
#include "Extra/BuoyancySystemAPI.hpp"
public:
    virtual ~BuoyancySystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};