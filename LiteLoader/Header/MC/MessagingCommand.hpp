// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MessagingCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MessagingCommand {
#include "Extra/MessagingCommandAPI.hpp"
public:
    virtual ~MessagingCommand();
    virtual void unk_vfn_1();


protected:
    MCAPI MessagingCommand(bool, bool);
    MCAPI bool checkChatPermissions(class CommandOrigin const&, class CommandOutput&) const;
};