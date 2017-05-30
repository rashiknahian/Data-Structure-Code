#include "queue.h"
#include<iostream>
using namespace std;

template<class itemType>
Queue<itemType>::Queue()
{
    head = NULL;
    tail = NULL;
}

template<class itemType>
Queue<itemType>::~Queue()
{
    makeEmpty();

}

template<class itemType>
bool Queue<itemType>::isEmpty()
{
    return(head==NULL);
}

template<class itemType>
void Queue<itemType>::makeEmpty()
{
    while(!isEmpty())
        Dequeue();
}

template<class itemType>
void Queue<itemType>::Enqueue(itemType item)
{
    if(head==NULL)
    {
        QueueNode<itemType> *t=new QueueNode<itemType>;
        t->element =item;
        t->next=NULL;
        head=t;
        tail=t;
        return;
    }
    QueueNode<itemType> *t=new QueueNode<itemType>;
    t->element=item;
    t->next=NULL;
    tail->next=t;
    tail=t;
    return;
}

template<class itemType>
void Queue<itemType>::Dequeue()
{
    if(!isEmpty())
    {
        QueueNode<itemType> *t=head;
        head=head->next;
        delete t;
        return;
    }
    else    cout<<"Queue Underflow"<<endl;
}

template<class itemType>
void Queue<itemType>::printQueue()
{
    QueueNode<itemType> *t=head;
    while(t!=NULL)
    {
        cout<<t->element<<" ";
        t=t->next;

    }
    cout<<endl;
}

