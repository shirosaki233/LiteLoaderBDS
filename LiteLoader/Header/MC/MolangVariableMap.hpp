// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MolangVariableMapAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MolangVariableMap {
#include "Extra/MolangVariableMapAPI.hpp"

public:
    MCAPI class MolangVariableMap& clear();
    MCAPI struct MolangScriptArg const& getMolangVariable(unsigned __int64, char const*) const;
    MCAPI void setMolangStructMember(unsigned __int64, char const*, unsigned __int64, char const*, struct MolangScriptArg const&);
    MCAPI void setMolangVariable(class HashedString const&, struct MolangScriptArg const&);
    MCAPI void setMolangVariable(enum MolangVariableIndex, struct MolangScriptArg const&);
    MCAPI void setMolangVariable(unsigned __int64, char const*, struct MolangScriptArg const&);
    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const&);
    MCAPI ~MolangVariableMap();


private:
    MCAPI class MolangVariable const* _getMolangVariable(enum MolangVariableIndex) const;
    MCAPI class MolangVariable* _getOrAddMolangVariable(unsigned __int64 const&, char const*, bool);
    MCAPI class MolangVariable* _getOrAddMolangVariable(enum MolangVariableIndex);
};