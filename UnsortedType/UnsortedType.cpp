#ifndef UNSORTEDTYPE_CPP
#define UNSORTEDTYPE_CPP
#include "UnsortedType.h"

UnsortedType::UnsortedType()
{
    length=0;
    currentPos=-1;
}

bool UnsortedType::IsFull() const
{
    return (length==MAX_ITEMS);
}

int UnsortedType::LengthIs() const
{
    return length;
}

void UnsortedType::RetrieveItem(ItemType &item,bool& found)
{
    int location=0;
    bool moreToSearch=(location<length);
    found=false;

 while(moreToSearch && !found)
 {
    switch(item.ComparedTo(info[location]))
    {
        case LESS:
        case GREATER:
            location++;
            moreToSearch=(location<length);
            break;
        case EQUAL:
            found=true;
    }
 }

}

void UnsortedType::InsertItem(ItemType item)
{
    info[length]=item;
    length++;
}

void UnsortedType::DeleteItem(ItemType item)
{
    int location=0;

    while(item.ComparedTo(info[location])!=EQUAL)
        location++;

    info[location]=info[length-1];
    length--;
}

void UnsortedType::ResetList()
{
    currentPos=-1;
}

void UnsortedType::GetNextItem(ItemType& item)
{
    currentPos++;
    item=info[currentPos];
}

void UnsortedType::PrintList()
{
    ItemType it;
    for(int i=1;i<=length;i++)
    {
        GetNextItem(it);
        it.Print();
        cout<<" ";
    }
    ResetList();
    cout<<endl;
}

#endif

