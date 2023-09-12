#include<iostream>
using namespace std;

int main(){

//1
    /*
    //int arr[10] = {2,9,5,67};
    int arr[10] = {23,122,41,67};

    //both are correct for first location
    cout << "Address of first memory of array is :"<< arr << endl;
    cout << "Address of first memory of array is :"<< &arr[0] << endl;

    cout <<"4th "<< *arr << endl; //2
    cout <<"4th "<< *(arr + 1) << endl; // 9

    cout << "5th "<< arr[2] << endl; //41
    cout <<"5th " << *(arr + 2) << endl; //41 

    int i = 3;
    cout << i[arr] << endl; //67
    */

//1st diffrence of array and pointer
//size diffrence of array and pointer
    /*
    int temp[10];
    cout << sizeof(temp) << endl;
    cout <<"1st " << sizeof(*temp) << endl; //4
    cout <<"2nd " << sizeof(&temp) << endl; //4


    int *p = &temp[0];
    cout << sizeof(p) << endl; //8 bytes
    cout << sizeof(*p) << endl; //4 bytes
    cout << sizeof(&p) << endl; //4 bytes

    */

//2nd Diffrence of array with pointers
//Address difrence
    /*
    int a[20] = {1,2,3,5};

    cout <<"-> " <<&a[0] << endl;
    //cout << &a << endl;
    //cout << a << endl;

    int *p = &a[0];
    //cout << p << endl;  
    //cout << *p << endl;
    cout <<"-> "<< &p << endl;
    */

//3rd Diffrence of array with pointers
//symbol table ka cntent -> can not change 

    int arr[10];
//error
    //arr = arr + 1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;


}