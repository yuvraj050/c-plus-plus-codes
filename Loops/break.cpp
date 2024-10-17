#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any no. to find its highest factor: ";
    cin>>n;
    //int f=1;  to store highest factor
    for(int i=n/2; i>=1; i--){ // i<n because to not include the n
        if(n%i==0){
            cout<<"Highest factor is: "<<i;
            break; //to get out of the loop immediatly
        }      
    }

}