#include<iostream>
using namespace std;



int  fibonnaci( int n){

        int a = 0;
        int b = 1;
        int nextnumber;
        for (int i = 2; i < n; i++){

            nextnumber = a + b;
            //return nextnumber;
            a = b;
            b = nextnumber;

        }
        return nextnumber;
        //or return b; also
       
}

int main(){
    int n;

    cout << "Enter value of n : " << endl;
    cin >> n;

    int ans =fibonnaci(n);

    cout << "nth Fibonnaci number is : " << ans << endl;


}