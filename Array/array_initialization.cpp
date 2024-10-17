#include <iostream>
using namespace std;
int main(){
    int arr[5] = {2,6,4,8,9}; // both declaration and initialization
    // int arr[] = {1,2,3,4,5} // if declare & initialize in same line then if size(array type) not mention its ok
    // but if declare and initialize in seperate lines then type need to mention properly
    arr[0] = 0; // update

    //output
    for(int i = 0; i<=4; i++){
        cout<<arr[i]<<endl;
    } 
    // output in reverse order
    for(int i = 4; i>=0; i--){
        cout<<arr[i]<<endl;
    }
}