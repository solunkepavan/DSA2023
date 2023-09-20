#include<iostream>
using namespace std;

bool search(int *arr, int size, int key) {
    //base case
    if(size == 0){
        return false;
    }
    if (arr[0] == key){
        return true;
     }

    bool remainingPart = search(arr + 1, size - 1,key);
    return remainingPart;   
}

int main(){

    int arr[5] = {2,4,6,7,5};
    int key;
    cout << "Enter key "<< endl << endl;
    cin >> key;

    bool ans = search(arr,5,key);

    if(ans){
        cout << "Element is found " << endl;
    }
    else{
        cout << "Element is not found" << endl;
    }

   
}