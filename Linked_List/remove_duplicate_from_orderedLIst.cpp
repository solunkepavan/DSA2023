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

Node * removeDuplicates(Node *head)
{
     if(head == NULL){
        return NULL;
    }

    Node* curr = head;

    while(curr != NULL){

        if((curr -> next != NULL)&& curr -> data == curr -> next -> data){
            
            Node* next_next = curr -> next -> next;
            Node* nodetodelete = curr -> next;
        
            delete(nodetodelete);
            curr -> next = next_next;
           
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
}

void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << endl;
}


int main(){

    Node* head = new Node(4);
    head -> next = new Node(2);
    head -> next -> next = new Node(2);
    head -> next -> next -> next = new Node(5);

    printLinkedList(head);
    removeDuplicates(head);
    cout <<"Remove Duplicates from ordered linked list "<< endl;
    printLinkedList(head);
    

    return 0;
}