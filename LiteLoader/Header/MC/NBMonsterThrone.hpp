// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NBMonsterThroneAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NBMonsterThrone : public NetherFortressPiece {
#include "Extra/NBMonsterThroneAPI.hpp"
public:
    virtual ~NBMonsterThrone();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void unk_vfn_4();
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void unk_vfn_6();
    virtual void unk_vfn_10();
};