// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BookCloningRecipeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BookCloningRecipe : public Recipe {
#include "Extra/BookCloningRecipeAPI.hpp"
public:
    virtual ~BookCloningRecipe();
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&);
    virtual int getCraftingSize();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual bool matches(class CraftingContainer&, class Level&);
    virtual int size();
    virtual class mce::UUID const& getId();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_15();

public:
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const&);

    MCAPI static class mce::UUID const ID;
};