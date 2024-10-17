#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"The no. is three digit no.";
    }
    else{
        cout<<"The number is not three digit no.";
    }
}

// "&&" if used then both condition will true then true else false 