// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/KeyFrameTransformAPI.hpp"
#undef EXTRA_INCLUDE_PART
class KeyFrameTransform {
#include "Extra/KeyFrameTransformAPI.hpp"

public:
    MCAPI KeyFrameTransform(class KeyFrameTransform const&);
    MCAPI class KeyFrameTransform& operator=(class KeyFrameTransform&&);
    MCAPI KeyFrameTransform(float);
    MCAPI class KeyFrameLerpMode& getLerpMode();
    MCAPI bool optimizeAndGetDataValues(class Vec3&, class Vec3&);
    MCAPI void set(class ExpressionNode const&);
    MCAPI void set(class ExpressionNode const&, class Vec3 const&);
    MCAPI void set(class ExpressionNode const&, int);
    MCAPI void setPost(class ExpressionNode const&, int);
    MCAPI void setPre(class ExpressionNode const&, int);
    MCAPI ~KeyFrameTransform();

    MCAPI static void computeCubicPolynomial(class KeyFrameTransform*, class KeyFrameTransform&, class KeyFrameTransform&, class KeyFrameTransform*);
};