// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AnimatePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AnimatePacket : public Packet {
#include "Extra/AnimatePacketAPI.hpp"
public:
    virtual ~AnimatePacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI AnimatePacket();
    MCAPI AnimatePacket(enum AnimatePacket::Action, class ActorRuntimeID, float);
    MCAPI AnimatePacket(enum AnimatePacket::Action, class ActorRuntimeID);
    MCAPI AnimatePacket(enum AnimatePacket::Action, class Actor&);
};