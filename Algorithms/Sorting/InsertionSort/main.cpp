#include <iostream>
#include <vector>

// Function to perform insertion sort
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
