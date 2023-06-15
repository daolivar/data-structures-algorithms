#include <iostream>
#include <algorithm>

/**
 * @brief Sorts an array of integers using the selection sort algorithm.
 *
 * This method implements the selection sort algorithm to sort an array of integers in ascending order.
 * It repeatedly finds the minimum element from the unsorted portion of the array and swaps it with the
 * element at the current position, effectively building the sorted portion of the array from left to right.
 *
 * @param arr The array of integers to be sorted.
 * @param size The number of elements in the array.
 * @return None.
 */
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    std::cout << "Selection Sort" << std::endl;

    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
