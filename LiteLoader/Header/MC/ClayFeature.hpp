// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ClayFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ClayFeature : public Feature {
#include "Extra/ClayFeatureAPI.hpp"
public:
    virtual ~ClayFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI ClayFeature(int);
};