#include<iostream>
using namespace std;

int findunique(int arr[] , int n){

    int ans = 0;

    for(int i=0; i<n; i++){

        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){

    int arr[5] = {3,1,1,3,4};

    int uniquenumber = findunique(arr,5);

    cout << "Uniquenumber: " << uniquenumber << endl;
}