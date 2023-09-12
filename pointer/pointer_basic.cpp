#include<iostream>
using namespace std;

int main(){

    int num = 5;

    cout << num << endl;

    //adress of Operator - &

    cout <<"Adress of num is : "<< &num << endl;

    int *p = &num;

    cout << "Adress is :"<< p << endl;
    cout << "value is :"<< *p << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Adress is :"<< p2 << endl;
    cout << "value is :"<< *p2 << endl;

    cout << "Size of num is :" << sizeof(num) << endl;
    cout << "size of pointer is :"<< sizeof(p) << endl;
    cout << "size of pointer is :"<< sizeof(p2) << endl;

    return 0;
}