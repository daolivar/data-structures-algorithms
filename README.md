# Data Structures & Algorithms

This repository contains various implementations of data structures and algorithms using C++. It serves as a comprehensive resource for learning and practicing fundamental concepts in computer science.

## Table of Contents

- [Introduction](#introduction)
- [Data Structures](#data-structures)
- [Algorithms](#algorithms)
- [Compiling and Running C++ Programs](#compiling-and-running-c-programs)
<!-- - [Languages](#languages) -->
<!-- - [Usage](#usage) -->
<!-- - [Contributing](#contributing) -->
<!-- - [License](#license) -->

## Introduction

This repository contains a wide range of data structures and algorithms implemented in C++. It aims to help developers enhance their understanding of fundamental data structures and algorithms and provide them with practical implementations that can be utilized in their own projects.

## Data Structures

The following data structures are currently included in this repository:
- [Array (Dynamic)](./DataStructures/Dynamic-Array/dynamic-array.md)
- Linked List
    - [Singly Linked List](./DataStructures/LinkedLists/SinglyLinkedList/singly-linked-list.md)
    - [Singly Linked List (Tail Pointer)](./DataStructures/LinkedLists/SinglyLinkedListTail/singly-linked-list-with-tail.md)
    - [Doubly Linked List](./DataStructures/LinkedLists/DoublyLinkedList/doubly-linked-list.md)
- [Stack](./DataStructures/Stack/stack.md)
- [Queue](./DataStructures/Queue/queue.md)

## Algorithms
- Search Algorithms
    - [Linear Search](./Algorithms/Searching/LinearSearch/linear-search.md)
    - [Binary Search](./Algorithms/Searching/BinarySearch/binary-search.md)
- Sorting Algorithms
    - [Bubble Sort](./Algorithms/Sorting/BubbleSort/bubble-sort.md)
    - [Insertion Sort](./Algorithms/Sorting/InsertionSort/insertion-sort.md)
    - [Selection Sort](./Algorithms/Sorting/SelectionSort/selection-sort.md)

## Compiling and Running C++ Programs

To compile and run a C++ program in this project, follow the instructions below. We will use the example of the `Dynamic Array` program located at `data-structures-algorithms/data-structures/DynamicArray/`.

1. Open your terminal or command prompt.

2. Navigate to the program folder using the `cd` command. Enter the following command:
   ```shell
   cd data-structures-algorithms/data-structures/DynamicArray/
   ```

3. Compile the program files by running the following command:
   ```shell
   make -f ../../Makefile
   ```
   This command uses the provided makefile located in the project root directory to compile the necessary source files and generate the executable program. Note that the relative path to the makefile may vary depending on the current directory.

4. Once the compilation is successful, you can run the program using the following command:
   ```shell
   ./program
   ```
   This command executes the compiled program, allowing you to observe the program's output or interact with it based on its implementation.

5. If you want to remove the build artifacts and clean up the program folder, use the following command:
   ```shell
   make -f ../../Makefile clean
   ```
   This command deletes the `build` directory (containing object files) and the `program` executable.

By following these instructions, you can compile and run the C++ programs in this repository using the provided makefile.

**Note:** Make sure you have the necessary dependencies and a valid C++ compiler installed on your system.
