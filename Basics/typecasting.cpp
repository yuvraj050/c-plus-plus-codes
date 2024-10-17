#include <iostream>
using namespace std;
int main(){

//changing data types like changing int to float

int x;
cout<<"Enter any number to get its half: ";
cin>>x;
float y = (float)x; // typecasting
cout<<"Half is: "<<y/2;
}