#include<iostream>
using namespace std;


int Peakindex(int arr[] , int size){

    int start = 0 ;
    int end = size - 1;

    int mid = start + (end - start) /2;

    while (start < end){

        if ( arr[mid] < arr[mid + 1] ){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) /2;

    }
    return start;
}


int main(){

    int arr[4] = {0,10,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    int PeakIndex = Peakindex(arr, n);

    cout << "The peak index of array is : " << PeakIndex << endl;
}