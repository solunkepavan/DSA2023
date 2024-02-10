#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &stack, int num) {
    // Base case
    if (stack.empty() || stack.top() < num) {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    // Recursion call
    sortedInsert(stack, num);

    stack.push(n);
}

void sortStack(stack<int> &stack) {
    // Base case
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursion call
    sortStack(stack);

    // Insert the popped element at the correct position in the sorted stack
    sortedInsert(stack, num);
}

int main() {
    stack<int> s;

    // Push elements onto the stack
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);
    s.push(5);

    // Print the original stack
    cout << "Original Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // Re-push elements onto the stack
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);
    s.push(5);

    // Sort the stack
    sortStack(s);

    // Print the sorted stack
    cout << "Sorted Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
