#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "Node.hpp"

class Queue {
public:
    Queue();
    ~Queue();

    void enqueue(const int& value);
    void dequeue();
    const int& front() const;
    bool isEmpty() const;
    int getSize() const;

private:
    Node* frontNode; // Pointer to the front of the queue
    Node* rearNode;  // Pointer to the rear of the queue
    int size;        // Number of elements in the queue
};

#endif  // QUEUE_HPP
