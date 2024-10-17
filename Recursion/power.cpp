#include <iostream>
using namespace std;
int power(int a, int b){
    if(b==0){
        return 1;
    }
    return a * power(a , b-1);
}
int main(){
    int a,b;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter Power: ";
    cin>>b;
    cout<<power(a,b);
}

// a^b = a * a^b-1
//power(a,b) = a* power(a,b-1) // here calls are too much so inefficient
// better
// a^b = a^(b/2) + a^(b/2) works only in even case
// a^b = a^(b/2) + a^(b/2) * a works for odd case
