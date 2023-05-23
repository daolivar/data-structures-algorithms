#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include "Node.hpp"

class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void insert(int value);
    void remove(int value);
    void display();

private:
    Node *head;
};

#endif
