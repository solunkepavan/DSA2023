#include<iostream>
using namespace std;

class animal{

    public:
        int age;
        int weight;
    
    public:

    void speak(){
        cout << "speaking "<< endl;
    }

      
};

class dog: public animal{

};

int main(){

    dog d1;

    d1.speak();
    cout << d1.age;
    
}