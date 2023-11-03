#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

};


Node *reverse(Node *head){

    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* chotaHead = reverse(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;

}

void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << endl;
}


int main(){

    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);



    //print original  linked list 
    printLinkedList(head);

    Node* reversedHead = reverse(head);

    //print reverse linked list 
    printLinkedList(reversedHead);

    //print head of reverse linked list
    cout << "Head of reverse Linked List :" << reversedHead -> data << endl;

    return 0;
}