#include "sLinkedList.h"
#include<iostream>
using namespace std;

template<class ItemType>
SortedLinkedList<ItemType>:: SortedLinkedList()
{
    head=NULL;
    currentPos=NULL;
    length=0;

}

template<class ItemType>
SortedLinkedList<ItemType>:: ~SortedLinkedList()
{
    makeEmpty();
}

template<class ItemType>
void SortedLinkedList<ItemType>:: makeEmpty()
{
    NodeType<ItemType> *t;
    while(head!=NULL)
    {
        t=head;
        head=head->next;
        delete t;
    }
    length=0;
}

template<class ItemType>
void SortedLinkedList<ItemType>:: insert(ItemType item)
{
    NodeType<ItemType> *location=head;
    if(head==NULL)
        {
            NodeType<ItemType> *t=new NodeType<ItemType>;
            t->element=item;
            t->next=NULL;
            head=t;
            currentPos=t;
        }
        else
        {
            if(item>currentPos->element)
            {
                NodeType<ItemType> *t=new NodeType<ItemType>;
                t->element=item;
                t->next=NULL;
                currentPos->next=t;
                currentPos=t;
            }
        else if(item<head->element)
        {
            NodeType<ItemType> *t=new NodeType<ItemType>;
            t->element=item;
            t->next=head; head=t;
        }
        else
        {
            while(!(location->next->element>item))
            {
                location=location->next;
            }
            NodeType<ItemType> *t=new NodeType<ItemType>;
            t->element=item;
            t->next=location->next;
            location->next=t;
            }
        }
        length++;
}

template<class ItemType>
void SortedLinkedList<ItemType>::DeleteItem(ItemType item)
{
    NodeType<ItemType> *t=head;
    NodeType<ItemType> *temp;
    if(head==NULL)
        cout<<"No Items in the List"<<endl;
    if(head->element==item)
    {
        temp=t;
        head=head->next;
    }
    else
    {
        while(!(item==((t->next)->element)))
        {
            t=t->next;
        }
        temp=t->next;
        t->next=(t->next)->next;
    }
        delete temp;
        length--;
}

template<class ItemType>
void SortedLinkedList<ItemType>::RetrieveItem (ItemType & item, bool &found)
{
    found=false;
    NodeType<ItemType> *t=head;
    while(t!=NULL)
        {
            if(t->element==item)
            {
                found=true;
            }
            t=t->next;
        }
}

template<class ItemType>
void SortedLinkedList<ItemType>::printList()
{
    NodeType<ItemType> *t=head;
    while(t!=NULL)
        {
            cout<<t->element<<" ";
            t=t->next;
        }
        cout<<endl;
}

template<class ItemType>
int SortedLinkedList<ItemType>::lengthIs() const
{
    return length;
}
