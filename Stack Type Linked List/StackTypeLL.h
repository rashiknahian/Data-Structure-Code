#ifndef STACKTYPELL_H
#define STACKTYPELL_H
#include<iostream>
#include<cstddef>
using namespace std;

template<class ItemType>
struct NodeType{
    ItemType info;
    NodeType *next;
};
template<class ItemType>
class StackTypeLL
{
    public:
        StackTypeLL();
        ~StackTypeLL();
        void Push(ItemType) ;
        void Pop(ItemType &);
        bool IsEmpty() const;
        bool IsFull() const;
        void PrintStack() const;
    private:
        NodeType<ItemType>* topPtr;
};
#endif
#include"StackTypeLL.cpp"


