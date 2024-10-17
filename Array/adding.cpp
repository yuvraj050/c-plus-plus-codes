#include <iostream>
using namespace std;
int main(){
    int sum, arr[] = {1,5,3,2};
    int n;
    n = sizeof(arr)/4; // to calculate the number of arr elements
    sum=0;
    for(int i=0; i<n; i++){ // n will be taken each time 1 less than size due to index 0
        sum = sum + arr[i];
    }
    cout<<sum;
}

//use of "sizeof" operator