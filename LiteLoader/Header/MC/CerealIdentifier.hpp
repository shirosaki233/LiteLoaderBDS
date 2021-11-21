// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CerealIdentifierAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CerealIdentifier {
#include "Extra/CerealIdentifierAPI.hpp"

public:
    MCAPI char const* c_str() const;
    MCAPI bool operator==(std::string const&);
    MCAPI CerealIdentifier(bool);
    MCAPI ~CerealIdentifier();

    MCAPI static void bindType();

private:
    MCAPI bool _validateIdentifier(std::string const&, std::string&);
    MCAPI bool cerealize(class BasicSaver&, struct SerializerTraits const&) const;
    MCAPI bool decerealize(class BasicLoader&, struct SerializerTraits const&, class BedrockLoadContext const&);
};