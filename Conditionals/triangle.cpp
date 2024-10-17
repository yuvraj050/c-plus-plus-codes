#include <iostream>
using namespace std;
int main(){
    int l,b,area,perimeter;
    cout<<"Enter the length of rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of rectangle: ";
    cin>>b;
    area = l*b;
    perimeter = 2*(l+b);
    if(area>perimeter){
        cout<<"The area is greater than perimeter and the area is "<<area;
    }
    else if(area<perimeter){
        cout<<"Area is smaller than perimeter and the perimeter is "<<perimeter;
    }
    else{
        cout<<"Area and Perimeter both are equal";
    }

}