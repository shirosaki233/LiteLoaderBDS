// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SilverfishWakeUpFriendsGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SilverfishWakeUpFriendsGoal {
#include "Extra/SilverfishWakeUpFriendsGoalAPI.hpp"
public:
    virtual ~SilverfishWakeUpFriendsGoal();
    virtual bool canUse();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI SilverfishWakeUpFriendsGoal(class Silverfish&);
};