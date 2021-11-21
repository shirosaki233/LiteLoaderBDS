// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TagAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Tag {
#include "Extra/TagAPI.hpp"
public:
    virtual ~Tag();
    virtual void deleteChildren();
    virtual void write(class IDataOutput&);
    virtual void load(class IDataInput&);
    virtual std::string toString();
    virtual void unk_vfn_5();
    virtual bool equals(class Tag const&);
    virtual void print(std::string const&, class PrintStream&);
    virtual void print(class PrintStream&);
    virtual std::unique_ptr<class Tag> copy();
    virtual unsigned __int64 hash();

public:
    MCAPI static std::string const NullString;
    MCAPI static std::string getTagName(enum Tag::Type);
    MCAPI static std::unique_ptr<class Tag> newTag(enum Tag::Type);
    MCAPI static std::unique_ptr<class Tag> readNamedTag(class IDataInput&, std::string&);
    MCAPI static void writeNamedTag(std::string const&, class Tag const&, class IDataOutput&);


protected:
    MCAPI Tag();
};