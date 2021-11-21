// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ActorIsLeashedTestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorIsLeashedTest : public FilterTest {
#include "Extra/ActorIsLeashedTestAPI.hpp"
public:
    virtual ~ActorIsLeashedTest();
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
};