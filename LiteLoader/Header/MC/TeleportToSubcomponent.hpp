// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TeleportToSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TeleportToSubcomponent {
#include "Extra/TeleportToSubcomponentAPI.hpp"
public:
    virtual ~TeleportToSubcomponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    virtual char const* getName();

public:
    MCAPI TeleportToSubcomponent();
};