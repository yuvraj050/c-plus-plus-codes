#include<iostream>
using namespace std;
int main(){

//modulus is x%y is remainder when x is divided by y

int x,y,mod;
cout<<"Enter the first number: ";
cin>>x;
cout<<"Enter the second number: ";
cin>>y;
mod=x%y;
cout<<"The mod is: "<<mod;
return 0;
}
/*
a % b = a  [if a < b]
a % a = 0
a % (-b) = a % b
(-a) % b = -[a%b]
*/