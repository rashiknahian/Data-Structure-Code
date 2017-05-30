#include <iostream>
#include "stack.h"
#include "stack.cpp"
#include "queue.h"
#include "queue.cpp"
using namespace std;

int main()
{
    Stack<char> s;

    if(s.isEmpty()==1)
        cout<<"Stack is Empty!"<<endl;
    else
        cout<<"Stack is not Empty!"<<endl;


    s.push('d');
    s.push('f');
    s.push('g');
    s.push('e');
    s.push('k');

    if(s.isEmpty()==1)
        cout<<"Stack is Empty!"<<endl;
    else
        cout<<"Stack is not Empty!"<<endl;
    s.printStack();
    s.pop();
    cout<<s.topPop()<<endl;
    cout<<s.top()<<endl;
    s.printStack();

    Queue<char> q;

    if(q.isEmpty()==1)
        cout<<"Queue is Empty!"<<endl;
    else
        cout<<"Queue is not Empty!"<<endl;

    q.Enqueue('d');
    q.Enqueue('f');
    q.Enqueue('g');
    q.Enqueue('e');
    q.Enqueue('k');

        if(q.isEmpty()==1)
        cout<<"Queue is Empty!"<<endl;
    else
        cout<<"Queue is not Empty!"<<endl;

    q.printQueue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    q.printQueue();


    return 0;
}
