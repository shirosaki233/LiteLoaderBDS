// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/IglooAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Igloo : public StructurePiece {
#include "Extra/IglooAPI.hpp"
public:
    virtual ~Igloo();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    virtual int getWorldZ(int, int);

public:
    MCAPI Igloo(short, int, int);


private:
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_TRAPDOOR;
    MCAPI static std::string const STRUCTURE_LOCATION_LABORATORY;
    MCAPI static std::string const STRUCTURE_LOCATION_LADDER;
};