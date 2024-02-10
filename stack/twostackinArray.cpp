#include <iostream>

class TwoStack {
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num) {
        //at least an empty space present
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        } else {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            return -1;
        }
    }

    // Destructor to free allocated memory.
    ~TwoStack() {
        delete[] arr;
    }
};

int main() {
    int size;
    
    // Input the size of the array for two stacks.
    std::cout << "Enter the size of the array for two stacks: ";
    std::cin >> size;

    // Create an instance of TwoStack with the given size.
    TwoStack twoStack(size);

    // Example usage:
    twoStack.push1(10);
    twoStack.push1(20);
    twoStack.push2(30);
    twoStack.push2(40);

    std::cout << "Popped element from stack 1: " << twoStack.pop1() << std::endl;
    std::cout << "Popped element from stack 2: " << twoStack.pop2() << std::endl;

    return 0;
}
