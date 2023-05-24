# Linear Search

The linear search algorithm, also known as a sequential search, is a simple and straightforward method used to find a specific element within a collection of data. It operates by sequentially examining each element in the collection until a match is found or the entire collection has been traversed.

The linear search algorithm starts at the beginning of the collection and compares the target element with each element in order, one by one. If a match is found, the search is considered successful, and the algorithm returns the index or position of the matched element. However, if the entire collection is traversed without finding a match, the search is considered unsuccessful, and the algorithm returns a sentinel value, often -1, to indicate the absence of the target element.

This algorithm is applicable to various data structures, including arrays, linked lists, and even unordered sets. It does not require the collection to be sorted, making it a versatile and flexible searching technique.

The time complexity of the linear search algorithm is O(n), where n represents the number of elements in the collection. Since the algorithm checks each element one by one, the worst-case scenario occurs when the target element is either the last element in the collection or not present at all. In such cases, the algorithm will need to examine every element in the collection, resulting in a linear relationship between the input size and the time taken to complete the search.

Although the linear search algorithm is simple to implement, its efficiency decreases as the size of the collection increases. For large collections or situations that require frequent searching, more efficient algorithms like binary search or hash-based techniques are preferred. However, the linear search remains useful in scenarios where the collection is small or unsorted, and the overhead of sorting or setting up additional data structures is not justified.
