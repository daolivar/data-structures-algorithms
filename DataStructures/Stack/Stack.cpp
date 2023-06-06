#include <stdexcept>

#include "Stack.hpp"

/**
 * @brief Default constructor for the Stack class.
 * 
 * Initializes the topNode pointer to nullptr, indicating an empty stack.
 * 
 * @param None.
 * @return None.
 */
Stack::Stack() {
    topNode = nullptr;
}

/**
 * @brief Destructor for the Stack class.
 * 
 * Deallocates the memory used by all nodes in the stack.
 * Frees the memory of each node starting from the top until the bottom of the stack.
 *
 * @param None.
 * @return None.
 */
Stack::~Stack() {
    Node* current = topNode;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

/**
 * @brief Pushes a value onto the stack.
 * 
 * Creates a new node with the given value and adds it to the top of the stack.
 * If the stack is empty, the new node becomes the top node.
 * Otherwise, the new node's next pointer is set to the current top node,
 * and the new node becomes the new top node.
 * 
 * @param value The value to be pushed onto the stack.
 * @return None.
 */
void Stack::push(const int& value) {
    Node* newNode = new Node(value);
    if (topNode == nullptr) {
        topNode = newNode;
    } else {
        newNode->next = topNode;
        topNode = newNode;
    }
}

/**
 * @brief Pops the top element from the stack.
 * 
 * Removes the top element from the stack by updating the top pointer.
 * If the stack is empty, throws a std::runtime_error indicating stack underflow.
 * 
 * @param None.
 * @return None.
 * @throws std::runtime_error if the stack is empty (underflow condition).
 */
void Stack::pop() {
    if (topNode == nullptr) {
        throw std::runtime_error("Stack underflow: Cannot pop from an empty stack.");
    }
    Node* tbd = topNode;
    topNode = topNode->next;
    delete tbd;
}

/**
 * @brief Returns the value of the top element in the stack.
 * 
 * Returns the value of the top element in the stack without modifying the stack.
 * If the stack is empty, throws a std::runtime_error.
 * 
 * @param None.
 * @return The value of the top element.
 * @throws std::runtime_error if the stack is empty.
 */
const int& Stack::top() const {
    if (topNode == nullptr) {
        throw std::runtime_error("Stack is empty: Cannot retrieve top element.");
    }
    return topNode->data;
}

/**
 * @brief Checks if the stack is empty.
 * 
 * Determines whether the stack is empty by checking if the top node is nullptr.
 * Returns true if the stack is empty, false otherwise.
 * 
 * @param None.
 * @return True if the stack is empty, false otherwise.
 */
bool Stack::isEmpty() const {
    return topNode == nullptr;
}
