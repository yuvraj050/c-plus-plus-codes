#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<endl<<y;
}
 
/* Using temp extra var

int x,y,temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"X= "<<x<<endl<<"Y= "<<y<<endl;

*/

/* Without using third var
        x=x+y;
        y=x-y;
        x=x-y;
        cout<<x<<endl<<y;
*/