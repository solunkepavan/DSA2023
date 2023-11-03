#include<iostream>
using namespace std;

class A{

    public:

    void fun1(){
        cout <<"Inside function 1 "<< endl; 
        
    }   
};

class D{

    public:

    void fun4(){
        cout <<"Inside function 4 "<< endl; 
        
    }   
};



class B: public A {
    
    public:
    void fun2(){
        cout <<"Inside function 2 "<< endl; 

    }
};

class C: public A , public D {

    public:
    void fun3(){
        cout <<"Inside function 3 "<< endl; 
        
    }
};

int main(){

    A object1;
    object1.fun1();

    B object2;
    object2.fun2();
    object2.fun1();

    C object3;
    object3.fun3();
    object3.fun4();
    object3.fun1();
    
    return 0;
}