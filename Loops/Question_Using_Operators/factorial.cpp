#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int prod=1;
    for(int i=1; i<=n;i++){
        prod=prod*i;
    }
    cout<<prod;
}