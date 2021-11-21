// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/UserEntityIdentifierComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UserEntityIdentifierComponent {
#include "Extra/UserEntityIdentifierComponentAPI.hpp"

public:
    MCAPI class UserEntityIdentifierComponent& operator=(class UserEntityIdentifierComponent&&);
    MCAPI UserEntityIdentifierComponent(class NetworkIdentifier const&, unsigned char, class mce::UUID, std::unique_ptr<class Certificate>);

    MCAPI static class UserEntityIdentifierComponent* tryGetFromEntity(class EntityContext&);
};