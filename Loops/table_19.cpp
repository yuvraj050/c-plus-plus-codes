#include <iostream>
using namespace std;
int main(){
    //172 times
    for(int i=19; i<=190; i++){
    if(i%19==0){
        cout<<i<<" ";
        }
    }

    //10 times
    for(int n=19; n<=190; n+=19){
        cout<<n<<" ";
    }
    

}