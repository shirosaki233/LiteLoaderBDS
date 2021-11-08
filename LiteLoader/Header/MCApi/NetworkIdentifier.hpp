// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class NetworkIdentifier {

public:
    MCAPI std::string getAddress() const;
    MCAPI unsigned __int64 getHash() const;
    MCAPI bool isUnassigned() const;
    MCAPI bool operator==(class NetworkIdentifier const&);
    MCAPI std::string toString() const;

private:
    MCAPI bool equalsTypeData(class NetworkIdentifier const&) const;
};