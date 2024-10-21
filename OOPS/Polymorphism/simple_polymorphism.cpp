#include <iostream>
using namespace std;

class Student{
public: 
        string name;

        Student(){
            cout<<"Non-Parameterized constructor"<<endl;
        }

        Student(string name){
            this->name = name;
        }    
};
int main(){

    Student s1; // calling non-parametrized const
    s1.name = "John";
    cout<<s1.name<<endl;

    //Student s1("Donald"); // calling parameterized const 

    // it is called constructor overloading which is the example of constructor overloading
    // comple time polymorphism


    return 0;
}