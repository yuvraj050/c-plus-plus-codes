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
    switch(op){
        case '+':
            cout<<"Addition= "<<n1+n2<<endl;
            break;   
        case '-':
            cout<<"Subtract= "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Multiply= "<<n1*n2<<endl;
            break;
        case '/':
            cout<<"Divide= "<<n1/n2<<endl;
            break; 
        default:
            cout<<"Invalid Input"<<endl;               
    }
}