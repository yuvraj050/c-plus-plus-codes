// if n has extra factor except 1 & n.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any no. to check: ";
    cin>>n;
    bool flag = true; // true means the number is prime
    for(int i=n/2; i>=2; i--){ 
        if(n%i==0){
            flag = false; // false means composite 
            break;
        }
    }
    if(n==1){
        cout<<"Neither Prime nor Composite";
    }
    else if(flag==false){
        cout<<"Composite no.";
    }
    else{
        cout<<"Prime no.";
    }

}


/* without bool
int n;
    cout<<"Enter any no. to check: ";
    cin>>n;
    for(int i=2; i<=n/2; i++){ // for(int i=n/2; i>=2; i--)
        if(n%i==0){
            cout<<"It is composite no.";
            break;
        }
        else{
            cout<<"It is Prime no.";
            break;
        }
    }

*/