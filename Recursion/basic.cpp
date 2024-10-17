// function calling itself is recursion
#include <iostream>
using namespace std;
void greet(){
    cout<<"Hey!"<<endl;
    greet(); // infinite time calls itself and segmentation fault
}
int main(){
    greet();
}

/*
void greet(int n){
    cout<<"Hey!"<<endl;
    greet(); // here also give parameters if not then error
}
*/