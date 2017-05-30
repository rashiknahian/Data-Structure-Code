#ifndef ULINKEDLIST_H_INCLUDED
#define ULINKEDLIST_H_INCLUDED

template<class ItemType>
class NodeType
{
    public:
    ItemType element;
    NodeType *next;
};
template<class ItemType>
class ULinkedList
{
    public:
    ULinkedList();
    ~ULinkedList();
    bool isFull() const;
    void makeEmpty();
    int lengthIs();
    void insert(ItemType);
    void RetrieveItem(ItemType&,bool&);
    void DeleteItem(ItemType);
    void ResetList();
    void getNextItem(ItemType &);
    void printList();
    private:
    NodeType<ItemType> *head;
    int length;
    NodeType<ItemType> *currentPos;
};


#endif // ULINKEDLIST_H_INCLUDED
