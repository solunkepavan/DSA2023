#include<iostream>
using namespace std;

class A{

    public:

    void sayHello(){
        cout << "Hello DSA" << endl;    
    }

    int sayHello(char name ){
        cout << "Hello DSA" << endl;
        return 1;
    }

    void sayHello(string name ){
        cout << "Hello "<< name << endl;
    }

    void sayHello(string name ,int n){
        cout << "Hello "<< name << endl;
    }
};


class B{

    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        // int value1 = this -> a;
        // int value2 = obj.a;
        // cout << "output "<< value1 - value2 << endl;

        cout << "Hello pavan"<< endl;
    }

    void operator() (){
        cout << "Main Bracket hu "<< this -> a << endl;
    }


};

int main(){

    // A obj;
    // obj.sayHello();

    B obj1,obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    return 0;
}