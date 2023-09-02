#include<iostream>

using namespace std;

void intersections( int arr1[],int arr2[],int n,int m){

    int i = 0;
    int j = 0;
    

    while(i < n && j < m){

        if(arr1[i] == arr2[j]){

            cout << arr1[i] <<" ";
            i++;
            j++;
        }
        else if( arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
        
    }
    
}

int main(){
     int arr1[5] = {1,2,2,4,9};
     int arr2[4] = {2,3,4,9};

     int n = sizeof(arr1)/sizeof(arr1[0]);
     int m = sizeof(arr2)/sizeof(arr2[0]);

   intersections(arr1, arr2 ,n,m);
   
   return 0;
}