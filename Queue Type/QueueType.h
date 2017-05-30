#include<iostream>

#ifndef QUEUETYPE_H
#define QUEUETYPE_H

using namespace std;

template<class ItemType>
class QueueType {
 public:
    QueueType(int);
	~QueueType();
    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    void Enqueue(ItemType);
    void Dequeue(ItemType&);

    private:
    int front, rear;
    ItemType* items;
    int maxQue;
    int totalElements;
};
#endif
#include "QueueType.cpp"
