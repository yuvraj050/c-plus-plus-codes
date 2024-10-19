#include <iostream>
using namespace std;


class Person{ // base class
    public:
    string name;
    int age;

    Person(){
        cout<<"First base class constructor is called"<<endl;
    }
};

class Student : public Person{ // derived class
    public:

    int rollno;

    Student(){
        cout<<"Then derived class constructor is called"<<endl;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll number: "<<rollno<<endl;
    }

};

int main(){
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.rollno = 22;
    s1.getInfo();
    return 0;
}