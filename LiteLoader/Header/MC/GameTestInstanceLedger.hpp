// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/GameTestInstanceLedgerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class GameTestInstanceLedger {
#include "Extra/GameTestInstanceLedgerAPI.hpp"
public:
    virtual ~GameTestInstanceLedger();
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();

public:
    MCAPI void clear(class AutomaticID<class Dimension, int>);


private:
    MCAPI static std::string const GAME_TEST_INSTANCE_PREFIX;
};