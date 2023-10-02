#include<iostream>
using namespace std ;


class student{

    private:
        string name;
        int age;
        int height;
    
    public:

    int getAge(){
        return this-> age;
    }
};

int main(){

    //object creation
    student first;

    cout << "Execute very well";
}