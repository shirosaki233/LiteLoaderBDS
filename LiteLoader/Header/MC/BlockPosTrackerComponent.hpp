// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BlockPosTrackerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BlockPosTrackerComponent {
#include "Extra/BlockPosTrackerComponentAPI.hpp"

public:
    MCAPI BlockPosTrackerComponent(bool, class BlockPos const&);
    MCAPI void onRemove(class Actor&);
};