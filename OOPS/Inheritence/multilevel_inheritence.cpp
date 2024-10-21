#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};


class Student : public Person{
public:     
    // name age rollno
    int rollno;
};

// Multilevel inheritence
class Gradstudent : public Student{
public:
        string researchArea;

        void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Research Area: "<<researchArea<<endl;
    }

};

int main(){

    Gradstudent g1;
    g1.name = "John";
    g1.age = 20;
    g1.rollno = 10;
    g1.researchArea = "Cybersecurity";
    g1.getInfo();

    return 0;
}