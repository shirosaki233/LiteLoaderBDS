// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SaveSurroundingChunksSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SaveSurroundingChunksSystem : public ITickingSystem {
#include "Extra/SaveSurroundingChunksSystemAPI.hpp"
public:
    virtual ~SaveSurroundingChunksSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};