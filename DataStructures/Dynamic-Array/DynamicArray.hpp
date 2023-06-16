#ifndef DYNAMICARRAY_HPP
#define DYNAMICARRAY_HPP

class DynamicArray {
public:
    DynamicArray();
    ~DynamicArray();

    void push_back(int value);
    void pop_back();
    int& at(int index);
    int getSize();
    bool isEmpty();
    void clear();
private:
    int* array;   // Pointer to the dynamically allocated array
    int size;     // Current size of the array
    int capacity; // Maximum capacity of the array
    void resize(int newCapacity);
};

#endif
