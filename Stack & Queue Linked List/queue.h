#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

template<class itemType>
class QueueNode
{
    public:
        itemType element;
        QueueNode *next;
};

template<class itemType>
class Queue
{
    public:
        Queue();
        ~Queue();
        bool isEmpty();
        void makeEmpty();
        void Enqueue(itemType);
        void Dequeue();
        void printQueue();
    private:
        QueueNode<itemType> *head;
        QueueNode<itemType> *tail;
};

#endif // QUEUE_H_INCLUDED
