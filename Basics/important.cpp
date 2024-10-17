#include <iostream>
using namespace std;
int main(){
    float x = 5/2;
    cout<<x;// o/p is 2 due to int/int = int and then it get stored in float 

    float y = 5.0/2;
    cout<<y; // o/p is 2.5 due to float/int = float then it will get stored in float
}