#include<iostream>
using namespace std;

class animal{

    public:
        int age;
        int weight;
    
    public:

    void bark(){
        cout << "barking "<< endl;
    }    
};

class human{
    public:
    string color;

    public:

    void speak(){
       cout << "Speaking "<< endl; 
    }
};

//multiple inheritance
class hybrid: public animal , public human{

};

int main(){

    hybrid h1;

    h1.bark();
    h1.speak();
    cout << h1.age;
    
}