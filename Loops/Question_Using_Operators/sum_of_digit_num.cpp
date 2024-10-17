#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int sum=0;
    while(n!=0){
        int ld= n%10;// mod give last digit of number
        sum= sum+ld;
        n = n/10; // to remove last digit
    }
    cout<<sum;
}