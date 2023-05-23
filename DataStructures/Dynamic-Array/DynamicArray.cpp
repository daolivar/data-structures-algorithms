#include <stdexcept>

#include "DynamicArray.hpp"

/**
 * @brief Constructs a new DynamicArray object.
 * 
 * The default capacity of 10 denotes that the dynamic array can initially store up to 10 elements.
 * The initial size of 0 indicates that the array is empty, with no elements present.
 * 
 * @param None.
 * @return None.
 */
DynamicArray::DynamicArray() {
    capacity = 10;
    size = 0;
    array = new int[capacity];
}

/**
 * @brief Destroys the DynamicArray object and frees the allocated memory.
 * 
 * The destructor is responsible for deallocating the memory that was dynamically allocated for the dynamic array.
 * This ensures that the memory resources are properly released and prevents memory leaks.
 * 
 * @param None.
 * @return None.
 */
DynamicArray::~DynamicArray() {
    delete[] array;
}

/**
 * @brief Adds a new element to the end of the dynamic array.
 * 
 * If the array is already full (size equals capacity), the array is resized
 * to accommodate additional elements.
 *
 * @param value The value to be added.
 * @return None.
 */
void DynamicArray::push_back(int value) {
    if (size == capacity) {
        resize(capacity*2);
    }
    array[size] = value;
    size++;
}

/**
 * @brief Removes the last element from the dynamic array.
 *
 * If the array has elements, the size is decremented by 1. If the new size becomes
 * smaller than or equal to one-fourth of the current capacity, the array is resized
 * to half of its current capacity.
 *
 * @param None
 * @return None
 */
void DynamicArray::pop_back() {
    if (size > 0) {
        size--;
        if (size <= capacity / 4) {
            resize(capacity / 2);
        }
    }
}

/**
 * @brief Accesses the element at the specified index.
 *
 * @param index The index of the element.
 * @return Reference to the element at the specified index.
 * @throws std::out_of_range if index is out of bounds.
 */
int& DynamicArray::at(int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return array[index];
}

/**
 * @brief Returns the current size of the dynamic array.
 * 
 * @param None.
 * @return The size of the dynamic array.
 */
int DynamicArray::getSize() {
    return size;
}

/**
 * @brief Checks if the dynamic array is empty.
 * 
 * @param None.
 * @return True if the array is empty, false otherwise.
 */
bool DynamicArray::isEmpty() {
    return size == 0;
}

/**
 * @brief Clears the dynamic array, resetting its state.
 * 
 * Deallocates the memory occupied by the array, sets capacity to 10, size to 0, 
 * and allocates a new array with the updated capacity.
 * 
 * @param None.
 * @return None.
 */
void DynamicArray::clear() {
    delete[] array;
    capacity = 10;
    size = 0;
    array = new int[capacity];
}

/**
 * @brief Resizes the dynamic array to the specified new capacity.
 * 
 * @param newCapacity The desired new capacity for the dynamic array.
 * @return None.
 */
void DynamicArray::resize(int newCapacity) {
    int* newArray = new int[newCapacity];
    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }
    delete[] array;
    array = newArray;
    capacity = newCapacity;
}
