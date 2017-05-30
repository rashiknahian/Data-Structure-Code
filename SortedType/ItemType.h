#ifndef _ITEMTYPE_H
#define _ITEMTYPE_H

#include<iostream>

using namespace std;

const int MAX_ITEMS = 5;
enum RelationType {LESS,GREATER,EQUAL};

class ItemType
{
    public :
        ItemType();
        RelationType ComparedTo(ItemType) const;
        void Print() const;
        void Initialize(int number);
    private :
        int value;
};
#endif

