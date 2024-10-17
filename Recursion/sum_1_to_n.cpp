#include <iostream>
using namespace std;
int sum(int n){
    if(n==1){ //base case
        return 1;
    }
    return n + sum(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<sum(n);
}