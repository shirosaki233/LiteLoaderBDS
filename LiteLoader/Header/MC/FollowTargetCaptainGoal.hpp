// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FollowTargetCaptainGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FollowTargetCaptainGoal {
#include "Extra/FollowTargetCaptainGoalAPI.hpp"
public:
    virtual ~FollowTargetCaptainGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI FollowTargetCaptainGoal(class Mob&, float, float, float);


private:
    MCAPI void _determineMovePos();
};