#include <iostream>
using namespace std;
// without extra params
// recursion ke andar call ke baad work
void print(int n){ 
    
    if(n==0){ // base case
        return;
    }
    print(n-1); // call
    cout<<n<<endl; //work
    
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n); 
}

/*
In general recursion has three component 
1-> base case
2-> work
3-> call

*/


/* With extra parameter

void print(int x, int n){ // then here also two params
    
    if(x>n){ // base case and for only base case extra parameter int n is taken
        return;
    }
    cout<<x<<endl;
    print(x+1,n);// and here also two params
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(1,n); // there are two params
}

*/