#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter n: ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){ // no. of rows = no. of cols
            cout<<j; //for 1 2 3 4
            //cout<<i; //for 1111 and in next line 2222
        }
        cout<<endl;
    }
}