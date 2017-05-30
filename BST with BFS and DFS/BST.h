#ifndef BST_H
#define BST_H

template<class ItemType>
struct TreeNode{
    ItemType info;
    TreeNode<ItemType>*left,*right;
};
template<class ItemType>
class BST{
    TreeNode<ItemType>*root;
    public:
    BST();
    ~BST();
    int NumberOfNodes()const;
    void RetrieveItem(ItemType&,bool&found);
    bool IsEmpty()const;
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void PreorderTraversal();
    void MakeEmpty();
    bool IsFull()const;
    void PrintTree()const;
};
#endif
#include"BST.cpp"
