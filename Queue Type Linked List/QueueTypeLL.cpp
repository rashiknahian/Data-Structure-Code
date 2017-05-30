#ifndef QUEUETYPELL_CPP
#define QUEUETYPELL_CPP
#include "QueueTypeLL.h"

template <class ItemType>
QueType<ItemType>::QueType()
{
  front = NULL;
  rear = NULL;
}
template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
  NodeType<ItemType>* tempPtr;

  while (front != NULL)
  {
    tempPtr = front;
    front = front->next;
    delete tempPtr;
  }
  rear = NULL;
}
template <class ItemType>
QueType<ItemType>::~QueType()
{
  MakeEmpty();
}

template<class ItemType>
bool QueType<ItemType>::IsFull() const
{
  NodeType<ItemType>* location;
  try
  {
    location = new NodeType<ItemType>;
    delete location;
    return false;
  }
  catch(std::bad_alloc e)
  {
    return true;
  }
}

template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
  if (IsFull())
    cout << "Queue is Full!" << endl;
  else
  {
    NodeType<ItemType>* newNode;

    newNode = new NodeType<ItemType>;
    newNode->info = newItem;
    newNode->next = NULL;
    if (rear == NULL)
      front = newNode;
    else
      rear->next = newNode;
    rear = newNode;
  }
}

template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
  if (IsEmpty())
    cout << "Queue is Empty!" << endl;
  else
  {
    NodeType<ItemType>* tempPtr;

    tempPtr = front;
    item = front->info;
    front = front->next;
    if (front == NULL)
      rear = NULL;
    delete tempPtr;
  }
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty() const
{
  return (front == NULL);
}
#endif
