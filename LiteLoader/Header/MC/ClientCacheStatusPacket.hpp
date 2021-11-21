// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ClientCacheStatusPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ClientCacheStatusPacket : public Packet {
#include "Extra/ClientCacheStatusPacketAPI.hpp"
public:
    virtual ~ClientCacheStatusPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI ClientCacheStatusPacket();
};