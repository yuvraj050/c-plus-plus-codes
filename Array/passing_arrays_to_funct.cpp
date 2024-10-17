// arrays are pass by reference


#include <iostream>
using namespace std;

void change(int x[]){ // only chnanging name not the array it has arr[3] value only name is changed
    x[0] = 80;
}

int main(){
    int arr[3] = {1,2,3};
    for(int i = 0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr); // pass by reference always
    for(int i = 0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
}