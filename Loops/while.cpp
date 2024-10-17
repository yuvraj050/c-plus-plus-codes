//while is alternate to for loop and vice versa
// used when we don't know what number of times the loop will work and how the loop works , weird scenario, looks easy
// initialization is done outside the loop whereas in for loop initialization done inside the loop

#include <iostream>
using namespace std;
int main(){

    int i = 1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }    

}
// for loop can also be written like that
// int i = 1;
// for(; i<=10;){
// cout<<i<<endl;
// i++;
// }