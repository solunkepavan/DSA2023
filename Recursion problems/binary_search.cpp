#include<iostream>
using namespace std;

bool Binarysearch(int *arr, int s,int e, int key) {
    //base case
    if(s>e){
        return false;
    }

    int mid = s + (e - s)/ 2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return Binarysearch(arr, mid + 1, e, key);
    }
    else{
        return Binarysearch(arr, s, mid - 1, key);
    }
}

int main(){

    int arr[5] = {2,4,6,7,9};
    int key;
    cout << "Enter key "<< endl << endl;
    cin >> key;

    bool ans = Binarysearch(arr,0,5,key);

    if(ans){
        cout << "Element is found " << endl;
    }
    else{
        cout << "Element is not found" << endl;
    }

   
}