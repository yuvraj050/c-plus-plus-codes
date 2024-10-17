#include <iostream>
using namespace  std;
int main(){
    /*
    In reverse flip
    i=1, j=1,2,3,4
    i=2, j=1,2,3
    i+jmax = n+1
    jmax= n+1-i
    jmax<=n+1-i
    */
   int n;
   cout<<"Enter no. of rows: ";
   cin>>n;
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n+1-i; j++){ //put formula
        cout<<"*";
    }
    cout<<endl;
   }
}