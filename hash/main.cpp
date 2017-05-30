#include <iostream>
#include"hash.h"
#include"hash.cpp"

using namespace std;

int main()
{
    Hash<int> a(13);
    int b=7;
    if(a.isPrime(b))
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    a.insert(23,14001);
    a.insert(21,50003);
    a.insert(27,10104);
    a.insert(29,79606);
    a.insert(19,33099);
    a.insert(10,78006);
    a.insert(15,49002);
    a.print();

    a.insert(14,68902);
    a.print();
    return 0;
}
