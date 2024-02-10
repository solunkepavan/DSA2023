#include <iostream>

class Queue {
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return qfront == rear;
    }

    void enqueue(int data) {
        if (rear == size) {
            std::cout << "Queue is full" << std::endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if (qfront == rear) {
            return -1;
        } else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;

            if (qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        return qfront == rear ? -1 : arr[qfront];
    }
};

int main() {
    Queue myQueue;

    // Testing the Queue operations
    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);

    std::cout << "Front element: " << myQueue.front() << std::endl;

    myQueue.dequeue();
    std::cout << "Front element after dequeue: " << myQueue.front() << std::endl;

    myQueue.dequeue();
    myQueue.dequeue();

    if (myQueue.isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }

    return 0;
}
