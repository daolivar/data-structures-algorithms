#include <iostream>

#include "Stack.hpp"

int main() {
    std::cout << "Stack" << std::endl;

    Stack stack;

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    try {
        stack.pop(); // Attempting to pop from an empty stack
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    stack.push(5);
    stack.push(10);
    stack.push(15);

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Top element: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
