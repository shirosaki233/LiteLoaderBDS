// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MonumentBuildingAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MonumentBuilding : public OceanMonumentPiece {
#include "Extra/MonumentBuildingAPI.hpp"
public:
    virtual ~MonumentBuilding();
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);

public:
    MCAPI MonumentBuilding(class Random&, short, int, int, int&);


private:
    MCAPI void generateEntranceArchs(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateEntranceWall(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateLowerWall(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateMiddleWall(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateRoofPiece(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI std::vector<class std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random&);
    MCAPI void generateUpperWall(class BlockSource&, class Random&, class BoundingBox const&);
    MCAPI void generateWing(bool, int, class BlockSource&, class Random&, class BoundingBox const&);
};