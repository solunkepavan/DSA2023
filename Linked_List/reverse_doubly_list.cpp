#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int d) : data(d), prev(nullptr), next(nullptr) {}
};

Node* reverse(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* chotaHead = reverse(head->next);
    head->next->next = head;
    head->next->prev = nullptr;
    head->next = nullptr;
    head->prev = chotaHead;

    return chotaHead;
}

void printDoublyLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;

    // Print original doubly linked list
    cout << "Original Doubly Linked List: " << endl;
    printDoublyLinkedList(head);

    Node* reversedHead = reverse(head);

    // Print reversed doubly linked list
    cout << "Reversed Doubly Linked List: "<< endl;
    printDoublyLinkedList(reversedHead);

    // Print head of the reversed doubly linked list
    cout << "Head of Reversed Doubly Linked List: " << reversedHead->data << endl;

    return 0;
}
