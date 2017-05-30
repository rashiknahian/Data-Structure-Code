#include "stack.h"
#include<iostream>
using namespace std;

Stack::Stack()
{
  top = -1;
}

bool Stack::IsEmpty() const
{
  return (top == -1);
}

bool Stack::IsFull() const
{
  return (top == MAX_ITEMS-1);
}
ItemType Stack::Top()
{
  if (IsEmpty())
    throw EmptyStack();
  return items[top];
}

void Stack::Push(ItemType newItem)
{
  if (IsFull())
    throw FullStack();
  top++;
  items[top] = newItem;
}

void Stack::Pop()
{
  if(IsEmpty())
    throw EmptyStack();
  top-- ;
}

ItemType Stack::topPop()
{
    ItemType it = Top();
    Pop();
    return it;
}

void Stack::printStack()
{
    ItemType it;
    while(!IsEmpty())
    {
        it = Top();
        it.Print();
        top--;
    }
    cout<<endl;
}

int Stack::sumOdd()
{
    int sum=0;
    int i;
    for(i=0;i<MAX_ITEMS;i++)
    {
        if(((items[i].value)%2) !=0 )
        {
            sum += items[i].value;
        }

    }return sum;
}
