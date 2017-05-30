#include <iostream>

using namespace std;

#include "StackTypeLL.h"

int main()
{

    StackTypeLL<int> it;
    int a = 5;
    it.Push(a);
    a = 7;
    it.Push(a);
    a = 6;
    it.Push(a);
    a = 9;
    it.Push(a);
    it.Pop(a);
    cout << a << endl;
    a = 10;
    it.Push(a);
    a = 8;
    it.Push(a);
    for(int i = 0 ; i<6 ; i++)
    {
        it.Pop(a);
        cout << a << " " ;
    }
    cout << endl;
    return 0;
}
