#include <iostream>
using namespace std;
int main(){
    string x;


    //cin>>x; // takes only string before space only

    getline(cin,x); // to take whole input
    cout<<x<<" ";
}

// int main(){
//     string x;
//     x= "I am in 7th sem!";
//     cout<<x;
// }

// string is not a normal data type it is a char array