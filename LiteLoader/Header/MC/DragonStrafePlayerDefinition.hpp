// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/DragonStrafePlayerDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DragonStrafePlayerDefinition {
#include "Extra/DragonStrafePlayerDefinitionAPI.hpp"
public:
    virtual ~DragonStrafePlayerDefinition();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();

public:
    MCAPI DragonStrafePlayerDefinition();
    MCAPI void initialize(class EntityContext&, class DragonStrafePlayerGoal&);
};