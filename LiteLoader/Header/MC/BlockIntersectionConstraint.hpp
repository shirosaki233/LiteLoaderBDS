// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BlockIntersectionConstraintAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BlockIntersectionConstraint {
#include "Extra/BlockIntersectionConstraintAPI.hpp"
public:
    virtual ~BlockIntersectionConstraint();
    virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, int /*enum Rotation*/ const&);

public:
    MCAPI BlockIntersectionConstraint(class StructureTemplate&);
};