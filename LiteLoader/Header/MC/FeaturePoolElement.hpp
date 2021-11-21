// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FeaturePoolElementAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FeaturePoolElement : public StructurePoolElement {
#include "Extra/FeaturePoolElementAPI.hpp"
public:
    virtual class BlockPos getSize(int /*enum Rotation*/);
    virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, class LegacyStructureSettings&, class BlockSource*);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual bool place(class BlockSource&, class BlockPos, int /*enum Rotation*/, class BoundingBox, class Random&, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier>>>>&, class BlockPos);
    virtual void unk_vfn_11();
    virtual ~FeaturePoolElement();

public:
    MCAPI FeaturePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class WeakRefT<struct FeatureRefTraits>);
};