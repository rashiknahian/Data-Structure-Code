#include <iostream>
#include"priorityQueue.h"

using namespace std;

int main()
{

    PQType<int> pq(6);
    pq.Enqueue(8);
    pq.Enqueue(2);
    pq.Enqueue(9);
    pq.Enqueue(10);

    int i;
    pq.Dequeue(i);
    cout<<i<<endl;
    pq.Dequeue(i);
    cout<<i<<endl;
    pq.Dequeue(i);
    cout<<i<<endl;

    return 0;
}
