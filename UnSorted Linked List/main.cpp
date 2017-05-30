#include <iostream>
#include "ulinkedList.h"
#include "ulinkedList.cpp"
using namespace std;

int main()
{
    ULinkedList<int> u;
    u.insert(5);
    u.insert(7);
    u.insert(4);
    u.insert(1);
    u.insert(8);
    u.printList();
    cout<< u.lengthIs() <<endl;
    int a=6; bool b;
    u.RetrieveItem(a,b);
    if(b==1)
    {
      cout<< "Item is Found"<<endl;
    }
    else cout<<"Item is not Found!"<<endl;

    a=5;
    u.RetrieveItem(a,b);
    if(b==1)
    {
      cout<< "Item Found"<<endl;
    }
    else cout<<"Not Found!"<<endl;

    u.DeleteItem(4);
    u.printList();
    u.DeleteItem(1);
    u.printList();
    u.insert(9);
    u.printList();
    return 0;
}

