#include <iostream>
using namespace std; 

// Define the Node structure for a singly linked list
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted linked lists
Node* sortTwoLists(Node* first, Node* second) {
    if (first == nullptr) return second;
    if (second == nullptr) return first;

    if (first->data <= second->data) {
        first->next = sortTwoLists(first->next, second);
        return first;
    } else {
        second->next = sortTwoLists(second->next, first);
        return second;
    }
}

// Function to print a linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Create two sorted linked lists
    Node* firstList = new Node(1);
    firstList->next = new Node(3);
    firstList->next->next = new Node(5);

    Node* secondList = new Node(2);
    secondList->next = new Node(4);
    secondList->next->next = new Node(6);

    cout << "First list: ";
    printList(firstList);

    cout << "Second list: ";
    printList(secondList);

    // Merge and sort the two lists
    Node* sortedList = sortTwoLists(firstList, secondList);

    cout << "Merged and sorted list: ";
    printList(sortedList);

    return 0;
}
