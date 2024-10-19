/* COPY CONSTRUCTOR
    If we want to create a copy the properties of existing object to another object then use copy constructor

*/



#include <iostream>
using namespace std;

class Rectangle{
    public:

    int l;
    int b;
    // Parametried const
    Rectangle(int x, int y){
        this->l = x; 
        this->b = y;

    }
    Rectangle(Rectangle& obj){ // pass by reference
        this->l = obj.l;
        this->b = obj.b;
    }
};


int main(){

    Rectangle r1(2,5);
    cout<<r1.l<<" "<<r1.b<<endl;

    Rectangle r2 = r1; // r1 values goes to r2
    cout<<r2.l<<endl;

    Rectangle r3(r1); // default copy constructor invoke
    cout<<r3.l<<endl;

    return 0;
}