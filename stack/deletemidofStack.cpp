#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>& inputStack, int count, int N) {
    //base case
    if (count == N / 2) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    //recursion call 
    solve(inputStack, count + 1, N);

    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}

int main() {
    stack<int> inputStack;

    // Assuming N is the number of elements in the stack
    int N;
    cout << "Enter the number of elements in the stack: ";
    cin >> N;

    cout << "Enter the elements of the stack: ";
    for (int i = 0; i < N; ++i) {
        int element;
        cin >> element;
        inputStack.push(element);
    }

    deleteMiddle(inputStack, N);

    // Print the modified stack
    cout << "Stack after deleting middle element: ";
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }

    return 0;
}

