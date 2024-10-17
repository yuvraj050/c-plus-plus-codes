#include <iostream>
using namespace std;
int main(){

    for(int i=1;i<=100;i++){
        if(i%3==0){
            cout<<i<<"\tFizz"<<endl;
        }
        else if(i%5==0){
            cout<<i<<"\tDizz"<<endl;
        }
        else{
            cout<<i<<endl;
        }

    }
    

}