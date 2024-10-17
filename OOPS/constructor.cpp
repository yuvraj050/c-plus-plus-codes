// specia; method invoked automatically during object creation. Used in Initialization
// cons called only one time at object creation
// cons declared only public
// memory allocation happens when cons called

#include <iostream>
using namespace std;

class Teacher{
    public:    

    Teacher(){ // constructor created
        cout<<"Hi! I'm constructor."<<endl;
        dept = "CSE"; // by default dept is set to CSE
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

};
int main(){
    
    Teacher t1; //  object created and constructor call
    Teacher t2; // again cons called
    t1.name = "John";
    t1.dept = "CSE";
   // t1.subject = "C++";
    t1.salary = 25000;
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;

    return 0;
}

// dot operator -> used to assign value to object or for any object we want to access its property