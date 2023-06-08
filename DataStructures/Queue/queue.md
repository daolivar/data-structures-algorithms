# Queue

A queue is a fundamental data structure in computer science that follows the First-In-First-Out (FIFO) principle. It is similar to a real-life queue, such as waiting in line at a supermarket, where the first person to join the line is the first one to be served. In a queue data structure, elements are inserted at one end, known as the rear or tail, and removed from the other end, called the front or head.

The operations typically supported by a queue are:

1. Enqueue: This operation adds an element to the rear of the queue. As a result, the size of the queue increases by one, and the new element becomes the last item in the queue.

2. Dequeue: This operation removes the element from the front of the queue. The size of the queue decreases by one, and the element that was added first is removed.

3. Peek or Front: This operation retrieves the element at the front of the queue without removing it. It allows you to examine the next element that will be dequeued.

Queues can be implemented using various data structures, such as arrays or linked lists. The choice of implementation depends on the specific requirements of the problem and the operations being performed.

One common application of queues is in breadth-first search algorithms, where the queue helps maintain the order in which nodes are explored. Queues are also useful for managing asynchronous tasks or events, where elements are processed in the order they were received.

It's important to note that some variations of queues exist, such as priority queues, where elements have associated priorities that determine the order in which they are dequeued. Additionally, circular queues or circular buffers can wrap around to the beginning once the end is reached, effectively utilizing the available space efficiently.

In summary, a queue is a data structure that follows the FIFO principle, allowing elements to be added at one end and removed from the other. It provides a simple and efficient way to manage and process elements in the order they were added, making it a valuable tool in various computer science applications.
