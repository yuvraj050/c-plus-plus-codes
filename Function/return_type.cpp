// we can print function call int type
// if return type is void then only we can call
//if return type other than void then can store it or can print
#include <iostream>
using namespace std;
int sum(int a, int b){ // here return type is int
    return a+b;
}
int main(){
    cout<<sum(10,40); // here first calculate value (10,40) then cout
    /*      integer

              */  
}

//when the all work of a particular function ends then at the end we have to return a base value of that function return type
// int sum() has value 50 then in main funct sum(10,40) value is 50 
// int sum() return has done two works
// 1. if return type is int then it should always return a int value of whole funct
// 2. here by a+b the whole funct has value 50 and it returns and it is used in printing sum