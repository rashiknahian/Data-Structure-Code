#include "stack.h"
#include<iostream>
using namespace std;

template<class ItemType>
Stack<ItemType>::Stack()
{
    head=NULL;

}

template<class ItemType>
Stack<ItemType>::~Stack()
{
    makeEmpty();
}

template<class ItemType>
bool Stack<ItemType>::isEmpty()
{
    return(head==NULL);
}

template<class ItemType>
void Stack<ItemType>::makeEmpty()
{
    while(!isEmpty())
        pop();
}

template<class ItemType>
void Stack<ItemType>::push(ItemType item)
{
    if(head==NULL)
    {
        StackNode<ItemType> *t=new StackNode<ItemType>;
        t->element =item;
        t->next=NULL;
        head=t;
        return;
    }
    StackNode<ItemType> *t=new StackNode<ItemType>;
    t->element=item;
    t->next=head;
    head=t;
    return;
}

template<class ItemType>
void Stack<ItemType>::pop()
{
    if(isEmpty())
        cout<<"Stack is Empty"<<endl;
    else
    {
        StackNode<ItemType> *t=head;
        head=head->next;
        delete t;
        return;
    }
}

template<class ItemType>
ItemType Stack<ItemType>::top()
{
    return head->element;
}

template<class ItemType>
ItemType Stack<ItemType>::topPop()
{
    ItemType it=head->element;
    pop();
    return it;
}

template<class ItemType>
void Stack<ItemType>::printStack()
{
    StackNode<ItemType> *t=head;
    while(t!=NULL)
    {
        cout<<t->element<<" ";
        t=t->next;

    }
    cout<<endl;
}
