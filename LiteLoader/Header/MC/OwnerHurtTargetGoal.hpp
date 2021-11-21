// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/OwnerHurtTargetGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class OwnerHurtTargetGoal : public TargetGoal {
#include "Extra/OwnerHurtTargetGoalAPI.hpp"
public:
    virtual ~OwnerHurtTargetGoal();
    virtual bool canUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void unk_vfn_5();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI OwnerHurtTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&);
};