#include <iostream>
using namespace  std;
int main(){
    
   int n;
   cout<<"Enter no. of rows: ";
   cin>>n;
   for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){ //j is always <= i, "i 3 hai to j 3 baar chal"
        cout<<(char)(j+64); // typecasting
    }
    cout<<endl;
   }
}