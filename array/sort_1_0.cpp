#include<iostream>

using namespace std;

void sort_10( int arr[],int n){
  int i = 0;
  int j = n - 1;
  
    while(i<j){
        //arr[i] is on desired position
        if (arr[i]==0){
            i++;
        }
        //arr[j] is on desired position
        else if(arr[j]==1){
            j--;
        }
        // if arr[i]==1 and arr[j]==0 , both are on wrong position , so we just need to swap
        else{
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}



int main(){
    int arr[13] = {0,1,0,1,1,0,0,0,1,0,1,1,0};
     
    int n = sizeof(arr)/sizeof(arr[0]);
     
    sort_10(arr,n);

    for(int i=0; i<n; i++){
        
        cout << arr[i];
    }
   
    return 0;
}