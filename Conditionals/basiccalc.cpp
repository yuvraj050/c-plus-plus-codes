#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter the op(Eg->+,-,etc): ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>n2;
    if(op=='+'){
        cout<<"Addition= "<<n1+n2;
    }
    else if(op=='-'){
        cout<<"Substraction= "<<n1-n2;
    }
    else if(op=='*'){
        cout<<"Multiplication= "<<n1*n2;
    }
    else if(op=='/'){
        cout<<"Division= "<<n1/n2;
    }
    else if(op=='%'){
        cout<<"Mod= "<<n1%n2;
    }
    else{
        cout<<"Invalid Input";
    }

}