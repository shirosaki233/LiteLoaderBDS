// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/WorldTemplateLevelDataAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WorldTemplateLevelData {
#include "Extra/WorldTemplateLevelDataAPI.hpp"

public:
    MCAPI WorldTemplateLevelData();
    MCAPI ~WorldTemplateLevelData();


protected:
    MCAPI void _getTagData(class CompoundTag const&);
    MCAPI void _setTagData(class CompoundTag&) const;
};