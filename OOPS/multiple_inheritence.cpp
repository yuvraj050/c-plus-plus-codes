#include <iostream>
using namespace std;

class Teacher{
public:
        string subject;
        double salary;

};

class Student{
 public:

        string name;
        string rollno;   
};

class Gradstudent : public Teacher, public Student{
public:
        string researchArea;

        void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Research Area: "<<researchArea<<endl;    }    
};


int main(){
    Gradstudent g1;
    g1.name = "John";
    g1.rollno = 28;
    g1.subject = "C++";
    g1.researchArea = "Cybersecurity";
    g1.getInfo();
    return 0;
}