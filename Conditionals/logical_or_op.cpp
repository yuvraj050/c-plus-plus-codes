#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter any no.: ";
 cin>>n;
 if(n%3==0 || n%5==0){ // "||" logical OR op
    cout<<"The no. is divisible by 3 or 5";
 }
 else{
    cout<<"The no. is neither divisible by 3 nor by 5";
 }
}

// "||" this is true when any one condition is true 

//if((n % 3==0 || n % 5 ==0) && n % 15 !=0)