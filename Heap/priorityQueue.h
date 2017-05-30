#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include"heap.h"
template<class ItemType>
class PQType{
    public:
          PQType(int);
          ~PQType();
          void MakeEmpty();
          bool isEmpty()const;
          bool isFull()const;
          void Enqueue(ItemType);
          void Dequeue(ItemType&);
    private:
          int numItems,maxItems;
          HeapType<ItemType> heap;
};
#endif
#include"priorityQueue.cpp"

