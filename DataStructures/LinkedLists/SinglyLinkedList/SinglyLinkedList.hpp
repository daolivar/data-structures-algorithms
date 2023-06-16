#ifndef SINGLYLINKEDLIST_HPP
#define SINGLYLINKEDLIST_HPP

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
