#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX_ITEMS 5
#include "itemtype.h"

class FullStack
// Exception class used by Push when stack is full.
{};

class EmptyStack
// Exception class used by Pop and Top when stack is empty.
{};


class Stack
{
public:
   Stack();
   bool IsEmpty() const;
   bool IsFull()const;
   void Push(ItemType);
   void Pop();
   ItemType Top();
   ItemType topPop();
   void printStack();
   int sumOdd();

private:
   int top;
   ItemType items[MAX_ITEMS];
};

#endif // STACK_H_INCLUDED
