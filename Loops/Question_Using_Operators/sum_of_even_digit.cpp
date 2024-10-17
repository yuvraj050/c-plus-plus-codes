#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    int sum=0;

    while(n!=0){
        int ld= n%10;// to extract last digit from n and put in sum
        if(ld%2==0){
            
            sum=ld+sum;
        }
        n=n/10; // to remove the last digit from n
    }
    cout<<sum;
}