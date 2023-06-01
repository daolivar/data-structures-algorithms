#include <iostream>

#include "DoublyLinkedList.hpp"

int main() {
    std::cout << "Doubly Linked List" << std::endl;

    DoublyLinkedList list;
    list.insert(5);         // Inserting value 5 at the end
    list.insert(10);        // Inserting value 10 at the end
    list.insert(15);        // Inserting value 15 at the end
    list.insert(20);        // Inserting value 20 at the end
    list.insert(25);        // Inserting value 25 at the end
    list.displayForward();  // Displays 5 10 15 20 25
    list.displayBackward(); // Displays 25 20 15 10 5

    list.remove(10);        // Removing value 10
    list.remove(25);        // Removing value 25
    list.remove(5);         // Removing value 5
    list.displayForward();  // Displays 15 20
    list.displayBackward(); // Displays 20 15

    return 0;
}
