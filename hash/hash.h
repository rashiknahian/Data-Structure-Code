#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED
template<class ItemType>
class Hash
{
public:
    Hash(int);
    ~Hash();
    void initialize();
    void makeEmpty();
    int hash(int key);
    void insert(int key,ItemType);
    int QuadraticProbing(int key);
    int isPrime(int size);
    void Reallocate();
    bool loadFactor();
    void print();
private:
    int numItems;
    int maxItems;
    ItemType *info;


};

#endif // HASH_H_INCLUDED
