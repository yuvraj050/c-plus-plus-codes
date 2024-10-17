// base case-> it is like condition part in for loop


#include <iostream>
using namespace std;
void print(int n){ // formal parameter
    if(n==0){ // base case
        return; // then below code will not execute
    }
    cout<<n<<endl;
    print(n-1); // infinite times call and segmentation fault
}
int main(){
    print(4); // actual parameter
}
 
/* Infinite time calls and segmentation fault then we use base case
void print(int n){
    cout<<n<<endl;
    print(n-1); // infinite times call and segmentation fault
}
int main(){
    print(4);
}*/

/*
void print(int n){
    int a=1;
    if(n==n){
        return;
    }
    cout<<a<<endl;
    print(a+1);
}
int main(){
    
    print(4);
}

*/