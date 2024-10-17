#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){ //rows
        for(int j=1; j<=n-i+1; j++){
            cout<<" ";
        }
            for(int j=1; j<=i; j++){ //stars ka loop
                
                cout<<"* ";
            }
            cout<<endl;    
    }
}