#include <iostream>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

class Solution {
private:
    // Reverses the linked list
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = nullptr;
        Node* next = nullptr;
        
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Inserts a new node at the tail of the linked list
    void insertTail(Node* &head, Node* &tail, int val) {
        Node* temp = new Node(val);
        if (head == nullptr) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

public:
    // Adds two numbers represented by linked lists.
    Node* addTwoLists(Node* first, Node* second) {
        // Reverse two linked lists for addition
        first = reverse(first);
        second = reverse(second);

        int carry = 0;
        Node* ansHead = nullptr;
        Node* ansTail = nullptr;

        while (first != nullptr || second != nullptr || carry != 0) {
            int val1 = (first != nullptr) ? first->data : 0;
            int val2 = (second != nullptr) ? second->data : 0;
            
            int sum = carry + val1 + val2;
            int digit = sum % 10;
            
            insertTail(ansHead, ansTail, digit);
            
            carry = sum / 10;

            if (first != nullptr) first = first->next;
            if (second != nullptr) second = second->next;
        }

        return reverse(ansHead);
    }
};

// Function to print the linked list
void printList(Node* n) {
    while (n != nullptr) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// Function to build the linked list
Node* buildList(int size) {
    int val;
    cin >> val;

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 0; i < size - 1; i++) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

int main() {
    int t;
    cout << "enter t value :";
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        Node* first = buildList(n);
        cin >> m;
        Node* second = buildList(m);

        Solution ob;
        Node* res = ob.addTwoLists(first, second);
        printList(res);
    }
    return 0;
}
