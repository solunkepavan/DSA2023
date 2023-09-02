#include<iostream>
using namespace std;

int fact(int n){
     int f=1;
    for (int i = 1; i <=n; i++){
        
        f = f * i;
    }
    return f;
}


int ncr(int n ,int r){

    int num = fact(n);

    int dinom = fact(r) * fact(n - r);

    return num/dinom;
}

int main (){

    int n ,r;
    cout<<"Enter values of n and r :";
    cin >> n >> r;

    int ans = ncr(n,r);
    cout << "Anwser is : " << ans << endl;
}