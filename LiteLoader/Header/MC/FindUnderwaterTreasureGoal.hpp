// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FindUnderwaterTreasureGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FindUnderwaterTreasureGoal {
#include "Extra/FindUnderwaterTreasureGoalAPI.hpp"
public:
    virtual ~FindUnderwaterTreasureGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI FindUnderwaterTreasureGoal(class Mob&, float, int, int);
};