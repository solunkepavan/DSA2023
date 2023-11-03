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


Node *findMiddle(Node *&head) {
    // Write your code here
   // return getMiddle(head);
   if(head == NULL || head -> next == NULL){
        return head;
    }

    if(head -> next -> next == NULL){
        return head -> next;
    }

    Node* s = head, *f = head;
    
    while(f && f -> next){
        s = s -> next;
        f = f -> next -> next;
    }
    return s;
}

int main(){

    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);    

    Node* a = findMiddle(head);

    cout << "Middle element of linked list is : "<< a -> data<< endl;


    return 0;
}