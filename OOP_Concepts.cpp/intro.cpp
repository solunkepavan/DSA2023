
#include<iostream>
#include<cstring>
using namespace std;

class student{

    //properties 

    private:
    int roll;
    char Name;

    public:
    int RollNumber;
    char *name;
   
    //simple constructor
    student(){
        cout << "Simple constructor called " << endl;
        name = new char[100];
    }


   //copy constructor
    student (student& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout << "copy constructor called "<< endl;
        this->RollNumber = temp.RollNumber;
        this->Name = temp.Name;
    }


   //parametriesed construction 
    // student(int RollNumber, char name){
        
    //     this->  RollNumber = RollNumber;                
    //     this-> name = name;
    // }

    void print(){
        cout << endl;
        cout <<"[ Name :"<< this->name <<"  ,";
        cout << "RollNumber: " << this->roll <<" ]";
        cout << endl;
    }

    int getroll(){
        return roll;
    }

    char getName(){
        return Name;
    }

    void setroll(int r){
        roll = r;
    }

    //


    void setname(char name[]){
        strcpy(this->name, name);
    }
};

int main(){

    student pavan;
    pavan.setroll(68);
    char N[6] = "Pavan";
    pavan.setname(N);

    pavan.print();

    //use default copy constructor
    student pavan2(pavan);
    pavan2.print();


    pavan.name[0] = 'A';
    pavan.print();

    pavan2.print();

    pavan = pavan2;
    pavan.print();
    pavan2.print();


    // student ankit(25,'s');
    // ankit.print();

    // //copy construction
    // student sham(ankit);
    // sham.print();

    /*
    //parametrised constructor called by creating object
    student a(10,'p');
    cout << a.name << endl;
    cout << a.RollNumber << endl;


    //parametrised constructor called by creating object dynamically
    student *temp = new student(20,'d');
    cout << temp->name << endl;
    cout << temp->RollNumber << endl;
    */
    
    /*
    //static allocation
    student s2;
    s2.setroll(34);
    s2.setName('P');
    cout << "Roll number :"<< s2.getroll() << endl;
    cout << "Name :"<< s2.getName() << endl;

    //Dynamically allocate
    student *s3 = new student;
    s3->setroll(45);
    s3->setName('A');
    cout << "Roll :"<< s3->getroll() << endl;
    cout << "Name :"<< s3->getName() << endl;

    cout << "roll :"<< (*s3).getroll() << endl;
    cout << "name :"<< (*s3).getName() << endl;

    */

    /*
    //creating object 
    student s1;
    
    //getter
    cout << "Roll numbr of student :"<< s1.getroll() << endl;
    cout << "Name of student : "<< s1.getName() << endl;

    //use setter
    //s1.setName('p');
    s1.setroll(58);

    s1.RollNumber = 65;
    s1.name = 'P';

    cout << "Rollnumber of student :"<< s1.RollNumber << endl;
    cout << "name of student :"<< s1.name << endl;
    */
    
    return 0;
}

