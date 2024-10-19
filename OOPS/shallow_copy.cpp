#include <iostream>
using namespace std;

class Student{
public:
        string name; // memory allocated in stack
        //double cgpa; // memory allocated in stack

        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double; // pointer has allocated new memory for the both s1 and s2 in same which is a problem
            *cgpaPtr = cgpa;
        }

        Student(Student& obj){
            this->name = obj.name;
            this->cgpaPtr = obj.cgpaPtr;
        }

        void getInfo(){
            cout<<"Name "<<name<<endl;
            cout<<"CGPA: "<<*cgpaPtr<<endl;
        }


};

int main(){
    Student s1("John", 8.9);
    s1.getInfo();

    Student s2(s1);
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    return 0;
}