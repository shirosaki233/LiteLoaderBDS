// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptMovementFlyComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptMovementFlyComponent : public MovementScriptActorComponent {
#include "Extra/ScriptMovementFlyComponentAPI.hpp"
public:
    virtual ~ScriptMovementFlyComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptMovementFlyComponent> bind(struct Scripting::Version);
};