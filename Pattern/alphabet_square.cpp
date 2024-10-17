#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter n: ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){ // no. of rows = no. of cols
            //char ch= (int)j;
            cout<<(char)(j+64); //typecast  
        }
        cout<<endl;
    }
}