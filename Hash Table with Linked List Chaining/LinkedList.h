#ifndef DATASTR11_LINKEDLIST_H
#define DATASTR11_LINKEDLIST_H

#include <vector>
using std::vector;

class LinkedList {
  private:
    struct Item{
      int value;
      Item* nextItem;
    };
    Item* head;
  public:
    LinkedList();
    void printLinkedList();
    void insertItem(int number);
    void deleteItem(int number);
    bool searchForItem(int number);
    ~LinkedList();
};


#endif
