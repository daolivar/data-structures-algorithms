#include <iostream>

#include "SinglyLinkedListWithTail.hpp"

/**
 * @brief Constructs a new SinglyLinkedList object.
 * 
 * This constructor initializes the head and tail pointers of the
 * SinglyLinkedList to nullptr, indicating an empty list.
 * 
 * @param None.
 * @return None.
*/
SinglyLinkedListWithTail::SinglyLinkedListWithTail() {
    this->head = nullptr;
    this->tail = nullptr;
}

/**
 * @brief SinglyLinkedLise destructor
 * 
 * Traverses the linked list and deletes each node to deallocate memory.
 * Ensures no memory leaks by deleting nodes from head to the end of the list.
 * 
 * @param None.
 * @return None.
*/
SinglyLinkedListWithTail::~SinglyLinkedListWithTail() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

/**
 * @brief Inserts a new node with the specified value at the end of the linked list.
 * 
 * This method creates a new node with the given value and appends it at the end
 * of the linked list. If the list is empty, the new node becomes both the head
 * and tail of the list. Otherwise, the new node is appended after the current tail,
 * and the tail pointer is updated to the new node.
 * 
 * @param value The value to be inserted into the linked list.
 * @return None.
 */
void SinglyLinkedListWithTail::insert(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

/**
 * @brief Removes the node with the specified value from the linked list.
 * 
 * This method iterates over the linked list to find the node with the specified value.
 * If the node is found, it is removed from the list by adjusting the appropriate pointers.
 * The removed node is then deleted to free the memory.
 * 
 * If the specified value is not found in the linked list, a "Element was not found in the list." message is printed.
 * 
 * @param value The value to remove from the linked list.
 * @return None.
 * @remark If the specified value is not found in the list, a message is printed to indicate that the element was not found.
 */
void SinglyLinkedListWithTail::remove(int value) {
    Node* current = head;
    Node* previous = nullptr;

    // Traverse the list to find the node with the specified value
    while (current != nullptr && current->data != value) {
        previous = current;
        current = current->next;
    }

    // If the value is found
    if (current != nullptr) {
        // If the node to be removed is the head node
        if (current == head) {
            head = current->next;
        } else {
            previous->next = current->next;
        }
        // If the node to be removed is the tail node
        if (current == tail) {
            tail = previous;
        }
        delete current;
        return;
    }
    std::cout << "Element was not found in the list." << std::endl;
}

/**
 * @brief Displays the elements of the linked list.
 * 
 * This method traverses the linked list and prints the values of each node in
 * order from the head to the tail. If the list is empty, it prints a message
 * indicating that the list is empty.
 * 
 * @param None.
 * @return None.
 */
void SinglyLinkedListWithTail::display() {
    Node* current = head;
    while (current != nullptr) {
       std::cout << current->data << " ";
       current = current->next;
    }
    std::cout << std::endl;
}
