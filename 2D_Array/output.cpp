#include <iostream>
using namespace std;
int main(){
    int arr[3][3];

    cout<<"Enter matrix value: ";
    
    for(int i=0; i<3; i++){ // i for row constant
        for(int j=0; j<3; j++){ // j for cols
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<=3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
// arr[0][0]= 1;
// arr[0][1]= 2;
// arr[0][2]= 3;
// arr[1][0]= 4;
// arr[1][1]= 5;
// arr[1][2]= 6;
// arr[2][0]= 7;
// arr[2][1]= 8;
// arr[2][2]= 9;



// int main(){
//     int arr[2][3];
//     arr[0][0] = 6;
//     arr[0][1] = 1;
//     arr[0][2] = 2;
//     arr[1][0] = 4;
//     arr[1][1] = 3;
//     arr[1][2] = 5;
//     for(int i=0; i<2; i++){ // i for row
//         for(int j=0; j<3; j++){ // j for cols
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }