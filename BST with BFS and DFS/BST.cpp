#ifndef BST_CPP
#define BST_CPP

#include"BST.h"
#include<iostream>
using namespace std;

template<class ItemType>
BST<ItemType>::BST()
{
    root = NULL;
}
template<class ItemType>
BST<ItemType>::~BST()
{
    Destroy(root);
}
template<class ItemType>
void Destroy(TreeNode<ItemType>*& tree)
{
    if(tree!=NULL)
    {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
    }
}
template<class ItemType>
int BST<ItemType>::NumberOfNodes()const
{
    return CountNodes(root);
}
template<class ItemType>
int CountNodes(TreeNode<ItemType>*tree)
{
    if(tree==NULL)
       return 0;
    else
       return CountNodes(tree->left)+CountNodes(tree->right)+1;
}
template<class ItemType>
bool BST<ItemType>::IsEmpty()const
{
    return (root==NULL);
}
template<class ItemType>
void BST<ItemType>::InsertItem(ItemType item)
{
    Insert(root,item);
}
template<class ItemType>
void Insert(TreeNode<ItemType>*&tree,ItemType item)
{
    if(tree==NULL)
    {
        tree=new TreeNode<ItemType>;
        tree->right=NULL;
        tree->left=NULL;
        tree->info=item;
    }
    else if(item<tree->info)
        Insert(tree->left,item);
    else
        Insert(tree->right,item);
}
template<class ItemType>
void BST<ItemType>::RetrieveItem(ItemType&item,bool&found)
{
    Retrieve(root,item,found);
}
template<class ItemType>
void Retrieve(TreeNode<ItemType>*tree,ItemType&item,bool&found)
{
    if(tree==NULL)
       found =false;
    else if(item<tree->info)
       Retrieve(tree->left,item,found);
    else if(item>tree->info)
       Retrieve(tree->right,item,found);
    else{
        item = tree->info;
        found = true;
    }
}
template<class ItemType>
void BST<ItemType>::DeleteItem(ItemType item)
{
    Delete(root,item);
}
template<class ItemType>
void Delete(TreeNode<ItemType>*&tree,ItemType item)
{
    if(item<tree->info)
       Delete(tree->left,item);
    else if(item>tree->info)
       Delete(tree->right,item);
    else DeleteNode(tree);
}
template<class ItemType>
void GetPredecessor(TreeNode<ItemType>*tree,ItemType&item)
{
    while(tree->right!=NULL)
       tree = tree->right;
    item = tree->info;
}
template<class ItemType>
void DeleteNode(TreeNode<ItemType>*&tree)
{
    ItemType data;
    TreeNode<ItemType>*tempPtr;
    tempPtr = tree;
    if(tree->left==NULL)
    {
        tree = tree->right;
        delete tempPtr;
    }
    else if(tree->right==NULL)
    {
        tree = tree->left;
        delete tempPtr;
    }
    else{
        GetPredecessor(tree->left,data);
        tree->info=data;
        Delete(tree->left,data);
    }
}
template<class ItemType>
void BST<ItemType>::PrintTree()const
{
    Preorder(root);
}
template<class ItemType>
void Preorder(TreeNode<ItemType>*tree)
{
    if(tree==NULL) return;
    cout<<tree->info<<ends;
    Preorder(tree->left);
    Preorder(tree->right);
}
#endif
