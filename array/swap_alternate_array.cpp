#include<iostream>
using namespace std;

void swapAlternate(int arr[] , int n){

    for (int i=0; i<n; i+=2){

        if( (i+1) < n){
            //swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;

        }
    }
    
}

void printArray(int arr[], int n){

    for( int i=0; i<n; i++){

        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){

    int arr[7] = {0,1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    swapAlternate(arr,n);
    
    cout << "print alternate swapped Array : " << endl;
    printArray(arr,n);
}