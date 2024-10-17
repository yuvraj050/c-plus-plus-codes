// using extra array
#include<iostream>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5}; //i and given number of elements is n
    int b[5]; //j
    for(int i=0; i<=4; i++){
        int j;
        j = 5-1-i;
        b[i] = a[j];
        cout<<b[i];
    }
    // for(int i=0; i<=4; i++){
    //     cout<<b[i];
    // }
}




// i+j = n-1
// j = n-1-i