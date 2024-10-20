#include <iostream>
using namespace std;

class A{
public: 
        int x;

        void increment(){
            x = x+1;
        }    
};

int main(){

    A obj;
    obj.x = 0;
    cout<<obj.x<<endl;

    obj.increment();
    cout<<obj.x<<endl;

    return 0;
}






/* for function
void fun(){

   // int x = 0; // when then simply initialised every time as main calls fun and time prints value as 0

    static int x =0; // by using static only initialized 1 time and so every time when main calls fun value of x will increase
    cout<<"X: "<<x<<endl;
    x++;
}

int main(){
    fun();
    fun();
    return 0;
}

*/