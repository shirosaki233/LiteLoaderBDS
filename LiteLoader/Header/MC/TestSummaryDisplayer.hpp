// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TestSummaryDisplayerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TestSummaryDisplayer {
#include "Extra/TestSummaryDisplayerAPI.hpp"
public:
    virtual ~TestSummaryDisplayer();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();


private:
    MCAPI void _say(std::string const&, std::string const&) const;
    MCAPI void _showTestSummaryIfAllDone() const;
};