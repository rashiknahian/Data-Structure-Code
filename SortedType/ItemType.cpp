#ifndef _ITEMTYPE_CPP
#define _ITEMTYPE_CPP

#include"ItemType.h"

ItemType :: ItemType()
{
    value = 0;
}
RelationType ItemType :: ComparedTo(ItemType otheritem) const
{
    if(value<otheritem.value)
        return LESS;
    else if(value>otheritem.value)
        return GREATER;
    else
        return EQUAL;
}
void ItemType :: Initialize(int number)
{
    value = number;
}
void ItemType :: Print() const
{
    cout << value << " ";
}
#endif

