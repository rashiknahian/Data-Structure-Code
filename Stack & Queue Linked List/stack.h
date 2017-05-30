#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

template<class ItemType>
class StackNode
{
    public:
        ItemType element;
        StackNode *next;
};

template<class ItemType>
class Stack
{
    public:
        Stack();
        ~Stack();
        bool isEmpty();
        void push(ItemType);
        void pop();
        void makeEmpty();
        ItemType top();
        ItemType topPop();
        void printStack();

    private:
        StackNode<ItemType> *head;
};

#endif // STACK_H_INCLUDED
