// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BiomeSourceUtilAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace BiomeSourceUtil {
#include "Extra/BiomeSourceUtilAPI.hpp"

MCAPI class std::optional<class BlockPos> locateBiome(class std::function<bool(class Biome const&)> const&, class BiomeSource const&, class BlockPos const&, class BlockPos const&, unsigned int);
MCAPI class std::optional<class BlockPos> locateBiome(class std::function<bool(class Biome const&)> const&, class BiomeSource const&, class BlockPos const&, class BoundingBox, unsigned int);


} // namespace BiomeSourceUtil