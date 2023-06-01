# Binary Search

Binary Search is a commonly used search algorithm that efficiently locates a specific target value within a sorted collection of elements. It follows a divide-and-conquer strategy to quickly narrow down the search range by repeatedly dividing it in half until the target value is found or determined to be absent.

Here's a step-by-step description of the Binary Search Algorithm:

1. Begin with a sorted collection of elements, such as an array or a list.

2. Initialize two pointers, one pointing to the start of the collection (left pointer) and the other to the end of the collection (right pointer).

3. Calculate the midpoint index by summing the left and right pointers and dividing the result by 2 (integer division). This index represents the element in the middle of the current search range.

4. Compare the target value with the element at the midpoint index:
   - If the target value matches the element, the search is successful, and the algorithm terminates.
   - If the target value is smaller than the element, update the right pointer to the index just before the midpoint, effectively narrowing down the search range to the left half of the collection.
   - If the target value is larger than the element, update the left pointer to the index just after the midpoint, narrowing down the search range to the right half of the collection.

5. Repeat steps 3 and 4 until the target value is found or the left pointer becomes greater than the right pointer. If the left pointer exceeds the right pointer, it indicates that the target value is not present in the collection.

Binary Search offers an efficient search strategy because it eliminates half of the remaining elements at each step, leading to a logarithmic time complexity of O(log n), where n is the number of elements in the collection. This makes it particularly useful for large sorted datasets when compared to linear search algorithms.
