#include"SortedType.h"

int main()
{
    ItemType it;
    SortedType S;
    bool found;
    cout << S.LengthIs() << endl;


    it.Initialize(5);
    S.InsertItem(it);
    it.Initialize(7);
    S.InsertItem(it);
    it.Initialize(4);
    S.InsertItem(it);
    it.Initialize(2);
    S.InsertItem(it);
    it.Initialize(1);
    S.InsertItem(it);
    S.PrintList();

    cout << endl << endl;
    it.Initialize(6);
    S.RetrieveItem(it,found);
    cout << ((found)? "Item is Found" : "Item is not Found") << endl << endl;
    it.Initialize(5);
    S.RetrieveItem(it,found);
    cout << ((found)? "Item is Found" : "Item is not Found") << endl << endl;


    cout << (S.IsFull()? "List is Full" : "List is not Full") << endl << endl;

    it.Initialize(1);
    S.DeleteItem(it);
    S.PrintList();

    return 0;
}
