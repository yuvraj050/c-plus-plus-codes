#include <iostream>
using namespace std;

class Teacher{
    private:
    double salary; // data hiding

    public:    
    //properties or attributes
    string name;
    string dept;
    string subject;


    //methods or member function
    void changeDept(string newDept){
        dept = newDept;
    }
    // setter funct -> work is to set the private values
    void setSalary(double s){
        salary = s;
    }
    // getter funct -> used to get the values of the private values
    double getSalary() {
        return salary;
    }


};

// class Student{
// public:

//     string name;
//     int reg;
//     int age;

// };


int main(){
    
    Teacher t1; // object creation
    t1.name = "John";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.setSalary(25000); // salary is accessed indirectly by the getter and setter public funct
    cout<<t1.name<<endl;
    cout << t1.getSalary() <<endl;

    return 0;
}

// dot operator -> used to assign value to object or for any object we want to access its property