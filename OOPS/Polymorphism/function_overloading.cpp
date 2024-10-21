#include <iostream>
using namespace std;
class Print{
public:
        void show(int x){
            cout<<"int: "<<x<<endl;
        }    

        void show(char ch){
            cout<<"Char: "<<ch<<endl;
        }
};
int main(){

    Print p1;

    p1.show(2); // calling show with int
    p1.show('&'); // calling show with char
    // Example of compile time polymorphism
    
    return 0;
}