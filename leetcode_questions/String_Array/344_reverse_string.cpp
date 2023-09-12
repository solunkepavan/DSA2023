#include<iostream>
using namespace std;

void reverse(char name[] , int n){
    
    int s = 0;
    int e = n-1;

    while(s < e){
        swap(name[s] , name[e]);
        s++;
        e--;
    }
}

int main(){

    char name[20];

    cout << "Enter your name: " <<endl;
    cin >> name;
    cout <<"Your name is " <<name <<endl;

    int count = 0;
    int i = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    
    cout << "Length of name: "<<count<<endl;
    reverse(name ,count);

    cout << "Your name is " <<name;
}