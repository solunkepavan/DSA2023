#include<iostream>
using namespace std;

//to print row wise sum
void rowsum(int arr[][4], int i ,int j){
    cout << "Printing Sum of row :"<<endl;
    
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
             sum = sum + arr[i][j];
        }
        cout << sum <<" ";
    }   
    cout << endl;
}

//to print col wise sum
void colsum(int arr[][4], int i ,int j){
    cout << "Printing Sum of cols :"<<endl;
    
    for(int j = 0; j<3; j++){
        int sum = 0;
        for(int i = 0; i<4; i++){
             sum = sum + arr[j][i];
        }
        cout << sum <<" ";
    }   
    cout << endl;
}



bool isPresent(int arr[][4],int target, int i ,int j){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j] == target){
                return 1;
            } 
        }
    }   
    return 0;
}

int main(){

    //int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int arr[3][4];
    
    
    //input array
    cout << "Enter the Elements :"<<endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[j][i]; 
        }
   
    }

    //print array
    cout <<"Printing array :"<<endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j]<<" ";; 
        }
        cout << endl;
    }


    int target;
    cout << "Enter target :"<< endl;
    cin >> target;


    if(isPresent(arr,target,3,4)){
        cout << "Element found "<< endl;
    }
    else{
        cout << "Element not found "<< endl;
    }

    rowsum(arr,3 ,4);
    colsum(arr,3 ,4);
  
}