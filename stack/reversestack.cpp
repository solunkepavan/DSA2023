#include <iostream>
#include <stack>

void insertAtBottom(std::stack<int> &stack, int num) {
    // base case
    if (stack.empty()) {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    // recursive call
    insertAtBottom(stack, num);

    stack.push(n);
}

void reverseStack(std::stack<int> &stack) {
    // base case
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    // insert at the bottom
    insertAtBottom(stack, num);
}

int main() {
    std::stack<int> myStack;

    // Assuming you want to push elements onto the stack
    int elements[] = {1, 2, 3, 4, 5};

    for (int element : elements) {
        myStack.push(element);
    }

    std::cout << "Original Stack: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    // Reset the stack
    for (int element : elements) {
        myStack.push(element);
    }

    reverseStack(myStack);

    std::cout << "\nReversed Stack: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
