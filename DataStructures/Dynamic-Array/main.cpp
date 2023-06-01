#include <iostream>

#include "DynamicArray.hpp"

int main() {
    std::cout << "Dynamic Array" << std::endl;

    DynamicArray arr;
    // Add elements to the dynamic array
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(15);
    arr.push_back(20);
    arr.push_back(25);

    // Access elements using the 'at' method and displaying contents of array
    for (int i = 0; i < arr.getSize(); i++) {
        std::cout << arr.at(i) << " ";
    }
    std::cout << std::endl;

    // Get the size of the array
    std::cout << "Array size: " << arr.getSize() << std::endl;

    // Check if the array is empty
    std::cout << "Is array empty? " << (arr.isEmpty() ? "Yes" : "No") << std::endl;

    // Clear the array
    arr.clear();

    // Check if the array is empty after clearing
    std::cout << "Is array empty after clearing? " << (arr.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
