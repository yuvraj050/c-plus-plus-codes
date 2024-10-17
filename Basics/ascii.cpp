#include <iostream>
using namespace std;
int main(){

 //Every char has its ASCII value(integer value) for a -> 97, b -> 98, z -> 122, A -> 65, Z -> 90, 0 -> 48,9 -> 57
 // done using typecasting

 char ch;
 cout<<"Enter any char: ";
 cin>>ch;
 int y= (int)ch;
 cout<<"The ASCII value is: " << y; 
}