#include "LinkedList.h"
#include <iostream>
using std::cout;
using std::endl;

LinkedList::LinkedList(){
  head = NULL;
}
void LinkedList::printLinkedList(){
  Item* currentItem = head;
  if(head == NULL)
    cout << "Empty List";
  else {
    while (currentItem != NULL) {
      cout << currentItem->value << " ";
      currentItem = currentItem->nextItem;
    }
  }
  cout << endl;
}
void LinkedList::insertItem(int number){
  Item* newItem = new Item{number, NULL};
  if(head == NULL)
    head = newItem;
  else{
    newItem->nextItem = head;
    head = newItem;
  }
  cout << number << " was inserted" << endl;
}
void LinkedList::deleteItem(int number){
  Item* currentItem = head;
  Item* previous = NULL;
  bool isInList = false;
  while (currentItem != NULL) {
    if (currentItem->value == number) {
      isInList = true;
      if (previous != NULL)
        previous->nextItem = currentItem->nextItem;
      if(head == currentItem && currentItem->nextItem == NULL)
        head = NULL;
      if(head == currentItem)
        head = currentItem->nextItem;
      delete currentItem;
    }
    previous = currentItem;
    currentItem = currentItem->nextItem;
  }
  if(isInList == false)
    cout << number << " isn't in list, can't be deleted" << endl;
  else
    cout << number << " was deleted" << endl;
}
bool LinkedList::searchForItem(int number){
  Item* currentItem = head;
  while(currentItem != NULL){
    if(currentItem->value == number) {
      cout << number << " is in list" << endl;
      return true;
    }
    currentItem = currentItem->nextItem;
  }
  cout << number << " isn't in list" << endl;
  return false;
}
LinkedList::~LinkedList(){
  Item* currentItem = head;
  Item* nextItem;
  while(currentItem != NULL){
    nextItem = currentItem->nextItem;
    delete currentItem;
    currentItem = nextItem;
  }
}