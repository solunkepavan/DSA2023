#include<iostream>
using namespace std;

int sumofArray(int arr[],int size)
{
    int sum = 0;
     for(int i=0;i<size;i++){

        sum = sum + arr[i];
     }
     return sum;
}

int main(){

    int size;

    cout << "Enter size of Array : " ;
    cin >> size; 
    int arr[100] ;

    for(int i=0;i<size;i++){

        cin >> arr[i];
    }
    cout << endl;
    cout << "The sum of array element is : " << sumofArray(arr,size)<< endl<< endl;
    
    
    

}