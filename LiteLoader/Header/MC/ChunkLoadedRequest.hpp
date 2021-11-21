// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ChunkLoadedRequestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ChunkLoadedRequest {
#include "Extra/ChunkLoadedRequestAPI.hpp"

public:
    MCAPI ChunkLoadedRequest(std::string const&, std::unique_ptr<class IRequestAction>);
    MCAPI ChunkLoadedRequest(struct Bounds const&, std::unique_ptr<class IRequestAction>, bool);
    MCAPI ChunkLoadedRequest(class ChunkLoadedRequest&&);
    MCAPI enum ChunksLoadedStatus areAllChunksLoaded(class Dimension&, __int64) const;
    MCAPI enum ChunksLoadedStatus areAllChunksLoadedOnChunkLoaded(class ChunkSource&, class LevelChunk&, __int64) const;
    MCAPI class CompoundTag serialize(enum ChunkRequestListType);
    MCAPI ~ChunkLoadedRequest();

    MCAPI static bool isValidTag(class CompoundTag const&);
    MCAPI static struct DeserializedChunkLoadedRequest load(std::string const&, class CompoundTag const&, class ICommandOriginLoader&, std::string const&);

private:
    MCAPI class ITickingAreaView const* _getTickingArea(class Dimension const&) const;
};