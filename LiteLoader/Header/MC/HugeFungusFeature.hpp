// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/HugeFungusFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class HugeFungusFeature : public Feature {
#include "Extra/HugeFungusFeatureAPI.hpp"
public:
    virtual ~HugeFungusFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI HugeFungusFeature(bool);
};