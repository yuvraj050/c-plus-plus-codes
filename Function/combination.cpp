//ncr = n! / r! * (n-r)! 
// Taking n! as a, r! as b, (n-r)! as c 
//permutation= npr= n!/(n-r)!
#include <iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f=f*i;
    }
    return f;   
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int a = fact(n);// pass by value
    int b = fact(r);
    int c = fact(n-r);
    cout<<a/(b*c);     
}


// int a = 1;
//     for(int i=1; i<=n; i++){
//         a=a*i; 
//     }
//     int b = 1;
//     for(int i=1; i<=r; i++){
//         b=b*i; 
//     }
//     int c = 1;
//     for(int i=1; i<=n-r; i++){
//         c=c*i; 
//     }
//     cout<<a/(b*c);