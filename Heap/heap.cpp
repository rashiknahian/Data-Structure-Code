#ifndef HEAP_CPP
#define HEAP_CPP
#include"heap.h"
template<class ItemType>
void HeapType<ItemType>::ReheapDown(int root,int bottom)
{
    int maxChild,rightChild,leftChild;

    leftChild = 2*root + 1;
    rightChild = 2*root +2;

    if(leftChild<=bottom){
        if(leftChild==bottom)
           maxChild = leftChild;
        else{
            if(elements[leftChild]<=elements[rightChild])
            maxChild = rightChild;
            else
             maxChild = leftChild;
        }
        if(elements[root]<elements[maxChild])
        {
            Swap(elements,root,maxChild);
            ReheapDown(maxChild,bottom);
        }
    }
}
template<class ItemType>
void HeapType<ItemType>::ReheapUp(int root,int bottom)
{
    int parent;
    if(bottom>root){
        parent = (bottom-1)/2;
    if(elements[parent]<elements[bottom])
    {
        Swap(elements,parent,bottom);
        ReheapUp(root,parent);
    }
  }
}
template<class ItemType>
void Swap(ItemType *elements,int root,int bottom)
{
    int temp = elements[root];
    elements[root] = elements[bottom];
    elements[bottom] = temp;
}
#endif

