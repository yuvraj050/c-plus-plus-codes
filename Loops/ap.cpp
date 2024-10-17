#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    //1 3 5 7 .....
    for(int i=1; i<= 2*n-1; i+=2){
        cout<<i<<" ";
    }

}

/* Arithmatic Progression
1,3,5,7,9,..... upto n
nth term formula -> "an = a+(n-1)d"
=> an = 1+(n-1)2
=> an = 1+2n-2
=> an = 2n-1
*/