#include <stdexcept>

#include "Queue.hpp"

/**
 * @brief Default constructor for the Queue class.
 * 
 * Initializes the frontNode and rearNode pointers to nullptr, indicating an empty queue.
 * Sets the initial size of the queue to 0.
 * 
 * @param None.
 * @return None.
 */
Queue::Queue() : frontNode(nullptr), rearNode(nullptr), size(0) {
}

/**
 * @brief Destructor for the Queue class.
 * 
 * Deallocates the memory used by all nodes in the queue.
 * Frees the memory of each node starting from the front until the rear of the queue.
 * 
 * @param None.
 * @return None.
 */
Queue::~Queue() {
    Node* current = frontNode;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

/**
 * @brief Enqueues a value into the queue.
 * 
 * Creates a new node with the given value and adds it to the rear of the queue.
 * If the queue is empty, the new node becomes both the front and rear node.
 * Otherwise, the new node's previous pointer is set to the current rear node,
 * and the current rear node's next pointer is set to the new node.
 * Finally, the new node becomes the new rear node, and the size of the queue is incremented.
 * 
 * @param value The value to be enqueued.
 * @return None.
 */
void Queue::enqueue(const int& value) {
    Node* newNode = new Node(value);
    if (rearNode == nullptr) {
        frontNode = rearNode = newNode;
    } else {
        newNode->prev = rearNode;
        rearNode->next = newNode;
        rearNode = newNode;
    }
    size++;
}

/**
 * @brief Dequeues an element from the queue.
 * 
 * Removes the front element from the queue by updating the frontNode pointer.
 * If the queue is empty, throws a std::runtime_error indicating queue underflow.
 * Otherwise, the frontNode is updated to its next node, and if it is not nullptr,
 * the previous pointer of the new front node is set to nullptr.
 * Finally, the memory of the previous front node is deallocated, and the size of the queue is decremented.
 * 
 * @param None.
 * @return None.
 * @throws std::runtime_error if the queue is empty (underflow condition).
 */
void Queue::dequeue() {
    if (rearNode == nullptr) {
        throw std::runtime_error("Queue underflow: Cannot dequeue from an empty queue.");
    } else {
        Node* tbd = frontNode;
        frontNode = frontNode->next;
        if (frontNode != nullptr) {
            frontNode->prev = nullptr;
        }
        delete tbd;
        size--;
    }
}

/**
 * @brief Returns the front element in the queue.
 * 
 * Returns the value of the front element in the queue without modifying the queue.
 * If the queue is empty, throws a std::runtime_error.
 * 
 * @param None.
 * @return The value of the front element.
 * @throws std::runtime_error if the queue is empty.
 */
const int& Queue::front() const {
    if (frontNode == nullptr) {
        throw std::runtime_error("Queue underflow: Cannot access front of an empty queue.");
    }
    return frontNode->data;
}

/**
 * @brief Checks if the queue is empty.
 * 
 * Determines whether the queue is empty by checking if the size is 0.
 * Returns true if the queue is empty, false otherwise.
 * 
 * @param None.
 * @return True if the queue is empty, false otherwise.
 */
bool Queue::isEmpty() const {
    return size == 0;
}

/**
 * @brief Gets the size of the queue.
 * 
 * Returns the number of elements currently in the queue.
 * 
 * @param None.
 * @return The size of the queue.
 */
int Queue::getSize() const {
    return size;
}
