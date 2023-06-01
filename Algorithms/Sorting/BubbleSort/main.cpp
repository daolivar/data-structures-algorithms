#include <iostream>
#include <algorithm>

/**
 * @brief Sorts an array in ascending order using the bubble sort algorithm.
 *
 * This function implements the bubble sort algorithm to sort the given array
 * in ascending order. It iterates through the array multiple times, comparing
 * adjacent elements and swapping them if necessary until the array is sorted.
 *
 * @param arr The array to be sorted.
 * @param size The size of the array.
 */
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

/**
 * @brief Displays the elements of an array.
 *
 * This function prints the elements of the given array to the standard output.
 *
 * @param arr The array to be displayed.
 * @param size The size of the array.
 */
void display(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    display(arr, size);

    bubbleSort(arr, size);

    std::cout << "Array after sorting: ";
    display(arr, size);

    return 0;
}
