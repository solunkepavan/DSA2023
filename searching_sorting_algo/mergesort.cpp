#include<iostream>
using namespace std;

void merge(int *arr,int s, int e){

    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    //create two arrays
    int *First = new int[len1];
    int *second = new int[len2];

    //copy element to new array
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++){
        First[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    //merge

    int Index1 = 0;
    int Index2 = 0;
    mainArrayIndex = s;

    while( Index1 < len1 && Index2 < len2 ){
        if(First[Index1] < second[Index2]){
            arr[mainArrayIndex] = First[Index1];
            Index1++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex] = second[Index2];
            Index2++;
            mainArrayIndex++;
        }
    }

    while(Index1 < len1){
            arr[mainArrayIndex] = First[Index1];
            Index1++;
            mainArrayIndex++;
    }

    while(Index2 < len2){
            arr[mainArrayIndex] = second[Index2];
            Index2++;
            mainArrayIndex++;
    }

    delete []First;
    delete []second;


}

void mergesort(int *arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }

    int mid = s + (e - s)/2;

    //left side
    mergesort(arr, s, mid);

    //right side
    mergesort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}

int main(){

    int arr[5] = {2,5,1,6,4};
    int n = 5;

    
    mergesort(arr, 0, n - 1);
     
    //print final array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}