#include<iostream>
using namespace std;

int bubblesort(int arr[], int n){

    bool swapped = false;

    for(int i = 1; i<n ; i++){

        for(int j = 0; j<n-i ; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    return 0;
}

void printarray(int arr[], int n){

        for(int i = 0; i < n; i++){

            cout << arr[i] <<" ";
        }
}

int main(){
    int arr[5] = {6,2,8,4,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,n);
    cout << "The Sorted Array is :"<<endl;
    printarray(arr,n); 
}