#include <iostream>

using namespace std;

#include "QueueType.h"

int main()
{
    QueueType<int> it(5);
    int a = 5;
    it.Enqueue(a);
    a = 7;
    it.Enqueue(a);
    a = 6;
    it.Enqueue(a);
    a = 9;
    it.Enqueue(a);
    it.Dequeue(a);
    cout << a << endl;
    a = 10;
    it.Enqueue(a);
    a = 8;
    it.Enqueue(a);
    a = 3;
    if(it.IsFull())
    cout << "Queue is full" << endl;
    else
    it.Enqueue(a);
    for(int i = 0 ; i < 5 ; i++)
    {
        it.Dequeue(a);
        cout << a << " ";
    }
    cout << endl;
    cout << (it.IsEmpty()? "Queue is Empty" : "Queue is not empty");
    return 0;
}
