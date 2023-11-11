#include<iostream>
#include<map>
#include<unordered_map>

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

Node *removeDuplicates(Node *head)
{
    if(head==NULL){
         return head;
     }
    unordered_map<int , bool> visited;

    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL)
    {
        if(visited[temp->data] != true)
        {
            visited[temp->data] = true;
            prev = temp;
            temp = temp->next;
        }
        else
        {
            prev->next = temp->next;
            temp = prev->next;
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
    head -> next -> next = new Node(5);
    head -> next -> next -> next = new Node(4);

    printLinkedList(head);
    removeDuplicates(head);
    cout <<"Remove Duplicates from unordered linked list "<< endl;
    printLinkedList(head);
    

    return 0;
}