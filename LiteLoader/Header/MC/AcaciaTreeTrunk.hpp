// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AcaciaTreeTrunkAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AcaciaTreeTrunk {
#include "Extra/AcaciaTreeTrunkAPI.hpp"
public:
    virtual ~AcaciaTreeTrunk();
    virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*);


private:
    MCAPI void _placeLeaningBranches(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&, class Random&, class RenderParams&, int, int, int, struct TreeHelper::TreeParams const&) const;
    MCAPI void _placeVerticalBranches(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&) const;
};