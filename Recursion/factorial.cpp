#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){ // base case
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<fact(n);
}

// fact first solve through function then recursion

/*
int prod=1;
    for(int i=1; i<=n;i++){
        prod=prod*i;
    }
    cout<<prod;
*/

/*




*/