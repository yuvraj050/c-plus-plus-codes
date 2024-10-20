#include <iostream>
using namespace std;

class Shape{
public:    
    // The class which has pure virtual function automatically becomes ABSTRACT class
    // pure virtual function
    virtual void draw() = 0; // jitni bhi derived class hongi usme draw funct implemented hona chahiye
};

class Circle : public Shape{
public:
        void draw(){
            cout<<"Drawing a circle"<<endl;
        }

};

int main(){
    
    //Shape s1; // cannot create object of abstract class


    Circle c1;
    c1.draw();
    return 0;
}