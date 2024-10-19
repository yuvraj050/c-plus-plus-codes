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

        

        ~Student(){ // Destructor
            cout<<"I am destructor"<<endl;
            delete cgpaPtr; // to deallocate memory that was allocated dynamically
            // if not deleted then problem like memory leak
        }

        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"CGPA: "<<*cgpaPtr<<endl;
        }

};


int main(){
    Student s1("John", 8.9);
    s1.getInfo();

    
    return 0;
}