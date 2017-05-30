#ifndef STACKTYPELL_CPP
#define STACKTYPELL_CPP

#include"StackTypeLL.h"

template<class ItemType>
StackTypeLL<ItemType>::StackTypeLL()
{
    topPtr = NULL;
}

template<class ItemType>
StackTypeLL<ItemType>::~StackTypeLL()
{
    NodeType<ItemType>* tempPtr;
    while(topPtr!=NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template<class ItemType>
bool StackTypeLL<ItemType>::IsEmpty()const
{
    return (topPtr == NULL);
}

template<class ItemType>
bool StackTypeLL<ItemType>::IsFull()const
{
    NodeType<ItemType>* location;
    try{
        location = new NodeType<ItemType>;
        delete location;
        return false;
    }
    catch(bad_alloc e)
    {
        return true;
    }
}

template<class ItemType>
void StackTypeLL<ItemType>::Push(ItemType item)
{
    if(IsFull())
    {
        cout<<"Stack is full\n";
    }

    NodeType<ItemType>* location;
    location = new NodeType<ItemType>;

    location->info = item;
    location->next = topPtr;
    topPtr = location;

}
template<class ItemType>
void StackTypeLL<ItemType>::Pop(ItemType &item)
{
    if(IsEmpty() )
    {
        cout<<"Stack is empty\n";
    }
    else
    {
    NodeType<ItemType>* tempPtr;
    tempPtr = topPtr;
    item = topPtr->info;
    topPtr = topPtr->next;
    delete tempPtr;
    }

}

template<class ItemType>
void StackTypeLL<ItemType>::PrintStack()const
{
    NodeType<ItemType> *tempPtr = topPtr;
    while(tempPtr)
    {
        cout<<tempPtr->info<<",";
        tempPtr = tempPtr->next;
    }
    cout<<endl;

}
#endif

