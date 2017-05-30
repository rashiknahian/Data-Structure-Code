#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    ItemType it;
    Stack s;

    if(s.IsEmpty()==1)
        cout<< "empty"<<endl;
    else
        cout<<"not empty"<<endl;

    it.Initialize(5);
    s.Push(it);
    it.Initialize(7);
    s.Push(it);
    it.Initialize(4);
    s.Push(it);
    it.Initialize(2);
    s.Push(it);

    if(s.IsEmpty()==1)
        cout<< "empty"<<endl;
    else
        cout<<"not empty"<<endl;

    if(s.IsFull()==1)
        cout<< "full"<<endl;
    else
        cout<<"not full"<<endl;

    s.printStack();

    if(s.IsEmpty()==1)
        cout<< "empty"<<endl;
    else
        cout<<"not empty"<<endl;


    it.Initialize(5);
    s.Push(it);
    it.Initialize(7);
    s.Push(it);
    it.Initialize(4);
    s.Push(it);
    it.Initialize(2);
    s.Push(it);
    it.Initialize(3);
    s.Push(it);

    if(s.IsFull()==1)
        cout<< "full"<<endl;
    else
        cout<<"not full"<<endl;

    s.Pop();

    it = s.topPop();
    it.Print();
    cout<<endl;
    it = s.Top();
    it.Print();
    cout<<endl;

    s.printStack();

    it.Initialize(4);
    s.Push(it);
    it.Initialize(3);
    s.Push(it);
    it.Initialize(1);
    s.Push(it);
    it.Initialize(2);
    s.Push(it);
    it.Initialize(5);
    s.Push(it);

    cout<<s.sumOdd()<<endl;




}
