// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CraftingDataEntryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CraftingDataEntry {
#include "Extra/CraftingDataEntryAPI.hpp"

public:
    MCAPI void fillFromMultiRecipe(class MultiRecipe const&);
    MCAPI void fillFromRecipe(class Recipe const&);
    MCAPI void write(class BinaryStream&) const;
    MCAPI ~CraftingDataEntry();
};