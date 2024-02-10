#include <iostream>

class CircularQueue {
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        qfront = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value) {
        if ((qfront == 0 && rear == size - 1) || (rear == (qfront - 1) % (size - 1))) {
            // std::cout << "Queue is Full " << std::endl;
            return false;
        } else if (qfront == -1) {  // first element to push
            qfront = rear = 0;
        } else if (rear == size - 1 && qfront != 0) {
            rear = 0;  // to maintain cyclic flow
        } else {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue() {
        if (qfront == -1) {
            // std::cout << "Queue is empty" << std::endl;
            return -1;
        }

        int ans = arr[qfront];
        arr[qfront] = -1;
        if (qfront == rear) {  // single element is present
            rear = qfront = -1;
        } else if (qfront == size - 1) {
            qfront = 0;  // to maintain cyclic flow
        } else {
            // normal flow
            qfront++;
        }
        return ans;
    }
};

int main() {
    CircularQueue myCircularQueue(5);

    // Testing the CircularQueue operations
    myCircularQueue.enqueue(1);
    myCircularQueue.enqueue(2);
    myCircularQueue.enqueue(3);

    std::cout << "Dequeued element: " << myCircularQueue.dequeue() << std::endl;

    myCircularQueue.enqueue(4);
    myCircularQueue.enqueue(5);

    std::cout << "Dequeued element: " << myCircularQueue.dequeue() << std::endl;

    return 0;
}
