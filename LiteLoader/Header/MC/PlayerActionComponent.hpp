// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PlayerActionComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PlayerActionComponent {
#include "Extra/PlayerActionComponentAPI.hpp"

public:
    MCAPI PlayerActionComponent();
    MCAPI void addAbortDestroyBlock(class BlockPos const&, int);
    MCAPI void addContinueDestroyBlock(class BlockPos const&, int);
    MCAPI void addStartDestroyBlock(class BlockPos const&, int);
    MCAPI void addStopDestroyBlock();
    MCAPI ~PlayerActionComponent();
};