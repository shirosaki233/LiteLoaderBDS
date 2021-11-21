// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NpcComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NpcComponent {
#include "Extra/NpcComponentAPI.hpp"
public:
    virtual ~NpcComponent();

public:
    MCAPI void addAdditionalSaveData(class Actor&, class CompoundTag&) const;
    MCAPI class NpcComponent& operator=(class NpcComponent&&);
    MCAPI NpcComponent();
    MCAPI NpcComponent(class NpcComponent&&);
    MCAPI void cleanUpBeforeLeavingScreen();
    MCAPI void clearSceneStateForAllPlayers();
    MCAPI void executeCommandAction(class Actor&, class Player const&, int, std::string const&);
    MCAPI struct NpcActionsContainer& getActionsContainer();
    MCAPI std::vector<int> getButtonCounts() const;
    MCAPI enum CommandPermissionLevel getCommandPermissionLevel() const;
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI std::string const& getInteractiveText(class Actor&) const;
    MCAPI class std::optional<int> getLeaveScreenRemainingTicks() const;
    MCAPI std::string const& getName(class Actor const&) const;
    MCAPI std::string const& getNameRawText(class Actor const&) const;
    MCAPI int getSkinIndex() const;
    MCAPI int getUrlCount() const;
    MCAPI void handleNpcRequest(class Actor&, class Player const&, class NpcRequestPacket const&);
    MCAPI void initClientOnlyData(class Actor&);
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void loadActions(class Actor&);
    MCAPI void loadInteractiveRawText(class Actor&);
    MCAPI void loadNPCData(class Actor&);
    MCAPI void loadNameRawText(class Actor&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI bool setDialogueScene(class Actor&, std::string const&);
    MCAPI void setInteractiveText(class Actor&, std::string const&, bool);
    MCAPI void setLeaveScreenRemainingTicks(class std::optional<int>);
    MCAPI void setName(class Actor&, std::string const&, bool);
    MCAPI void setSceneStateForPlayer(class Actor&, struct ActorUniqueID const&, std::string const&);
    MCAPI void setSkin(class Actor&);
    MCAPI void setSkinIndex(class Actor&, int, bool);

    MCAPI static unsigned __int64 const MAX_NPC_NAME_LENGTH;

private:
    MCAPI void _defineEntityDataString(class Actor&, enum ActorDataIDs);
    MCAPI void _deserializeData();
    MCAPI std::string _serializeActions() const;

    MCAPI static std::string const ACTIONS_TAG;
    MCAPI static std::string const INTERACTIVE_TAG;
    MCAPI static std::string const NAME_RAW_TEXT_TAG;
    MCAPI static std::string const PLAYER_ID_TAG;
    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG;
    MCAPI static std::string const SCENE_NAME_TAG;
    MCAPI static std::string const URL_TAG;
};