// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CoralFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CoralFeature : public Feature {
#include "Extra/CoralFeatureAPI.hpp"
public:
    virtual ~CoralFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);


private:
    MCAPI void _placeSideDecorations(class BlockSource&, class BlockPos const&, class Random&, unsigned char) const;
    MCAPI unsigned char _randomDirectionExcept(class Random&, unsigned char) const;
    MCAPI bool _setBlock(class BlockSource&, class BlockPos const&, class gsl::not_null<class Block const*>, int) const;
    MCAPI bool _setBlockOnSolid(class BlockSource&, class BlockPos const&, class gsl::not_null<class Block const*>, int) const;
    MCAPI void _starCorners(class BlockSource&, class Random&, class BlockPos const&, class gsl::not_null<class Block const*>, float, int, bool) const;
    MCAPI void _starFormation(class BlockSource&, class Random&, class BlockPos const&, class gsl::not_null<class Block const*>, float, int, bool) const;
};