// rel op is ==, <, >, <=, !=, etc
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n>=0){
        cout<<"Absolute value is: "<<n;
    }
    else{
        cout<<"Absolute value is: "<<-n;
    }
}

//if you want to change n into its absolute value
// if(n<0) n = -n;
// cout<< n;