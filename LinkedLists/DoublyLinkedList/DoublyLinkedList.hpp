#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.hpp"

class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insert(int value);
    void insertFront(int value);
    void remove(int value);
    void displayForward();
    void displayBackward();

private:
    Node *head;
    Node *tail;
};

#endif
