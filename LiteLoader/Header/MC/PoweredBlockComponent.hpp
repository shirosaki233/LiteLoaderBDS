// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PoweredBlockComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PoweredBlockComponent : public BaseCircuitComponent {
#include "Extra/PoweredBlockComponentAPI.hpp"
public:
    virtual ~PoweredBlockComponent();
    virtual int getStrength();
    virtual void unk_vfn_2();
    virtual void setStrength(int);
    virtual void unk_vfn_4();
    virtual void unk_vfn_7();
    virtual bool canStopPower();
    virtual void setStopPower(bool);
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_20();
    virtual void unk_vfn_21();
    virtual int /*enum CircuitComponentType*/ getCircuitComponentType();

public:
    MCAPI PoweredBlockComponent(unsigned char);
};