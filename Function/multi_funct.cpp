#include <iostream>
using namespace std;
void india(){
    cout<<"You are in India"<<endl;
    return;
}
void usa(){
    cout<<"You are in USA"<<endl;
    india();  // multi function call
    return;
}
int main(){
    cout<<"You are in main"<<endl;
    usa();

}