#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    //(condition) ? if true : if false;
    (n%2==0) ? cout<<"Even" : cout<<"Odd";
}

//in ternary op do not mention if-else