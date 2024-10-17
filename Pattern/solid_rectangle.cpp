//using nested loops
#include <iostream>
using namespace std;
int main(){
    // r x c star rect
    int r,c;
    cout<<"Enter the no. of rows: ";
    cin>>r;
    cout<<"Enter the no. of columns: ";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1; j<=c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
