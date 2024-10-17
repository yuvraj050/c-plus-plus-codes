#include<iostream>
using namespace std;
void swap(int& x, int& y){ // by using "&" the var of main() is used and called pass by reference
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    cout<<"Enter the value of X: ";
    cin>>x;
    cout<<"Enter the value of Y: ";
    cin>>y;
    swap(x,y);
    cout<<x<<endl<<y<<endl;
}

/*
void swap(int a, int b){ pass by value
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl<<b;

}
int main(){
    int x,y;
    cout<<"Enter the value of X: ";
    cin>>x;
    cout<<"Enter the value of Y: ";
    cin>>y;
    swap(x,y);
}
*/
