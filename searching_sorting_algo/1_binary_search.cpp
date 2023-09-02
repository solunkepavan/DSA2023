#include<iostream>
using namespace std;


int binarysearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end){

        if ( key == arr[mid] ){

            return mid;
        }

        //search right side of mid
        else if ( key > arr[mid] ){

            start = mid + 1;
        }

        //search left side of mid
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}


int main(){

    int evan[6] = {2,5,7,9,15,25};
    int odd[5] = {1,3,14,51,24};

    int evenIndex = binarysearch(evan, 6, 25);
    cout << "The index of 25 is : " << evenIndex << endl;

    int oddIndex = binarysearch(odd, 5, 51);
    cout << "The index of 51 is : " << oddIndex << endl;
}