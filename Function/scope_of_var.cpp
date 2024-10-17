#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        cout<<i<<endl; // i is declaired inside this for loop so it is accessible only inside this for loop
    }
    cout<<i; // this will error because i is declared only inside for loop
}