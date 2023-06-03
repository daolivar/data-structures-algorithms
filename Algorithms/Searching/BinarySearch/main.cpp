#include <iostream>
#include <vector>

/**
 * @brief Perform iterative binary search on a sorted array to find the target value.
 *
 * This function performs an iterative binary search on a sorted array to find
 * the target value. It divides the search range in half at each step, narrowing
 * down the search until the target value is found or the search range is empty.
 *
 * @param array The sorted array to search.
 * @param target The target value to find.
 * @return The index of the target value if found, or -1 if not found.
 * @remark Calculation of mid is performed using subtraction and division to prevent potential overflow issues.
 */
int binarySearchIterative(const std::vector<int>& array, int target) {
    int left = 0;
    int right = array.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        } else if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

/**
 * @brief Helper function for recursive binary search.
 *
 * This function is a helper function for the recursive binary search. It takes
 * the sorted array, target value, and the left and right indices of the current
 * search range as input. It recursively divides the search range in half, narrowing
 * down the search until the target value is found or the search range is empty.
 *
 * @param array The sorted array to search.
 * @param target The target value to find.
 * @param left The left index of the current search range.
 * @param right The right index of the current search range.
 * @return The index of the target value if found, or -1 if not found.
 * @remark Calculation of mid is performed using subtraction and division to prevent potential overflow issues.
 */
int binarySearchHelper(const std::vector<int>& array, int target, int left, int right) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        } else if (array[mid] < target) {
            return binarySearchHelper(array, target, mid + 1, right);
        } else {
            return binarySearchHelper(array, target, left, mid - 1);
        }
    }
    return -1;
}

/**
 * @brief Perform recursive binary search on a sorted array to find the target value.
 *
 * This function performs a recursive binary search on a sorted array to find
 * the target value. It recursively divides the search range in half, narrowing
 * down the search until the target value is found or the search range is empty.
 *
 * @param array The sorted array to search.
 * @param target The target value to find.
 * @return The index of the target value if found, or -1 if not found.
 */
int binarySearchRecursive(const std::vector<int>& array, int target) {
    return binarySearchHelper(array, target, 0, array.size() - 1);
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
    std::cout << "Binary Search" << std::endl;

    std::vector<int> array = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 7;

    int iterativeResult = binarySearchIterative(array, target);
    int recursiveResult = binarySearchRecursive(array, target);

    checkTargetFound(iterativeResult);
    checkTargetFound(recursiveResult);

    return 0;
}
