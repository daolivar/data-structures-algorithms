#include <iostream>

#include "Queue.hpp"

int main() {
    Queue queue;

    std::cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << std::endl;

    try {
        queue.dequeue(); // Attempting to dequeue from an empty queue
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);

    std::cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Front element: " << queue.front() << std::endl;

    queue.dequeue();
    std::cout << "Front element after dequeue: " << queue.front() << std::endl;

    queue.dequeue();
    queue.dequeue();

    std::cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
