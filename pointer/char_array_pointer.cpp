#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;//address print hoga 
    cout << ch << endl;//char array print hoga

    char *c = &ch[0];
    //print entire string 
    cout << c << endl;


    char temp = 'z';
    char *t = &temp;
    cout << t << endl;


    return 0;
}