#include <iostream>

#include "SinglyLinkedListWithTail.hpp"

using namespace std;

int main() {
    cout << "Singly Linked List With Tail" << endl;
    SinglyLinkedListWithTail list;
    list.insert(5);     // Inserting value 5 at the end
    list.insert(10);    // Inserting value 10 at the end
    list.insert(15);    // Inserting value 15 at the end
    list.insert(20);    // Inserting value 20 at the end
    list.insert(25);    // Inserting value 25 at the end
    list.display();     // Displays 5 10 15 20 25

    list.remove(10);    // Removing value 10
    list.remove(25);    // Removing value 25
    list.remove(5);     // Removing value 5
    list.display();     // Displays 15 20
    return 0;
}
