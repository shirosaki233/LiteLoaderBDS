// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/RemoveOnHitSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RemoveOnHitSubcomponent {
#include "Extra/RemoveOnHitSubcomponentAPI.hpp"
public:
    virtual ~RemoveOnHitSubcomponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    virtual char const* getName();

public:
    MCAPI RemoveOnHitSubcomponent();
};