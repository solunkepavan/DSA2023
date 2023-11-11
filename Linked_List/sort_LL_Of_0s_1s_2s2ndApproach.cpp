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

void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head) {
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    while (curr != NULL) {
        int value = curr->data;

        if (value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1) {
            insertAtTail(oneTail, curr);
        }
        else {
            insertAtTail(twoTail, curr);
        }

        curr = curr->next;
    }

    // Merge 3 sublists
    if (oneHead->next != NULL) {
        zeroTail->next = oneHead->next;
    }
    else {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // Update the head of the sorted list
    head = zeroHead->next;

    // Delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head; // Return the sorted head
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

    sortList(head);

    cout << "The sorted Linked List :"<< endl;
    printLinkedList(head);

        

    return 0;
}