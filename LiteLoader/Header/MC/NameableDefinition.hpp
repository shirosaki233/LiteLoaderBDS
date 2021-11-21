// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NameableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NameableDefinition {
#include "Extra/NameableDefinitionAPI.hpp"

public:
    MCAPI NameableDefinition();
    MCAPI void addNameAction(struct NameAction const&);
    MCAPI void deserializeData(class Json::Value&, class SemVersion const&);
    MCAPI void initialize(class EntityContext&, class NameableComponent&) const;
    MCAPI void serializeData(class Json::Value&) const;
    MCAPI ~NameableDefinition();

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NameableDefinition>>&);

private:
    MCAPI void parseNameActions(class Json::Value&, class SemVersion const&);
};