// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FilterTestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FilterTest {
#include "Extra/FilterTestAPI.hpp"
public:
    virtual ~FilterTest();
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    virtual bool evaluate(struct FilterContext const&);
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    virtual class gsl::basic_string_span<char const, -1> getName();
    virtual class Json::Value _serializeDomain();
    virtual class Json::Value _serializeValue();

public:
    MCAPI class Json::Value serialize() const;


protected:
    MCAPI bool _testValuesWithOperator(int, int) const;
    MCAPI bool _testValuesWithOperator(float, float) const;
    MCAPI bool _testValuesWithOperator(bool, bool) const;
};