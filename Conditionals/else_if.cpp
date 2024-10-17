#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;
    profit= sp-cp;
    loss= cp-sp;
    if(sp>cp){
        cout<<"Profit is: "<<profit;
    }
    else if(cp>sp){ //multiple if condition and check only if upper condition fails
        cout<<"Loss is: "<<loss;
    }
    else{
        cout<<"No Profit No Loss";//cp==sp
    }
}