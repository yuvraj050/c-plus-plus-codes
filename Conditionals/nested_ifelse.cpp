#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"A is greates";
        }
        else{
            cout<<"C is greatest";
        }
    }
    else{ //b>a
        if(b>c){
            cout<<"B is greatest";
        }
        else{
            cout<<"C is greatest";
        }
    }
}
// nested is used where multiple condition are not allowed - "&& or ||"not allowed