#include<iostream>
using namespace std;
int main(){
    //           0 1 2 3 4
    int arr[] = {1,2,3,4,5};
    int sumEven = 0,sumOdd = 0;   


    for(int i=0; i<=4; i++){
        if(i % 2 == 0){
            sumEven = sumEven+arr[i]; // 9 
        }
        else{
            sumOdd = sumOdd+arr[i]; // 6
        }
        
    }
    cout<<"The difference is: "<<sumEven-sumOdd;
}