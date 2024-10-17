#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any num: ";
    cin>>n;
    int count=0; // count var to store num of count after dividing by 10
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<"The num has "<<count<<" digits";
}