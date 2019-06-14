#ifndef DATASTR11_HASHTABLE_H
#define DATASTR11_HASHTABLE_H

#include <vector>
#include "LinkedList.h";
using std::vector;

class HashTable {
  private:
    int numberOfBuckets;
    vector<LinkedList*> buckets;
  public:
    HashTable(int numBuckets);
    void printHashTable();
    void insertItem(int number);
    void deleteItem(int number);
    void searchForItem(int number);
    ~HashTable();
};


#endif
