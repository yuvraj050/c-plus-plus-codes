// STL -> Standard Template Library



#include <iostream>
using namespace std;
int main(){
    string s = "Yuvraj";
    cout<<s.length()<<endl; // for counting length
    cout<<s.size()<<endl; // also for counting length

    s.push_back('s'); //push_back
    cout<<s;
    s.pop_back(); // to remove last char
    cout<<s<<endl;

    s.append("singh"); // to add a full string to last of previous
    cout<<s<<endl;

    s.clear(); // to clear all the string and made it 0 length
    cout<<s.length()<<endl;
}

//to_string()
//stoi

// //pushback()
// s.push_back('s');
//     cout<<s;
