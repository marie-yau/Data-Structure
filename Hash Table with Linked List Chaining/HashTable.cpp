#include "HashTable.h"
#include <iostream>
using std::cout;
using std::endl;

HashTable::HashTable(int numBuckets){
  numberOfBuckets = numBuckets;
  for(int i = 0; i < numberOfBuckets; i++)
    buckets.push_back(new LinkedList);
}
void HashTable::printHashTable(){
  for(int i = 0; i < numberOfBuckets; i++){
    cout << "Bucket " << i << ": ";
    buckets.at(i)->printLinkedList();
  }
}
void HashTable::insertItem(int number){
  int bucketNumber = number % numberOfBuckets;
  buckets.at(bucketNumber)->insertItem(number);
}
void HashTable::deleteItem(int number){
  int bucketNumber = number % numberOfBuckets;
  buckets.at(bucketNumber)->deleteItem(number);
}
void HashTable::searchForItem(int number){
  int bucketNumber = number % numberOfBuckets;
  buckets.at(bucketNumber)->searchForItem(number);
}
HashTable::~HashTable(){
  for(int i = 0; i < numberOfBuckets; i++)
    delete buckets.at(i);
}
