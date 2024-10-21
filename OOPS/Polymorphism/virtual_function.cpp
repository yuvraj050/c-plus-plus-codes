#include <iostream>
using namespace std;

class Parent{
public:    
   

    virtual void hello(){ // virtual function
        cout<<"Hello from parent"<<endl;
    }

};

class Child{
public:
          

        void hello(){ // virtual function is re implement by child
            cout<<"Hello from child"<<endl;
        }

};


int main(){
    Child c1;
    c1.hello(); 
    // Example of run time polymorphism
    
    return 0;
}