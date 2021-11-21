// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ChunkSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ChunkSource {
#include "Extra/ChunkSourceAPI.hpp"
public:
    virtual ~ChunkSource();
    virtual void shutdown();
    virtual bool isShutdownDone();
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    virtual bool isChunkKnown(class ChunkPos const&);
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const&, int /*enum ChunkSource::LoadMode*/, bool);
    virtual class std::shared_ptr<class LevelChunk> getOrLoadChunk(class ChunkPos const&, int /*enum ChunkSource::LoadMode*/, bool);
    virtual bool postProcess(class ChunkViewSource&);
    virtual void checkAndReplaceChunk(class ChunkViewSource&, class LevelChunk&);
    virtual void loadChunk(class LevelChunk&, bool);
    virtual void postProcessMobsAt(class BlockSource&, int, int, class Random&);
    virtual bool saveLiveChunk(class LevelChunk&);
    virtual void hintDiscardBatchBegin();
    virtual void hintDiscardBatchEnd();
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    virtual void compact();
    virtual void flushPendingWrites();
    virtual bool isWithinWorldLimit(class ChunkPos const&);
    virtual void unk_vfn_19();
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const& getStorage();
    virtual void clearDeletedEntities();
    virtual void unk_vfn_22();
    virtual class LevelChunkBlendingAttenuator getHeightAttenuatorForLevelChunk(class ChunkPos const&, class BiomeRegistry const&);

public:
    MCAPI ChunkSource(std::unique_ptr<class ChunkSource>);
    MCAPI ChunkSource(class Dimension*, int);
    MCAPI void checkAndLaunchChunkGenerationTasks(bool);
    MCAPI class GridArea<class std::shared_ptr<class LevelChunk>> createEmptyView(enum ChunkSource::LoadMode, bool, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>);
    MCAPI class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const&);
    MCAPI class std::shared_ptr<class LevelChunk> getAvailableChunkAt(class BlockPos const&);
    MCAPI int getChunkSide() const;
    MCAPI class Dimension& getDimension() const;
    MCAPI class std::shared_ptr<class LevelChunk> getGeneratedChunk(class ChunkPos const&);
    MCAPI class Level& getLevel() const;


protected:
    MCAPI bool _checkAndDispatchTaskForLevelChunk(struct std::pair<class ChunkPos, enum ChunkState> const&, bool);
    MCAPI void _checkForReplacementDataTask(class LevelChunk&, class ChunkViewSource&);
    MCAPI void _checkForUnblockingChunks(class LevelChunk const&);
    MCAPI void _checkLevelChunkForNextStage(class LevelChunk const&, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>>&, enum ChunkState);
    MCAPI void _checkLevelChunkForPostProcessing(class LevelChunk const&, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>>&);
    MCAPI bool _chunkAtStage(class std::weak_ptr<class LevelChunk>, enum ChunkState);
    MCAPI void _freeChunkGenerationGridMap(class ChunkPos const&);
    MCAPI void _launchGenerationTask(class std::shared_ptr<class LevelChunk> const&, bool);
    MCAPI void _launchLightingTask(class std::shared_ptr<class LevelChunk> const&, class std::shared_ptr<class ChunkViewSource> const&, bool);
    MCAPI void _launchPostProcessingTask(class std::shared_ptr<class LevelChunk> const&, class std::shared_ptr<class ChunkViewSource> const&, bool);
    MCAPI void _launchReplacementDataTask(class std::shared_ptr<class LevelChunk> const&, class std::shared_ptr<class ChunkViewSource> const&, bool);
    MCAPI void _lightingTask(class std::shared_ptr<class LevelChunk> const&, class ChunkViewSource&);
    MCAPI void _loadChunkTask(class LevelChunk&);
    MCAPI void _postProcessingTask(class LevelChunk&, class ChunkViewSource&);
    MCAPI void _spawnChunkGenerationTasks(int, bool);
};