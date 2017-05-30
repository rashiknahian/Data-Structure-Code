#include <iostream>
#include"BST.h"
using namespace std;

int main()
{
    BST<char> btree;
    cout<<btree.NumberOfNodes()<<endl;
    btree.InsertItem('C');
    btree.InsertItem('A');
    btree.InsertItem('D');
    btree.PrintTree();
    cout<<endl;
    btree.DeleteItem('A');
    btree.PrintTree();
    cout<<endl;
    btree.DeleteItem('D');
    btree.PrintTree();
    return 0;
}
