#include <iostream>
using namespace std;


class Person{
public:
        string name;
        int age;    
};
class Student : public Person{
public:
        int rollno; 

        void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll number: "<<rollno<<endl;
    }   
};

class Teacher : public Person{
public:
        double salary;

        void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }    
};
int main(){
    Student s1;
    s1.name = "John";
    s1.age = 22;
    s1.rollno = 15;
    s1.getInfo();

    Teacher t1;
    t1.name = "Donald";
    t1.age = 32;
    t1.salary = 72000;
    t1.getInfo();
    return 0;
}