#include<iostream>
using namespace std;



void print(int n){
    
    //base case
    if(n == 0){
        return;
    }

    cout << n << endl;

    //recursive relation
    print(n - 1);           //this is tail recursion
}

int main(){

    int n;
    cout << "Enter the number : "<< endl;
    cin >> n;

    print(n);

    return 0;
}