// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EquippableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EquippableDefinition {
#include "Extra/EquippableDefinitionAPI.hpp"

public:
    MCAPI void deserializeData(class Json::Value&, class SemVersion const&);
    MCAPI void initialize(class EntityContext&, class EquippableComponent&);
    MCAPI void serializeData(class Json::Value&) const;
    MCAPI ~EquippableDefinition();

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquippableDefinition>>&);
};