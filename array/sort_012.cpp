#include<iostream>

using namespace std;

void sort_10( int arr[],int n){
  int i = 0;

  int mid = 0;
  int j = n - 1;

    while(mid <= j){
       
       if( arr[mid] == 0){

        swap (arr[mid],arr[i]);
        i++;
        mid++;
       }
       else if( arr[mid] == 1){

           mid++;
       }
       else if (arr[mid] == 2){

            swap (arr[mid],arr[j]);
            j--;
       } 
    }
}

int main(){
    
    int arr[23] = {0,1,2,1,1,0,2,0,2,0,1,0,2,2,0,1,1,0,1,0,1,0,2};
     
    int n = sizeof(arr)/sizeof(arr[0]);
     
    sort_10(arr,n);

    for(int i=0; i<n; i++){
        
        cout << arr[i];
    }
    return 0;
}