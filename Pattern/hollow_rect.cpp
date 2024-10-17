#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of cols: ";
    cin>>c;
    int mid=r/2+1;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==1 || i==r || j==1 || j==c){ //mid=n/2+1
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }   
}

