#include <iostream>
using namespace std;
int main(){
    int arr[5] = {3,21,5,4,7};
    int n = sizeof(arr)/4;
    int mx;
    mx = arr[0];
    
    for(int i=1; i<n; i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
    }
    cout<<mx;
}

// smallest value of integer is "INT_MIN"