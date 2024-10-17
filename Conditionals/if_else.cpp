#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n % 2 == 0){  // "=" is assignment and "==" is checking that both is equal
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
}

/*
in the if or else condition "{}" is given if the statement contains multiple statement in that condition

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n % 2 == 0)
        cout<<"Even number";
    
    else
        cout<<"Odd number";
    
}
This will also work because there is single statement in the if or else condition
*/

