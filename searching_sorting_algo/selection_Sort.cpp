#include<iostream>
using namespace std;

int selectionsort(int arr[] ,int n){

    for(int i = 0; i<n-1; i++){
        
        int minIndex = i;
        for(int j = i+1; j<n; j++){

            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
            
        }
        swap(arr[minIndex],arr[i]);
    }
    return 0;
}

void printarray(int arr[] ,int n ){

    for(int i = 0; i < n; i++){

        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[5] = {4,3,8,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr,n);
    cout << "The sorted array is :";
    printarray(arr,n);


}