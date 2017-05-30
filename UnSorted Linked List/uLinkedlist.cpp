#include "ulinkedList.h"
#include<iostream>
using namespace std;

template<class itemType>
ULinkedList<itemType>::ULinkedList()
{
    head=NULL;
    currentPos=NULL;
    length=0;
}

template<class itemType>
ULinkedList<itemType>::~ULinkedList()
{
    makeEmpty();
}

template<class itemType>
void ULinkedList<itemType>::makeEmpty()
{
    NodeType<itemType> *t;
    while(head!=NULL)
    {
        t=head;
        head=head->next;
        delete t;
    }
    length=0;
}

template<class itemType>
int ULinkedList<itemType>::lengthIs()
{
    return length;
}

template<class itemType>
void ULinkedList<itemType>::insert(itemType item)
{
    if(head==NULL)
    {
        NodeType<itemType> *t=new NodeType<itemType>;
        t->element=item;
        t->next=NULL;
        head=t;
        currentPos=t;
        length++;
        return;
    }
    NodeType<itemType> *t=new NodeType<itemType>;
    t->element=item;
    t->next=NULL;
    currentPos->next=t;
    currentPos=t;
    length++;
    return;
}

template<class itemType>
void ULinkedList<itemType>::ResetList()
{
    currentPos=NULL;
}

template<class itemType>
void ULinkedList<itemType>::DeleteItem(itemType item)
{
    if(head==NULL)
        cout<<"No item in the List" <<endl;
    NodeType<itemType> *t=head;
    NodeType<itemType> *temp;
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

template<class itemType>
void ULinkedList<itemType>::printList()
{
    NodeType<itemType> *t=head;
    while(t!=NULL)
    {
        cout<<t->element<<" ";
        t=t->next;
    }
    cout<<endl;
}

template<class itemType>
void ULinkedList<itemType>::getNextItem(itemType &item)
{
    if(currentPos==NULL)
        currentPos=head;
    else
        currentPos=currentPos->next;
        item=currentPos->element;
}

template<class itemType>
void ULinkedList<itemType>::RetrieveItem(itemType &item,bool &found)
{
    bool moreToSearch;
    NodeType<itemType> *t=head;
    found = false;
    moreToSearch = (t!=NULL);
    while(moreToSearch && !found)
    {
        if(item == t->element)
        {
            found = true;
            item = t->element;
        }
        else
        {
            t = t->next;
            moreToSearch = (t != NULL);
        }
    }
}
