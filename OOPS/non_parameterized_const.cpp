#include <iostream>
using namespace std;


class Teacher{
    public:
    //Parameterized constructor // These values get assigned to object
    Teacher(string n, string s, string d, double sal){

        name = n;
        subject = s;
        dept = d;
        salary = sal;

        cout<<"Parametrized constructor"<<endl;

    }

    string name;
    string subject;
    string dept;
    double salary;

    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout << "Name: "<<name<<endl;
        cout << "Subject: "<<subject<<endl;
    }



};

int main(){
    Teacher t1("John", "C++", "CSE", 25000);
    cout<<t1.dept<<endl;
    return 0;
}