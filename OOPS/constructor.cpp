// special method invoked automatically during object creation. Used in Initialization
// cons called only one time at object creation
// cons declared only public
// memory allocation happens when cons called
// a class can have multiple constructors with same name but must have different parameters
// when all are same but "type" of parameters is different then it is called constructor overloading and it an example of "POLYMORPHISM"


#include <iostream>
using namespace std;

class Teacher{
    public:    

    // // Non-Parameterized constructor
    // Teacher(){ // constructor created
    //     cout<<"Hi! I'm constructor."<<endl;
    //     dept = "CSE"; // by default dept is set to CSE
    // }

    //Parameterized Constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    //properties or attributes or data member
    string name;
    string dept;
    string subject;
    double salary;


    //methods or member function
    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
    }

};
int main(){
    
    Teacher t1("John","CSE","C++",25000); //  object created and constructor call
    //Teacher t2; // again cons called
//     t1.name = "John";
//     t1.dept = "CSE";
//    // t1.subject = "C++";
//     t1.salary = 25000;
    // cout<<t1.name<<endl;
    // cout<<t1.dept<<endl;

    t1.getInfo(); // call the getinfo funct to t1

    return 0;
}

// dot operator -> used to assign value to object or for any object we want to access its property