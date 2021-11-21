// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SparseContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SparseContainer {
#include "Extra/SparseContainerAPI.hpp"

public:
    MCAPI void _clearCreatedItem(int);
    MCAPI bool _isSlotInRange(int) const;
    MCAPI void addAvailableSetCountCallback(enum ContainerEnumName, class std::function<int(int, class ItemStackBase const&)>);
    MCAPI void addItemAllowedInContainerCallback(enum ContainerEnumName, class std::function<bool(class ItemStackBase const&)>);
    MCAPI void addItemAllowedInSlotCallback(enum ContainerEnumName, class std::function<bool(int, class ItemStackBase const&, int)>);
    MCAPI void addItemAllowedToAddCallback(enum ContainerEnumName, class std::function<bool(class ItemStackBase const&)>);
    MCAPI void addItemAllowedToRemoveCallback(enum ContainerEnumName, class std::function<bool(class ItemStackBase const&)>);
    MCAPI void addItemNetworkChangedCallback(enum ContainerEnumName, class std::function<void(int, class ItemStack const&, class ItemStack const&)>);
    MCAPI void addValidSlotForContainerCallback(enum ContainerEnumName, class std::function<bool(int)>);
    MCAPI bool canDestroy(enum ContainerEnumName, int, int) const;
    MCAPI bool canDrop(enum ContainerEnumName, int, int) const;
    MCAPI bool canRemove(enum ContainerEnumName, int, int) const;
    MCAPI enum ItemSetType canSet(enum ContainerEnumName, int, class ItemStackBase const&, int) const;
    MCAPI bool isClientSide() const;
    MCAPI bool isUsingLegacyScreenTransactions() const;
    MCAPI bool isValidSlot(enum ContainerEnumName, int) const;
    MCAPI void pushAllToBackingContainer();
    MCAPI void removeItemNetworkChangedCallback(enum ContainerEnumName);


private:
    MCAPI int _getAvailableAddCount(enum ContainerEnumName, class ItemStack const&) const;
    MCAPI bool _isItemAllowedInSlot(enum ContainerEnumName, int, class ItemStackBase const&, int) const;


protected:
    MCAPI void _onItemNetworkChanged(int, class ItemStack const&, class ItemStack const&);
    MCAPI void _setBackingContainerSlot(int, class ItemStack const&);
};