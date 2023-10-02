#include<iostream>
using namespace std;


void bubbleSort(int *arr, int n ){

    //base case -> alredy sorted
    if( n == 0 || n == 1){
        return;
    }

    //1st case soled -> 

    for(int i = 0; i < n-1; i++){
        if( arr[i] > arr[i+1] ){
            swap(arr[i], arr[i+1]);
        }
    bubbleSort(arr, n-1);
    }
}

int main(){

    int arr[5] = {2,5,1,6,9};

    bubbleSort(arr , 5);

    for( int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}