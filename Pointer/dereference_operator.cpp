#include<iostream>
using namespace std;
int main(){
    int x = 2;
    int* ptr = &x;
    cout<<x<<endl;
    *ptr = 15; // update the value of x without using var x 
    cout<<x<<endl;
}