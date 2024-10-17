#include<iostream>
using namespace std;
int main(){
    string s = "Yuvraj";
    cout<<s<<endl;
    s = s + "Singh"; // instead of append use +

    s = "Singh" + s;
    cout<<s<<endl;
}