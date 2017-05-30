#ifndef QUEUETYPE_CPP
#define QUEUETYPE_CPP

#include "QueueType.h"

template<class ItemType>
QueueType<ItemType>::QueueType(int max)
{
     maxQue = max ;
     front = -1;
     rear = -1;
     items = new ItemType[maxQue];
     totalElements = 0;
}

template<class ItemType>
QueueType<ItemType>::~QueueType()
{
    delete [] items;
}

template<class ItemType>
void QueueType<ItemType>::MakeEmpty()
{
     front = -1;
     rear = -1;
     totalElements = 0;
}

template<class ItemType>
bool QueueType<ItemType>::IsEmpty() const
{
        return( totalElements == 0);
}

template<class ItemType>
bool QueueType<ItemType>::IsFull() const
{
      return( totalElements == maxQue);
}

template<class ItemType>
void QueueType<ItemType>::Enqueue (ItemType item)
{
     rear = (rear + 1) % maxQue;
     items[rear] = item;
     totalElements++;
}

template<class ItemType>
void QueueType<ItemType>::Dequeue (ItemType& item)
{
     front = (front + 1) % maxQue;
     item = items[front];
     totalElements--;
}
#endif




