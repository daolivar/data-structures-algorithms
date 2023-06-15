#include <iostream>
#include <vector>

/**
 * @brief Sorts a vector of integers using the insertion sort algorithm.
 * 
 * The insertionSort function applies the insertion sort algorithm to sort the elements in the input vector in ascending order.
 * It iterates through the vector, considering each element as the "key". It then compares the key with the elements in the
 * sorted section of the vector, shifting larger elements to the right until finding the correct position for the key. This
 * process continues until all elements have been processed, resulting in a fully sorted vector.
 * 
 * @param arr The vector of integers to be sorted. The original order of the elements will be modified.
 * @return None.
 */
void insertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::cout << "Insertion Sort" << std::endl;

    std::vector<int> arr = {5, 2, 9, 1, 3};

    // Display the original array
    std::cout << "Original Array: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Call the insertion sort function
    insertionSort(arr);

    // Display the sorted array
    std::cout << "Sorted Array: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
