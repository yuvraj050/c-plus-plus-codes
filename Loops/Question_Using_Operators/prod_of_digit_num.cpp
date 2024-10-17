#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int prod=1;
    while(n!=0){
        int ld = n%10;
        prod = prod *ld;
        n = n/10;
    }
    cout<<prod;
}