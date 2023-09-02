#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter the value of n : ";

    cin >> n;
    int prod = 1;
    int sum = 0;

    while( n != 0){

        int ldigit = n % 10;
        prod = prod * ldigit;
        sum =  sum + ldigit;
        n = n / 10;

    }

    int result = prod - sum;

    cout << result;
}