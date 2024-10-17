#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int mx = 0;

    for(int i=0; i<=4; i++){
        mx = max(mx,arr[i]);
    }

    int smx = 0;
    for(int i=0; i<=4; i++){
        if(arr[i] != mx){
            smx = max(smx,arr[i]);
        }
    }
    cout<<smx;
}


/*
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
*/