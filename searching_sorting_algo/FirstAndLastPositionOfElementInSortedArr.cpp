#include<iostream>
using namespace std;


int FirstOcc(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int ans = -1; 
    int mid = start + (end - start ) / 2;

    while(start <= end){

        if ( arr[mid] == key){

            ans = mid;
            end = mid - 1;
        }
        else if ( arr[mid] < key ){
            start = mid + 1;
        }
        else if ( arr[mid] > key ){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;

}

int LastOcc(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int ans = -1; 
    int mid = start + (end - start ) / 2;

    while(start <= end){

        if ( arr[mid] == key){

            ans = mid;
            start = mid + 1;
        }
        else if ( arr[mid] < key ){
            start = mid + 1;
        }
        else if ( arr[mid] > key ){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;

}



int main(){  

    int arr[8] = {1,2,3,3,3,4,8,9};

    cout << "The First Occurrence of 3 is at Index : " << FirstOcc(arr,8,3)<< endl;
    cout << "The last Occurrence of 3 is at Index : " << LastOcc(arr,8,3)<<endl;

    int total = (LastOcc(arr,8,3)-FirstOcc(arr,8,3)) + 1;
    cout << "Total number of Ocurrences : " << total <<endl;

    return 0;
}