#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    
    int i = 0;
    int j = 0;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



