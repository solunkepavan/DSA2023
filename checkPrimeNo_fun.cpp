#include<iostream>
using namespace std;

// 1 -> prime number
// 0 -> not a prime number
int isPrime(int n){
    
    bool isPrime = 1;

    for(int i = 2; i<n; i++){
     
     if (n % i == 0){
        return 0;
        }
    }
    return 1;
}


int main(){

    int n ;

    cout << "Enter any number : "<< endl;
    cin>>n;

    if(isPrime(n)){
        cout<< " it is a prime number "<< endl;
    }
    else{
    cout << "it is not a prime number"<< endl; 
    }
}