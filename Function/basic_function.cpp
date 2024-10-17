// used to tackle repetition
// there are certain piece of code that we use a lot of time during solving a problem.
// generaly function name starts from small letter but it can be start from capital also
// () function
// generally create function upper main function
// If there are a lot of function then at first the main function will execute
//main() cannot be called more than once

#include<iostream>
using namespace std;

void india(){
    cout<<"You are in India"<<endl;
    return;
}
void usa(){
    cout<<"You are in USA"<<endl;
    return;
}

int main(){
    cout<<"You are in main funct"<<endl;
    india();// Function Call
    
    usa();// Function Call
    return 0;
}

// return; -> It is a keyword throgh which function ends/stop, kind of break;
// when void fuct is used then return ka use nhi bhi kar sakte but in case of other than void we have to use return always
// in c++ in main() by default return 0 works