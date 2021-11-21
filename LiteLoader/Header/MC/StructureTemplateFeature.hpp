// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/StructureTemplateFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class StructureTemplateFeature {
#include "Extra/StructureTemplateFeatureAPI.hpp"
public:
    virtual ~StructureTemplateFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI StructureTemplateFeature();
};