#include<iostream>
using namespace std;

int partition(int *arr,int s, int e){

    int pivot = arr[s];
    int count = 0;

    for(int i = s+1; i < e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    //place pivot at right position
    int PivotIndex = s + count;
    swap(arr[PivotIndex], arr[s]);

    //left right part
    int i = s;
    int j = e;
 
    while(i < PivotIndex && j > PivotIndex){

        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < PivotIndex && j > PivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return PivotIndex;
}

void quicksort(int *arr , int s, int e){

    //base case
    if( s >= e)
        return;
    
    //partition
    int p = partition(arr, s, e);

    //left part sort
    quicksort(arr, s, p-1);

    //right part sort
    quicksort(arr, p+1, e);
}

int main(){

    int arr[5] = {2,4,1,6,9};
    int n = 5;

    quicksort(arr,0,n-1);

    for(int i = 0; i < n; i++){

        cout << arr[i] << " ";

    }cout << endl;

    return 0;
}