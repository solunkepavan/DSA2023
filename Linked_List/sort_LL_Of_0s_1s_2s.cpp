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

//linked list input from user by using insert function 
void insert(struct Node **head, int data) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = NULL;

  if (*head == NULL) {
    *head = new_node;
  } else {
    struct Node *temp = *head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_node;
  }
}

Node* sortlinkedlist(Node* head){
    if(head == NULL){
        return NULL;
    }

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL){
        if(temp -> data == 0){
            zeroCount ++;
        }
        else if(temp -> data == 1){
            oneCount ++;
        }
        else{
            twoCount ++;
        }

        temp = temp -> next; 
    }

    temp = head ;

    while (temp != NULL){

        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if ( oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }
        else{
            temp -> data = 2;
            twoCount--;
        }
        
        temp = temp -> next ;
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

    
    struct Node *head = NULL;
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cout << "Enter the data for node " << i + 1 << ": ";
        cin >> data;
        insert(&head, data);
    }

    cout << "The linked list is: ";
    printLinkedList(head);
    cout << endl;

    sortlinkedlist(head);

    cout << "The sorted Linked List :"<< endl;
    printLinkedList(head);

        

    return 0;
}