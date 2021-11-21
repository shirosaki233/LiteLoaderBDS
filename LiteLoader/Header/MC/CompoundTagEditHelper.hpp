// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CompoundTagEditHelperAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CompoundTagEditHelper {
#include "Extra/CompoundTagEditHelperAPI.hpp"

public:
    MCAPI class CompoundTag const* getParent() const;
    MCAPI void replaceWith(std::string const&, std::unique_ptr<class Tag>);
    MCAPI ~CompoundTagEditHelper();


private:
    MCAPI void pushChild(std::string const&);
};