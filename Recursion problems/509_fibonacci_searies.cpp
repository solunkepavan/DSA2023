#include<iostream>
using namespace std;

 int fib(int n) {
        
        //base case
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }

        //recursive relaton
        int ans = fib(n - 1) + fib (n - 2);
        return ans;

    }

int main(){
    int n;
    cout << "Enter the number :"<< endl;
    cin >> n;

    cout <<"fibonacci number at nth position of sesries "<<fib(n);
}