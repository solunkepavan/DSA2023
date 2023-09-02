#include<iostream>
using namespace std;


int AP(int n){

    int ans = (3 * n) + 7;
    return ans;
}

int main(){

    int n;

    cout << "Enter value of n : "<< endl;
    cin >> n;
    
    int ap = AP(n);

    cout << ap << endl;
}