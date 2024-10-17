#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int a;
    for(int i=0; i<=4; i++){
        if(i % 2 == 0){
            arr[i] = arr[i] + 10; 
        }
        else{
            arr[i] = arr[i] * 2;
        }
        cout<<arr[i]<<" ";
    }
}