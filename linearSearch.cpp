#include<iostream>
using namespace std;


bool search( int arr[] , int n,int key){


     
    bool is_found = false;

    for( int i=0; i<n; i++){

        if ( key == arr[i]){

            is_found = true;
        }

    }
     if(is_found == true){

        cout << endl << "Element is found "<< endl;
     }
     else{
        cout << endl <<"Element is not found "<< endl <<endl;
     }

     return 0;
}

int main(){

    int arr[10] = {0,1,21,-3,43,5,6,-7,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout << "Enter the key : ";
    cin >> key;
    //wheather 3 is present in it or not 
    search(arr,n,key);

    
}