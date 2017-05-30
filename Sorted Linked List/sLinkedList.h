#ifndef SLINKEDLIST_H_INCLUDED
#define SLINKEDLIST_H_INCLUDED

template<class ItemType>
class NodeType
{
    public:
    ItemType element;
    NodeType *next;
};
template<class ItemType>
class SortedLinkedList
{
    public:
    SortedLinkedList();
    ~SortedLinkedList();
    void makeEmpty();
    int lengthIs() const;
    void insert(ItemType);
    void RetrieveItem(ItemType&,bool&);
    void DeleteItem(ItemType);
    void printList();
    private:
    NodeType<ItemType> *head;
    int length;
    NodeType<ItemType> *currentPos;
};
#endif // SORTEDLINKEDLIST_H



