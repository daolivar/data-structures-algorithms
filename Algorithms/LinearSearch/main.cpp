#include <iostream>
#include <vector>

/**
 * @brief Perform linear search to find the target element in the given array.
 *
 * This function sequentially searches through the elements of the array
 * to find the target element. It returns the index of the target element if
 * found, or -1 if the target element is not present in the array.
 *
 * @param array The array of integers to be searched.
 * @param size The size of the array.
 * @param target The element to search for in the array.
 * @return The index of the target element if found, -1 otherwise.
 */
int linearSearchArray(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

/**
 * @brief Perform linear search to find the target element in the given vector.
 *
 * This function sequentially searches through the elements of the vector
 * to find the target element. It returns the index of the target element if
 * found, or -1 if the target element is not present in the vector.
 *
 * @param array The vector of integers to be searched.
 * @param target The element to search for in the vector.
 * @return The index of the target element if found, -1 otherwise.
 */
int linearSearchVector(const std::vector<int>& array, int target) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

/**
 * @brief Check if the target element was found and print the appropriate message.
 *
 * This utility function takes an index as input and checks if the target element
 * was found in the array. If the index is not equal to -1, it prints a message
 * indicating that the target was found at the given index. Otherwise, it prints
 * a message indicating that the target was not found in the array.
 *
 * @param index The index of the target element if found, or -1 if not found.
 * @return None.
 */
void checkTargetFound(int index) {
    if (index != -1) {
        std::cout << "Target found at index: " << index << std::endl;
    } else {
        std::cout << "Target not found in the array." << std::endl;
    }
}

int main() {
    std::cout << "Linear Search" << std::endl;

    // static array declaration and initialization
    int arr[] = {3, 5, 2, 7, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // vector declaration and initialization
    std::vector<int> v = {3, 5, 2, 7, 1, 9};

    int target = 7;

    int index1 = linearSearchArray(arr, size, target);
    int index2 = linearSearchVector(v, target);

    checkTargetFound(index1);
    checkTargetFound(index2);

    return 0;
}
