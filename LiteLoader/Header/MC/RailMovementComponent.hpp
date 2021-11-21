// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/RailMovementComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RailMovementComponent {
#include "Extra/RailMovementComponentAPI.hpp"

public:
    MCAPI RailMovementComponent();
    MCAPI bool canSnapOnRail(class Actor const&, class BlockPos&);
    MCAPI void comeOffTrack(class Actor&);
    MCAPI void moveAlongTrack(class Actor&, class Block const&, class BlockPos const&);
};