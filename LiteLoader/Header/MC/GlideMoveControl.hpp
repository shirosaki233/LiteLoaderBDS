// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/GlideMoveControlAPI.hpp"
#undef EXTRA_INCLUDE_PART
class GlideMoveControl : public MoveControl {
#include "Extra/GlideMoveControlAPI.hpp"
public:
    virtual ~GlideMoveControl();
    virtual void initializeInternal(class Mob&, struct MoveControlDescription*);
    virtual void tick(class MoveControlComponent&, class Mob&);

public:
    MCAPI GlideMoveControl();
};