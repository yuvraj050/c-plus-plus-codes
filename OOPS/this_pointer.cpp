// dot operator -> used to assign value to object or for any object we want to access its property
#include <iostream>
using namespace std;


class Teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;
    

    // here left side is object's property (class) and right side is parameter 
    // using this pointer we can show object's property
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

int main(){
    Teacher t1("John", "CSE", "C++", 25000);
    t1.getInfo();
    return 0;
}