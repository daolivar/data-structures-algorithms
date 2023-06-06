#ifndef STACK_H
#define STACK_H

#include "Node.hpp"

class Stack {
public:
    Stack();
    ~Stack();

    void push(const int& value);
    void pop();
    const int& top() const;
    bool isEmpty() const;

private:
    Node* topNode;
};

#endif  // STACK_H
