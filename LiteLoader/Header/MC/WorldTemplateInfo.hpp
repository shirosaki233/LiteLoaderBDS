// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/WorldTemplateInfoAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WorldTemplateInfo {
#include "Extra/WorldTemplateInfoAPI.hpp"

public:
    MCAPI WorldTemplateInfo(class WorldTemplatePackManifest const&);
    MCAPI void addWorldTemplatePackSource(class WorldTemplatePackSource&);
    MCAPI class WorldTemplatePackManifest const& getPackManifest() const;
    MCAPI std::string const& getWorldName() const;
    MCAPI class Core::PathBuffer<std::string> const& getWorldPath() const;
    MCAPI bool isVirtualCatalogItem() const;
    MCAPI ~WorldTemplateInfo();
};