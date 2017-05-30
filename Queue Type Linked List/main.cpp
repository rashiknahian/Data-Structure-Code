#include <iostream>

using namespace std;

#include "QueueTypeLL.h"

int main()
{
    QueType<int> it;
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
    for(int i = 0; i < 6 ; i++)
    {
        it.Dequeue(a);
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
