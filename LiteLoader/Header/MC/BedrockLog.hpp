// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BedrockLogAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace BedrockLog {
#include "Extra/BedrockLogAPI.hpp"

MCAPI enum LogAreaID _areaFilterFromString(std::string const&);
MCAPI bool _constructAreaFilterFromString(std::string const&, class BedrockLog::LogAreaFilter&);
MCAPI std::string _constructAreaFilterStringFromFilter(class BedrockLog::LogAreaFilter const&);
MCAPI struct BedrockLog::LogDetails& _getLog(enum BedrockLog::LogCategory, enum BedrockLog::LogChannel);
MCAPI void _initAreaFilterMap();
MCAPI void _initPriorityFilterMap();
MCAPI void _openChannel(class Core::Path const&, std::string const&, std::string const&, enum BedrockLog::LogCategory, enum BedrockLog::LogChannel, bool, class LogSettingsUpdater*, double);
MCAPI std::string _processIdString();
MCAPI void closeAndResetAllLogs();
MCAPI void createLog(class Core::Path const&, std::string const&, std::string const&, enum BedrockLog::LogCategory, class std::bitset<3>, bool, class LogSettingsUpdater*, double);
MCAPI void flushAllLogs();
MCAPI void initialize();
MCAPI void initializeLogExtensions();
MCAPI void log(enum BedrockLog::LogCategory, class std::bitset<3>, enum BedrockLog::LogRule, enum LogAreaID, unsigned int, char const*, int, char const*, ...);
MCAPI void log_va(enum BedrockLog::LogCategory, class std::bitset<3>, enum BedrockLog::LogRule, enum LogAreaID, unsigned int, char const*, int, char const*, char*);
MCAPI int rakDebugLog(char const*, ...);
MCAPI void update();
MCAPI void updateLogSetting(std::string const&, bool);


} // namespace BedrockLog