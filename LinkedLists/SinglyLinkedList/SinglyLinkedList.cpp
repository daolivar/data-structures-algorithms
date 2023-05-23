#include <iostream>

#include "SinglyLinkedList.hpp"

/**
 * @brief SinglyLinkedLise constructor
 * 
 * This constructor initializes a new instance of the SinglyLinkedList class.
 * It sets the head pointer to nullptr, indicating an empty list.
 * 
 * @param None.
 * @return None.
*/
SinglyLinkedList::SinglyLinkedList() {
    this->head = nullptr;
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
SinglyLinkedList::~SinglyLinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

/**
 * @brief Inserts a new node with the given value at the end of the singly linked list.
 * 
 * Creates a new node using the 'new' keyword and assigns the given value to it.
 * If the list is empty, the new node becomes the head of the list.
 * Otherwise, traverses to the end of the list and inserts the new node there.
 * 
 * @param value The value to be inserted into the linked list.
 * @return None.
 */
void SinglyLinkedList::insert(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

/**
 * @brief Removes the specified value from the linked list by iterating over it.
 * 
 * If the node to remove is the head, the head pointer is updated; otherwise, the next pointer of the previous node is adjusted.
 * The removed node is then deleted to free memory. If the value is not found, a "not found" message is printed.
 * 
 * @param value The value to remove from the linked list.
 * @return None.
 * @remark If the specified value is not found in the list, a message is printed to indicate that the element was not found.
 */
void SinglyLinkedList::remove(int value) {
    Node* prev = nullptr;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
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
void SinglyLinkedList::display() {
    Node* current = head;
    while (current != nullptr) {
       std::cout << current->data << " ";
       current = current->next;
    }
    std::cout << std::endl;
}
