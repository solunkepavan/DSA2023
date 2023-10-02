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

class GermanShepherd: public dog{

};

int main(){

    GermanShepherd G;

    G.speak();
    cout << G.age;
    
}