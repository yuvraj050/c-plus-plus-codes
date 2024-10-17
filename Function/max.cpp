// there can be two return types in the same function but at a time work only one return
#include <iostream>
using namespace std;
int maxOfTwo(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"Enter first num: ";
    cin>>a;
    cout<<"Enter second num: ";
    cin>>b;
    cout<<maxOfTwo(a,b);
}