#include <iostream>
using namespace std;
int main(){
    //100 times loop working
    for(int i=1; i<=100; i++){
        if(i%2==0){
            cout<<"Even no."<<endl;
        }
        else{
            cout<<"Odd no."<<endl;
        }
    }

    //50 times loop working
    for(int i=2; i<=100; i=i+2){
        cout<<"Even number";
    }
}