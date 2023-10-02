#include<iostream>
using namespace std;

/*
void reverse(string& str, int i, int j){

    //base case
    if(i > j){
        return;
    }

    swap( str[i], str[j]);
    i++;
    j--;

    //recursive call
    reverse( str, i, j );
}


int main(){

        string name = "abcde";
        cout << endl ;
        reverse(name, 0, name.length() - 1);
        
        cout << name << endl << endl;

    return 0;
}

*/


//using single pointer 
void reverse(string& str, int n){

    static int i = 0;
    //base case
    if(i >= n/2){
        return;
    }

    swap( str[i], str[n-i-1]);
    i++;
    

    //recursive call
    reverse( str, n );

    i = 0;
}


int main(){

        string name = "abcde";
        cout << endl ;
        reverse(name,name.length());
        
        cout << name << endl << endl;

    return 0;
}