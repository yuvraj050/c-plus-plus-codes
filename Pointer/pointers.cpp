// to store the address of any data type we use pointers
// access the value of the variable whose address is in the pointer using dereference/* operator 
#include <iostream>
using namespace std;
int main(){
    int x = 3;
    int* p; //declared int pointer var p
    p = &x; // storing adress of x in p
    cout<<&x<<endl;
    cout<<p<<endl;

    cout<<*p<<endl; // to print whose value stored at p
    // * is de-reference operator

    cout<<&p; // prints address of p
}