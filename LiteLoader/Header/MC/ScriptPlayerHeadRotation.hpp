// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptPlayerHeadRotationAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptPlayerHeadRotation {
#include "Extra/ScriptPlayerHeadRotationAPI.hpp"

public:
    MCAPI ScriptPlayerHeadRotation(float, float);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptPlayerHeadRotation> bind(struct Scripting::Version);
};