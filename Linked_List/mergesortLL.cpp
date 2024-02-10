#include <iostream>
using namespace std; 

// Define the Node structure for a singly linked list
struct node {
    int data;
    node* next;
    
    node(int val) : data(val), next(nullptr) {}
};

node* getmid(node* head){
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}

// Function to print a linked list
void printList(node* head) {
    node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

node* merge(node* left, node* right){

    if(left == NULL){
        return right;
    }

    if(right == NULL){
        return left;
    }

    node* ans = new node(-1);
    node* temp = ans;

    //merge two sorted LL

    while(left != NULL && right != NULL){

        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }

    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next;
    }

    ans = ans -> next;
    return ans;
}


node* mergeSort(node *head) {
    
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    //find mid and divide list 
    node* mid = getmid(head);

    node* left = head;
    node* right = mid -> next;
    mid -> next = NULL;

    //recursion calls
    left = mergeSort(left);
    right = mergeSort(right);

    //merge both left and right halve
    node* Result = merge(left , right);

    return Result;
}

int main() {
    // Create two sorted linked lists
    node* head = new node(1);
    head->next = new node(9);
    head->next->next = new node(5);

    // Merge and sort the two lists
    node* sortedList = mergeSort(head);

    cout << "Merged and sorted list: ";
    printList(sortedList);

    return 0;
}

// flatten linked list sort

Node* merge(Node* left, Node* right){

    if(left == NULL){
        return right;
    }

    if(right == NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;
}
    //merge two sorted LL
    /*
    while(left != NULL && right != NULL){

        if(left -> data < right -> data){
            temp -> child = left;
            temp = left;
            left = left -> child;
        }
        else{
            temp -> child = right;
            temp = right;
            right = right -> child;
        }
    }

    while(left != NULL){
        temp -> child = left;
        temp = left;
        left = left -> child;
    }

    while(right != NULL){
        temp -> child = right;
        temp = right;
        right = right -> child;
    }

    ans = ans -> child;
    return ans;
}


Node* flattenLinkedList(Node* head) 
{
	//base case
	if( head -> next == NULL){
		return head;
	}

	Node* down = head;
	

	Node* right = flattenLinkedList(head -> next);
	down -> next = NULL;
	
	Node* ans = merge(down , right);

	return ans;
}
*/