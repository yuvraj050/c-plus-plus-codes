#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;

    int count = 0;

    int arr[7];
    cout<<"Enter array elements: ";
    int n = sizeof(arr)/4;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<=n; i++){
        if(arr[i]>x){
            count++;
        }
        //cout<<count;
    }
    cout<<"The no. elements bigger than "<<x<<" is: "<<count;
}