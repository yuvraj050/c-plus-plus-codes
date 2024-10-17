#include <iostream>
using namespace std;
int main(){
    // taking user input
    int arr[5]; // declaration
    cout<<"Enter the num to display: ";
    
    for(int i =0; i<=4; i++){
        cin>>arr[i];
    }
    for(int i =0; i<=4; i++){
        cout<<arr[i]*2<<endl;
    }
    
    arr[0] = 100; //update the value

    for(int i =0; i<=4; i++){
        cout<<arr[i]<<endl;
    }
}

/* taking manual input
int main(){
    int arr[5]; // declaration
    arr[0] = 4; //initializing
    arr[1]= 2;
    arr[2]= 5;
    arr[3]= 9;
    arr[4]= 10;
    //cout<<arr[0];
    for(int i =0; i<=4; i++){
        cout<<arr[i]<<endl;
    }

*/