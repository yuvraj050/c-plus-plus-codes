#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"All side to be entered in cm"<<endl;
    cout<<"Enter first side: ";
    cin>>a;
    cout<<"Enter the second side: ";
    cin>>b;
    cout<<"Enter the third side: ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){ //for precidence things for safety always use bracket
        cout<<"The sides belong to a triangle";
    }
    else{
        cout<<"The sides doesn't belong to a traingle";
    }
}