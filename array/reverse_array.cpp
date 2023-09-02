#include<iostream>
using namespace std;


int reversearray(int arr[], int size){

    int s = 0;
    int e = size - 1;
    
    while(s<=e){

        swap(arr[s], arr[e]);
        s++;
        e--;

    }
    return -1;
}

void printarray(int arr[] , int size){

    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[5] = {2,3,6,4,7};

    cout << "Original Array :"<<endl;
    printarray(arr,5);

    reversearray(arr,5);

    cout << "Reverse Array :"<<endl;
    printarray(arr,5);

    return 0;
}