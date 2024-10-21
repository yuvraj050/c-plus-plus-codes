#include <iostream>
using namespace std;

class Person{
public: 
        string name;
        int age;
        // Parameterized constructor
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }

            // Non-Parameterized constructor
        // Person(){
        //     cout<<"Base class constructor"<<endl;
        // }

        // Destructor
        ~Person(){
            cout<<"Base Destructor"<<endl;
        }
};

// Inheritence
class Student : public Person{
public:     
    // name age rollno
    int rollno;

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll number: "<<rollno<<endl;
    }

    // Parameterized const of base class is to executed manually then in student class
    Student(string name, int age, int rollno) : Person(name, age){
        this->rollno = rollno;
    }

    //Non Parameterized constructor
    // Student(){
    //     cout<<"Derieved class constructor"<<endl;
    // }
    // Destructor
    ~Student(){
        cout<<"Derieved class destructor"<<endl;
    }

};

int main(){

    Student s1("John", 22, 10);
    // s1.name = "John";
    // s1.age = 20;
    // s1.rollno = 10;
    s1.getInfo();

    return 0;
}