#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};

// Single Inheritence
class Student : public Person{
public:     
    // name age rollno
    int rollno;

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
    s1.rollno = 10;
    s1.getInfo();

    return 0;
}