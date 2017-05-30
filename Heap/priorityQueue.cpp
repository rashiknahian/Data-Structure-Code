
#ifndef PRIORITYQUEUE_CPP
#define PRIORITYQUEUE_CPP

#include"priorityQueue.h"
template<class ItemType>
PQType<ItemType>::PQType(int max)
{
    maxItems = max;
    heap.elements = new ItemType[max];
    numItems = 0;
}
template<class ItemType>
PQType<ItemType>::~PQType()
{
    delete []heap.elements;
}
template<class ItemType>
bool PQType<ItemType>::isFull()const
{
    return (numItems==maxItems);
}
template<class ItemType>
bool PQType<ItemType>::isEmpty()const
{
    return (numItems==0);
}
template<class ItemType>
void PQType<ItemType>::MakeEmpty()
{
 numItems = 0;
}

template<class ItemType>
void PQType<ItemType>::Dequeue(ItemType &item)
{
    item = heap.elements[0];
    heap.elements[0] = heap.elements[numItems-1];
    numItems--;
    heap.ReheapDown(0,numItems-1);
}
template<class ItemType>
void PQType<ItemType>::Enqueue(ItemType newItem)
{
    numItems++;
    heap.elements[numItems-1] = newItem;
    heap.ReheapUp(0,numItems-1);
}
#endif
