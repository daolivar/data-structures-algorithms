#include <iostream>

#include "DoublyLinkedList.hpp"

/**
 * @brief Constructor for the DoublyLinkedList class.
 * 
 * This constructor creates a new empty doubly linked list.
 * It initializes the head and tail pointers to nullptr, indicating an empty list.
 * 
 * @param None.
 * @return None.
 */
DoublyLinkedList::DoublyLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}

/**
 * @brief Destructor for the DoublyLinkedList class.
 * 
 * This destructor is responsible for deallocating the memory used by the doubly linked list.
 * It iterates through the list, starting from the head node, and deletes each node until the end of the list is reached.
 * 
 * @param None.
 * @return None.
 */
DoublyLinkedList::~DoublyLinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

/**
 * @brief Inserts a new node with the specified value at the end of the doubly linked list.
 * 
 * This method creates a new node with the given value and inserts it at the end of the list.
 * If the list is initially empty, the head and tail pointers are updated to point to the new node.
 * If the list is not empty, the new node is appended after the current tail node, and the tail pointer is updated to point to the new node.
 * 
 * @param value The value to be inserted into the doubly linked list.
 * @return None.
 */
void DoublyLinkedList::insert(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

/**
 * @brief Inserts a new node with the specified value at the front of the doubly linked list.
 * 
 * This method creates a new node with the given value and inserts it at the front of the list.
 * If the list is initially empty, the head and tail pointers are updated to point to the new node.
 * If the list is not empty, the new node becomes the new head node, and the necessary pointers are updated accordingly.
 * 
 * @param value The value to be inserted at the front of the doubly linked list.
 * @return None.
 */
void DoublyLinkedList::insertFront(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

/**
 * @brief Removes the first occurrence of the specified value from the doubly linked list.
 * 
 * This method searches for the first occurrence of the given value in the list and removes the corresponding node.
 * If the node to be removed is the head node, the head pointer is updated to the next node.
 * If the node to be removed is not the head node, the necessary pointers are adjusted to bypass the current node.
 * If the node to be removed is the tail node, the tail pointer is updated accordingly.
 * 
 * @param value The value to be removed from the doubly linked list.
 * @return None.
 * @remark If the specified value is not found in the list, a message is printed to indicate that the element was not found.
 */
void DoublyLinkedList::remove(int value) {
    Node* current = head;

    while (current != nullptr && current->data != value) {
        current = current->next;
    }

    if (current != nullptr) {
        if (current == head) {
            head = current->next;
            head->prev = nullptr;
        } else {
            current->prev->next = current->next;
        }
        if (current == tail) {
            tail = current->prev;
        }
        delete current;
        return;
    }
    std::cout << "Element was not found in the list." << std::endl;
}

/**
 * @brief Displays the elements of the doubly linked list in forward order.
 * 
 * This method traverses the doubly linked list starting from the head node and prints the data of each node in forward order.
 * The elements are separated by a space.
 * 
 * @param None.
 * @return None.
 */
void DoublyLinkedList::displayForward() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

/**
 * @brief Displays the elements of the doubly linked list in backward order.
 * 
 * This method traverses the doubly linked list starting from the tail node and prints the data of each node in backward order.
 * The elements are separated by a space.
 * 
 * @param None.
 * @return None.
 */
void DoublyLinkedList::displayBackward() {
    Node* current = tail;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}
