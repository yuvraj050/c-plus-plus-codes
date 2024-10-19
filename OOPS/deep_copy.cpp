#include <iostream>
using namespace std;

class Student{
public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double; // new memoey alloacted in heap for s1
            *cgpaPtr = cgpa; 
        }

        Student(Student& obj){
            this->name = obj.name;
            cgpaPtr = new double; // again new mwmoey in head is alloacated for s2
            *cgpaPtr = *obj.cgpaPtr;

        }

        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"CGPA: "<<*cgpaPtr<<endl;
        }

};


int main(){
    Student s1("John", 8.9);
    s1.getInfo();

    Student s2(s1);
    s2.name = "Cessie";
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.getInfo();

    return 0;
}