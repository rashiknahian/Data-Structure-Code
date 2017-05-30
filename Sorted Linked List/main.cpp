#include <iostream>
#include "sLinkedList.h"
#include "sLinkedList.cpp"
using namespace std;

int main()
{
    SortedLinkedList<int> s;
    s.insert(5);
    s.insert(7);
    s.insert(4);
    s.insert(1);
    s.insert(8);
    s.printList();
    cout<< s.lengthIs() <<endl;
    int a=6; bool b;
    s.RetrieveItem(a,b);
    if(b==1)
    {
      cout<< "Item is Found"<<endl;
    }
    else cout<<"Item is not Found!"<<endl;

    a=5;
    s.RetrieveItem(a,b);
    if(b==1)
    {
      cout<< "Item Found"<<endl;
    }
    else cout<<"Not Found!"<<endl;

    s.DeleteItem(4);
    s.printList();
    s.DeleteItem(1);
    s.printList();
    s.insert(3);
    s.printList();
    return 0;
}

