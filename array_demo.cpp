#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
    cout << "Printing reverse array : "<< endl <<endl;
      
    for( int i=size-1; i>=1 ; i--){
        
        cout << arr[i]<<" ";
     }
     cout << endl;
     //cout << "printing array done .."<< endl<<endl;
}

int main(){

    int arr[7] = {0,1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);

    printarray(arr,size);

    //int arr2[10] = {0,1,34,56,77};
   // printarray(arr2,10); 
     

}