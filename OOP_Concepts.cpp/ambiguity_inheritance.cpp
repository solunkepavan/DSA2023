#include<iostream>
using namespace std;

class A{

    public:
    void func(){
        cout <<" Its class A "<< endl; 
        
    }   
};

class B {

    public:
    void func(){
        cout <<" Its class B "<< endl; 

    }
};

class C: public A , public B {

};

int main(){

    C obj;
    
    obj.A::func();
    obj.A::func();
    
    
    
    return 0;
}