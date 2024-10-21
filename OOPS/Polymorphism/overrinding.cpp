#include <iostream>
using namespace std;

class Parent{
public:    
    void getInfo(){
        cout<<"Parent class"<<endl;
    }
};

class Child{
public:
        void getInfo(){
            cout<<"Child class"<<endl;
        }    
};


int main(){
    Child c1;
    c1.getInfo(); // child class function over ride parent class function
    // Example of run time polymorphism

    Parent p1;
    p1.getInfo();
    return 0;
}