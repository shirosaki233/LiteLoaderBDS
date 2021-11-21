// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MovePlayerPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MovePlayerPacket : public Packet {
#include "Extra/MovePlayerPacketAPI.hpp"
public:
    virtual ~MovePlayerPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI MovePlayerPacket();
    MCAPI MovePlayerPacket(class Player&, enum Player::PositionMode, int, int);
    MCAPI MovePlayerPacket(class Player&, class Vec3 const&);
};