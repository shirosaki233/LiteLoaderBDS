// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/OceanRuinFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class OceanRuinFeature : public StructureFeature {
#include "Extra/OceanRuinFeatureAPI.hpp"
public:
    virtual ~OceanRuinFeature();
    virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, bool);
    virtual bool isFeatureChunk(class Dimension const&, class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int);
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

public:
    MCAPI OceanRuinFeature(class OverworldGenerator&, class OceanMonumentFeature&, unsigned int);
};