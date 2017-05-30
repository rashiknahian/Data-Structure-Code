#ifndef QUEUETYPELL_H
#define QUEUETYPELL_H

#include <iostream>
#include<cstddef>
using namespace std;
template<class ItemType>
struct NodeType{
    ItemType info;
    NodeType *next;
};
template<class ItemType>
class QueType
{
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty() const;
    bool IsFull() const;
private:
    NodeType<ItemType>* front;
    NodeType<ItemType>* rear;
};

#endif
#include "QueueTypeLL.cpp"

