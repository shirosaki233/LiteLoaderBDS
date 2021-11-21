// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptItemStackAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptItemStack {
#include "Extra/ScriptItemStackAPI.hpp"

public:
    MCAPI int getAmount();
    MCAPI class ScriptItemStack& operator=(class ScriptItemStack&&);
    MCAPI ScriptItemStack(class ScriptItemType const&, int, int);
    MCAPI ScriptItemStack(class ScriptItemStack&&);
    MCAPI int getData();
    MCAPI std::string getId();
    MCAPI class ItemStack const& getItemStack() const;
    MCAPI ~ScriptItemStack();

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptItemStack> createHandle(class Scripting::WeakLifetimeScope, class ItemStack const&);
};