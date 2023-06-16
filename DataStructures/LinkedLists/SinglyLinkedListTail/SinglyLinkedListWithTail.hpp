#ifndef SINGLYLINKEDLISTWiTHTAIL_HPP
#define SINGLYLINKEDLISTWiTHTAIL_HPP

#include "Node.hpp"

class SinglyLinkedListWithTail {
public:
    SinglyLinkedListWithTail();
    ~SinglyLinkedListWithTail();

    void insert(int value);
    void remove(int value);
    void display();

private:
    Node* head;
    Node* tail;
};

#endif
