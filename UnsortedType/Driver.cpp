#include <iostream>
#include "ItemType.h"
#include "UnsortedType.h"
using namespace std;


int main()
{
    UnsortedType a;

    cout<<"Length is= "<<a.LengthIs()<<endl;

    ItemType x;

    x.Initialize(5);
    a.InsertItem(x);
    x.Initialize(7);
    a.InsertItem(x);
    x.Initialize(6);
    a.InsertItem(x);
    x.Initialize(9);
    a.InsertItem(x);
    a.PrintList();
    x.Initialize(1);
    a.InsertItem(x);
    a.PrintList();
    x.Initialize(4);

    bool f ;
    a.RetrieveItem(x,f);
    if(f==true)
    cout<<"Item found"<<endl;
    else
    cout<<"Not found"<<endl;
    x.Initialize(5);
    a.RetrieveItem(x,f);
    if(f==true)
    cout<<"Item found"<<endl;
    else
    cout<<"Not found"<<endl;
    x.Initialize(9);
    a.RetrieveItem(x,f);
    if(f==true)
    cout<<"Item found"<<endl;
    else
    cout<<"Not found"<<endl;
    x.Initialize(10);
    a.RetrieveItem(x,f);
    if(f==true)
    cout<<"Item found"<<endl;
    else
    cout<<"Not found"<<endl;

    cout<<"Is the list full? "<<a.IsFull()<<endl;

    x.Initialize(5);

    a.DeleteItem(x);

    cout<<"Is the list full? "<<a.IsFull()<<endl;

    x.Initialize(1);
    a.DeleteItem(x);
    a.PrintList();

    x.Initialize(6);
    a.DeleteItem(x);
    a.PrintList();

}
