#include <iostream>
#include <stack>
using namespace std;

class SpecialStack {
    // define datamembers
    stack<int> s;
    int mini;

public:
    void push(int data) {
        //for 1st element
        if (s.empty()) {
            s.push(data);
            mini = data;
        } else {
            if (data < mini) {
                s.push(2 * data - mini);
                mini = data;
            } else {
                s.push(data);
            }
        }
    }

    void pop() {
        if (s.empty()) {
            return;
        }

        int curr = s.top();
        s.pop();

        if (curr > mini) {
            //return curr;
        } else {
            int prevmin = mini;
            int val = 2 * mini - curr;
            mini = val;
            //return prevmin;
        }
    }

    int top() {
        if (s.empty()) {
            return -1;
        }

        int curr = s.top();
        if (curr < mini) {
            return mini;
        } else {
            return curr;
        }
    }

    int getMin() {

        if (s.empty())
            return -1;

        return mini;
    }
};

int main() {
    SpecialStack specialStack;

    // Push elements to the special stack
    specialStack.push(3);
    specialStack.push(5);
    cout << "Top element: " << specialStack.top() << endl; // Output: 5
    cout << "Minimum element: " << specialStack.getMin() << endl; // Output: 3

    specialStack.push(2);
    specialStack.push(1);
    cout << "Top element: " << specialStack.top() << endl; // Output: 1
    cout << "Minimum element: " << specialStack.getMin() << endl; // Output: 1

    specialStack.pop();
    cout << "Top element after pop: " << specialStack.top() << endl; // Output: 2
    cout << "Minimum element after pop: " << specialStack.getMin() << endl; // Output: 2

    return 0;
}
