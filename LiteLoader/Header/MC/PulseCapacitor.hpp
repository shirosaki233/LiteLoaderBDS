// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PulseCapacitorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PulseCapacitor : public ProducerComponent {
#include "Extra/PulseCapacitorAPI.hpp"
public:
    virtual ~PulseCapacitor();
    virtual int getStrength();
    virtual void unk_vfn_2();
    virtual void setStrength(int);
    virtual void unk_vfn_4();
    virtual bool canConsumePowerAnyDirection();
    virtual void unk_vfn_7();
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
    virtual void unk_vfn_24();
    virtual void unk_vfn_25();
    virtual void unk_vfn_26();
    virtual void unk_vfn_27();
    virtual void unk_vfn_28();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual void unk_vfn_34();
    virtual void unk_vfn_35();
    virtual void unk_vfn_36();
    virtual void unk_vfn_37();
    virtual void unk_vfn_38();
    virtual void unk_vfn_39();
    virtual void unk_vfn_40();

public:
    MCAPI PulseCapacitor();
};