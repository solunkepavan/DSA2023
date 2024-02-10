#include <iostream>
#include <vector>
using namespace std;

class NStack {
private:
    vector<int> arr;   // Single array to store elements
    vector<int> top;   // Array to store the top index of each stack
    vector<int> next;  // Array to store the next available index in the array
    int n, s;          // Number of stacks (n) and total array size (s)
    int freespot;      // Index to keep track of the next available spot in the array

public:
    // Constructor to initialize the data structure
    NStack(int N, int S) : n(N), s(S), freespot(0) {
        arr.resize(s);
        top.resize(n, -1);
        next.resize(s);

        // Initialize next array to point to the next index
        for (int i = 0; i < s - 1; i++) {
            next[i] = i + 1;
        }
        next[s - 1] = -1; // -1 denotes end of array
    }

    // Pushes an element 'X' into the 'Mth' stack. Returns true if successful, otherwise false.
    bool push(int X, int M) {
        // Check for overflow
        if (freespot == -1) {
            cout << "Stack overflow!" << endl;
            return false;
        }

        // Get the index to insert the new element
        int index = freespot;

        // Update freespot to the next available index
        freespot = next[index];

        // Insert the element into the array
        arr[index] = X;

        // Update next to point to the previous top of the stack
        next[index] = top[M - 1];

        // Update top to the new index
        top[M - 1] = index;

        return true;
    }

    // Pops the top element from the 'Mth' stack. Returns -1 if the stack is empty, otherwise, returns the popped element.
    int pop(int M) {
        // Check for underflow
        if (top[M - 1] == -1) {
            cout << "Stack underflow!" << endl;
            return -1;
        }

        // Get the index of the top element
        int index = top[M - 1];

        // Update top to the next index
        top[M - 1] = next[index];

        // Update next to the previous freespot
        next[index] = freespot;

        // Update freespot to the popped index
        freespot = index;

        // Return the popped element
        return arr[index];
    }
};

int main() {
    // Example usage of NStack
    int N = 3; // Number of stacks
    int S = 10; // Total array size

    NStack myStack(N, S);

    // Type 1: push(X, M) operations
    myStack.push(5, 1);
    myStack.push(10, 2);
    myStack.push(15, 3);

    // Type 2: pop(M) operations
    cout << "Popped from stack 1: " << myStack.pop(1) << endl;
    cout << "Popped from stack 2: " << myStack.pop(2) << endl;
    cout << "Popped from stack 3: " << myStack.pop(3) << endl;

    return 0;
}
