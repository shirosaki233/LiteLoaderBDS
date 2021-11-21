// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/WorldChangeTransactionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WorldChangeTransaction {
#include "Extra/WorldChangeTransactionAPI.hpp"

public:
    MCAPI WorldChangeTransaction(class IBlockWorldGenAPI&);
    MCAPI bool apply() const;
    MCAPI class Block const& getBlock(class BlockPos const&) const;
    MCAPI void setBlock(class BlockPos const&, class Block const&, int);
    MCAPI ~WorldChangeTransaction();
};