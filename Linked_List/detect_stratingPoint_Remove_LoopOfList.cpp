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

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* floydDetectLoop(Node* head) {

    //empty list 
    if( head == NULL ){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while( slow != NULL && fast != NULL ){
        fast = fast -> next;
        if( fast != NULL ){
            fast = fast -> next;
        }

        slow = slow -> next;

        if( slow == fast){
            //cout << "present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;
}

Node* getStartingNode(Node* head){
    //empty list 
    if(head == NULL){
        return NULL;
    }

    Node* Intersection  = floydDetectLoop(head); 
    Node* slow = head;
    while(slow != Intersection){
        slow = slow -> next;

        Intersection = Intersection -> next;
    }
    return slow;

}

Node* removeLoop(Node* head){
    //emty list 
    if(head == NULL){
        return NULL;
    }

    Node* StartNode = getStartingNode(head);
    if(StartNode == NULL){
        return head;
    }
    Node* temp = StartNode;

    while( temp ->next != StartNode ){
        temp = temp -> next;
    }

    temp -> next = NULL;
    return head;
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    head -> next = new Node(12);
    head -> next -> next = new Node(15);
    head -> next -> next -> next = new Node(22);

    head -> next -> next -> next -> next = head -> next;
    //print(head);

    cout << floydDetectLoop(head);

    Node* startingnode = getStartingNode(head);
    cout <<endl <<"starting node of loop "<< startingnode -> data << endl;

    removeLoop(head);
    print(head);
    return 0;
}