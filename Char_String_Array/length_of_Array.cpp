#include<iostream>
using namespace std;

int main(){

    char name[20];

    cout << "Enter your name: " <<endl;
    cin >> name;
    cout <<"Your name is " <<name <<endl;

    int count  = 0;
    int i = 0;

    while(name[i] != '\0'){
        count++;
        i++;
    }
    
    cout <<"The length of name is "<< count ;
}