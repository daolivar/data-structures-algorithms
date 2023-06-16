#ifndef STACK_HPP
#define STACK_HPP

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

#endif  // STACK_HPP
