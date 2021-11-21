// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SpawnDataAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SpawnData {
#include "Extra/SpawnDataAPI.hpp"
public:
    virtual ~SpawnData();

public:
    MCAPI SpawnData(class CompoundTag const&);
    MCAPI SpawnData(class SpawnData const&);
    MCAPI std::unique_ptr<class CompoundTag> save();
};